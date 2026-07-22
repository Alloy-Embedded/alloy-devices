# Architecture

## Data flow (target)

```
sources/        fetched at pipeline time by pinned SHA (never committed)
   │            STM32_open_pin_data, SVD packs (+ patches/), ATPACKs, pico-sdk, esp-idf soc
   ▼
builders/       one Python builder per vendor family (chip list, memories, pinout+routes,
   │            DMA maps, IRQ tables, IP-version assignment via fingerprint/perimap rules)
   ▼
registers/      hand-CURATED register+field maps per peripheral IP version
   │            (bootstrapped from SVD, then owned by humans; svdtools-style patches
   │             live with the SVD ingestion, not here)
   ▼
chips/          thin per-chip instance files (which IP version, base, IRQ, gate, routes,
   │            memories, vectors, clock programs)
   ▼
validate        JSON-Schema + plausibility lints (CI gate)
   ▼
publish         versioned artifact (wheel `alloy-devices-db` + release tarball);
                the alloy CLI downloads it into ~/.alloy/db — end users never run this repo
```

## Bootstrap mode (current)

Builders do not exist yet. During bootstrap:

- `registers/` and `chips/` are **hand-curated with provenance**, mined from the previous
  ecosystem's SVD-derived canonical YAML (`alloy-devices-yml` v2.1) and cross-checked
  against reference manuals and the hardware-verified artifacts of the old blink example
  (post-PLL-fix commit `6d47f2cb` in the old alloy repo).
- Every hand-curated file carries a `provenance:` block naming its sources.
- **Exit criterion** for bootstrap, per family: a builder in `builders/` regenerates the
  family's `chips/` files byte-identically from pinned sources. Only then does the family
  graduate and `chips/` become generated output (hand edits rejected by CI).

This is honest scaffolding, not a loophole: the schemas, validation and consumption
contract are final from day one; only the *production* of chip files is temporarily manual.

## Schemas

- `schema/registers.schema.json` — `alloy.registers.v1`: one peripheral IP version
  (registers, offsets, access, reset values, fields with bit/width, enums).
- `schema/chip.schema.json` — `alloy.chip.v1`: one chip (identity, cores, memories,
  peripheral instances referencing IP ids, pins, routes with kinds, interrupts,
  clock sources + programs with op vocabulary).

Schema changes are versioned; consumers (the alloy repo's codegen) pin the schema version
they understand and fail loudly on mismatch — never "best effort" parsing.
