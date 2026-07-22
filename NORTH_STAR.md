# North Star — non-negotiables (data repo)

This repo is the single source of truth for every silicon fact the Alloy framework uses.
It exists because the previous ecosystem maintained the same facts in three places (canonical
YAML, hand-written C++ register structs, Python emitter dicts) and validated none of them.
**When a shortcut conflicts with this file, the shortcut loses.**

## The model (proven by embassy/stm32-data and modm)

1. **Registers are curated per peripheral IP VERSION, not per chip.**
   `registers/st/usart_v4.yaml` serves every chip that instantiates that IP. A few hundred
   IP files cover thousands of chips; one fix propagates fleet-wide.
2. **Chips are thin instance files.** `chips/<vendor>/<part>.yaml` says which IP version
   each peripheral instantiates, plus base address, IRQ, clock gate, kernel clock, pin
   routes, memories, vector table, clock programs. No register layouts in chip files, ever.
3. **Route entries carry `kind`** (`af_fixed | funcsel | full_matrix | psel`) with a
   per-kind payload. The STM32 AF model is not universal.
4. **Clock programs are data with a real op vocabulary**: `write | rmw | poll | delay` —
   register/value/mask triples alone cannot express HSERDY waits or flash-latency ordering
   (the class of bug behind the hardware-found G071 PLL fix).
5. **Every fact carries provenance.** Which source (SVD, reference manual, vendor XML,
   measured on hardware), fetched from where, verified how.

## Non-negotiable guards

1. **Schema validation + plausibility lints gate every commit.** The old repo's CI
   validated 3,126 files against a dead schema and everything passed by failing silently.
   Here: `uv run alloy-devices validate` must be green before any commit; lints reject
   0 Hz oscillators, stub pinouts, memory sizes that contradict the part number, and
   route tables without kinds.
2. **No hand edits to generated output** (`db/` once builders exist). During bootstrap
   (see ARCHITECTURE.md), `chips/` and `registers/` are hand-curated WITH provenance;
   the exit criterion for bootstrap is builders that reproduce them byte-identically.
3. **Never commit raw vendor databases.** Redistributable feeds (STM32_open_pin_data
   BSD-3, ATPACK ATDF Apache-2.0, SVD packs) are fetched by pinned SHA at pipeline time.
   EULA-gated feeds (CubeMX/CubeProg internals) are local-only enrichment whose extracted
   results are committed with provenance stamps, explicitly outside the reproducibility gate.
4. **Data quality beats coverage.** A chip enters `chips/` only with real memories, real
   routes and a validated clock section. "588 admitted devices, 3 working" is the failure
   mode this repo exists to prevent. The support matrix is generated, never hand-claimed.
5. **Fixes flow upstream.** A bug found on hardware (like the G071 PLL field offsets) is
   fixed HERE, with provenance noting the hardware verification — never patched downstream
   in generated code.

Full audit & design report: https://claude.ai/code/artifact/71838bf1-ed24-4357-8802-76e78fa32552
