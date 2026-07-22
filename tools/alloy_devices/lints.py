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
        offsets: set[int] = set()
        for reg in doc["registers"]:
            size = reg.get("size", 32)
            offset = int(reg["offset"], 16)
            if reg["name"] in names:
                db.issues.append(Issue(path, f"duplicate register name {reg['name']}"))
            names.add(reg["name"])
            if offset in offsets:
                db.issues.append(Issue(path, f"duplicate register offset {reg['offset']} ({reg['name']})"))
            offsets.add(offset)
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
        for bus in ("ahb_hz", "apb_hz"):
            if profile[bus] > profile["sysclk_hz"]:
                db.issues.append(Issue(path, f"profile {pname}: {bus} exceeds sysclk", kind="warning"))
        for i, op in enumerate(profile["program"]):
            where = f"profile {pname} op[{i}]"
            if op["op"] == "delay":
                continue
            periph = doc["peripherals"].get(op["peripheral"])
            if periph is None:
                db.issues.append(Issue(path, f"{where}: unknown peripheral {op['peripheral']}"))
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
        irq_names = {i["name"] for i in doc["interrupts"]}

        seen_nums: set[int] = set()
        for irq in doc["interrupts"]:
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

        clock_nodes = {"sysclk", "ahb", "apb"} | set(doc["clock"]["sources"].keys())
        for name, p in periphs.items():
            if p["ip"] not in db.registers:
                db.issues.append(Issue(path, f"peripheral {name}: unknown IP {p['ip']} (no registers/{p['ip']}.yaml)"))
            if int(p["base"], 16) % 4 != 0:
                db.issues.append(Issue(path, f"peripheral {name}: unaligned base {p['base']}"))
            gate = p.get("gate")
            if gate:
                gp = periphs.get(gate["peripheral"])
                if gp is None:
                    db.issues.append(Issue(path, f"peripheral {name}: gate references unknown peripheral {gate['peripheral']}"))
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
            if "irq" in p and p["irq"] not in irq_names:
                db.issues.append(Issue(path, f"peripheral {name}: irq {p['irq']} not in interrupts list"))
            if "kernel_clock" in p and p["kernel_clock"] not in clock_nodes:
                db.issues.append(Issue(path, f"peripheral {name}: unknown kernel_clock {p['kernel_clock']}"))

        pins = doc.get("pins", {})
        for pname, pin in pins.items():
            if pname != f"p{pin['port']}{pin['index']}":
                db.issues.append(Issue(path, f"pin {pname}: name does not match port/index p{pin['port']}{pin['index']}"))
            unlock = pin.get("mux_unlock")
            if unlock:
                up = periphs.get(unlock["peripheral"])
                if up is None:
                    db.issues.append(Issue(path, f"pin {pname}: mux_unlock references unknown peripheral {unlock['peripheral']}"))
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
    referenced = {p["ip"] for chip in db.chips.values() for p in chip["peripherals"].values()}
    for key in db.registers:
        if key not in referenced:
            db.issues.append(Issue(db.register_paths[key], "IP not referenced by any chip", kind="warning"))


def run_all(db: Database) -> None:
    lint_registers(db)
    lint_chips(db)
    lint_cross(db)
