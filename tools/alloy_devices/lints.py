"""Plausibility lints — the checks that make bad data fail loudly.

Schema validation proves shape; these lints prove *sense*. Every lint here
exists because the previous ecosystem shipped the corresponding bad data:
family-max flash sizes, 0 Hz oscillators, stub pinouts, dangling references,
clock programs that could not be expressed. See NORTH_STAR.md guard #1.
"""

from __future__ import annotations

import re
from typing import Any

from .loader import Database, Issue

# ST part-number flash-size code (last letter of e.g. STM32G071RB): code -> KiB
_ST_FLASH_CODE_KIB = {
    "4": 16, "6": 32, "8": 64, "B": 128, "C": 256, "D": 384,
    "E": 512, "F": 768, "G": 1024, "H": 1536, "I": 2048,
}

_ROUTE_PAYLOAD = {
    "af_fixed": {"af"},
    "funcsel": {"funcsel"},
    "full_matrix": {"matrix_signal", "direction"},
    "psel": set(),
}


def _field_names(reg: dict[str, Any]) -> dict[str, dict[str, Any]]:
    """Expand repeat fields: MODER repeat 16 -> MODER0..MODER15 (plus the base name)."""
    out: dict[str, dict[str, Any]] = {}
    for f in reg.get("fields", []):
        out[f["name"]] = f
        rep = f.get("repeat")
        if rep:
            for i in range(rep["count"]):
                out[f"{f['name']}{i}"] = {
                    "name": f"{f['name']}{i}",
                    "bit": f["bit"] + i * rep["stride"],
                    "width": f.get("width", 1),
                }
    return out


def lint_registers(db: Database) -> None:
    for key, doc in db.registers.items():
        path = db.register_paths[key]
        names: set[str] = set()
        reg_spans: list[tuple[int, int, str, dict | None]] = []
        for reg in doc["registers"]:
            size = reg.get("size", 32)
            offset = int(reg["offset"], 16)
            if reg["name"] in names:
                db.issues.append(Issue(path, f"duplicate register name {reg['name']}"))
            names.add(reg["name"])
            arr = reg.get("array")
            end = offset + (arr["count"] * arr["stride"] if arr else size // 8)
            for o_start, o_end, o_name, o_arr in reg_spans:
                if not (offset < o_end and o_start < end):
                    continue
                # Interleaved arrays with equal stride and different phase
                # occupy disjoint words (LEDC HSCHn_CONF0/HPOINT/DUTY...).
                if (arr and o_arr and arr["stride"] == o_arr["stride"]
                        and offset % arr["stride"] != o_start % arr["stride"]):
                    continue
                db.issues.append(Issue(path, f"registers {reg['name']} and {o_name} overlap"))
            reg_spans.append((offset, end, reg["name"], arr))
            if size == 32 and offset % 4 != 0:
                db.issues.append(Issue(path, f"{reg['name']}: 32-bit register at unaligned offset {reg['offset']}"))
            if "reset" in reg and int(reg["reset"], 16) >= (1 << size):
                db.issues.append(Issue(path, f"{reg['name']}: reset value exceeds {size}-bit register"))
            occupied: list[tuple[int, int, str]] = []
            for f in reg.get("fields", []):
                width = f.get("width", 1)
                rep = f.get("repeat")
                last_bit = (
                    f["bit"] + (rep["count"] - 1) * rep["stride"] + width if rep else f["bit"] + width
                )
                if last_bit > size:
                    db.issues.append(Issue(path, f"{reg['name']}.{f['name']}: field exceeds {size}-bit register"))
                spans = (
                    [(f["bit"] + i * rep["stride"], width) for i in range(rep["count"])]
                    if rep else [(f["bit"], width)]
                )
                for start, w in spans:
                    for o_start, o_w, o_name in occupied:
                        if start < o_start + o_w and o_start < start + w:
                            db.issues.append(Issue(
                                path, f"{reg['name']}: fields {f['name']} and {o_name} overlap at bit {max(start, o_start)}"
                            ))
                    occupied.append((start, w, f["name"]))


def _lint_clock(db: Database, key: str, doc: dict[str, Any]) -> None:
    path = db.chip_paths[key]
    clock = doc["clock"]
    for name, src in clock["sources"].items():
        if not 1_000 <= src["hz"] <= 1_000_000_000:
            db.issues.append(Issue(path, f"clock source {name}: implausible frequency {src['hz']} Hz"))
    if clock["boot_source"] not in clock["sources"]:
        db.issues.append(Issue(path, f"boot_source {clock['boot_source']} not in clock sources"))

    for pname, profile in clock["profiles"].items():
        if not 32_768 <= profile["sysclk_hz"] <= 1_000_000_000:
            db.issues.append(Issue(path, f"profile {pname}: implausible sysclk {profile['sysclk_hz']} Hz"))
        for bus in ("ahb_hz", "apb_hz", "apb2_hz"):
            if bus in profile and profile[bus] > profile["sysclk_hz"]:
                db.issues.append(Issue(path, f"profile {pname}: {bus} exceeds sysclk", kind="warning"))
        for i, op in enumerate(profile["program"]):
            where = f"profile {pname} op[{i}]"
            if op["op"] == "delay":
                continue
            periph = doc["peripherals"].get(op["peripheral"])
            if periph is None:
                db.issues.append(Issue(path, f"{where}: unknown peripheral {op['peripheral']}"))
                continue
            if "ip" not in periph:  # uncurated stub carries facts but no register model
                db.issues.append(Issue(
                    path, f"{where}: references uncurated peripheral {op['peripheral']} "
                    "(a clock program must target a curated peripheral)"))
                continue
            ip_doc = db.registers.get(periph["ip"])
            if ip_doc is None:
                continue  # reported by lint_chips already
            reg = next((r for r in ip_doc["registers"] if r["name"] == op["register"]), None)
            if reg is None:
                db.issues.append(Issue(path, f"{where}: {periph['ip']} has no register {op['register']}"))
                continue
            fields = _field_names(reg)
            if op["op"] == "write":
                if int(op["value"], 16) >= (1 << reg.get("size", 32)):
                    db.issues.append(Issue(path, f"{where}: value exceeds register width"))
            elif op["op"] == "rmw":
                for fname, fval in op["fields"].items():
                    f = fields.get(fname)
                    if f is None:
                        db.issues.append(Issue(path, f"{where}: {op['register']} has no field {fname}"))
                    elif fval >= (1 << f.get("width", 1)):
                        db.issues.append(Issue(path, f"{where}: value {fval} exceeds {fname} width {f.get('width', 1)}"))
            elif op["op"] == "poll":
                f = fields.get(op["field"])
                if f is None:
                    db.issues.append(Issue(path, f"{where}: {op['register']} has no field {op['field']}"))
                elif op["equals"] >= (1 << f.get("width", 1)):
                    db.issues.append(Issue(path, f"{where}: equals value exceeds {op['field']} width"))


def lint_chips(db: Database) -> None:
    for key, doc in db.chips.items():
        path = db.chip_paths[key]
        periphs: dict[str, Any] = doc["peripherals"]
        interrupts = doc.get("interrupts", [])
        irq_names = {i["name"] for i in interrupts}
        if not interrupts:
            db.issues.append(Issue(
                path, "no interrupts modeled — vector table will not be generated",
                kind="warning",
            ))

        seen_nums: set[int] = set()
        for irq in interrupts:
            if irq["number"] in seen_nums:
                db.issues.append(Issue(path, f"duplicate interrupt number {irq['number']}"))
            seen_nums.add(irq["number"])

        flash = [m for m in doc["memories"] if m["kind"] == "flash"]
        ram = [m for m in doc["memories"] if m["kind"] == "ram"]
        if not flash or not ram:
            db.issues.append(Issue(path, "memories must include at least one flash and one ram"))
        if doc["vendor"] == "st" and flash:
            # STM32 <series:4> <pin-count:1> <flash-code:1> — e.g. STM32G071 R B
            m = re.match(r"^STM32[A-Z]\d{2}[0-9A-Z][A-Z](?P<code>[0-9A-Z])", doc["part"])
            if m is not None:
                code = m.group("code")
                expected_kib = _ST_FLASH_CODE_KIB.get(code)
                total_kib = sum(mem["size"] for mem in flash) // 1024
                if expected_kib is not None and total_kib != expected_kib:
                    db.issues.append(Issue(
                        path,
                        f"flash size {total_kib} KiB contradicts part-number code "
                        f"'{code}' ({expected_kib} KiB) — the old database shipped "
                        "family-max sizes; this lint exists to stop that",
                    ))

        clock_nodes = {"sysclk", "ahb", "apb", "apb2"} | set(doc["clock"]["sources"].keys())
        # Two peripherals at one base means one silently points at the other's
        # registers — a dead peripheral (found the hard way: usart1's base was
        # clobbered to the GMAC's 0x40050000 while wiring Ethernet, so every
        # console write hit the MAC and the UART went silent).
        base_owner: dict[int, str] = {}
        for name, p in periphs.items():
            if p.get("uncurated") or "base" not in p:
                continue
            base = int(p["base"], 16)
            if base in base_owner:
                db.issues.append(Issue(
                    path,
                    f"peripheral {name}: base {p['base']} collides with "
                    f"{base_owner[base]} — one of them points at the other's registers",
                ))
            else:
                base_owner[base] = name
        for name, p in periphs.items():
            if p.get("uncurated"):
                # Stub: facts recorded, codegen skips it. It must never be
                # LOAD-BEARING: nothing curated may depend on it.
                if "ip" in p:
                    db.issues.append(Issue(path, f"peripheral {name}: uncurated stubs must not bind an ip"))
                continue
            if p["ip"] not in db.registers:
                db.issues.append(Issue(path, f"peripheral {name}: unknown IP {p['ip']} (no registers/{p['ip']}.yaml)"))
            if int(p["base"], 16) % 4 != 0:
                db.issues.append(Issue(path, f"peripheral {name}: unaligned base {p['base']}"))
            gate = p.get("gate")
            if gate:
                gp = periphs.get(gate["peripheral"])
                if gp is None:
                    db.issues.append(Issue(path, f"peripheral {name}: gate references unknown peripheral {gate['peripheral']}"))
                elif gp.get("uncurated"):
                    db.issues.append(Issue(path, f"peripheral {name}: gate references UNCURATED peripheral {gate['peripheral']} — stubs cannot be load-bearing"))
                else:
                    gate_ip = db.registers.get(gp["ip"])
                    gate_reg = next(
                        (r for r in gate_ip["registers"] if r["name"] == gate["register"]),
                        None,
                    ) if gate_ip else None
                    if gate_ip and gate_reg is None:
                        db.issues.append(Issue(path, f"peripheral {name}: gate register {gate['register']} not in {gp['ip']}"))
                    if gate_reg is not None:
                        style = gate.get("style", "rmw")
                        if gate_reg["access"] == "wo" and style != "write_set":
                            db.issues.append(Issue(
                                path,
                                f"peripheral {name}: gate register {gate['register']} is write-only — "
                                "RMW would read garbage; declare style: write_set",
                            ))
                        if gate_reg["access"] != "wo" and style == "write_set":
                            db.issues.append(Issue(
                                path,
                                f"peripheral {name}: gate style write_set on a readable register — "
                                "confirm this is a set-register, else use rmw",
                                kind="warning",
                            ))
                        if style == "reset_release":
                            done_name = gate.get("done_register")
                            if not done_name:
                                db.issues.append(Issue(
                                    path,
                                    f"peripheral {name}: gate style reset_release requires done_register",
                                ))
                            elif gate_ip and not any(
                                r["name"] == done_name for r in gate_ip["registers"]
                            ):
                                db.issues.append(Issue(
                                    path,
                                    f"peripheral {name}: done_register {done_name} not in {gp['ip']}",
                                ))
                        elif "done_register" in gate:
                            db.issues.append(Issue(
                                path,
                                f"peripheral {name}: done_register only valid with style reset_release",
                            ))
            if "irq" in p and p["irq"] not in irq_names:
                db.issues.append(Issue(path, f"peripheral {name}: irq {p['irq']} not in interrupts list"))
            if "kernel_clock" in p and p["kernel_clock"] not in clock_nodes:
                db.issues.append(Issue(path, f"peripheral {name}: unknown kernel_clock {p['kernel_clock']}"))

        for name, p in periphs.items():
            for cname, target in p.get("companions", {}).items():
                if target not in periphs:
                    db.issues.append(Issue(path, f"peripheral {name}: companion {cname} references unknown peripheral {target}"))
                elif periphs[target].get("uncurated"):
                    db.issues.append(Issue(path, f"peripheral {name}: companion {cname} references UNCURATED peripheral {target}"))

        boot = doc.get("boot")
        if boot and boot["kind"] == "rp2040_boot2":
            payload = bytes.fromhex(boot["payload_hex"])
            if len(payload) != boot["size"]:
                db.issues.append(Issue(path, f"boot payload is {len(payload)} bytes, declared {boot['size']}"))
            elif boot["size"] == 256:
                crc = 0xFFFFFFFF
                for b in payload[:252]:
                    crc ^= b << 24
                    for _ in range(8):
                        crc = ((crc << 1) ^ 0x04C11DB7) & 0xFFFFFFFF if crc & 0x80000000 \
                            else (crc << 1) & 0xFFFFFFFF
                stored = int.from_bytes(payload[252:], "little")
                if crc != stored:
                    db.issues.append(Issue(
                        path,
                        f"boot2 CRC mismatch: computed 0x{crc:08X}, stored 0x{stored:08X} — "
                        "the bootrom will reject this image (the old ecosystem shipped "
                        "zero-CRC boot2 for months; this lint exists to stop that)",
                    ))

        pins = doc.get("pins", {})
        for pname, pin in pins.items():
            if pname != f"p{pin['port']}{pin['index']}":
                db.issues.append(Issue(path, f"pin {pname}: name does not match port/index p{pin['port']}{pin['index']}"))
            if "bank" in pin and pin["bank"] not in periphs:
                db.issues.append(Issue(path, f"pin {pname}: bank references unknown peripheral {pin['bank']}"))
            unlock = pin.get("mux_unlock")
            if unlock:
                up = periphs.get(unlock["peripheral"])
                if up is None:
                    db.issues.append(Issue(path, f"pin {pname}: mux_unlock references unknown peripheral {unlock['peripheral']}"))
                elif "ip" not in up:
                    db.issues.append(Issue(path, f"pin {pname}: mux_unlock references uncurated peripheral {unlock['peripheral']}"))
                else:
                    unlock_ip = db.registers.get(up["ip"])
                    if unlock_ip and not any(r["name"] == unlock["register"] for r in unlock_ip["registers"]):
                        db.issues.append(Issue(path, f"pin {pname}: mux_unlock register {unlock['register']} not in {up['ip']}"))

        for i, route in enumerate(doc.get("routes", [])):
            where = f"route[{i}] ({route['pin']}->{route['peripheral']}.{route['signal']})"
            if route["pin"] not in pins:
                db.issues.append(Issue(path, f"{where}: unknown pin"))
            if route["peripheral"] not in periphs:
                db.issues.append(Issue(path, f"{where}: unknown peripheral"))
            required = _ROUTE_PAYLOAD[route["kind"]]
            payload = set(route.keys()) - {"pin", "peripheral", "signal", "kind", "direction"}
            missing = required - set(route.keys())
            extra = payload - required
            if missing:
                db.issues.append(Issue(path, f"{where}: kind {route['kind']} requires {sorted(missing)}"))
            if extra:
                db.issues.append(Issue(path, f"{where}: payload {sorted(extra)} not valid for kind {route['kind']}"))

        _lint_clock(db, key, doc)


def lint_cross(db: Database) -> None:
    referenced = {p["ip"] for chip in db.chips.values()
                  for p in chip["peripherals"].values() if "ip" in p}
    for key in db.registers:
        if key not in referenced:
            db.issues.append(Issue(db.register_paths[key], "IP not referenced by any chip", kind="warning"))




# ---------------------------------------------------------------- pinouts

# A physical package spends pins on power, ground, reset and analog references.
# How many varies by part, but not by much for a given size — and a pinout that
# claims almost none has silently given those positions to GPIOs, which is a
# WRONG footprint, not a partial one. These floors are deliberately generous:
# they are set below every value observed in the families whose upstream data is
# complete (STM32F4/F7 declare 13-14 service pins on an LQFP64), so a part that
# trips one is not merely lean, it is missing pins.
_SERVICE_PIN_FLOOR = ((176, 24), (144, 20), (100, 12), (64, 8), (48, 6), (32, 4))

# Names that are not a GPIO. Everything else on a package position is expected
# to be a port pin.
_SERVICE_PREFIX = ("VDD", "VSS", "VBAT", "VREF", "VCAP", "VLCD", "VDDA", "VDDIO",
                   "NRST", "RST", "BOOT", "PDR", "OSC", "GND", "AVDD", "AVSS")

_GPIO_NAME = re.compile(r"^P[A-Z]\d{1,2}$")


def _is_gpio(signal: str) -> bool:
    return bool(_GPIO_NAME.match(signal.upper()))


def _service_floor(pin_count: int) -> int:
    for size, floor in _SERVICE_PIN_FLOOR:
        if pin_count >= size:
            return floor
    return 2


def check_pinout(package: dict[str, Any]) -> list[str]:
    """Everything implausible about one package's pin list.

    Returned as plain strings so both the database lints and the builder can use
    it — the builder must be able to REFUSE to emit a pinout, not just report it
    after it has already been written.
    """
    problems: list[str] = []
    name = package.get("type") or package.get("package") or "?"
    layout = package.get("layout") or package.get("pins") or []
    declared = package.get("pins") if isinstance(package.get("pins"), int) else None
    count = declared if declared is not None else len(layout)

    if not layout:
        return [f"{name}: no pin layout"]
    if declared is not None and declared != len(layout):
        problems.append(f"{name}: declares {declared} pins but lists {len(layout)}")

    positions = [str(p.get("position", "")) for p in layout]
    if len(set(positions)) != len(positions):
        problems.append(f"{name}: duplicate pin positions")

    numeric = [p for p in positions if p.isdigit()]
    if numeric and len(numeric) == len(positions):
        # A quad package is numbered 1..N with no gaps; a hole means a pin was
        # dropped and every position after it may be attributed to the wrong pad.
        expected = list(range(1, len(positions) + 1))
        if sorted(int(p) for p in numeric) != expected:
            problems.append(f"{name}: positions are not 1..{len(positions)} without gaps")
    elif numeric:
        problems.append(f"{name}: mixes numeric and grid (BGA) positions")

    # A position with no signal at all is a legitimate unconnected pad; take the
    # first name where there is one rather than assuming every pad is named.
    def _first(entry: dict[str, Any]) -> str:
        if entry.get("signal"):
            return str(entry["signal"])
        names = entry.get("signals") or []
        return str(names[0]) if names else ""

    signals = [_first(p) for p in layout]
    gpios = [s for s in signals if _is_gpio(s)]
    if len(set(gpios)) != len(gpios):
        problems.append(f"{name}: the same GPIO appears on more than one pin")

    service = [s for s in signals if s.upper().startswith(_SERVICE_PREFIX)]
    floor = _service_floor(count)
    if len(service) < floor:
        problems.append(
            f"{name}: {len(service)} power/ground/reset pins on a {count}-pin package "
            f"(expected at least {floor}) — positions are likely attributed to GPIOs "
            f"that are supply pins on the real part")
    if not any(s.upper().startswith(("NRST", "RST")) for s in signals):
        problems.append(f"{name}: no reset pin — every Cortex-M package has one")

    return problems


def lint_pinouts(db: Database) -> None:
    """Refuse a package whose pin list cannot be a real part."""
    for key, doc in db.chips.items():
        package = doc.get("package")
        if not package:
            continue
        for problem in check_pinout(package):
            db.issues.append(Issue(db.chip_paths[key], problem))


def run_all(db: Database) -> None:
    lint_registers(db)
    lint_chips(db)
    lint_pinouts(db)
    lint_cross(db)
