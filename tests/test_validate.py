"""Validator tests.

Each corruption tested here reproduces a real failure of the previous
ecosystem's database (family-max flash sizes, dangling references, fields
that don't exist). The validator must catch every one of them.
"""

from __future__ import annotations

import copy
from pathlib import Path
from typing import Any

import yaml

from alloy_devices.lints import run_all
from alloy_devices.loader import load_database

MINIMAL_RCC: dict[str, Any] = {
    "schema": "alloy.registers.v1",
    "vendor": "st",
    "ip": "rcc_g0",
    "provenance": {"sources": ["test"], "completeness": "bring-up-subset"},
    "registers": [
        {
            "name": "CR",
            "offset": "0x00",
            "access": "rw",
            "fields": [
                {"name": "PLLON", "bit": 24},
                {"name": "PLLRDY", "bit": 25},
            ],
        },
        {
            "name": "IOPENR",
            "offset": "0x34",
            "access": "rw",
            "fields": [{"name": "GPIOAEN", "bit": 0}],
        },
    ],
}

MINIMAL_CHIP: dict[str, Any] = {
    "schema": "alloy.chip.v1",
    "vendor": "st",
    "family": "stm32g0",
    "part": "STM32G071RB",
    "provenance": {"sources": ["test"]},
    "cores": [{"name": "cm0plus", "arch": "armv6m"}],
    "memories": [
        {"name": "flash", "kind": "flash", "base": "0x08000000", "size": 131072},
        {"name": "sram", "kind": "ram", "base": "0x20000000", "size": 36864},
    ],
    "peripherals": {
        "rcc": {"ip": "st/rcc_g0", "base": "0x40021000"},
    },
    "pins": {"pa5": {"port": "a", "index": 5}},
    "routes": [],
    "interrupts": [{"name": "USART2", "number": 28}],
    "clock": {
        "sources": {"hsi16": {"hz": 16000000}},
        "boot_source": "hsi16",
        "profiles": {
            "hsi_16mhz": {
                "sysclk_hz": 16000000,
                "ahb_hz": 16000000,
                "apb_hz": 16000000,
                "program": [
                    {"op": "poll", "peripheral": "rcc", "register": "CR",
                     "field": "PLLRDY", "equals": 1, "timeout_us": 1000},
                ],
            }
        },
    },
}


def write_db(root: Path, rcc: dict[str, Any], chip: dict[str, Any]) -> None:
    (root / "registers" / "st").mkdir(parents=True)
    (root / "chips" / "st").mkdir(parents=True)
    (root / "registers" / "st" / "rcc_g0.yaml").write_text(yaml.safe_dump(rcc))
    (root / "chips" / "st" / "stm32g071rb.yaml").write_text(yaml.safe_dump(chip))


def validate(root: Path) -> list[str]:
    db = load_database(root)
    run_all(db)
    return [str(e) for e in db.errors]


def test_minimal_database_is_clean(tmp_path: Path) -> None:
    write_db(tmp_path, MINIMAL_RCC, MINIMAL_CHIP)
    assert validate(tmp_path) == []


def test_st_flash_size_contradicting_part_number_is_rejected(tmp_path: Path) -> None:
    chip = copy.deepcopy(MINIMAL_CHIP)
    chip["memories"][0]["size"] = 512 * 1024  # the old database's family-max lie
    write_db(tmp_path, MINIMAL_RCC, chip)
    assert any("contradicts part-number" in e for e in validate(tmp_path))


def test_dangling_ip_reference_is_rejected(tmp_path: Path) -> None:
    chip = copy.deepcopy(MINIMAL_CHIP)
    chip["peripherals"]["usart2"] = {"ip": "st/usart_v4", "base": "0x40004400"}
    write_db(tmp_path, MINIMAL_RCC, chip)
    assert any("unknown IP st/usart_v4" in e for e in validate(tmp_path))


def test_clock_program_with_unknown_field_is_rejected(tmp_path: Path) -> None:
    chip = copy.deepcopy(MINIMAL_CHIP)
    chip["clock"]["profiles"]["hsi_16mhz"]["program"] = [
        {"op": "rmw", "peripheral": "rcc", "register": "CR", "fields": {"NOPE": 1}},
    ]
    write_db(tmp_path, MINIMAL_RCC, chip)
    assert any("has no field NOPE" in e for e in validate(tmp_path))


def test_field_exceeding_register_width_is_rejected(tmp_path: Path) -> None:
    rcc = copy.deepcopy(MINIMAL_RCC)
    rcc["registers"][0]["fields"].append({"name": "BAD", "bit": 30, "width": 4})
    write_db(tmp_path, rcc, MINIMAL_CHIP)
    assert any("exceeds 32-bit register" in e for e in validate(tmp_path))


def test_route_payload_must_match_kind(tmp_path: Path) -> None:
    chip = copy.deepcopy(MINIMAL_CHIP)
    chip["routes"] = [
        {"pin": "pa5", "peripheral": "rcc", "signal": "tx", "kind": "af_fixed"},  # missing af
    ]
    write_db(tmp_path, MINIMAL_RCC, chip)
    assert any("requires ['af']" in e for e in validate(tmp_path))


def test_zero_hz_clock_source_is_rejected(tmp_path: Path) -> None:
    chip = copy.deepcopy(MINIMAL_CHIP)
    chip["clock"]["sources"]["hsi16"]["hz"] = 1  # schema minimum is 1; lint wants plausible
    write_db(tmp_path, MINIMAL_RCC, chip)
    assert any("implausible frequency" in e for e in validate(tmp_path))
