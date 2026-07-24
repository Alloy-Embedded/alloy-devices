"""ST chip builder — regenerates chips/st/ from pinned embassy stm32-data.

Usage (from the alloy-devices repo root):
    python3 -m builders.st.build --family stm32g0 [--check] [--only PART]

Reads builders/st/sources.lock (pinned SHA), fetches per-chip JSONs into a
gitignored cache, maps embassy (kind:version[:block]) tags through
ip_map.yaml, expands the family clock template, and emits deterministic
chip YAMLs. Existing files that carry hand `provenance.verified` notes are
NEVER overwritten — they are compared and divergences reported (the
graduation gate of BUILDERS.md §8).
"""

from __future__ import annotations

import argparse
import json
import subprocess
from pathlib import Path

import yaml

HERE = Path(__file__).parent
REPO = HERE.parents[1]
CACHE = HERE / "cache"

# embassy core names (cm0p/cm4/cm7/cm33...) -> (our core name, arch, fpu)
_ARCH = {"cm0p": ("cm0plus", "armv6m", False), "cm0": ("cm0", "armv6m", False),
         "cm3": ("cm3", "armv7m", False), "cm4": ("cm4", "armv7em", True),
         "cm7": ("cm7", "armv7em", True), "cm33": ("cm33", "armv8m_main", True)}

_NVIC_PRIO_BITS = {"stm32g0": 2, "stm32f7": 4, "stm32f4": 4, "stm32g4": 4, "stm32l4": 4}

# Per-family: embassy rcc register key + our curated rcc register file stem.
_FAMILY = {
    "stm32g0": {"rcc_json": "rcc_g0x1", "rcc_ours": "rcc_g0"},
    "stm32f7": {"rcc_json": "rcc_f7", "rcc_ours": "rcc_f7"},
    "stm32g4": {"rcc_json": "rcc_g4", "rcc_ours": "rcc_g4"},
    "stm32f4": {"rcc_json": "rcc_f4", "rcc_ours": "rcc_f4"},
}

_SIGNAL_MAP = {"TX": "tx", "RX": "rx", "SCL": "scl", "SDA": "sda",
               "SCK": "sck", "MISO": "miso", "MOSI": "mosi", "NSS": "cs",
               "CH1": "ch1", "CH2": "ch2", "CH3": "ch3", "CH4": "ch4"}


def _http_get(url: str) -> bytes:
    # curl keeps this working in restricted sandboxes where raw sockets
    # fail; --retry absorbs transient resets on burst fetches.
    return subprocess.run(
        ["curl", "-sfL", "--retry", "4", "--retry-delay", "1",
         "--retry-all-errors", "-A", "alloy-devices-builder", url],
        check=True, capture_output=True,
    ).stdout


def _fetch(sha: str, path: str) -> bytes:
    dst = CACHE / sha / path.replace("/", "_")
    if dst.exists():
        return dst.read_bytes()
    data = _http_get(
        f"https://raw.githubusercontent.com/embassy-rs/stm32-data-generated/{sha}/{path}")
    dst.parent.mkdir(parents=True, exist_ok=True)
    dst.write_bytes(data)
    return data


def _list_family_chips(sha: str, family_prefix: str) -> list[str]:
    # One git-tree API call, cached alongside the blobs.
    dst = CACHE / sha / "_tree.json"
    if dst.exists():
        tree = json.loads(dst.read_text())
    else:
        tree = json.loads(_http_get(
            "https://api.github.com/repos/embassy-rs/stm32-data-generated/"
            f"git/trees/{sha}?recursive=1"))
        dst.parent.mkdir(parents=True, exist_ok=True)
        dst.write_text(json.dumps(tree))
    names = []
    for entry in tree["tree"]:
        p = entry["path"]
        if p.startswith("data/chips/") and p.endswith(".json"):
            stem = p[len("data/chips/"):-len(".json")]
            if stem.upper().startswith(family_prefix.upper()):
                names.append(stem)
    return sorted(names)


def _rcc_gate(rcc_ir: dict, ours_by_offset: dict[int, str],
              register: str, field: str) -> tuple[str, int] | None:
    """Resolve an embassy (register-name, field-name) enable ref into
    (OUR register name, bit). Names differ between embassy and the RM
    (GPIOENR vs IOPENR) — match by byte OFFSET, which is the address
    truth both sides agree on."""
    blk = rcc_ir.get("block/RCC") or {}
    for item in blk.get("items", []):
        if item["name"] == register:
            our_name = ours_by_offset.get(item["byte_offset"])
            if our_name is None:
                return None
            fs = rcc_ir.get(f"fieldset/{item['fieldset']}") or {}
            for f in fs.get("fields", []):
                if f["name"] == field:
                    return our_name, f["bit_offset"]
    return None


def _load_ip_map() -> tuple[dict[str, str], dict[str, str]]:
    doc = yaml.safe_load((HERE / "ip_map.yaml").read_text())
    return doc["map"], doc.get("name_overrides", {})


def build_chip(sha: str, part: str, family: str, ip_map: dict[str, str],
               overrides: dict[str, str], clock: dict, rcc_ir: dict,
               ours_by_offset: dict[int, str]) -> dict:
    src = json.loads(_fetch(sha, f"data/chips/{part}.json"))
    core = src["cores"][0]

    unmapped: set[str] = set()
    periphs: dict[str, dict] = {}
    pins: dict[str, dict] = {}
    routes: list[dict] = []
    interrupts = [{"name": i["name"], "number": i["number"]} for i in core["interrupts"]]
    irq_names = {i["name"] for i in core["interrupts"]}

    for p in core["peripherals"]:
        regs = p.get("registers")
        if regs is None:
            continue
        name = p["name"].lower()
        kind, version, block = regs["kind"], regs["version"], regs.get("block", "")
        tag_block = f"{kind}:{version}:{block.split('/')[-1]}"
        tag = f"{kind}:{version}"
        mapped = ip_map.get(tag_block, ip_map.get(tag))
        for prefix, override in overrides.items():
            if name.startswith(prefix):
                mapped = override
        if mapped is None:
            unmapped.add(tag_block if tag_block in ip_map else tag)
            continue

        entry: dict = {"base": f"0x{p['address']:08X}"}
        rcc = p.get("rcc")
        gate = None
        if rcc and rcc.get("enable"):
            resolved = _rcc_gate(rcc_ir, ours_by_offset,
                                 rcc["enable"]["register"], rcc["enable"]["field"])
            if resolved is not None:
                gate = {"peripheral": "rcc", "register": resolved[0],
                        "bit": resolved[1]}
        if mapped == "uncurated":
            entry["uncurated"] = True
            entry["ip_hint"] = tag_block if block else tag
        else:
            entry["ip"] = mapped
        if gate and name != "rcc":
            entry["gate"] = gate
        irq = next((i["interrupt"] for i in p.get("interrupts", [])
                    if i.get("signal") in ("GLOBAL", "")), None)
        if irq is None and p.get("interrupts"):
            irq = p["interrupts"][0]["interrupt"]
        if irq and irq in irq_names:
            entry["irq"] = irq
        if rcc and mapped != "uncurated" and name not in ("rcc", "flash"):
            bus = rcc.get("bus_clock", "")
            entry["kernel_clock"] = ("ahb" if "AHB" in bus
                                     else "apb2" if bus.endswith("2") else "apb")
        dma_reqs = {}
        for ch in p.get("dma_channels", []):
            sig = ch.get("signal", "")
            req = ch.get("request")
            if req is not None and sig:
                dma_reqs[sig.lower()] = req
        if dma_reqs and mapped != "uncurated":
            entry["dma_requests"] = dict(sorted(dma_reqs.items()))
        periphs[name] = entry

        for pin in p.get("pins", []):
            sig = _SIGNAL_MAP.get(pin.get("signal", ""))
            af = pin.get("af")
            pname = pin["pin"].lower().split("_")[0]  # PA2 -> pa2
            if sig is None or af is None or len(pname) < 3:
                continue
            port = pname[1]
            if f"gpio{port}" not in {pp["name"].lower() for pp in core["peripherals"]}:
                continue
            pins[pname] = {"port": port, "index": int(pname[2:])}
            routes.append({"pin": pname, "peripheral": name, "signal": sig,
                           "kind": "af_fixed", "af": af})

    if unmapped:
        return None, unmapped  # caller collects; one report for the whole run

    _enrich_family(family, periphs, core, irq_names)

    raw = src["memory"][0] if isinstance(src["memory"][0], list) else src["memory"]
    # Main flash = the contiguous run from the flash base (F7 splits one
    # bank into 3 embassy regions; OTP/option bytes sit elsewhere and are
    # excluded). Main RAM = the largest single ram region (F7 SRAM over the
    # smaller DTCM).
    flash_regs = sorted((m for m in raw if m["kind"].lower() == "flash"),
                        key=lambda m: m["address"])
    ram_regs = [m for m in raw if m["kind"].lower() == "ram"]
    flat = []
    if flash_regs:
        base = flash_regs[0]["address"]
        total = 0
        cur = base
        for m in flash_regs:
            if m["address"] == cur:
                total += m["size"]
                cur += m["size"]
            elif m["address"] > cur:
                break  # gap: OTP / a second bank
        flat.append({"name": "flash", "kind": "flash",
                     "base": f"0x{base:08X}", "size": total})
    if ram_regs:
        main = max(ram_regs, key=lambda m: m["size"])
        flat.append({"name": "sram", "kind": "ram",
                     "base": f"0x{main['address']:08X}", "size": main["size"]})

    core_name, arch, fpu = _ARCH[core["name"].lower()]
    prio_bits = core.get("nvic_priority_bits") or _NVIC_PRIO_BITS.get(family, 2)
    chip = {
        "schema": "alloy.chip.v1",
        "vendor": "st",
        "family": family,
        "part": part,
        "die": src.get("die", "").lower(),
        "provenance": {
            "sources": [
                f"GENERATED by builders/st (do not hand-edit): embassy-rs/stm32-data-generated @ {sha[:12]} "
                "(MIT OR Apache-2.0 via stm32-metapac) — bases, RCC gates, IRQs, pin AFs, DMA requests, memories, ip tags",
                f"clock profiles from builders/st/clock_templates/{family}.yaml",
            ],
        },
        "cores": [{"name": core_name, "arch": arch, "fpu": fpu,
                   "nvic_prio_bits": prio_bits}],
        "memories": flat,
        "peripherals": dict(sorted(periphs.items())),
        "pins": dict(sorted(pins.items())),
        "routes": sorted(routes, key=lambda r: (r["pin"], r["peripheral"], r["signal"])),
        "interrupts": sorted(interrupts, key=lambda i: i["number"]),
        "clock": {
            "sources": clock["sources"],
            "boot_source": clock["boot_source"],
            "profiles": clock["profiles"],
        },
    }
    return chip, set()


def _enrich_family(family: str, periphs: dict, core: dict, irq_names: set) -> None:
    """Family knowledge the upstream JSON does not carry in our shape:
    driver-facing channel constants and DMA controller geometry."""
    if family != "stm32g0":
        return
    # ADC internal channels (RM0444: VREFINT=13, TSEN=12) + request name.
    for name, p in periphs.items():
        if p.get("ip") == "st/adc_v2":
            p["channels"] = {"temp": 12, "vref": 13}
            reqs = p.get("dma_requests", {})
            if name in reqs:  # embassy signals the request with the periph name
                p["dma_requests"] = {"conv": reqs[name]}
    # DMA1 geometry: channel count from the core-level channel list, the
    # DMAMUX pairing, and the shared IRQ grouping (per-part names differ:
    # G030 has 2_3 / 4_5, G071 has 4_5_6_7 — resolve from the actual list).
    if "dma1" in periphs and "dmamux" in periphs:
        count = sum(1 for ch in core.get("dma_channels", [])
                    if ch.get("dma", "").upper() == "DMA1")
        line1 = next((n for n in irq_names if n.startswith("DMA1_CHANNEL1")), None)
        line23 = next((n for n in irq_names if n.startswith("DMA1_CHANNEL2")), None)
        line4x = next((n for n in irq_names if n.startswith("DMA1_CHANNEL4")
                       or n.startswith("DMA1_CH4")), None)
        irq_nums = {i["name"]: i["number"] for i in core["interrupts"]}
        if count and line1 and line23 and line4x:
            periphs["dma1"]["channels"] = {
                "count": count,
                "mux_offset": 0,
                "irqline1": irq_nums[line1],
                "irqline2_3": irq_nums[line23],
                "irqline4_7": irq_nums[line4x],
            }
            periphs["dma1"]["companions"] = {"mux": "dmamux"}
    # The G0 dmamux has no own gate (clocked with DMA1) — drop a copied one.
    if "dmamux" in periphs:
        periphs["dmamux"].pop("gate", None)


def emit_yaml(chip: dict) -> str:
    return yaml.dump(chip, sort_keys=False, width=100, default_flow_style=False)


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--family", default="stm32g0")
    ap.add_argument("--only")
    ap.add_argument("--check", action="store_true",
                    help="fail if chips/ differs from a fresh build")
    args = ap.parse_args()

    lock = yaml.safe_load((HERE / "sources.lock").read_text())
    sha = lock["sources"]["stm32-data-generated"]["sha"]
    ip_map, overrides = _load_ip_map()
    clock = yaml.safe_load((HERE / "clock_templates" / f"{args.family}.yaml").read_text())
    fam = _FAMILY.get(args.family)
    if fam is None:
        raise SystemExit(f"family {args.family} not configured (add to _FAMILY)")
    rcc_ir = json.loads(_fetch(sha, f"data/registers/{fam['rcc_json']}.json"))
    ours = yaml.safe_load((REPO / "registers" / "st" / f"{fam['rcc_ours']}.yaml").read_text())
    ours_by_offset = {int(r["offset"], 16): r["name"] for r in ours["registers"]}

    # Parts already covered by a hand-verified chip file (matched by the
    # `part` field, since the filename may differ, e.g. stm32f722.yaml holds
    # STM32F722ZE): never regenerate — the silicon-validated file wins.
    verified_parts: set[str] = set()
    for existing in (REPO / "chips" / "st").glob("*.yaml"):
        doc = yaml.safe_load(existing.read_text())
        if doc.get("provenance", {}).get("verified"):
            verified_parts.add(doc["part"].upper())

    prefix = args.family.replace("stm32", "STM32").upper()
    parts = _list_family_chips(sha, prefix)
    if args.only:
        parts = [p for p in parts if args.only.upper() in p.upper()]
    print(f"{len(parts)} {args.family} part(s) at {sha[:12]}")

    out_dir = REPO / "chips" / "st"
    wrote = compared = skipped = unmapped_parts = 0
    all_unmapped: set[str] = set()
    for part in parts:
        if part.upper() in verified_parts:
            compared += 1
            print(f"  KEEP {part} (hand-verified elsewhere; graduation pending)")
            continue
        chip, unmapped = build_chip(sha, part, args.family, ip_map, overrides,
                                    clock, rcc_ir, ours_by_offset)
        if chip is None:
            all_unmapped |= unmapped
            unmapped_parts += 1
            continue
        target = out_dir / f"{part.lower()}.yaml"
        text = emit_yaml(chip)
        if target.exists():
            existing = yaml.safe_load(target.read_text())
            if existing.get("provenance", {}).get("verified"):
                # Hand-curated with silicon notes: never overwrite; report.
                compared += 1
                print(f"  KEEP {target.name} (hand-verified; graduation pending)")
                continue
            if target.read_text() == text:
                skipped += 1
                continue
        if args.check:
            raise SystemExit(f"--check: {target} would change — rerun the builder")
        target.write_text(text)
        wrote += 1
        print(f"  wrote {target.name}")
    print(f"done: {wrote} written, {skipped} unchanged, {compared} hand-kept, "
          f"{unmapped_parts} skipped for unmapped IP")
    if all_unmapped:
        print("\nUNMAPPED ip tags (add to builders/st/ip_map.yaml):")
        for tag in sorted(all_unmapped):
            print(f"  \"{tag}\": uncurated")
        raise SystemExit(1)


if __name__ == "__main__":
    main()
