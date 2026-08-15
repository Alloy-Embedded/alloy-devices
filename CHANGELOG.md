# Changelog

Versions are what the `alloy` CLI resolves from PyPI, so a release here is a
release of the silicon facts every generated header is built from. Schema
changes are called out explicitly — consumers pin the schema version they
understand and fail loudly on a mismatch.

## Unreleased

### Schema

- `alloy.registers.v1` gains an **optional** top-level key `personalities` — a
  list of FURTHER classes the same block can be driven as, one at a time.
  `class` has been single-valued since the schema existed, and three consumers
  read it as if a block had one job: alloy's codegen includes exactly one
  `alloy/hal/<class>/<vendor>_<ip>.hpp`, its role matcher offers an instance to
  exactly one kind of role, and `chip-info` reports one answer to "what is
  this". A general-purpose timer refutes all three. It is a PWM generator or a
  quadrature encoder counter — the same registers, the same instance, two
  drivers, and choosing one excludes the other.

  `class` keeps its meaning (the primary class, what the block is called);
  each entry in `personalities` is an additional driver header to include and
  an additional role class the instance may fill. **The consumer-visible rule
  is a question change**, not a field addition: "what class is this" has no
  single answer any more, so a consumer must ask "is this class among its
  classes". A consumer that keeps comparing for equality is not broken, it is
  narrow — it will simply never offer the second personality.

  First user: `st/tim_gp16` declares `personalities: [encoder]`.

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

- `alloy.registers.v1` gains the **same optional key, `feat`, at the top
  level** — because DEGREE turned out to have two homes and the schema had
  one. A UART's FIFO depth genuinely differs between two instances on one die,
  so it belongs to the chip file. An ADC's analog-watchdog COUNT does not: it
  is fixed by the IP version, and recording it per instance would be the same
  integer copied into every chip file that names the IP, free to drift in any
  of them. Both spellings mean the same thing, obey the same **zero means
  absent** rule, and land in the same emitted `struct feat` on the instance.

  **A name declared in both places with different values is an emit error, not
  a silent override.** An instance may not quietly contradict its own IP; if
  an instance really does differ, that is a different IP version or a new
  `feat` name, and either way somebody has to say so out loud.

  First user: `st/adc_v2` declares `analog_watchdogs: 3`.

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

- That cheap moment was taken: **a `dma_routes` triple on a stream-engine
  controller is keyed `stream`, not `channel`** (approved, design doc
  `dma-streams.md` §3.2 / open question 6). On F4/F7 ST's own documentation
  already uses "channel" for the CHSEL *source* value, the triples used the
  same word for the *stream* index, and dma_v1 channels are 1-based where
  streams are 0-based — one word carrying three meanings, one of them off by
  one, in the field a DMA driver is about to be written against. The schema
  now requires exactly one of `stream`/`channel` per triple; `channel` remains
  the key where the controller really is a channel engine (L4 bdma — no
  generated file carries one today). The builder picks the key from the
  upstream controller kind (`dma` = stream engine, `bdma` = channel engine),
  the engine-match is linted, and every generated F4/F7 file is regenerated
  (`--check` clean). Still no consumer: no alloy code reads the key — its
  only mentions there outside the design doc are two comments — the board
  emitter's phase-3 extension point (which already speaks of a
  `(controller, stream)` match) and a prose note in `dma.hpp`.

### Data

- **`raspberrypi/dma_v1` — the RP2040's DMA, curated from zero, and the
  RP2040 binds it.** Twelve channels from the vendor's own SVD at the same
  pinned commit that sourced the ADC (`pico-sdk@98a542c1`,
  `src/rp2040/hardware_regs/RP2040.svd`), with the sha256 of the exact bytes
  recorded this time — the ADC pass pinned the commit but not the digest, and a
  SHA plus a digest is checkable by a reader who has neither the file nor the
  machine. Channels are **0-based** and stay that way, like `st/dma_v2`'s
  streams and unlike `st/dma_v1`'s channels; the chip records the base as data
  (`channels: {count: 12, first: 0}`, no schema change — `channels` already
  takes any lowercase key to an integer) rather than renumbering the part to
  suit a consumer that assumes 1.

  **The DREQ table was in the SVD**, which the plan for this pass did not
  expect: all 45 request ids are `enumeratedValues` on `CH0_CTRL_TRIG/TREQ_SEL`
  with the vendor's own descriptions, so nothing in this pass is
  datasheet-derived and nothing is hand-entered. The chip carries the three
  that have a peripheral to hang them on — `adc.conv = 36`, `uart0.tx = 20`,
  `uart0.rx = 21` — under `dma_requests`, the G0's key, because the meaning is
  the same (a chip-wide id owned by the peripheral, any channel serving any
  request). No `dma_routes` and no new legality shape. SPI, I2C, PIO, PWM and
  TIMER have ids in the same enumeration and no peripheral entry on this die,
  so they are absent rather than invented.

  **Four registers per channel in four alias views, all sixteen curated**,
  because they are not sixteen registers — they are four registers and a choice
  of which write starts the transfer (the register at view offset `0xC`
  triggers). This needed no schema concept: `array` registers live outside the
  layout struct, so four overlapping views of the same words do not trip the
  overlap check, and array fields emit as position/mask `raw_field` constants,
  so `CTRL_TRIG`'s one set of accessors applies to whichever CTRL view a driver
  writes. The consumer-visible consequence is a **sequencing rule, not a
  field**: configure through `CH_AL1_CTRL` and start separately, or `setup()`
  starts the channel while configuring it. None of the three DMA engines
  already in the tree has that hazard.

  **Four absences, provable by exhaustion over the curation rather than
  asserted:** no half-transfer flag exists anywhere (the seven interrupt
  registers are one bit per channel, and `CTRL_TRIG` has no such bit); no
  circular/auto-reload bit exists; `RING_SIZE`/`RING_SEL` wrap the *address* on
  a naturally-aligned power-of-two **byte** window and leave the counter
  running down through it; and `CHAIN_TO` cannot name its own channel, that
  spelling being how chaining is disabled. `TRANS_COUNT` does hold a RELOAD
  that every trigger copies into the live counter (readable only at
  `CH_DBG_TCR`), but nothing re-triggers a halted channel by itself — so a ring
  on one channel is finite, and that is silicon rather than a driver choice.

  **Stopping is a fourth shape.** `dma_v1` clears EN; `dma_v2` clears EN and
  polls it to 0; XDMAC writes GD and polls GS. Here clearing EN only *pauses*
  (BUSY stays high), so terminating early means writing `CHAN_ABORT` and
  polling it to all-zero while in-flight transfers drain through the address
  and data FIFOs — until then, in the SVD's own words, "it is unsafe to restart
  the channel".

  **Two NVIC lines whose channel map is software, not silicon.** `INTE0` routes
  a channel to `DMA_IRQ_0`, `INTE1` to `DMA_IRQ_1`; both, either or neither is
  legal. The chip therefore binds `irq: DMA_IRQ_0` and leaves `DMA_IRQ_1`
  curated-and-unbound in the interrupt table: `irq_lines` describes lines
  GROUPED onto vectors by the silicon, and spelling this one that way would
  assert a fixed mapping that does not exist.

  One claim in the file is **inferred and marked as such** — that
  `CH_CTRL_TRIG` itself triggers. The SVD annotates the other three view-`0xC`
  registers with the trigger sentence and does not annotate this one; the
  inference is its name, its offset and those three siblings. It is the most
  consequential behavioural claim in the curation and no host test can falsify
  it, so it belongs on a hardware checklist. Not curated, and named rather than
  silently absent: the sniffer (`SNIFF_CTRL`, `SNIFF_DATA`).

  Renames, both the documented class: `DATA_SIZE` and `RING_SIZE` keep the
  SVD's encodings but not its value names (`SIZE_BYTE` would emit
  `data_size_size_byte`), and `TIMER0..3` collapse to one array with
  `TIMER_X`/`TIMER_Y` rather than per-IP accessors called `x` and `y`. No
  RP2040 DMA field is a C++ keyword — the `INT` hazard the ADC pass hit does
  not recur. The address and count registers carry **no fields at all**, which
  is forced rather than stylistic: the SVD names each whole-register field
  after its own register, and four views repeat those names.

  Measured end to end, not by string comparison: `validate` clean (78 IP files,
  440 chips, 0 errors), the emitted header compiles under `clang++ -std=c++23`
  with `sizeof(regs) == 0x44C`, and seven examples build green for both
  `raspberry_pi_pico` and `rp2040_zero` under arm-none-eabi-gcc 14.2.1. No HAL
  driver header is pulled in — codegen includes
  `alloy/hal/dma/raspberrypi_dma_v1.hpp` only when it exists, and no RP2040 DMA
  driver exists yet. **This is data only: nothing on an RP2040 can start a DMA
  transfer as of this release.**

- **`st/i2c_v2` CR1 gains `TXDMAEN` (bit 14) and `RXDMAEN` (bit 15).** The
  bring-up subset stopped at the interrupt enables, so an I2C driver on this
  IP could not arm a DMA request from data at all — and alloy's contract check
  rejects the literal that would otherwise stand in for the missing field.
  This is the register-file half of dma-streams phase 4's `i2c.rx` / `i2c.tx`
  route: the board may now state which channel serves the signal, and the
  driver has a curated bit to set. Unlike `st/i2c_v1` (one `CR2.DMAEN` for
  both directions) this IP arms each direction separately, so both land
  together — a driver that had one from data and one from a literal is the
  failure this avoids.

  Positions are transcribed from RM0444 §32.7.1 and independently
  corroborated by Renode 1.16.1's model of the same IP
  (`Peripherals/I2C/STM32F7_I2C.cs`, `.WithTag("TXDMAEN", 14, 1)` and
  `.WithFlag(15, out rxDmaReceive, name: "RXDMAEN")`). Two transcriptions,
  **not** a silicon measurement — and note that model drives something from
  bit 15 only, so an emulated leg can witness RX and never TX.

  Ships to every chip on `st/i2c_v2` at once; no per-chip regeneration.
  `CR1.TCIE` (bit 6) stays uncurated, so the AUTOEND=0 repeated-start
  hand-off still has no DMA story — see `completeness: bring-up-subset`.

- **`st/dma_v2` — the F2/F4/F7 stream engine, and the F4/F7 chips now bind
  it.** The register file the dma-streams phase-3 driver programs: the four
  split flag/clear registers (`LISR/HISR/LIFCR/HIFCR`) with their irregular
  per-stream packing (stream base bits 0/6/16/22 — spelled out as explicit
  fields, since a fixed-stride repeat cannot express it), and the 0x18-stride
  per-stream cluster `SCR/SNDTR/SPAR/SM0AR/SM1AR/SFCR` as six count-8 arrays.
  Streams are **0-based** as the silicon numbers them — deliberately unlike
  `st/dma_v1`'s 1-based channels, which is also why the route triples key on
  `stream` here. `CHSEL` is modeled 4 bits wide: measured over all 235
  generated F4/F7 chips, route request ids reach 9 on the 4-bit dies
  (F74x–F77x, F413/F423) and never exceed 7 on the 3-bit ones, so the union
  is safe with bit 28 reserved. `feat.streams = 8` sits at IP level because
  every instance has eight. Every offset, field position and width matches
  `embassy-rs/stm32-data-generated@669003ee data/registers/dma_v2.json`
  entry-by-entry (checked mechanically); RM sections are cited per register,
  and the description records the driver-contract semantics from RM §8.3
  (EN=0 is a request to be polled, flags must be cleared before EN sets,
  direct mode is the reset state).

  With the IP curated, `ip_map.yaml` maps `dma:v2` → `st/dma_v2` — **once**:
  the tag was duplicated across the map's f7 and f4 sections, and
  `yaml.safe_load` keeps the last duplicate, so flipping only one copy would
  have silently kept the mapping uncurated. The f4 duplicate is gone and both
  sites carry a comment naming the trap. All 235 generated `stm32f4*/f7*`
  chips regenerated: a uniform 470-line flip of `uncurated`/`ip_hint` to
  `ip: st/dma_v2` and nothing else (verified by sorting the diff).
  `build --check` clean for both touched families. (Recorded, not fixed:
  `--check` was already red at HEAD for g0/g4/l4 — a fresh build drops the
  committed `feat` fifo-depth blocks on stm32g0b1re/g431c6/l412c8 —
  pre-existing drift, reproduced with this change stashed.)

  The two hand-verified board chips the builder KEEPs (`stm32f722.yaml`,
  `stm32f767.yaml`, behind `nucleo_f722ze`/`nucleo_f767zi`) gain what every
  generated sibling already had: `dma1`/`dma2` on the new IP (bases
  0x40026000/0x40026400, AHB1ENR bits 21/22), per-stream NVIC vectors as
  `irq_lines` (`DMAx_Streamn`, all 16, names checked against each file's
  vector table — the per-stream "data, not grouping logic" the driver needs),
  and `dma_routes` triples for the phase-3 anchor signals: `usart3` rx/tx on
  both (debug_uart: rx = dma1 stream 1 request 4; tx = dma1 stream 3
  request 4 or stream 4 request 7), plus `usart2` and `spi1` (dma2) on the
  F722 where those are curated. Every triple equals the builder-generated
  same-die sibling's (`stm32f722re`/`stm32f767bi`) **and** the
  RM0431/RM0410 §8.3 request-mapping rows.

- **The basic and small timers: `st/tim_basic`, `st/tim_1ch`, `st/tim_1ch_cmp`,
  `st/tim_2ch_cmp`.** Four new IP files, not one, and not a reuse of
  `st/tim_gp16`. The G0's six remaining timers were all `uncurated`, and the
  cheap move — pointing TIM6/TIM7/TIM14/TIM15/TIM16/TIM17 at the existing
  general-purpose overlay — is wrong in four separate ways, each of which the
  register map states:

  - **TIM6/TIM7 have no capture/compare unit at all.** No CCMR, no CCER, no
    CCR. `st/tim_gp16` would lay four compare registers and an enable register
    over reserved address space, and a driver could "enable channel 1" on a
    block that has none.
  - **TIM14 has no CR2.** So no master-mode selection, so no trigger output.
  - **TIM16/TIM17 have a CR2, and it has no MMS either** — bits 6:4 hold the
    output-idle state instead. Only TIM6, TIM7 and TIM15 can drive TRGO.
  - **TIM15/TIM16/TIM17 gate their outputs behind `BDTR.MOE`.** A driver
    written for `tim_gp16` (which has no BDTR and never writes MOE) leaves the
    pin inactive with every other register correct — a silent failure, not a
    missing feature.

  Each file records those as DEGREE on the IP, where the fact belongs: `feat`
  carries `channels`, `complementary`, `trgo` and `moe`, so portable code asks
  a number instead of assuming a family. `trgo: 0` on TIM14/TIM16/TIM17 is the
  one that pays for itself — "use a timer to trigger the ADC" is answerable
  from data now.

  Curated as `class: tick`, because the time base is what all six share and
  what all six are usually bought for. Bring-up subsets: the input-capture view
  of CCMR1 (ICxF, ICxPSC) is unreachable on all four for the same reason it is
  on `st/tim_gp16` — fields may not overlap and the output view is the one that
  selects the view. `st/tim_2ch_cmp`'s DIER curates only `CC1IE`: upstream's
  `DIER_2CH_CMP` keeps its CCIE array at length 1 while SR and EGR widen theirs
  to 2, and an interrupt-enable bit invented from symmetry is exactly what this
  database exists to refuse.

  `builders/st/ip_map.yaml` maps the four upstream tags, so all 103 generated
  stm32g0 chip files gain the instances (and their DMA request numbers). No
  claim here is witnessed by silicon; every bit position comes from the pinned
  `stm32-data-generated@669003ee`, as each file's provenance states.

- **`st/wwdg_v2` — the OTHER watchdog, and deliberately not class `watchdog`.**
  All three registers (`CR`, `CFR`, `SR`), every field, and `CFR.WDGTB`'s eight
  values named so the prescaler is not a magic number wearing an accessor.
  `feat.timebase_max: 7` records the one thing that differs from `wwdg_v1`
  (a two-bit `WDGTB`, hence 3), so a driver clamps against data instead of a
  literal.

  The class is `window_watchdog`, NOT `watchdog`, and that is the load-bearing
  decision. Class is the substitutability gate: alloy's `watchdog` role matches
  any peripheral whose IP class is `watchdog`, so calling the WWDG one would let
  a board bind it where an IWDG is meant and silently change the safety
  contract behind an unchanged type — the IWDG only catches feeding too late,
  the WWDG resets on feeding too EARLY as well. Two classes make that
  substitution a named error instead of a working build.

  `stm32g0b1re` binds it (`kernel_clock: apb` — the WWDG counts PCLK/4096 and
  dies with PCLK, unlike the LSI-driven IWDG), and `wwdg:v2` is mapped in the
  ST builder so a regeneration reproduces it.

- **`st/adc_v2` learns its three analog watchdogs** — `ISR`/`IER` bits 7-9
  (`AWD1..3`, `AWD1IE..3IE`), `CFGR1.AWD1SGL`/`AWD1EN`/`AWD1CH`, the threshold
  registers `AWD1TR` (0x20), `AWD2TR` (0x24) and `AWD3TR` (0x2C), and the
  channel-mask registers `AWD2CR` (0xA0) and `AWD3CR` (0xA4). Before this the
  curated map stopped at `CCR` with no `TR` register and no `AWD` flag, so the
  feature was unreachable at every layer at once: no field for a typed knob to
  name, and no `regs` member for even the raw escape hatch to write.

  Bit positions are ST's own — `cmsis_device_g0` `Include/stm32g0b1xx.h`,
  every `ADC_<REG>_<FIELD>_Pos` — cross-checked against
  `stm32-data-generated@669003ee data/registers/adc_g0.json`, which agrees on
  all of them. The arming constraints in the field comments are quoted from
  ST's LL driver (`stm32g0xx_ll_adc.h`): the monitored CHANNEL is writable
  only with the ADC **disabled**, the THRESHOLDS only with no regular
  conversion in flight. **Not silicon-validated**; exercised in emulation
  against Renode's own `Analog.STM32G0_ADC`, which models watchdog 1 only.

  **One correction this curation forces on anyone who read the old file as a
  census:** this IP has THREE analog watchdogs, not one. Watchdog 1 is shaped
  differently from 2 and 3 — its enable and its single-or-all channel choice
  live in `CFGR1`, while 2 and 3 own a 19-bit channel bitmask whose non-zero
  value *is* the enable. Same count, two shapes.

- **`st/tim_gp16` learns quadrature encoder mode** — `SMCR.SMS` (+ `SMS_3`) and
  `CCMR1.CC1S`/`CC2S`, with named `values` for the three encoder modes and for
  the input mappings. Without them a driver had to hand-write the integer 3
  into SMCR and 0x0101 into CCMR1, which guard #1 forbids in `src/`. The block
  also declares `personalities: [encoder]` (see Schema above). Read from
  `stm32-data-generated@669003ee data/registers/timer_v3.json`, the sha
  `builders/st/sources.lock` already pins; **not silicon-validated**.

  Two facts about this register file that a consumer should know, both stated
  in comments next to the fields:

  - **`SMS` is discontiguous in the silicon and is two entries here.** It is
    four bits — SMS[2:0] at bits 2:0 and SMS[3] at bit 16 — and a field in this
    schema has one `bit` and one `width`. `{bit: 0, width: 4}` would claim bits
    3:1 that SMS does not own; `{bit: 0, width: 3}` alone, named `SMS`, would
    hide the fourth bit. Two fields named after the manual's own diagram is the
    only spelling that lies about neither. The encoder modes need only the low
    entry, with the high one clear.
  - **CCMR1 has two layouts and this file can hold one.** The word is the
    output-compare register or the input-capture register depending on
    CC1S/CC2S; upstream models it as two fieldsets at one offset
    (`CCMR_Output_GP16` and `CCMR_Input_2CH`, both `byte_offset` 0x18), and
    here fields of one register may not overlap. Only the input-view fields
    that do not collide are curated — CC1S/CC2S, which are also the ones that
    SELECT the view. The input filter `ICxF` (bits 7:4 / 15:12) sits on top of
    `OCxPE`/`OCxM` and is therefore **not reachable at any layer**, not even
    `alloy::dev::`, which gives a named accessor only to a curated field. For a
    bouncing mechanical encoder that is a real limitation, and it is a limit of
    the data model rather than of the driver.

- **`st/fdcanram_v1` FLSSA gains the standard-filter element format** —
  `SFT`, `SFEC`, `SFID1`, `SFID2`, with named `values` for the two encoded
  fields. Until now the section was curated as a bare word array, so a driver
  that wanted an acceptance filter had to hand-write bit 30, bit 27 and bit 16
  in `src/` — the exact thing the register database exists to prevent. From
  RM0444 rev 5 §36.4.28 and Bosch M_CAN r1 §2.4.5; **not silicon-validated**,
  the section offsets already were.

  Two consequences worth stating, because they are cross-peripheral:

  - `FLSSA_count` (28) is simultaneously the section's word count and the
    number of standard filters an instance holds — a standard filter element
    is exactly one word. The controller's `RXGFC.LSS` is **5 bits wide and
    would admit 31**, so `field_t::raw_mask` over-states the real capacity by
    three. The capacity lives on the companion, not on the controller whose
    register names it.
  - `values:` on a field of an ARRAY register used to be accepted and silently
    dropped by alloy's IP emitter (array registers have no flags enum). alloy
    now emits them as unshifted constants; a consumer older than that change
    sees the fields but not the value names.

- **`st/fdcan_v1` RXGFC gains its value encodings** — `ANFS`/`ANFE` now carry
  named values (`FIFO0`, `FIFO1`, `REJECT`) instead of only positions. A
  curated FIELD whose ENCODING is not curated still forces a magic number into
  a driver: "reject every frame that matched no filter" was the integer 2.
  `LSS`/`LSE` gain descriptions saying what the register is and is not the
  authority on. From RM0444 rev 5 §36.4.24.

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
