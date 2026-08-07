"""Microchip footprints from the vendor's own device pack.

Microchip publishes an ATPACK per family; inside it, each device's ATDF carries
`<pinouts>` — one entry per package, with the pad on every position. That is the
same fact the ST builder reads out of stm32-data, from a different shape, and it
is the only machine-readable pinout Microchip publishes.

Licensing is not assumed: every ATDF states `SPDX-License-Identifier: Apache-2.0`
in its own header, and the fetch checks that before using the file. The pack
itself lands in a gitignored cache — a vendor database is never committed
(NORTH_STAR guard #3).

Only the pinout is taken. Registers, headers and debug scripts in the pack are
out of scope: this repo curates registers per IP version by hand, and mining
them from a pack would undo that.
"""

from __future__ import annotations

import argparse
import hashlib
import subprocess
import sys
import xml.etree.ElementTree as ET
import zipfile
from pathlib import Path
from typing import Any

import yaml

HERE = Path(__file__).resolve().parent
REPO = HERE.parent.parent
CACHE = HERE / "cache"

sys.path.insert(0, str(REPO / "tools"))
from alloy_devices.lints import check_pinout, pin_kind  # noqa: E402

_LICENSE_MARK = "SPDX-License-Identifier: Apache-2.0"


def _http_get(url: str) -> bytes:
    # curl, for the same reason the ST builder uses it: raw sockets fail in
    # restricted sandboxes, and --retry absorbs transient resets.
    return subprocess.run(
        ["curl", "-sfL", "--retry", "4", "--retry-delay", "1",
         "--retry-all-errors", "-A", "alloy-devices-builder", url],
        check=True, capture_output=True,
    ).stdout


def fetch_pack(url: str, version: str, expect_sha256: str = "") -> Path:
    """The pack, cached. A changed upstream is an error, not a silent update."""
    dst = CACHE / f"same70-dfp-{version}.atpack"
    if not dst.exists():
        dst.parent.mkdir(parents=True, exist_ok=True)
        dst.write_bytes(_http_get(url))
    digest = hashlib.sha256(dst.read_bytes()).hexdigest()
    if expect_sha256 and digest != expect_sha256:
        raise SystemExit(
            f"{dst.name}: sha256 {digest} does not match the lock "
            f"({expect_sha256}) — the pinned pack changed under us")
    return dst


def read_atdf(pack: Path, device: str) -> str:
    with zipfile.ZipFile(pack) as z:
        matches = [n for n in z.namelist()
                   if n.lower().endswith(f"/{device.lower()}.atdf")]
        if not matches:
            raise SystemExit(f"{device}.atdf not in {pack.name}")
        text = z.read(matches[0]).decode("utf-8", "replace")
    if _LICENSE_MARK not in text:
        raise SystemExit(
            f"{device}.atdf does not carry '{_LICENSE_MARK}' — refusing to "
            f"derive data from a file whose licence is not stated")
    return text


def packages(atdf_text: str, device: str) -> list[dict[str, Any]]:
    """Every package the ATDF describes, in the chip schema's shape."""
    root = ET.fromstring(atdf_text)
    out: list[dict[str, Any]] = []
    for pinout in root.findall(".//pinouts/pinout"):
        layout = [
            {"position": str(pin.get("position")),
             "signal": str(pin.get("pad", "")).lower(),
             "kind": pin_kind(str(pin.get("pad", "")))}
            for pin in pinout.findall("pin")
        ]
        layout.sort(key=lambda e: (int(e["position"]) if e["position"].isdigit()
                                   else 0, e["position"]))
        out.append({"type": str(pinout.get("name", "")).upper().replace("-", "_"),
                    "pins": len(layout), "part": device, "layout": layout})
    return out


def best_package(candidates: list[dict[str, Any]]) -> dict[str, Any] | None:
    """The one to ship: it must pass the plausibility lint, and a quad package
    beats a ball grid — it is what a hand-solder board uses and what a picker
    can draw sensibly."""
    passing = [p for p in candidates if not check_pinout(p)]
    if not passing:
        return None
    quad = [p for p in passing
            if all(e["position"].isdigit() for e in p["layout"])]
    return (quad or passing)[0]


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--device", default="ATSAME70Q21B")
    ap.add_argument("--chip", default="chips/microchip/atsame70q21.yaml",
                    help="chip file to add the package to")
    ap.add_argument("--check", action="store_true",
                    help="report what would be written, change nothing")
    args = ap.parse_args()

    lock = yaml.safe_load((HERE / "sources.lock").read_text())["sources"]["same70-dfp"]
    pack = fetch_pack(lock["url"], lock["version"], lock.get("sha256") or "")
    atdf = read_atdf(pack, args.device)

    found = packages(atdf, args.device)
    print(f"{args.device}: {len(found)} package(s) in the ATDF")
    for candidate in found:
        problems = check_pinout(candidate)
        print(f"  {candidate['type']:18} {candidate['pins']:>3} pins  "
              + ("ok" if not problems else f"rejected — {problems[0].split(':', 1)[1].strip()}"))

    chosen = best_package(found)
    if chosen is None:
        raise SystemExit("no package survived the plausibility lint — nothing written")

    target = REPO / args.chip
    doc = yaml.safe_load(target.read_text())
    if args.check:
        current = (doc.get("package") or {}).get("type")
        print(f"would write {chosen['type']} to {args.chip} (currently {current or 'none'})")
        return
    doc["package"] = chosen
    provenance = (f"{pack.name} {args.device}.atdf <pinouts>/{chosen['type']} "
                  f"({lock['license']}) — physical pinout, accepted by the "
                  f"pinout plausibility lint")
    sources = doc.setdefault("provenance", {}).setdefault("sources", [])
    if provenance not in sources:
        sources.append(provenance)
    target.write_text(yaml.safe_dump(doc, sort_keys=False, allow_unicode=True, width=100))
    print(f"wrote {chosen['type']} ({chosen['pins']} pins) to {args.chip}")


if __name__ == "__main__":
    main()
