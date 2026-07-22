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

Bootstrap phase, hand-curated with provenance (builders that regenerate chip files from
pinned vendor sources are the exit criterion — see ARCHITECTURE.md). Curated so far, all
hardware-validated by the [alloy](https://github.com/Alloy-Embedded/alloy) framework:

| Chip | IPs | Notes |
| --- | --- | --- |
| st/stm32g071rb | gpio_v2, usart_v4, rcc_g0, flash_g0 | fixes 5 bugs of the old database (memories, PLL fields) |
| microchip/atsame70q21 | pio_v1, usart_v1, pmc_v1, efc_v1, wdt_v1, matrix_v1 | write_set gates, write-once WDT first, pin mux_unlock |
| raspberrypi/rp2040 | resets, sio, io_bank0, pads_bank0, xosc, pll, clocks, uart_pl011 | reset_release gates, funcsel routes, CRC-checked boot2 payload |
| espressif/esp32 | gpio_v1, uart_v1, timg_v1, rtc_cntl_v1 | bootloader-default clocks, watchdog-disable bring-up program |

License: data files CC0/public-domain facts; code MIT OR Apache-2.0.
