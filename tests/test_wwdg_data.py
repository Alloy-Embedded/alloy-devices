"""The window watchdog's curated facts, pinned against the two ways they rot.

These read the SHIPPED registers/st/wwdg_*.yaml rather than a synthetic one,
because both failures they guard are copy-a-file-and-edit-it failures:

1. `feat.timebase_max` and CFR.WDGTB's own width both name the same maximum.
   wwdg_v1 differs from v2 in exactly that field (two bits, not three), so the
   file that gets copied to make v1 is the file that gets the width narrowed
   and the feat forgotten — leaving a driver that clamps to a prescaler the
   silicon cannot select.
2. WDGTB carries `values:`. A curated field whose ENCODING is not curated is a
   magic number wearing an accessor (peripheral-surface.md question 0, row 4),
   and a prescaler is exactly the shape that invites one.
"""

from __future__ import annotations

from pathlib import Path

import yaml

REPO = Path(__file__).resolve().parent.parent
WWDG_FILES = sorted((REPO / "registers" / "st").glob("wwdg_*.yaml"))


def _reg(ip: dict, name: str) -> dict:
    return next(r for r in ip["registers"] if r["name"] == name)


def _field(reg: dict, name: str) -> dict:
    return next(f for f in reg["fields"] if f["name"] == name)


def test_at_least_one_wwdg_is_curated() -> None:
    assert WWDG_FILES, "registers/st has no wwdg IP file"


def test_timebase_max_agrees_with_the_field_that_holds_it() -> None:
    for path in WWDG_FILES:
        ip = yaml.safe_load(path.read_text())
        wdgtb = _field(_reg(ip, "CFR"), "WDGTB")
        width = wdgtb.get("width", 1)
        assert ip["feat"]["timebase_max"] == (1 << width) - 1, (
            f"{path.name}: feat.timebase_max and CFR.WDGTB's {width}-bit width "
            "name the same maximum and disagree"
        )


def test_the_prescaler_encoding_is_curated_not_a_magic_number() -> None:
    for path in WWDG_FILES:
        ip = yaml.safe_load(path.read_text())
        wdgtb = _field(_reg(ip, "CFR"), "WDGTB")
        values = wdgtb.get("values") or {}
        assert values, f"{path.name}: CFR.WDGTB has no curated values"
        # Every reachable code named, and each one the power of two it claims.
        for code in range(ip["feat"]["timebase_max"] + 1):
            assert values.get(f"DIV{1 << code}") == code, (
                f"{path.name}: WDGTB code {code} is not named DIV{1 << code}"
            )


def test_the_counter_has_room_for_the_arming_bit() -> None:
    # T6 is not part of the count: the reset fires when it clears. A 6-bit T
    # would make the driver's reload range (0x40..0x7F) unrepresentable.
    for path in WWDG_FILES:
        ip = yaml.safe_load(path.read_text())
        assert _field(_reg(ip, "CR"), "T").get("width") == 7, path.name


def test_the_window_watchdog_is_not_class_watchdog() -> None:
    # The class is the substitutability gate: alloy's `watchdog` role matches
    # any peripheral whose IP class is `watchdog`, so giving the WWDG that
    # class would let a board bind it where an IWDG is meant and get a
    # DIFFERENT safety contract behind an unchanged type.
    for path in WWDG_FILES:
        ip = yaml.safe_load(path.read_text())
        assert ip["class"] == "window_watchdog", path.name
