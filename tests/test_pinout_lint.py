"""Tests for the pinout plausibility lint.

This lint is the only thing standing between a wrong footprint and a picture a
user will trust, so what matters is that it accepts real pinouts from every
vendor and rejects the specific shape of bad data that prompted it: a package
that gave its supply positions to GPIOs.
"""

from __future__ import annotations

import json
import sys
from pathlib import Path

import pytest
import yaml

REPO = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))

from alloy_devices.lints import check_pinout, pin_kind  # noqa: E402


def _pkg(layout: list[dict], name: str = "LQFP64") -> dict:
    return {"type": name, "pins": len(layout), "layout": layout}


def _plausible(gpios: int = 56, extras: list[str] | None = None) -> dict:
    """A pinout shaped like a real part: mostly GPIO, with supply and a reset."""
    extras = extras or ["vdd", "vdd", "vss", "vss", "vssa", "vrefp", "nrst", "boot0"]
    layout = [{"position": str(i + 1), "signal": f"pa{i}"} for i in range(gpios)]
    layout += [{"position": str(gpios + i + 1), "signal": s}
               for i, s in enumerate(extras)]
    return _pkg(layout)


# ------------------------------------------------------- what a pad is called

@pytest.mark.parametrize("signal,kind", [
    ("PA5", "gpio"), ("pa5", "gpio"),          # ST, SAM
    ("GPIO0", "gpio"), ("gpio29", "gpio"),     # RP2040, ESP32
    ("IO34", "gpio"),
    ("VDD", "power"), ("IOVDD", "power"), ("VDDCORE", "power"),
    ("GND", "ground"), ("VSS", "ground"),
    ("NRST", "reset"), ("RUN", "reset"), ("CHIP_PU", "reset"),
    ("VREFP", "analog"), ("ADC_AVDD", "analog"),
    ("XIN", "clock"), ("OSC_IN", "clock"),
    ("BOOT0", "boot"), ("TESTEN", "boot"),
    ("USB_DM", "other"), ("QSPI_SD0", "other"),
])
def test_pads_are_classified_by_name(signal: str, kind: str) -> None:
    """One table, because a builder that classified pads its own way could
    disagree with the lint about whether a package has enough supply pins."""
    assert pin_kind(signal) == kind


def test_a_gpio_spelled_the_rp2040_way_is_still_a_gpio() -> None:
    """If GPIO16 read as 'other', a package of nothing but GPIOs would count
    every one of them as a supply pin and clear the floor for the wrong reason."""
    only_gpios = _pkg([{"position": str(i + 1), "signal": f"gpio{i}"} for i in range(56)])
    problems = check_pinout(only_gpios)
    assert any("power/ground/reset" in p for p in problems)


# ------------------------------------------------------------- the real rules

def test_a_plausible_pinout_passes() -> None:
    assert check_pinout(_plausible()) == []


def test_the_failure_that_prompted_this_lint() -> None:
    """STM32G0's upstream LQFP64: 60 GPIOs and four supply pads, no reset. The
    missing positions were given to GPIOs, so the drawing would be wrong."""
    layout = [{"position": str(i + 1), "signal": f"pa{i}"} for i in range(60)]
    layout += [{"position": str(61 + i), "signal": s}
               for i, s in enumerate(["vbat", "vrefp", "vdd", "vss"])]
    problems = check_pinout(_pkg(layout))
    assert any("4 power/ground/reset pins" in p for p in problems)
    assert any("no reset pin" in p for p in problems)


def test_a_reset_pin_is_required_whatever_it_is_called() -> None:
    assert check_pinout(_plausible(extras=["vdd", "vss", "vss", "vdd",
                                           "vssa", "vrefp", "run", "testen"])) == []
    no_reset = _plausible(extras=["vdd", "vss", "vss", "vdd",
                                  "vssa", "vrefp", "vdd", "boot0"])
    assert any("no reset" in p for p in check_pinout(no_reset))


def test_a_gpio_cannot_be_on_two_pins() -> None:
    layout = [{"position": str(i + 1), "signal": "pa0" if i < 2 else f"pa{i}"}
              for i in range(56)]
    layout += [{"position": str(57 + i), "signal": s}
               for i, s in enumerate(["vdd", "vss", "vss", "vdd", "vssa",
                                      "vrefp", "nrst", "boot0"])]
    assert any("same GPIO appears" in p for p in check_pinout(layout and _pkg(layout)))


def test_positions_must_be_1_to_n_without_gaps() -> None:
    """A hole means a pin was dropped, and every position after it may be
    attributed to the wrong pad."""
    good = _plausible()
    good["layout"][10]["position"] = "99"
    assert any("without gaps" in p for p in check_pinout(good))


def test_a_declared_count_must_match_the_layout() -> None:
    pkg = _plausible()
    pkg["pins"] = 100
    assert any("declares 100 pins but lists" in p for p in check_pinout(pkg))


def test_numeric_and_grid_positions_do_not_mix() -> None:
    pkg = _plausible()
    pkg["layout"][3]["position"] = "A1"
    assert any("mixes numeric and grid" in p for p in check_pinout(pkg))


def test_an_unnamed_pad_does_not_count_towards_the_supply_floor() -> None:
    """Otherwise a pinout could clear the floor with pads that name nothing."""
    layout = [{"position": str(i + 1), "signal": f"pa{i}"} for i in range(56)]
    layout += [{"position": str(57 + i), "signal": "nc"} for i in range(7)]
    layout += [{"position": "64", "signal": "nrst"}]
    assert any("power/ground/reset" in p for p in check_pinout(_pkg(layout)))


def test_an_empty_layout_is_reported_not_crashed() -> None:
    assert check_pinout({"type": "X", "pins": 0, "layout": []}) == ["X: no pin layout"]


# --------------------------------------------------- against the real database

@pytest.mark.skipif(not (REPO / "chips").is_dir(), reason="no chips/")
def test_every_shipped_package_passes_its_own_lint() -> None:
    """A chip file carrying a package the lint rejects would be data we told
    ourselves not to ship."""
    for path in (REPO / "chips").glob("*/*.yaml"):
        package = (yaml.safe_load(path.read_text()) or {}).get("package")
        if package:
            assert check_pinout(package) == [], f"{path.name}: {check_pinout(package)}"


@pytest.mark.skipif(not list((REPO / "builders/st/cache").glob("*/data_chips_*.json"))
                    if (REPO / "builders/st/cache").is_dir() else True,
                    reason="ST cache not populated")
def test_the_families_with_complete_upstream_data_all_pass() -> None:
    """The floors are set below every value F4/F7 declare, so if these start
    failing the lint got stricter than the data it was calibrated against."""
    failures = []
    for path in (REPO / "builders/st/cache").glob("*/data_chips_*.json"):
        doc = json.loads(path.read_text())
        if doc.get("family") not in ("STM32F4", "STM32F7"):
            continue
        for pkg in doc.get("packages") or []:
            if check_pinout(pkg):
                failures.append(f"{doc['name']} {pkg['package']}")
    assert not failures, f"{len(failures)} F4/F7 packages now fail: {failures[:5]}"
