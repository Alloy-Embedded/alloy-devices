"""Tests for the ST chip builder's fact extraction.

The builder is the only writer of chips/st/*.yaml, so a fact it drops is a
fact 400+ chip files do not have. Each test here pins one such loss that
actually happened, with a synthetic upstream document shaped exactly like the
embassy stm32-data JSON the builder reads (no network, no cache).
"""

from __future__ import annotations

import json
import sys
from pathlib import Path

import pytest
import yaml

REPO = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO))
sys.path.insert(0, str(REPO / "tools"))

from builders.st import build as stbuild  # noqa: E402


# ------------------------------------------------------------------ fixtures

# One RCC block, enough for _rcc_gate to resolve the enables used below.
RCC_IR = {
    "block/RCC": [
        {"name": "AHBENR", "byte_offset": 0x38, "fieldset": "Ahbenr"},
        {"name": "APBENR1", "byte_offset": 0x3C, "fieldset": "Apbenr1"},
        {"name": "APBENR2", "byte_offset": 0x40, "fieldset": "Apbenr2"},
        {"name": "AHB1ENR", "byte_offset": 0x30, "fieldset": "Ahb1enr"},
        {"name": "APB1ENR", "byte_offset": 0x40, "fieldset": "Apb1enr"},
    ],
    "fieldset/Ahbenr": [{"name": "DMA1EN", "bit_offset": 0},
                        {"name": "DMA2EN", "bit_offset": 1}],
    "fieldset/Apbenr1": [{"name": "USART2EN", "bit_offset": 17}],
    "fieldset/Apbenr2": [{"name": "ADCEN", "bit_offset": 20},
                         {"name": "TIM1EN", "bit_offset": 11}],
    "fieldset/Ahb1enr": [{"name": "DMA1EN", "bit_offset": 21},
                         {"name": "DMA2EN", "bit_offset": 22}],
    "fieldset/Apb1enr": [{"name": "SPI2EN", "bit_offset": 14}],
}
RCC_IR = {k: ({"items": v} if k.startswith("block/") else {"fields": v})
          for k, v in RCC_IR.items()}
OURS_BY_OFFSET = {0x38: "AHBENR", 0x3C: "APBENR1", 0x40: "APBENR2",
                  0x30: "AHB1ENR"}

CLOCK = {
    "sources": {"hsi16": {"hz": 16000000}},
    "boot_source": "hsi16",
    "profiles": {"hsi_16mhz": {"description": "d", "sysclk_hz": 16000000,
                               "ahb_hz": 16000000, "apb_hz": 16000000,
                               "program": []}},
}

IP_MAP = {
    "bdma:v1": "st/dma_v1",
    "dmamux:v1": "st/dmamux_v1",
    "gpio:v2": "st/gpio_v2",
    "usart:v4": "st/usart_v4",
    "adc:g0": "st/adc_v2",
    "timer:v3:TIM_ADV": "uncurated",
    "dma:v2": "uncurated",
    "spi:v2_i2s": "st/spi_v1",
}


def _periph(name, address, kind, version, block, **kw):
    p = {"name": name, "address": address,
         "registers": {"kind": kind, "version": version, "block": f"x/{block}"}}
    p.update(kw)
    return p


def _chip_json(peripherals, interrupts, dma_channels=(), pins=()):
    return {
        "name": "SYNTH",
        "die": "synth",
        "packages": [],
        "memory": [{"kind": "flash", "address": 0x08000000, "size": 65536},
                   {"kind": "ram", "address": 0x20000000, "size": 8192}],
        "cores": [{
            "name": "cm0p",
            "nvic_priority_bits": 2,
            "peripherals": list(peripherals),
            "interrupts": list(interrupts),
            "dma_channels": list(dma_channels),
            "pins": [{"name": n} for n in pins],
        }],
    }


def _build(monkeypatch, doc, family="stm32g0"):
    monkeypatch.setattr(stbuild, "_fetch",
                        lambda sha, path: json.dumps(doc).encode())
    chip, unmapped = stbuild.build_chip(
        "0" * 40, "SYNTH", family, IP_MAP, {}, CLOCK, RCC_IR, OURS_BY_OFFSET)
    assert not unmapped, f"synthetic fixture has unmapped tags: {unmapped}"
    return chip


# ------------------------------------------- (a) DMA geometry and the DMAMUX

# Upstream names the G0 mux DMAMUX1 and its vectors DMA1_Channel1 /
# DMA1_Channel2_3 / DMA1_Ch4_7_… . The enrichment matched the literal name
# "dmamux" and screamed the vector names in upper case, so BOTH lookups missed
# and every generated G0 chip shipped a dma1 with no channel geometry at all —
# which is exactly the block st_dma_v1.hpp reads (ch_count, ch_mux_offset,
# ch_irqline*).
G0_DMA_JSON = _chip_json(
    peripherals=[
        _periph("DMA1", 0x40020000, "bdma", "v1", "DMA",
                rcc={"bus_clock": "HCLK1",
                     "enable": {"register": "AHBENR", "field": "DMA1EN"}},
                interrupts=[{"signal": "CH1", "interrupt": "DMA1_Channel1"},
                            {"signal": "CH2", "interrupt": "DMA1_Channel2_3"},
                            {"signal": "CH3", "interrupt": "DMA1_Channel2_3"},
                            {"signal": "CH4", "interrupt": "DMA1_Ch4_7_DMA2"},
                            {"signal": "CH5", "interrupt": "DMA1_Ch4_7_DMA2"},
                            {"signal": "CH6", "interrupt": "DMA1_Ch4_7_DMA2"},
                            {"signal": "CH7", "interrupt": "DMA1_Ch4_7_DMA2"}]),
        _periph("DMA2", 0x40020400, "bdma", "v1", "DMA",
                rcc={"bus_clock": "HCLK1",
                     "enable": {"register": "AHBENR", "field": "DMA2EN"}},
                interrupts=[{"signal": f"CH{i}", "interrupt": "DMA1_Ch4_7_DMA2"}
                            for i in range(1, 6)]),
        _periph("DMAMUX1", 0x40020800, "dmamux", "v1", "DMAMUX"),
    ],
    interrupts=[{"name": "DMA1_Channel1", "number": 9},
                {"name": "DMA1_Channel2_3", "number": 10},
                {"name": "DMA1_Ch4_7_DMA2", "number": 11}],
    dma_channels=[{"name": f"DMA1_CH{i + 1}", "dma": "DMA1", "channel": i,
                   "dmamux": "DMAMUX1", "dmamux_channel": i} for i in range(7)]
    + [{"name": f"DMA2_CH{i + 1}", "dma": "DMA2", "channel": i,
        "dmamux": "DMAMUX1", "dmamux_channel": 7 + i} for i in range(5)],
)


def test_dma_geometry_survives_the_muxs_real_name(monkeypatch):
    """dma1 gets its channel block even though the mux is called DMAMUX1."""
    chip = _build(monkeypatch, G0_DMA_JSON)
    dma1 = chip["peripherals"]["dma1"]
    assert dma1["channels"] == {"count": 7, "mux_offset": 0,
                                "irqline1": 9, "irqline2_3": 10, "irqline4_7": 11}
    # And the companion must name a peripheral that exists on this chip.
    assert dma1["companions"]["mux"] in chip["peripherals"]


def test_second_dma_controller_gets_its_own_mux_offset(monkeypatch):
    """DMA2 sits behind mux channels 7..11 — offset 0 would drive DMA1's."""
    chip = _build(monkeypatch, G0_DMA_JSON)
    dma2 = chip["peripherals"]["dma2"]
    assert dma2["channels"]["count"] == 5
    assert dma2["channels"]["mux_offset"] == 7
    # All five of DMA2's channels raise the one shared vector.
    assert dma2["channels"]["irqline1"] == 11
    assert dma2["channels"]["irqline4_7"] == 11


# --------------------------------- (b) DMA requests without a DMAMUX: streams

# On F4/F7/L4 a peripheral's DMA fact is a TRIPLE — controller, stream and the
# per-stream channel selector. The builder kept only the selector under
# `dma_requests`, which (i) reads as a chip-wide request id it is not and
# (ii) collapses the alternatives: SPI1_RX on DMA2 stream 0 OR stream 2 became
# one entry `rx: 3`.
F4_DMA_JSON = _chip_json(
    peripherals=[
        _periph("DMA1", 0x40026000, "dma", "v2", "DMA",
                rcc={"bus_clock": "AHB1",
                     "enable": {"register": "AHB1ENR", "field": "DMA1EN"}}),
        _periph("DMA2", 0x40026400, "dma", "v2", "DMA",
                rcc={"bus_clock": "AHB1",
                     "enable": {"register": "AHB1ENR", "field": "DMA2EN"}}),
        _periph("SPI1", 0x40013000, "spi", "v2_i2s", "SPI",
                dma_channels=[
                    {"signal": "RX", "channel": "DMA2_CH0", "request": 3},
                    {"signal": "RX", "channel": "DMA2_CH2", "request": 3},
                    {"signal": "TX", "channel": "DMA2_CH3", "request": 3},
                    {"signal": "TX", "channel": "DMA2_CH5", "request": 3}]),
    ],
    interrupts=[{"name": "SPI1", "number": 35}],
)


def test_stream_dma_keeps_controller_and_stream(monkeypatch):
    """On a stream engine (upstream kind "dma": F4/F7) the triple is keyed
    `stream`: ST's own F4/F7 docs use "channel" for the CHSEL source value,
    and dma_v1 channels are 1-based while streams are 0-based — one key for
    both is how an off-by-one ships (docs/design/dma-streams.md §3.2)."""
    chip = _build(monkeypatch, F4_DMA_JSON, family="stm32f4")
    spi1 = chip["peripherals"]["spi1"]
    assert spi1["dma_routes"]["rx"] == [
        {"controller": "dma2", "stream": 0, "request": 3},
        {"controller": "dma2", "stream": 2, "request": 3},
    ]
    assert spi1["dma_routes"]["tx"] == [
        {"controller": "dma2", "stream": 3, "request": 3},
        {"controller": "dma2", "stream": 5, "request": 3},
    ]
    # Every controller named must be a peripheral of this chip.
    for entries in spi1["dma_routes"].values():
        for entry in entries:
            assert entry["controller"] in chip["peripherals"]
            assert "channel" not in entry


def test_channel_engine_routes_keep_the_channel_key(monkeypatch):
    """L4-shaped silicon: no router, but the controller is a channel engine
    (upstream kind "bdma"), where `channel` is the silicon's own word and
    stays. The rename is per-controller fact, not a blanket."""
    doc = _chip_json(
        peripherals=[
            _periph("DMA1", 0x40020000, "bdma", "v1", "DMA"),
            _periph("SPI2", 0x40003800, "spi", "v2_i2s", "SPI",
                    dma_channels=[
                        {"signal": "RX", "channel": "DMA1_CH4", "request": 1},
                        {"signal": "TX", "channel": "DMA1_CH5", "request": 1}]),
        ],
        interrupts=[{"name": "SPI2", "number": 36}],
    )
    chip = _build(monkeypatch, doc, family="stm32f4")
    spi2 = chip["peripherals"]["spi2"]
    assert spi2["dma_routes"]["rx"] == [
        {"controller": "dma1", "channel": 4, "request": 1}]
    assert spi2["dma_routes"]["tx"] == [
        {"controller": "dma1", "channel": 5, "request": 1}]
    for entries in spi2["dma_routes"].values():
        for entry in entries:
            assert "stream" not in entry


def test_stream_dma_does_not_masquerade_as_a_router_request(monkeypatch):
    """`dma_requests` means "id on the chip's DMA router" (schema). A per-stream
    channel selector is not one, and emitting it there made spi1 claim rx and
    tx share request 3."""
    chip = _build(monkeypatch, F4_DMA_JSON, family="stm32f4")
    assert "dma_requests" not in chip["peripherals"]["spi1"]


def test_dmamux_requests_stay_a_flat_map(monkeypatch):
    """A DMAMUX request id IS chip-wide — it selects the source on any channel
    of any controller behind the mux, so the id alone is the whole fact."""
    doc = _chip_json(
        peripherals=[
            _periph("USART2", 0x40004400, "usart", "v4", "USART",
                    rcc={"bus_clock": "PCLK1",
                         "enable": {"register": "APBENR1", "field": "USART2EN"}},
                    dma_channels=[
                        {"signal": "RX", "dmamux": "DMAMUX1", "request": 52},
                        {"signal": "TX", "dmamux": "DMAMUX1", "request": 53}]),
        ],
        interrupts=[{"name": "USART2", "number": 28}],
    )
    chip = _build(monkeypatch, doc)
    assert chip["peripherals"]["usart2"]["dma_requests"] == {"rx": 52, "tx": 53}
    assert "dma_routes" not in chip["peripherals"]["usart2"]


# ------------------------------------------ which vector `irq` actually means

# `irq` is the vector a DRIVER attaches to. The I2C splits into EV (transfer
# events) and ER (bus errors), and taking upstream's first entry took ER —
# alphabetically first, and a vector an event-driven transfer never raises.
# That was true of every generated stm32f4*.yaml.
I2C_JSON = _chip_json(
    peripherals=[
        _periph("SPI2", 0x40003800, "spi", "v2_i2s", "SPI",
                rcc={"bus_clock": "PCLK1",
                     "enable": {"register": "APB1ENR", "field": "SPI2EN"}},
                interrupts=[{"signal": "ER", "interrupt": "I2C1_ER"},
                            {"signal": "EV", "interrupt": "I2C1_EV"}]),
    ],
    interrupts=[{"name": "I2C1_EV", "number": 31},
                {"name": "I2C1_ER", "number": 32}],
)


def test_irq_is_the_event_vector_not_the_error_vector(monkeypatch):
    chip = _build(monkeypatch, I2C_JSON, family="stm32f4")
    assert chip["peripherals"]["spi2"]["irq"] == "I2C1_EV"


def test_a_global_vector_still_wins(monkeypatch):
    doc = _chip_json(
        peripherals=[
            _periph("SPI2", 0x40003800, "spi", "v2_i2s", "SPI",
                    rcc={"bus_clock": "PCLK1",
                         "enable": {"register": "APB1ENR", "field": "SPI2EN"}},
                    interrupts=[{"signal": "EV", "interrupt": "I2C1_EV"},
                                {"signal": "GLOBAL", "interrupt": "SPI2"}]),
        ],
        interrupts=[{"name": "SPI2", "number": 36}, {"name": "I2C1_EV", "number": 31}],
    )
    chip = _build(monkeypatch, doc, family="stm32f4")
    assert chip["peripherals"]["spi2"]["irq"] == "SPI2"


# ------------------------------------------------- (c) the signal allow-list

# _SIGNAL_MAP listed twelve signals. Everything else — complementary PWM
# outputs, timer break and external-trigger inputs, UART flow control, I2S,
# comparator inputs, DAC outputs, USB DM/DP — was dropped without a word, which
# is 58% of the STM32G0B1RE's routes.
SIGNALS_JSON = _chip_json(
    peripherals=[
        _periph("GPIOA", 0x50000000, "gpio", "v2", "GPIO"),
        _periph("TIM1", 0x40012C00, "timer", "v3", "TIM_ADV",
                rcc={"bus_clock": "PCLK2",
                     "enable": {"register": "APBENR2", "field": "TIM1EN"}},
                pins=[{"pin": "PA7", "signal": "CH1N", "af": 2},
                      {"pin": "PA12", "signal": "ETR", "af": 2},
                      {"pin": "PA6", "signal": "BK", "af": 2},
                      {"pin": "PA8", "signal": "CH1", "af": 2}]),
        _periph("USART2", 0x40004400, "usart", "v4", "USART",
                rcc={"bus_clock": "PCLK1",
                     "enable": {"register": "APBENR1", "field": "USART2EN"}},
                pins=[{"pin": "PA0", "signal": "CTS", "af": 1},
                      {"pin": "PA1", "signal": "DE", "af": 1},
                      {"pin": "PA2", "signal": "TX", "af": 1}]),
    ],
    interrupts=[{"name": "TIM1_CC", "number": 14}],
    pins=["PA0", "PA1", "PA2", "PA6", "PA7", "PA8", "PA12"],
)


@pytest.mark.parametrize("pin,periph,signal", [
    ("pa7", "tim1", "ch1n"),     # complementary PWM output
    ("pa12", "tim1", "etr"),     # external trigger
    ("pa6", "tim1", "bk"),       # break input
    ("pa0", "usart2", "cts"),    # flow control
    ("pa1", "usart2", "de"),     # RS-485 driver enable
])
def test_routes_outside_the_old_allow_list_are_emitted(monkeypatch, pin, periph, signal):
    chip = _build(monkeypatch, SIGNALS_JSON)
    assert {"pin": pin, "peripheral": periph, "signal": signal,
            "kind": "af_fixed", "af": 2 if periph == "tim1" else 1} in chip["routes"]


def test_known_signals_keep_their_names(monkeypatch):
    """The twelve that were mapped must not drift: NSS is still `cs`, and the
    ones that pass straight through are unchanged."""
    chip = _build(monkeypatch, SIGNALS_JSON)
    assert {"pin": "pa2", "peripheral": "usart2", "signal": "tx",
            "kind": "af_fixed", "af": 1} in chip["routes"]
    assert {"pin": "pa8", "peripheral": "tim1", "signal": "ch1",
            "kind": "af_fixed", "af": 2} in chip["routes"]
    assert stbuild._signal("NSS") == "cs"


def test_every_route_signal_is_schema_legal(monkeypatch):
    """The schema's route signal pattern is ^[a-z][a-z0-9_]*$ — a normalizer
    that let `VREF+` or `I2S_SD` through raw would fail validation."""
    import re
    chip = _build(monkeypatch, SIGNALS_JSON)
    for route in chip["routes"]:
        assert re.match(r"^[a-z][a-z0-9_]*$", route["signal"]), route


# ------------------------------------------------ (3) every pin, not just AFs

def test_pins_carry_the_whole_package_not_only_routed_ones(monkeypatch):
    """A configurator draws pins; a pin with no alternate function (analog-only,
    or simply unused by any peripheral) is still a pin of the part. The upstream
    core pin list is the honest source for it."""
    chip = _build(monkeypatch, SIGNALS_JSON)
    routed = {r["pin"] for r in chip["routes"]}
    assert "pa12" in routed
    # PA0..PA12 are all declared by the fixture's core pin list.
    for name in ("pa0", "pa1", "pa2", "pa6", "pa7", "pa8", "pa12"):
        assert name in chip["pins"], name
    assert chip["pins"]["pa12"] == {"port": "a", "index": 12}


# --------------------------------------- flash erase granularity from upstream

def test_erase_size_comes_from_upstream_when_the_banks_agree(monkeypatch):
    doc = _chip_json(peripherals=[_periph("GPIOA", 0x50000000, "gpio", "v2", "GPIO")],
                     interrupts=[])
    doc["memory"] = [
        {"name": "BANK_1", "kind": "flash", "address": 0x08000000, "size": 0x40000,
         "settings": {"erase_size": 2048}},
        {"name": "BANK_2", "kind": "flash", "address": 0x08040000, "size": 0x40000,
         "settings": {"erase_size": 2048}},
        {"name": "SRAM", "kind": "ram", "address": 0x20000000, "size": 0x24000},
    ]
    chip = _build(monkeypatch, doc)
    flash = chip["memories"][0]
    assert flash["size"] == 0x80000, "two contiguous banks are one flash run"
    assert flash["erase_size"] == 2048


def test_erase_size_is_omitted_when_the_sectors_disagree(monkeypatch):
    """F4/F7 flash is not uniform (16 K, 64 K then 128 K sectors). One number
    cannot describe it, and a wrong one makes emit/board.py bless an nvm region
    that erases across its neighbour."""
    doc = _chip_json(peripherals=[_periph("GPIOA", 0x50000000, "gpio", "v2", "GPIO")],
                     interrupts=[])
    doc["memory"] = [
        {"name": "BANK_1_REGION_1", "kind": "flash", "address": 0x08000000,
         "size": 0x10000, "settings": {"erase_size": 16384}},
        {"name": "BANK_1_REGION_2", "kind": "flash", "address": 0x08010000,
         "size": 0x10000, "settings": {"erase_size": 65536}},
        {"name": "SRAM", "kind": "ram", "address": 0x20000000, "size": 0x24000},
    ]
    chip = _build(monkeypatch, doc, family="stm32f4")
    assert "erase_size" not in chip["memories"][0]


# ---------------------------------------------- patches: bounded on purpose

def _patch(**kw):
    base = {"id": "t", "parts": ["SYNTH"], "peripherals": {}}
    base.update(kw)
    return base


def test_a_patch_amends_a_peripheral_the_part_has(monkeypatch):
    chip = _build(monkeypatch, SIGNALS_JSON)
    applied: dict[str, int] = {}
    stbuild._apply_patches(
        [_patch(peripherals={"gpioa": {"gate": {"peripheral": "rcc",
                                               "register": "IOPENR", "bit": 4}}})],
        "SYNTH", chip, applied)
    assert chip["peripherals"]["gpioa"]["gate"]["bit"] == 4
    assert applied["t"] == 1


def test_a_patch_never_invents_a_peripheral(monkeypatch):
    chip = _build(monkeypatch, SIGNALS_JSON)
    applied: dict[str, int] = {}
    stbuild._apply_patches([_patch(peripherals={"gpioz": {"base": "0xDEADBEEF"}})],
                           "SYNTH", chip, applied)
    assert "gpioz" not in chip["peripherals"]
    assert applied == {}, "a patch that fits nothing must not report a hit"


def test_a_patch_cannot_name_a_vector_the_part_does_not_have(monkeypatch):
    """The two G0 RCC-vector patches are disjoint only because of this rule —
    a part's table names the vector RCC_CRS or RCC, never both."""
    chip = _build(monkeypatch, SIGNALS_JSON)
    applied: dict[str, int] = {}
    stbuild._apply_patches([_patch(peripherals={"usart2": {"irq": "NO_SUCH_VECTOR"}})],
                           "SYNTH", chip, applied)
    assert chip["peripherals"]["usart2"].get("irq") != "NO_SUCH_VECTOR"
    assert applied == {}


def test_a_patch_only_touches_the_parts_it_names(monkeypatch):
    chip = _build(monkeypatch, SIGNALS_JSON)
    applied: dict[str, int] = {}
    stbuild._apply_patches(
        [_patch(parts=["STM32G0B*"], peripherals={"gpioa": {"base": "0xDEADBEEF"}})],
        "STM32G071RB", chip, applied)
    assert chip["peripherals"]["gpioa"]["base"] != "0xDEADBEEF"


# ------------------------------------ graduation: hardware notes are restamped

def test_the_shipped_verified_records_name_real_parts():
    """A record keyed to a part that no longer generates would silently stop
    being stamped anywhere — the exact failure mode verified.yaml exists to
    prevent."""
    records = stbuild._load_verified()
    assert records, "verified.yaml must not be empty while a part is graduated"
    for part, notes in records.items():
        path = REPO / "chips" / "st" / f"{part.lower()}.yaml"
        assert path.exists(), f"{part} is graduated but {path.name} does not exist"
        doc = yaml.safe_load(path.read_text())
        assert doc["part"].upper() == part
        assert doc["provenance"]["verified"] == list(notes), (
            f"{part}: the shipped file's verified block is not what verified.yaml "
            f"says — regenerate")
