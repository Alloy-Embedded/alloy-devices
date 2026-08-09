# Changelog

Versions are what the `alloy` CLI resolves from PyPI, so a release here is a
release of the silicon facts every generated header is built from. Schema
changes are called out explicitly — consumers pin the schema version they
understand and fail loudly on a mismatch.

## Unreleased

### Schema

- `alloy.chip.v1` gains an **optional** peripheral key `feat` — a map of
  name to non-negative integer, recording DEGREE: how MUCH of a graded silicon
  feature an instance has, when the register map cannot state it. A FIFO is
  eight bytes deep or thirty-two or absent, and no bit position says which.
  Two rules travel with it, and consumers depend on both:

  - **Zero means absent.** There is never a companion boolean; a bool and a
    count that can disagree is a bug class, and deleting the bool deletes it.
  - **A field's WIDTH is not a `feat`.** The generated accessor already knows
    it (`field_t::raw_mask`), so a maximum programmable value must be read from
    the register description, not restated here where it could drift.

  alloy emits it as a nested `struct feat` of constants on the instance
  descriptor, so a driver reads `Inst::feat::rx_fifo_depth` and a fact nobody
  wrote down is a compile error naming the instance rather than a silent zero.

  **Not yet enforced, and stated so nobody assumes it is:** a peripheral with
  no `feat` block is not a lint failure today. Absence is currently
  indistinguishable from "not recorded".

- `alloy.chip.v1` gains an **optional** peripheral key `dma_routes`. On a chip
  with no DMA request router (F4/F7/L4) a DMA "request" number is only
  meaningful relative to the controller and channel it selects on, and a signal
  usually offers several alternative channels. `dma_routes` records the whole
  triple; `dma_requests` keeps its stated meaning — a chip-wide router id —
  and is now emitted only where one exists. A new lint rejects a `dma_routes`
  entry naming a controller the chip does not have.

  **Consequence a consumer must know about:** F4/F7/L4 chips no longer emit
  `dma_requests`, so the generated `dmareq_rx` / `dmareq_tx` / `dmareq_ext`
  constants are gone on those families. Nothing breaks: every use of them in
  alloy sits behind a `requires { Inst::dmareq_… }` guard (uart.hpp:85/112,
  adc.hpp:42, pwm.hpp:46), so the DMA overloads simply stop being offered — the
  same way they already were on chips that never had them. It is a correction,
  not a loss: the numbers those families used to emit were per-stream CHSEL
  values presented as router ids, and a signal with two alternative streams had
  one of them silently dropped by the dict. `dma_routes` carries the real triple;
  it has no consumer yet, which makes now the cheap moment to change its shape.

### Data

- **UART FIFO depths recorded** for every uart-class peripheral on the chips
  alloy's boards use: ESP32 `uart0` 128/128, RP2040 `uart0` 32/32, STM32G0
  `usart1..6` 8/8, and 0/0 on the STM32F722/F767 `usart2/3` and the SAME70
  `usart1`, which have no FIFO. From vendor reference manuals; SVDs do not
  carry a depth, so this is the first fact in the database that could not have
  been machine-extracted from one.
- **`espressif/uart_v1` CONF0 gains its frame fields** — `PARITY`,
  `PARITY_EN`, `BIT_NUM`, `STOP_BIT_NUM` — so a driver can program parity and
  stop bits on a ROM-configured console instead of silently ignoring a request
  for them. Field positions are from the ESP32 TRM v4.6 §13.5 and are **not
  silicon-validated**; the offsets already were. The two-stop-bit encoding
  (`STOP_BIT_NUM=3`) is the one known to need `UART_RS485_CONF.DL1_EN` on the
  classic ESP32, and that register is not in this file.

### Corrections to 9949429's commit message

That commit's body quotes three counts the adversarial review re-measured and
found overstated. The code is unaffected; the numbers are corrected here because
a commit message cannot be.

- Routes recovered by dropping the 12-signal allow-list: the body says "291 of
  the STM32G0B1RE's 501 routes were being dropped". Measured: the old builder
  emitted 210 routes and the new one emits 430 — **220** recovered. 501 counts
  upstream entries, several of which map to the same route.
- Tree-wide growth: "+93,943 routes" and "+9,528 pins" excluded the 27 chip files
  the sweep newly added. Measured across the whole tree: routes 57,846 → 162,666
  (**+104,820**), pins 25,020 → 36,166 (**+11,146**).
- The body says every block with several genuinely distinct vectors and no
  preferred one is `uncurated`, "so nothing generates against that choice". The
  review found that is not true in general — the claim holds for the blocks it
  was thinking of, not for every such block.

### Fixed — builder

Four bugs in `builders/st/build.py`, each of which had silently shaped every
generated file. All are covered by `tests/test_builder_st.py`.

- **DMA geometry was never emitted.** `_enrich_family` looked for a peripheral
  literally named `dmamux` (upstream calls it `DMAMUX1`) and for vectors
  matching `DMA1_CHANNEL1` (upstream writes `DMA1_Channel1`). Both misses were
  silent, so `dma1` shipped with no `channels` block — `count`, `mux_offset`
  and the three IRQ lines that `st_dma_v1.hpp` reads — on **every** generated
  STM32G0 chip. Both facts are now derived, from the channel table and from
  each controller's own interrupt list, which also gets the **second**
  controller right: the G0B1's `dma2` is five channels at `mux_offset: 7`.
- **DMA requests lost their controller and channel.** For families with no
  DMAMUX the builder kept only the per-channel selector, under `dma_requests` —
  so `stm32f407vg`'s `spi1` claimed `{rx: 3, tx: 3}` where the silicon fact is
  "RX on DMA2 channel 0 **or** 2, TX on channel 3 or 5, selector 3". The
  alternatives were also collapsed by the dict. Now `dma_routes` (above).
- **`_SIGNAL_MAP` was a twelve-entry allow-list** and every route whose signal
  was not in it was dropped without a word: 291 of the STM32G0B1RE's 501, and
  with them every complementary PWM output (`ch1n`…), every timer break and
  external-trigger input, UART flow control and RS-485 `de`, I2S, comparator
  inputs, DAC outputs and USB `dm`/`dp`. Signals are now normalised, not
  filtered (+93,943 routes across the tree).
- **`irq` named the I2C ERROR vector.** With no `GLOBAL` interrupt the builder
  took upstream's first entry, and `ER` sorts before `EV` — so all 149
  `stm32f4*.yaml` (and F7/G4, 1098 instances in all, plus 37 FMPI2C) told an
  event-driven driver to attach to a vector a transfer never raises. `irq` now
  prefers the vector that carries the block's normal events. **Still open, and
  reported rather than guessed:** a block with several genuinely distinct
  vectors and no preferred one (advanced-timer BRK/CC/COM/TRG/UP, bxCAN
  RX0/RX1/TX/SCE, FDCAN IT0/IT1) keeps falling back to upstream's first entry.
  Every such block is `uncurated`, so nothing generates against that choice —
  but curating one needs a schema decision about carrying more than one vector
  per peripheral, which is the maintainer's to make.

### Added — builder inputs

- `builders/st/verified.yaml` — hardware-verification records re-stamped into
  generated `provenance.verified` (BUILDERS.md §4). A part listed here is
  GRADUATED: the builder owns its file, and regeneration can no longer delete
  what silicon taught us.
- `builders/st/patches/stm32g0.yaml` — corrections to **upstream** data, with
  provenance. A patch may only amend a peripheral the part already has, and an
  `irq` it sets must exist in that part's vector table; the run prints how many
  parts each entry reached. Three entries: port E's clock enable (upstream
  omits `GPIOE`'s RCC block *and* `GPIOEEN` from the shared register
  description — 31 parts), and the RCC vector, which upstream attaches to no
  peripheral at all on any G0 (103 parts).

### Data

- **STM32G0B1RE graduated**: `chips/st/stm32g0b1.yaml` (hand-written, 23
  peripherals) is replaced by generated `chips/st/stm32g0b1re.yaml` with all
  **65** the die has, of which **37 are curated** and **28 arrive as
  `uncurated: true`** — USB + USBRAM, UCPD1/2, LPUART1/2, LPTIM1/2, three
  comparators, CEC, CRC, CRS, TIM1/6/7/14/15/16/17, SYSCFG, TAMP, WWDG,
  DBGMCU, VREFBUF, VREFINTCAL, UID. That is the point: the gap is now visible
  instead of absent. Every hand-curated fact is reproduced
  (bases, gates, IRQ numbers, all 8 hand routes at the same AFs, the
  hardware-verified PLL program, ADC channels, DMA geometry, EXTI grouping,
  `port_index`, the FDCAN↔RAM companion); the removals are enumerated in the
  commit that landed it. Instance names follow upstream on graduation:
  `adc`→`adc1`, `dac`→`dac1`, `dmamux`→`dmamux1`.
- **27 new STM32G0 parts** — the whole G0B1 and G0C1 lines (STM32G0B1CB …
  STM32G0C1VE), which had no chip file at all.
- `ip_map.yaml` binds eight IP tags that already had a curated register file
  and were still marked `uncurated`: `exti:g0`, `pwr:g0`, `iwdg:v2`,
  `rtc:v3_base`, `dac:v4`, `can:fdcan_v1`, `fdcanram:v1`, `eth:v1c`. Each is a
  binding a hand-verified chip file already made, so leaving them uncurated
  made the builder unable to reproduce a hand-verified fact.
- `memories[].erase_size` is now read from upstream (179 files) — and
  deliberately omitted where a part's flash regions disagree on it, which is
  most of F4/F7. `emit/board.py` uses it to refuse an nvm/fs region that is not
  a whole number of pages.
- **Every I/O pin of a part** now appears under `pins:`, not only the ones some
  peripheral routes to (+9,528). Analog-only and unused pads are pins of the
  package and a configurator has to draw them. Package-level **pads** (power,
  ground, NRST) are a different matter — see the note in BUILDERS.md §8.
- Flash size corrected on 4 parts (`stm32g0b0ce/ke/re`, `stm32g0b0ve`):
  262144 → 524288. Their two 256 KiB banks are contiguous; the committed files
  predated the contiguous-run logic and contradicted their own part-number
  flash code.

## 0.3.0 — 2026-08-07

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

- `st/i2c_v2` CR1 gains **STOPIE** (bit 5). Without it an interrupt-driven I2C
  transfer never gets the event that says the transfer ended — the framework's
  `st_i2c_v2` driver reads this field, so alloy cannot generate a working
  interrupt-driven or async I2C against 0.2.0. Behaviour-checked under Renode
  (clearing that one bit and nothing else stops the interrupt arriving);
  position transcribed from RM0444, never run on silicon.
- New IP `st/exti_g0` — the STM32G0 extended interrupt/event controller, the
  block that turns a GPIO edge into an NVIC interrupt. There was no EXTI
  register file in the database at all. `bring-up-subset`: bank 1 only
  (RTSR1/FTSR1/SWIER1/RPR1/FPR1/EXTICR/IMR1/EMR1), no IMR2/EMR2.
- `stm32g071rb` and `stm32g0b1` gain a curated `exti` peripheral with its three
  IRQ-line groups, and `port_index` on every GPIO port. Both chips are
  hand-verified, so the builder never supplied these.
- Every GPIO port on those two chips gains `companions: {exti: exti}`. A pin
  driver holds a PORT, and nothing in the data told it which block turns that
  port's edges into interrupts — the same reason `dma1` names its `dmamux`
  companion. On a die with two interrupt controllers, or an EXTI that only some
  ports reach, this is the fact that says which one; on these two it is uniform,
  and stating it per port is what keeps it a fact rather than an assumption.

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
