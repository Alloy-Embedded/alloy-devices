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
import re
import subprocess
from fnmatch import fnmatch
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
    "stm32l4": {"rcc_json": "rcc_l4", "rcc_ours": "rcc_l4"},
}

# Upstream signal names we deliberately call something else. Everything ELSE
# passes through `_signal` normalised — an allow-list here silently dropped
# every route it had not heard of (58% of the G0B1RE's, including every
# complementary PWM output, every timer break/ETR input and all of USB).
_SIGNAL_RENAME = {"NSS": "cs"}

_SIGNAL_BAD = re.compile(r"[^0-9a-z]+")


def _signal(raw: str) -> str | None:
    """Our name for an upstream pin/DMA signal, or None if unusable.

    The chip schema demands `^[a-z][a-z0-9_]*$`, so `VREF+` becomes `vref`,
    `I2S_SD` becomes `i2s_sd`, and anything that cannot start with a letter
    (a bare number) is refused rather than mangled into something a driver
    might later mistake for a real name.
    """
    raw = (raw or "").strip()
    if not raw:
        return None
    renamed = _SIGNAL_RENAME.get(raw.upper())
    if renamed is not None:
        return renamed
    name = _SIGNAL_BAD.sub("_", raw.lower()).strip("_")
    if not name or not name[0].isalpha():
        return None
    return name


# embassy names a non-DMAMUX channel `DMA2_CH0` (F4/F7 call that a *stream*).
_DMA_CHANNEL_RE = re.compile(r"^(DMA\d+)_(?:CH|STREAM)(\d+)$", re.IGNORECASE)


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


# ---------------------------------------------------------------- packages

_PIN_KIND = (
    (("VDDA", "AVDD"), "analog"), (("VREF",), "analog"),
    (("VDD", "VBAT", "VCAP", "VLCD", "VDDIO"), "power"),
    (("VSSA", "AVSS"), "analog"), (("VSS", "GND", "PDR"), "ground"),
    (("NRST", "RST"), "reset"), (("BOOT",), "boot"), (("OSC", "PC14", "PC15"), "clock"),
)


def _pin_kind(signal: str) -> str:
    s = signal.upper()
    if re.match(r"^P[A-Z]\d{1,2}$", s):
        return "gpio"
    for prefixes, kind in _PIN_KIND:
        if s.startswith(prefixes):
            return kind
    return "other"


def _package(chip_json: dict, part: str) -> dict | None:
    """The physical pinout for a part, or None when it cannot be trusted.

    Upstream carries per-package pin lists, but their completeness varies by
    family: STM32F4/F7 declare every pad, while STM32G0/G4 list barely any
    supply pin and no reset at all — which means those positions have been given
    to GPIOs that are VDD/VSS on the real part. That is a WRONG footprint, and a
    wrong footprint is worse than none, so `check_pinout` decides and anything
    it rejects is simply not emitted.
    """
    from alloy_devices.lints import check_pinout  # noqa: PLC0415

    best = None
    for pkg in chip_json.get("packages") or []:
        layout = [
            {"position": str(pin["position"]),
             "signal": (pin["signals"][0] if pin.get("signals") else "").lower(),
             "kind": _pin_kind(pin["signals"][0] if pin.get("signals") else "")}
            for pin in pkg["pins"]
        ]
        for entry in layout:
            if not entry["signal"]:
                entry["signal"] = "nc"
                entry["kind"] = "other"
        candidate = {"type": pkg["package"], "pins": len(layout),
                     "part": pkg.get("name", part), "layout": layout}
        if check_pinout(candidate):
            continue
        # Several packages can pass; prefer the quad one, which is what a hand
        # solderable board uses and what a picker can draw sensibly.
        quad = not any(not e["position"].isdigit() for e in layout)
        if best is None or (quad and not best[0]):
            best = (quad, candidate)
    return best[1] if best else None


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


# Which of a peripheral's vectors `irq` means, most-preferred first. `irq` is
# the vector a DRIVER attaches to, so it must be the one that carries the
# block's normal completion/transfer events.
#
# Most blocks have one and call it GLOBAL. The I2C (and F4's FMPI2C) splits
# into EV and ER, and picking "whatever upstream listed first" picked ER —
# alphabetically first, and the vector an event-driven driver would wait on
# forever, because transfer events land on EV. That was true of all 149
# generated stm32f4*.yaml.
_IRQ_PREFERRED = ("GLOBAL", "", "EV")


def _peripheral_irq(p: dict) -> str | None:
    """The vector name for a peripheral, or None.

    NOTE the remaining ambiguity, deliberately left alone: a block with several
    genuinely distinct vectors and no preferred one (the advanced timer's
    BRK/CC/COM/TRG/UP, bxCAN's RX0/RX1/TX/SCE, FDCAN's IT0/IT1) still falls
    back to upstream's first entry. Every such block is `uncurated` in
    ip_map.yaml today, so nothing generates a driver against that choice —
    but curating one of them means teaching the schema to carry more than a
    single vector per peripheral first.
    """
    entries = p.get("interrupts") or []
    for want in _IRQ_PREFERRED:
        for i in entries:
            if i.get("signal", "") == want:
                return i["interrupt"]
    return entries[0]["interrupt"] if entries else None


def _dma_facts(p: dict) -> tuple[dict[str, int], dict[str, list[dict]]]:
    """One peripheral's DMA facts, split by what the silicon actually offers.

    Two upstream shapes, and they mean different things:

    * `{signal, dmamux, request}` (G0/G4/L5, anything with a DMAMUX) — the
      request id is CHIP-WIDE: it selects this source on any channel of any
      controller behind that mux, so the id alone is the whole fact. That is
      what the schema's `dma_requests` describes.
    * `{signal, channel: "DMA2_CH0", request}` (F4/F7/L4) — there is no router.
      `request` is the per-stream channel SELECTOR and is meaningless without
      the controller and stream it selects on; a peripheral usually offers
      several alternatives. Flattening that to `{rx: 3}` both mislabelled the
      number and threw the alternatives away, so it goes to `dma_routes`.
    """
    reqs: dict[str, int] = {}
    routes: dict[str, list[dict]] = {}
    for ch in p.get("dma_channels", []):
        sig = _signal(ch.get("signal", ""))
        if sig is None:
            continue
        req = ch.get("request")
        if ch.get("dmamux"):
            if req is not None:
                reqs[sig] = req
            continue
        m = _DMA_CHANNEL_RE.match(str(ch.get("channel") or ""))
        if m is None:
            continue
        entry = {"controller": m.group(1).lower(), "channel": int(m.group(2))}
        if req is not None:
            entry["request"] = req
        bucket = routes.setdefault(sig, [])
        if entry not in bucket:
            bucket.append(entry)
    for bucket in routes.values():
        bucket.sort(key=lambda e: (e["controller"], e["channel"]))
    return reqs, routes


def _load_ip_map() -> tuple[dict[str, str], dict[str, str]]:
    doc = yaml.safe_load((HERE / "ip_map.yaml").read_text())
    return doc["map"], doc.get("name_overrides", {})


def _load_patches(family: str) -> list[dict]:
    path = HERE / "patches" / f"{family}.yaml"
    if not path.exists():
        return []
    return (yaml.safe_load(path.read_text()) or {}).get("patches") or []


def _apply_patches(patches: list[dict], part: str, chip: dict,
                   applied: dict[str, int]) -> None:
    """Corrections to upstream data (BUILDERS.md §4), recorded in patches/.

    Deliberately unable to do much: a patch may only amend a peripheral the
    part already has, and an `irq` it sets must name a vector in that part's
    own table. Anything else and a stale patch would start inventing silicon.
    """
    vectors = {i["name"] for i in chip.get("interrupts", [])}
    for patch in patches:
        if not any(fnmatch(part.upper(), pat.upper())
                   for pat in patch.get("parts", [])):
            continue
        hit = False
        for name, fields in (patch.get("peripherals") or {}).items():
            target = chip["peripherals"].get(name)
            if target is None:
                continue
            if "irq" in fields and fields["irq"] not in vectors:
                continue
            target.update(fields)
            hit = True
        if hit:
            applied[patch["id"]] = applied.get(patch["id"], 0) + 1


def _load_verified() -> dict[str, list[str]]:
    """Hardware-verification records to re-stamp, keyed by part number.

    A part listed here is GRADUATED: its hand-curated chip file has been
    replaced by builder output, and these notes — the things silicon, not
    upstream, taught us — are stamped back into the generated file's
    `provenance.verified` on every run. Without this, a regeneration would
    quietly delete the only record of what a board actually proved.
    """
    path = HERE / "verified.yaml"
    if not path.exists():
        return {}
    doc = yaml.safe_load(path.read_text()) or {}
    return {k.upper(): list(v) for k, v in (doc.get("records") or {}).items()}


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
        irq = _peripheral_irq(p)
        if irq and irq in irq_names:
            entry["irq"] = irq
        if rcc and mapped != "uncurated" and name not in ("rcc", "flash"):
            # embassy names buses HCLKn/PCLKn on most families. HCLK* IS the
            # AHB clock — without this branch the endswith("2") fallback files
            # L4 GPIO/ADC (HCLK2) under apb2. GATED to stm32l4 for now: the
            # same mislabel exists latently in every generated F4/F7/G4/G0
            # yaml (their HCLK1 peripherals read "apb"), but no shipped driver
            # consumes those values yet, and fixing them means regenerating
            # 400+ yamls in a deliberate commit of their own — not as a side
            # effect of the first L4 chip. See the drift note in that commit.
            bus = rcc.get("bus_clock", "")
            hclk_is_ahb = family == "stm32l4" and bus.startswith("HCLK")
            entry["kernel_clock"] = ("ahb" if ("AHB" in bus or hclk_is_ahb)
                                     else "apb2" if bus.endswith("2") else "apb")
        dma_reqs, dma_routes = _dma_facts(p)
        if mapped != "uncurated":
            if dma_reqs:
                entry["dma_requests"] = dict(sorted(dma_reqs.items()))
            if dma_routes:
                entry["dma_routes"] = {k: dma_routes[k] for k in sorted(dma_routes)}
        periphs[name] = entry

        for pin in p.get("pins", []):
            sig = _signal(pin.get("signal", ""))
            af = pin.get("af")
            pname = pin["pin"].lower().split("_")[0]  # PA2 -> pa2
            if sig is None or af is None or len(pname) < 3:
                continue
            port = pname[1]
            if f"gpio{port}" not in {pp["name"].lower() for pp in core["peripherals"]}:
                continue
            pins[pname] = {"port": port, "index": int(pname[2:])}
            route = {"pin": pname, "peripheral": name, "signal": sig,
                     "kind": "af_fixed", "af": af}
            if route not in routes:
                routes.append(route)

    # Every I/O pin of the part, not only the ones some peripheral routes to.
    # A pinout picker has to draw the analog-only and unused pads too, and
    # upstream's core pin list is exactly that set (it is the PACKAGE's I/O,
    # so a die port the package does not bond out simply does not appear).
    port_periphs = {pp["name"].lower() for pp in core["peripherals"]}
    for pin in core.get("pins") or []:
        pname = str(pin.get("name", "")).lower()
        if not re.fullmatch(r"p[a-z]\d{1,2}", pname):
            continue
        if f"gpio{pname[1]}" not in port_periphs:
            continue
        pins.setdefault(pname, {"port": pname[1], "index": int(pname[2:])})

    if unmapped:
        return None, unmapped  # caller collects; one report for the whole run

    _enrich_family(family, periphs, core)

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
        entry = {"name": "flash", "kind": "flash",
                 "base": f"0x{base:08X}", "size": total}
        # Erase granularity, when every region of the run agrees on it. This is
        # what makes an nvm/fs board region checkable (emit/board.py refuses a
        # region that is not a whole number of pages), and it is a real
        # upstream fact — not a family constant we would have to maintain.
        erase = {m.get("settings", {}).get("erase_size") for m in flash_regs
                 if m["address"] < cur}
        if len(erase) == 1 and (only := erase.pop()):
            entry["erase_size"] = int(only)
        flat.append(entry)
    if ram_regs:
        if family == "stm32l4":
            # L4 maps SRAM1 (0x20000000) and SRAM2 contiguously behind it —
            # one usable 40 K run on the L412 (RM0394 memory map), and real
            # linker scripts span both. Merge contiguous runs and take the
            # largest. FAMILY-SCOPED on purpose: F7's largest-single choice
            # (SRAM over the smaller DTCM) must stay byte-identical.
            runs: list[dict[str, int]] = []
            for m in sorted(ram_regs, key=lambda m: m["address"]):
                if runs and m["address"] == runs[-1]["base"] + runs[-1]["size"]:
                    runs[-1]["size"] += m["size"]
                else:
                    runs.append({"base": m["address"], "size": m["size"]})
            best = max(runs, key=lambda r: r["size"])
            flat.append({"name": "sram", "kind": "ram",
                         "base": f"0x{best['base']:08X}", "size": best["size"]})
        else:
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
    # The physical part, when upstream's pin list for it survives the
    # plausibility lint. Absent is a normal, honest state.
    package = _package(src, part)
    if package is not None:
        chip["package"] = package
    return chip, set()


def _enrich_family(family: str, periphs: dict, core: dict) -> None:
    """Family knowledge the upstream JSON does not carry in our shape:
    driver-facing channel constants and DMA controller geometry.

    Gated to stm32g0 on purpose. The `irqline1 / irqline2_3 / irqline4_7`
    grouping below is the G0's own vector layout; on L4/G4 every DMA channel
    has its own vector, so the same three fields would quietly file channel 3
    under channel 2's handler.
    """
    if family != "stm32g0":
        return
    # ADC internal channels (RM0444: VREFINT=13, TSEN=12) + request name.
    for name, p in periphs.items():
        if p.get("ip") == "st/adc_v2":
            p["channels"] = {"temp": 12, "vref": 13}
            reqs = p.get("dma_requests", {})
            if name in reqs:  # embassy signals the request with the periph name
                p["dma_requests"] = {"conv": reqs[name]}
    # DMA geometry, per controller: how many channels it has, where its block
    # of DMAMUX channels starts, and which vector each channel raises.
    #
    # Both lookups here used to be spelled by hand and both missed. The mux was
    # matched as the literal name "dmamux" while upstream calls it DMAMUX1, and
    # the vectors were matched with `startswith("DMA1_CHANNEL1")` against names
    # that read `DMA1_Channel1` — so the whole block was dead and every
    # generated G0 chip shipped a dma1 with no geometry at all. Both are now
    # DERIVED: the mux from the channel table, the vectors from the
    # controller's own interrupt list.
    irq_nums = {i["name"]: i["number"] for i in core["interrupts"]}
    chans = core.get("dma_channels") or []
    for p in core["peripherals"]:
        name = p["name"].lower()
        if periphs.get(name, {}).get("ip") != "st/dma_v1":
            continue
        mine = [ch for ch in chans if ch.get("dma", "").upper() == p["name"].upper()]
        if not mine:
            continue
        vector: dict[int, int] = {}
        for entry in p.get("interrupts", []) or []:
            m = re.fullmatch(r"CH(\d+)", str(entry.get("signal", "")), re.IGNORECASE)
            if m and entry.get("interrupt") in irq_nums:
                vector[int(m.group(1))] = irq_nums[entry["interrupt"]]
        # st_dma_v1.hpp addresses channels 1..N and groups their vectors the
        # G0 way (1 / 2-3 / 4-7); a controller that does not answer for all
        # three groups gets no geometry rather than a guessed one.
        if not all(k in vector for k in (1, 2, 4)):
            continue
        geometry = {
            "count": len(mine),
            "mux_offset": min(ch.get("dmamux_channel", 0) for ch in mine),
            "irqline1": vector[1],
            "irqline2_3": vector[2],
            "irqline4_7": vector[4],
        }
        periphs[name]["channels"] = geometry
        mux = next((ch["dmamux"].lower() for ch in mine if ch.get("dmamux")), None)
        if mux is not None and mux in periphs:
            periphs[name]["companions"] = {"mux": mux}
    # The G0 dmamux has no own gate (clocked with DMA1) — drop a copied one.
    for name, p in periphs.items():
        if p.get("ip") == "st/dmamux_v1":
            p.pop("gate", None)

    # --- pin interrupts: which vector each EXTI line raises, and the port code
    # each GPIO block answers to.
    exti_name = next((n for n, p in periphs.items()
                      if p.get("ip") == "st/exti_g0"), None)
    if exti_name is not None:
        lines: dict[int, str] = {}
        for p in core["peripherals"]:
            if p["name"].lower() != exti_name:
                continue
            for entry in p.get("interrupts") or []:
                m = re.fullmatch(r"EXTI(\d+)", str(entry.get("signal", "")))
                if m and entry.get("interrupt") in irq_nums:
                    lines[int(m.group(1))] = entry["interrupt"]
        # Contiguous runs of lines that share a vector become one group — the
        # shape emit/device.py reads. Upstream lists them per line; collapsing
        # is arithmetic, not a judgement.
        groups: list[dict] = []
        for line in sorted(lines):
            if groups and groups[-1]["irq"] == lines[line] and groups[-1]["last"] == line - 1:
                groups[-1]["last"] = line
            else:
                groups.append({"irq": lines[line], "first": line, "last": line})
        if groups:
            periphs[exti_name]["irq_lines"] = groups
            # `irq` is for the single-vector case (schema). Leaving it beside
            # irq_lines would name the first group's vector as if it were the
            # block's only one.
            periphs[exti_name].pop("irq", None)
        for name, p in periphs.items():
            if p.get("ip") != "st/gpio_v2":
                continue
            # RM0444 §12.1.3 EXTICR: the port SELECT code is fixed by the
            # letter (PA=0 … PF=5), NOT by the die's alphabetical position —
            # the G071 has no port E, and its gpiof is still 5, a hole at 4.
            p["port_index"] = ord(name[len("gpio")]) - ord("a")
            p["companions"] = {"exti": exti_name}

    # --- a CAN controller and the message RAM it must be pointed at. The
    # pairing is by instance number (FDCAN1 <-> FDCANRAM1), which is how the
    # hand-curated G0B1 file stated it.
    for name, p in periphs.items():
        if p.get("ip") != "st/fdcan_v1":
            continue
        ram = f"fdcanram{name[len('fdcan'):]}"
        if periphs.get(ram, {}).get("ip") == "st/fdcanram_v1":
            p["companions"] = {"ram": ram}


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

    # GRADUATED parts: the builder now owns the file, and the hardware notes
    # its hand-curated predecessor carried are re-stamped from verified.yaml so
    # regeneration cannot erase what silicon taught us (BUILDERS.md §4).
    graduated = _load_verified()
    patches = _load_patches(args.family)
    patched: dict[str, int] = {}

    # Parts still covered by a hand-verified chip file (matched by the `part`
    # field, since the filename may differ, e.g. stm32f722.yaml holds
    # STM32F722ZE): never regenerate — the silicon-validated file wins.
    verified_parts: set[str] = set()
    for existing in (REPO / "chips" / "st").glob("*.yaml"):
        doc = yaml.safe_load(existing.read_text())
        if doc.get("provenance", {}).get("verified"):
            verified_parts.add(doc["part"].upper())
    verified_parts -= set(graduated)

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
        _apply_patches(patches, part, chip, patched)
        notes = graduated.get(part.upper())
        if notes:
            chip["provenance"]["verified"] = list(notes)
        target = out_dir / f"{part.lower()}.yaml"
        text = emit_yaml(chip)
        if target.exists():
            existing = yaml.safe_load(target.read_text())
            if existing.get("provenance", {}).get("verified") and not notes:
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
    for patch in patches:
        print(f"  patch {patch['id']}: applied to {patched.get(patch['id'], 0)} part(s)")
    if all_unmapped:
        print("\nUNMAPPED ip tags (add to builders/st/ip_map.yaml):")
        for tag in sorted(all_unmapped):
            print(f"  \"{tag}\": uncurated")
        raise SystemExit(1)


if __name__ == "__main__":
    main()
