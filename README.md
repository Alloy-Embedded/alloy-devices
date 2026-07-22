# alloy-devices

The device database and data pipeline for the [Alloy](../alloy) framework: register maps
curated per peripheral IP version, thin per-chip instance files (bases, IRQs, clock gates,
pin routes, memories, clock programs), validated by schema + plausibility lints, published
as a versioned artifact.

- Read [NORTH_STAR.md](NORTH_STAR.md) — the non-negotiable rules of this repo.
- Read [ARCHITECTURE.md](ARCHITECTURE.md) — pipeline stages and the bootstrap plan.

```
schema/      JSON Schemas (alloy.registers.v1, alloy.chip.v1)
registers/   register+field maps per peripheral IP version   e.g. st/usart_v4.yaml
chips/       per-chip instance files                          e.g. st/stm32g071rb.yaml
tools/       validation + lints (uv project)
```

Validate everything:

```console
$ uv run alloy-devices validate
```

## Status

Bootstrap: STM32G071RB is being hand-curated (with provenance) as the walking-skeleton
chip while the schemas and consumption contract stabilize. Builders that regenerate chip
files from pinned vendor sources are the bootstrap exit criterion — see ARCHITECTURE.md.

License: data files CC0/public-domain facts; code MIT OR Apache-2.0.
