# Changelog

Versions are what the `alloy` CLI resolves from PyPI, so a release here is a
release of the silicon facts every generated header is built from. Schema
changes are called out explicitly — consumers pin the schema version they
understand and fail loudly on a mismatch.

## Unreleased

### Schema

- `alloy.chip.v1` gains two **optional** peripheral keys, both for pin
  interrupts. `irq_lines` — `[{irq, first, last}]` — is `irq` for a controller
  whose numbered lines are GROUPED onto several NVIC vectors (STM32 EXTI: 0-1,
  2-3, 4-15), so the split is data instead of a constant in whatever consumes
  it. `port_index` is an I/O port's number in its chip's port-select encoding
  (EXTICR: A=0 … F=5) — a silicon fact, not the alphabetical position of the
  peripheral name, because a die that omits a port leaves a hole. Existing
  files are unaffected; a new lint checks `irq_lines` names against the
  interrupts table and rejects inverted or overlapping ranges.

### Data

- New IP `st/exti_g0` — the STM32G0 extended interrupt/event controller, the
  block that turns a GPIO edge into an NVIC interrupt. There was no EXTI
  register file in the database at all. `bring-up-subset`: bank 1 only
  (RTSR1/FTSR1/SWIER1/RPR1/FPR1/EXTICR/IMR1/EMR1), no IMR2/EMR2.
- `stm32g071rb` and `stm32g0b1` gain a curated `exti` peripheral with its three
  IRQ-line groups, and `port_index` on every GPIO port. Both chips are
  hand-verified, so the builder never supplied these.

## 0.2.0 — 2026-08-07

### Schema

- `alloy.chip.v1` gains an **optional** `package` section: the physical part,
  as `{type, pins, part, layout: [{position, signal, kind}]}`. Optional by
  design — a chip is fully usable without it, and a pinout that cannot be
  trusted is left out rather than shipped wrong. Existing files are unaffected.

### Data

- **Footprints for 238 of 412 chips.** STM32F4 149/149, STM32F7 88/89, SAME70
  1/1. The pinouts were already in the pinned upstream (`stm32-data-generated`
  for ST; the vendor ATPACK for Microchip) and simply were not read.
- STM32G0 and STM32G4 deliberately have **none**. Their upstream pin lists
  declare four supply pins on a 64-pin part and no reset at all, which means
  those positions were given to GPIOs that are supply pads on the real part.
  A wrong footprint is worse than no footprint.
- Curated the STM32 Ethernet MAC (`eth_v1`) and the F767 chip; STM32 flash
  `flash_f7` program/erase fields; Microchip EFC command/status fields.

### Tooling

- **Pinout plausibility lint** (`check_pinout`, `lint_pinouts`): a service-pin
  floor per package size, a reset pin required, positions 1..N without gaps,
  no GPIO on two pins, no mixing numeric and grid positions. The floors sit
  below every value the families with complete data declare, so tripping one
  means pins are missing, not that the part is lean.
- `pin_kind()` is the single answer to "what is this pad", shared by the lint
  and every builder. It speaks each vendor's spelling: `GPIO16` is a GPIO,
  `RUN` and `CHIP_PU` are resets, `IOVDD` is power.
- **New Microchip builder** reading `<pinouts>` out of the vendor ATPACK. The
  pack's descriptor declares no licence, so the builder checks each ATDF for
  its own `SPDX-License-Identifier: Apache-2.0` and refuses a file without one.
  The pack is cached (gitignored) and its sha256 pinned.
- `builders/manual/package_template.py` for the pinouts no vendor publishes
  machine-readably (RP2040, ESP32): prints a skeleton to fill from the
  datasheet, and `--review` holds the result to the same lint the builders
  answer to.

## 0.1.0 — 2026-07-23

First release: register maps per peripheral IP version, per-chip instance
files, schema validation and plausibility lints.
