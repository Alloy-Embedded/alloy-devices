#pragma once

#include <array>
#include <cstdint>
#include "../../clock_tree_lite.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace devices {
namespace atsame70n21b {
enum class PeripheralId : std::uint16_t {
  ACC,
  AES,
  AFEC0,
  AFEC1,
  CHIPID,
  CoreDebug,
  DACC,
  DWT,
  EFC,
  ETM,
  FPB,
  FPU,
  GMAC,
  GPBR,
  GPIOA,
  GPIOB,
  GPIOD,
  HSMCI,
  I2SC0,
  ICM,
  ISI,
  ITM,
  LOCKBIT,
  MATRIX,
  MCAN0,
  MCAN1,
  MPU,
  NVIC,
  PMC,
  PWM0,
  PWM1,
  QSPI,
  RSTC,
  RSWDT,
  RTC,
  RTT,
  SCB,
  SCnSCB,
  SPI0,
  SSC,
  SUPC,
  SysTick,
  TC0,
  TC1,
  TC2,
  TC3,
  TPIU,
  TRNG,
  TWIHS0,
  TWIHS1,
  TWIHS2,
  UART0,
  UART1,
  UART2,
  UART3,
  UART4,
  USART0,
  USART1,
  USART2,
  USBHS,
  UTMI,
  WDT,
  XDMAC,
};

struct PeripheralInstanceDescriptor {
  PeripheralId peripheral_id;
  const char* name;
  const char* ip_name;
  const char* ip_version;
  const char* backend_schema_id;
  int instance;
  std::uintptr_t base_address;
  ClockGateId clock_gate_id;
  ResetId reset_id;
  ClockSelectorId selector_id;
  std::uint16_t interrupt_binding_offset;
  std::uint16_t interrupt_binding_count;
  std::uint16_t dma_binding_offset;
  std::uint16_t dma_binding_count;
  std::uint16_t capability_overlay_offset;
  std::uint16_t capability_overlay_count;
  int register_count;
};
inline constexpr std::array<PeripheralInstanceDescriptor, 63> kPeripheralInstances = {{
  {PeripheralId::ACC, "ACC", "acc", "acc_j", "alloy.acc.microchip-acc-j", 0, 0x40044000u, ClockGateId::atsame70n21b_gate_acc, ResetId::none, ClockSelectorId::none, 0u, 1u, 0u, 0u, 0u, 0u, 9},
  {PeripheralId::AES, "AES", "aes", "aes_w", "alloy.aes.microchip-aes-w", 0, 0x4006C000u, ClockGateId::atsame70n21b_gate_aes, ResetId::none, ClockSelectorId::none, 1u, 1u, 0u, 2u, 0u, 0u, 16},
  {PeripheralId::AFEC0, "AFEC0", "afec", "afec_s", "alloy.afec.microchip-afec-s", 0, 0x4003C000u, ClockGateId::atsame70n21b_gate_afec0, ResetId::none, ClockSelectorId::none, 2u, 1u, 2u, 1u, 0u, 10u, 29},
  {PeripheralId::AFEC1, "AFEC1", "afec", "afec_s", "alloy.afec.microchip-afec-s", 1, 0x40064000u, ClockGateId::atsame70n21b_gate_afec1, ResetId::none, ClockSelectorId::none, 3u, 1u, 3u, 1u, 10u, 2u, 29},
  {PeripheralId::CHIPID, "CHIPID", "chipid", "chipid_zk", "alloy.chipid.microchip-chipid-zk", 0, 0x400E0940u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::CoreDebug, "CoreDebug", "coredebug", nullptr, "alloy.coredebug.microchip-coredebug", 0, 0xE000EDF0u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::DACC, "DACC", "dacc", "dacc_e", "alloy.dacc.microchip-dacc-e", 0, 0x40040000u, ClockGateId::atsame70n21b_gate_dacc, ResetId::none, ClockSelectorId::none, 4u, 1u, 4u, 2u, 12u, 3u, 14},
  {PeripheralId::DWT, "DWT", "dwt", "dwt", "alloy.dwt.microchip-dwt", 0, 0xE0001000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 34},
  {PeripheralId::EFC, "EFC", "efc", "efc_y", "alloy.efc.microchip-efc-y", 0, 0x400E0C00u, ClockGateId::atsame70n21b_gate_efc, ResetId::none, ClockSelectorId::none, 5u, 1u, 0u, 0u, 15u, 1u, 5},
  {PeripheralId::ETM, "ETM", "etm", "etm", "alloy.etm.microchip-etm", 0, 0xE0041000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 40},
  {PeripheralId::FPB, "FPB", "fpb", "fpb", "alloy.fpb.microchip-fpb", 0, 0xE0002000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 17},
  {PeripheralId::FPU, "FPU", "fpu", "fpu", "alloy.fpu.microchip-fpu", 0, 0xE000EF30u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 6u, 2u, 0u, 0u, 0u, 0u, 6},
  {PeripheralId::GMAC, "GMAC", "gmac", "gmac_s", "alloy.gmac.microchip-gmac-s", 0, 0x40050000u, ClockGateId::atsame70n21b_gate_gmac, ResetId::none, ClockSelectorId::none, 8u, 6u, 0u, 0u, 16u, 19u, 114},
  {PeripheralId::GPBR, "GPBR", "gpbr", "gpbr_j", "alloy.gpbr.microchip-gpbr-j", 0, 0x400E1890u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 1},
  {PeripheralId::GPIOA, "GPIOA", "gpio", "pio_v", "alloy.gpio.microchip-pio-v", 0, 0x400E0E00u, ClockGateId::atsame70n21b_gate_gpioa, ResetId::none, ClockSelectorId::none, 14u, 1u, 6u, 1u, 35u, 11u, 54},
  {PeripheralId::GPIOB, "GPIOB", "gpio", "pio_v", "alloy.gpio.microchip-pio-v", 1, 0x400E1000u, ClockGateId::atsame70n21b_gate_gpiob, ResetId::none, ClockSelectorId::none, 15u, 1u, 0u, 0u, 0u, 0u, 54},
  {PeripheralId::GPIOD, "GPIOD", "gpio", "pio_v", "alloy.gpio.microchip-pio-v", 3, 0x400E1400u, ClockGateId::atsame70n21b_gate_gpiod, ResetId::none, ClockSelectorId::none, 16u, 1u, 0u, 0u, 0u, 0u, 54},
  {PeripheralId::HSMCI, "HSMCI", "hsmci", "hsmci_r", "alloy.hsmci.microchip-hsmci-r", 0, 0x40000000u, ClockGateId::atsame70n21b_gate_hsmci, ResetId::none, ClockSelectorId::none, 17u, 1u, 7u, 1u, 46u, 6u, 20},
  {PeripheralId::I2SC0, "I2SC0", "i2sc0", "i2sc_n", "alloy.i2sc0.microchip-i2sc-n", 0, 0x4008C000u, ClockGateId::atsame70n21b_gate_i2sc0, ResetId::none, ClockSelectorId::none, 18u, 1u, 8u, 4u, 52u, 5u, 10},
  {PeripheralId::ICM, "ICM", "icm", "icm_h", "alloy.icm.microchip-icm-h", 0, 0x40048000u, ClockGateId::atsame70n21b_gate_icm, ResetId::none, ClockSelectorId::none, 19u, 1u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::ISI, "ISI", "isi", "isi_k", "alloy.isi.microchip-isi-k", 0, 0x4004C000u, ClockGateId::atsame70n21b_gate_isi, ResetId::none, ClockSelectorId::none, 20u, 1u, 0u, 0u, 57u, 15u, 25},
  {PeripheralId::ITM, "ITM", "itm", "itm", "alloy.itm.microchip-itm", 0, 0xE0000000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::LOCKBIT, "LOCKBIT", "lockbit", "lockbit_1", "alloy.lockbit.microchip-lockbit-1", 0, 0x00000000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::MATRIX, "MATRIX", "matrix", "matrix_l", "alloy.matrix.microchip-matrix-l", 0, 0x40088000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 10},
  {PeripheralId::MCAN0, "MCAN0", "mcan", "mcan_n", "alloy.can.microchip-mcan-n", 0, 0x40030000u, ClockGateId::atsame70n21b_gate_mcan0, ResetId::none, ClockSelectorId::none, 21u, 2u, 0u, 0u, 72u, 2u, 47},
  {PeripheralId::MCAN1, "MCAN1", "mcan", "mcan_n", "alloy.can.microchip-mcan-n", 1, 0x40034000u, ClockGateId::atsame70n21b_gate_mcan1, ResetId::none, ClockSelectorId::none, 23u, 2u, 0u, 0u, 74u, 2u, 47},
  {PeripheralId::MPU, "MPU", "mpu", "mpu", "alloy.mpu.microchip-mpu", 0, 0xE000ED90u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::NVIC, "NVIC", "nvic", "nvic", "alloy.nvic.microchip-nvic", 0, 0xE000E100u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 7},
  {PeripheralId::PMC, "PMC", "pmc", "pmc_p", "alloy.pmc.microchip-pmc-p", 0, 0x400E0600u, ClockGateId::atsame70n21b_gate_pmc, ResetId::none, ClockSelectorId::none, 25u, 1u, 0u, 0u, 76u, 7u, 37},
  {PeripheralId::PWM0, "PWM0", "pwm", "pwm_y", "alloy.pwm.microchip-pwm-y", 0, 0x40020000u, ClockGateId::atsame70n21b_gate_pwm0, ResetId::none, ClockSelectorId::none, 26u, 1u, 12u, 1u, 83u, 13u, 43},
  {PeripheralId::PWM1, "PWM1", "pwm", "pwm_y", "alloy.pwm.microchip-pwm-y", 1, 0x4005C000u, ClockGateId::atsame70n21b_gate_pwm1, ResetId::none, ClockSelectorId::none, 27u, 1u, 13u, 1u, 96u, 13u, 43},
  {PeripheralId::QSPI, "QSPI", "qspi", "qspi_j", "alloy.qspi.microchip-qspi-j", 0, 0x4007C000u, ClockGateId::atsame70n21b_gate_qspi, ResetId::none, ClockSelectorId::none, 28u, 1u, 14u, 2u, 109u, 6u, 16},
  {PeripheralId::RSTC, "RSTC", "rstc", "rstc_n", "alloy.rstc.microchip-rstc-n", 0, 0x400E1800u, ClockGateId::atsame70n21b_gate_rstc, ResetId::none, ClockSelectorId::none, 29u, 1u, 0u, 0u, 0u, 0u, 3},
  {PeripheralId::RSWDT, "RSWDT", "rswdt", "rswdt_g", "alloy.rswdt.microchip-rswdt-g", 0, 0x400E1900u, ClockGateId::atsame70n21b_gate_rswdt, ResetId::none, ClockSelectorId::none, 30u, 1u, 0u, 0u, 0u, 0u, 3},
  {PeripheralId::RTC, "RTC", "rtc", "rtc_zb", "alloy.rtc.microchip-rtc-zb", 0, 0x400E1860u, ClockGateId::atsame70n21b_gate_rtc, ResetId::none, ClockSelectorId::none, 31u, 1u, 0u, 0u, 115u, 2u, 12},
  {PeripheralId::RTT, "RTT", "rtt", "rtt_m", "alloy.rtt.microchip-rtt-m", 0, 0x400E1830u, ClockGateId::atsame70n21b_gate_rtt, ResetId::none, ClockSelectorId::none, 32u, 1u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::SCB, "SCB", "scb", "scb", "alloy.scb.microchip-scb", 0, 0xE000ED00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 33u, 2u, 0u, 0u, 0u, 0u, 35},
  {PeripheralId::SCnSCB, "SCnSCB", "scnscb", nullptr, "alloy.scnscb.microchip-scnscb", 0, 0xE000E000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::SPI0, "SPI0", "spi", "spi_zm", "alloy.spi.microchip-spi-zm", 0, 0x40008000u, ClockGateId::atsame70n21b_gate_spi0, ResetId::none, ClockSelectorId::none, 35u, 1u, 16u, 2u, 117u, 4u, 11},
  {PeripheralId::SSC, "SSC", "ssc", "ssc_q", "alloy.ssc.microchip-ssc-q", 0, 0x40004000u, ClockGateId::atsame70n21b_gate_ssc, ResetId::none, ClockSelectorId::none, 36u, 1u, 18u, 2u, 121u, 6u, 18},
  {PeripheralId::SUPC, "SUPC", "supc", "supc_ze", "alloy.supc.microchip-supc-ze", 0, 0x400E1810u, ClockGateId::atsame70n21b_gate_supc, ResetId::none, ClockSelectorId::none, 37u, 1u, 0u, 0u, 127u, 14u, 7},
  {PeripheralId::SysTick, "SysTick", "systick", nullptr, "alloy.systick.microchip-systick", 0, 0xE000E010u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::TC0, "TC0", "tc", "tc_zl", "alloy.timer.microchip-tc-zl", 0, 0x4000C000u, ClockGateId::atsame70n21b_gate_tc0, ResetId::none, ClockSelectorId::none, 38u, 3u, 20u, 1u, 141u, 8u, 8},
  {PeripheralId::TC1, "TC1", "tc", "tc_zl", "alloy.timer.microchip-tc-zl", 1, 0x40010000u, ClockGateId::atsame70n21b_gate_tc1, ResetId::none, ClockSelectorId::none, 41u, 3u, 21u, 1u, 0u, 0u, 8},
  {PeripheralId::TC2, "TC2", "tc", "tc_zl", "alloy.timer.microchip-tc-zl", 2, 0x40014000u, ClockGateId::atsame70n21b_gate_tc2, ResetId::none, ClockSelectorId::none, 44u, 3u, 22u, 1u, 0u, 0u, 8},
  {PeripheralId::TC3, "TC3", "tc", "tc_zl", "alloy.timer.microchip-tc-zl", 3, 0x40054000u, ClockGateId::atsame70n21b_gate_tc3, ResetId::none, ClockSelectorId::none, 47u, 3u, 23u, 1u, 149u, 3u, 8},
  {PeripheralId::TPIU, "TPIU", "tpiu", "tpiu", "alloy.tpiu.microchip-tpiu", 0, 0xE0040000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 17},
  {PeripheralId::TRNG, "TRNG", "trng", "trng_g", "alloy.trng.microchip-trng-g", 0, 0x40070000u, ClockGateId::atsame70n21b_gate_trng, ResetId::none, ClockSelectorId::none, 50u, 1u, 0u, 0u, 0u, 0u, 6},
  {PeripheralId::TWIHS0, "TWIHS0", "twihs", "twihs_z", "alloy.i2c.microchip-twihs-z", 0, 0x40018000u, ClockGateId::atsame70n21b_gate_twihs0, ResetId::none, ClockSelectorId::none, 51u, 1u, 24u, 2u, 152u, 2u, 16},
  {PeripheralId::TWIHS1, "TWIHS1", "twihs", "twihs_z", "alloy.i2c.microchip-twihs-z", 1, 0x4001C000u, ClockGateId::atsame70n21b_gate_twihs1, ResetId::none, ClockSelectorId::none, 52u, 1u, 26u, 2u, 154u, 2u, 16},
  {PeripheralId::TWIHS2, "TWIHS2", "twihs", "twihs_z", "alloy.i2c.microchip-twihs-z", 2, 0x40060000u, ClockGateId::atsame70n21b_gate_twihs2, ResetId::none, ClockSelectorId::none, 53u, 1u, 28u, 2u, 156u, 2u, 16},
  {PeripheralId::UART0, "UART0", "uart", "uart_r", "alloy.uart.microchip-uart-r", 0, 0x400E0800u, ClockGateId::atsame70n21b_gate_uart0, ResetId::none, ClockSelectorId::none, 54u, 1u, 30u, 2u, 158u, 2u, 11},
  {PeripheralId::UART1, "UART1", "uart", "uart_r", "alloy.uart.microchip-uart-r", 1, 0x400E0A00u, ClockGateId::atsame70n21b_gate_uart1, ResetId::none, ClockSelectorId::none, 55u, 1u, 32u, 2u, 160u, 2u, 11},
  {PeripheralId::UART2, "UART2", "uart", "uart_r", "alloy.uart.microchip-uart-r", 2, 0x400E1A00u, ClockGateId::atsame70n21b_gate_uart2, ResetId::none, ClockSelectorId::none, 56u, 1u, 34u, 2u, 162u, 2u, 11},
  {PeripheralId::UART3, "UART3", "uart", "uart_r", "alloy.uart.microchip-uart-r", 3, 0x400E1C00u, ClockGateId::atsame70n21b_gate_uart3, ResetId::none, ClockSelectorId::none, 57u, 1u, 36u, 2u, 164u, 2u, 11},
  {PeripheralId::UART4, "UART4", "uart", "uart_r", "alloy.uart.microchip-uart-r", 4, 0x400E1E00u, ClockGateId::atsame70n21b_gate_uart4, ResetId::none, ClockSelectorId::none, 58u, 1u, 38u, 2u, 166u, 2u, 11},
  {PeripheralId::USART0, "USART0", "usart", "usart_zw", "alloy.uart.microchip-usart-zw", 0, 0x40024000u, ClockGateId::atsame70n21b_gate_usart0, ResetId::none, ClockSelectorId::none, 59u, 1u, 40u, 2u, 168u, 9u, 31},
  {PeripheralId::USART1, "USART1", "usart", "usart_zw", "alloy.uart.microchip-usart-zw", 1, 0x40028000u, ClockGateId::atsame70n21b_gate_usart1, ResetId::none, ClockSelectorId::none, 60u, 1u, 42u, 2u, 177u, 9u, 31},
  {PeripheralId::USART2, "USART2", "usart", "usart_zw", "alloy.uart.microchip-usart-zw", 2, 0x4002C000u, ClockGateId::atsame70n21b_gate_usart2, ResetId::none, ClockSelectorId::none, 61u, 1u, 44u, 2u, 186u, 9u, 31},
  {PeripheralId::USBHS, "USBHS", "usbhs", "usbhs_g", "alloy.usbhs.microchip-usbhs-g", 0, 0x40038000u, ClockGateId::atsame70n21b_gate_usbhs, ResetId::none, ClockSelectorId::none, 62u, 1u, 0u, 0u, 0u, 0u, 41},
  {PeripheralId::UTMI, "UTMI", "utmi", "utmi_a", "alloy.utmi.microchip-utmi-a", 0, 0x400E0400u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::WDT, "WDT", "wdt", "wdt_n", "alloy.wdt.microchip-wdt-n", 0, 0x400E1850u, ClockGateId::atsame70n21b_gate_wdt, ResetId::none, ClockSelectorId::none, 63u, 1u, 0u, 0u, 0u, 0u, 3},
  {PeripheralId::XDMAC, "XDMAC", "xdmac", "xdmac_k", "alloy.dma.microchip-xdmac-k", 0, 0x40078000u, ClockGateId::atsame70n21b_gate_xdmac, ResetId::none, ClockSelectorId::none, 64u, 1u, 0u, 0u, 0u, 0u, 17},
}};
}
}
}
}
}
