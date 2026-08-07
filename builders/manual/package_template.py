"""A skeleton for a pinout that has to be read off a datasheet by a person.

Two of the families alloy supports publish no machine-readable pinout at all:
the RP2040's pin locations are a vector drawing whose labels are not text, and
Espressif ships nothing of the kind anywhere in esp-idf. For those, a human with
the datasheet open is the only source — which the repo's own policy allows, as
local enrichment committed with a provenance stamp and outside the
reproducibility gate (NORTH_STAR guard #3).

Typing 56 lines of YAML by hand is exactly how a wrong footprint gets in, so
this prints the skeleton instead: every position the package has, pre-filled
with the pins the database already knows about, and `TODO` everywhere a person
must look something up. `alloy-devices validate` then applies the same
plausibility lint the automated builders answer to — a hand-typed pinout is
held to the identical standard.
"""

from __future__ import annotations

import argparse
import sys
from pathlib import Path

import yaml

REPO = Path(__file__).resolve().parent.parent.parent
sys.path.insert(0, str(REPO / "tools"))
from alloy_devices.lints import check_pinout, pin_kind  # noqa: E402


def template(chip_id: str, package_type: str, pin_count: int) -> str:
    vendor, _, part = chip_id.partition("/")
    doc = yaml.safe_load((REPO / "chips" / vendor / f"{part}.yaml").read_text())
    known = sorted(doc.get("pins") or {})

    layout = [{"position": str(n), "signal": "TODO", "kind": "TODO"}
              for n in range(1, pin_count + 1)]
    body = yaml.safe_dump(
        {"package": {"type": package_type, "pins": pin_count,
                     "part": doc.get("part", part.upper()), "layout": layout}},
        sort_keys=False, allow_unicode=True, width=100)

    return f"""# Paste into chips/{vendor}/{part}.yaml and fill every TODO from the
# datasheet's pin-location figure. Then run:  uv run alloy-devices validate
#
# signal: the pad name, lowercase (gpio0, iovdd, gnd, run, …)
# kind:   {" | ".join(sorted({"gpio", "power", "ground", "reset", "analog", "clock", "boot", "other"}))}
#
# Use the names the CHIP DATA uses for GPIOs, not the datasheet's, or the
# cross-check below cannot match them. This chip already names these
# {len(known)} pins: {", ".join(known) or "(none yet)"}
# Everything else (supply, reset, crystal) keeps its datasheet name.
#
# Add a provenance line saying WHICH figure of WHICH document revision you read,
# and mark it local enrichment — it is not reproducible by the pipeline.
{body}"""


def review(chip_id: str) -> int:
    """Check a pinout someone already filled in."""
    vendor, _, part = chip_id.partition("/")
    doc = yaml.safe_load((REPO / "chips" / vendor / f"{part}.yaml").read_text())
    package = doc.get("package")
    if not package:
        print(f"{chip_id}: no package section yet")
        return 1
    todo = [e for e in package["layout"] if "TODO" in (e["signal"], e.get("kind"))]
    if todo:
        print(f"{chip_id}: {len(todo)} position(s) still TODO "
              f"(first: {todo[0]['position']})")
        return 1
    problems = check_pinout(package)
    for problem in problems:
        print(f"  {problem}")
    known = set(doc.get("pins") or {})
    placed = {e["signal"] for e in package["layout"]}
    missing = sorted(known - placed)
    if missing:
        print(f"  pins the chip data names but the package does not place: "
              f"{', '.join(missing)}")
    wrong_kind = [e for e in package["layout"]
                  if e.get("kind") and e["kind"] != pin_kind(e["signal"])
                  and pin_kind(e["signal"]) != "other"]
    for entry in wrong_kind:
        print(f"  position {entry['position']} ({entry['signal']}): kind "
              f"'{entry['kind']}' but the name reads as '{pin_kind(entry['signal'])}'")
    ok = not (problems or missing or wrong_kind)
    print(f"{chip_id}: {package['type']} {'ok' if ok else 'needs work'}")
    return 0 if ok else 1


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("chip", help="e.g. raspberrypi/rp2040")
    ap.add_argument("--package", help="package type, e.g. QFN56")
    ap.add_argument("--pins", type=int, help="pin count")
    ap.add_argument("--review", action="store_true",
                    help="check the pinout already in the chip file")
    args = ap.parse_args()
    if args.review:
        raise SystemExit(review(args.chip))
    if not (args.package and args.pins):
        raise SystemExit("--package and --pins are required to print a template")
    print(template(args.chip, args.package.upper(), args.pins))


if __name__ == "__main__":
    main()
