#pragma once

#include <array>
#include <cstdint>

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
  const char* rcc_enable_signal;
  const char* rcc_reset_signal;
  const char* clock_gate_id;
  const char* reset_id;
  const char* selector_id;
  std::uint16_t interrupt_binding_offset;
  std::uint16_t interrupt_binding_count;
  std::uint16_t dma_binding_offset;
  std::uint16_t dma_binding_count;
  std::uint16_t capability_overlay_offset;
  std::uint16_t capability_overlay_count;
  const char* interrupt_names;
  const char* capability_overlay_ids;
  int register_count;
};
inline constexpr std::array<PeripheralInstanceDescriptor, 63> kPeripheralInstances = {{
  {PeripheralId::ACC, "ACC", "acc", "acc_j", "alloy.acc.microchip-acc-j", 0, 0x40044000u, "PMC.PID33", nullptr, "gate:acc", nullptr, nullptr, 0u, 1u, 0u, 0u, 0u, 0u, "ACC", "", 9},
  {PeripheralId::AES, "AES", "aes", "aes_w", "alloy.aes.microchip-aes-w", 0, 0x4006C000u, "PMC.PID56", nullptr, "gate:aes", nullptr, nullptr, 1u, 1u, 0u, 2u, 0u, 0u, "AES", "", 16},
  {PeripheralId::AFEC0, "AFEC0", "afec", "afec_s", "alloy.afec.microchip-afec-s", 0, 0x4003C000u, "PMC.PID29", nullptr, "gate:afec0", nullptr, nullptr, 2u, 1u, 2u, 1u, 0u, 10u, "AFEC0", "capability-instance:afec0:lqfp100:ad0,capability-instance:afec0:lqfp100:ad1,capability-instance:afec0:lqfp100:ad10,capability-instance:afec0:lqfp100:ad2,capability-instance:afec0:lqfp100:ad5,capability-instance:afec0:lqfp100:ad6,capability-instance:afec0:lqfp100:ad7,capability-instance:afec0:lqfp100:ad8,capability-instance:afec0:lqfp100:ad9,capability-instance:afec0:lqfp100:adtrg", 29},
  {PeripheralId::AFEC1, "AFEC1", "afec", "afec_s", "alloy.afec.microchip-afec-s", 1, 0x40064000u, "PMC.PID40", nullptr, "gate:afec1", nullptr, nullptr, 3u, 1u, 3u, 1u, 10u, 2u, "AFEC1", "capability-instance:afec1:lqfp100:ad0,capability-instance:afec1:lqfp100:adtrg", 29},
  {PeripheralId::CHIPID, "CHIPID", "chipid", "chipid_zk", "alloy.chipid.microchip-chipid-zk", 0, 0x400E0940u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 2},
  {PeripheralId::CoreDebug, "CoreDebug", "coredebug", nullptr, "alloy.coredebug.microchip-coredebug", 0, 0xE000EDF0u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 4},
  {PeripheralId::DACC, "DACC", "dacc", "dacc_e", "alloy.dacc.microchip-dacc-e", 0, 0x40040000u, "PMC.PID30", nullptr, "gate:dacc", nullptr, nullptr, 4u, 1u, 4u, 2u, 12u, 3u, "DACC", "capability-instance:dacc:lqfp100:dac0,capability-instance:dacc:lqfp100:dac1,capability-instance:dacc:lqfp100:datrg", 14},
  {PeripheralId::DWT, "DWT", "dwt", "dwt", "alloy.dwt.microchip-dwt", 0, 0xE0001000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 34},
  {PeripheralId::EFC, "EFC", "efc", "efc_y", "alloy.efc.microchip-efc-y", 0, 0x400E0C00u, "PMC.PID6", nullptr, "gate:efc", nullptr, nullptr, 5u, 1u, 0u, 0u, 15u, 1u, "EFC", "capability-instance:efc:lqfp100:erase", 5},
  {PeripheralId::ETM, "ETM", "etm", "etm", "alloy.etm.microchip-etm", 0, 0xE0041000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 40},
  {PeripheralId::FPB, "FPB", "fpb", "fpb", "alloy.fpb.microchip-fpb", 0, 0xE0002000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 17},
  {PeripheralId::FPU, "FPU", "fpu", "fpu", "alloy.fpu.microchip-fpu", 0, 0xE000EF30u, nullptr, nullptr, nullptr, nullptr, nullptr, 6u, 2u, 0u, 0u, 0u, 0u, "FPU,IXC", "", 6},
  {PeripheralId::GMAC, "GMAC", "gmac", "gmac_s", "alloy.gmac.microchip-gmac-s", 0, 0x40050000u, "PMC.PID39", nullptr, "gate:gmac", nullptr, nullptr, 8u, 6u, 0u, 0u, 16u, 19u, "GMAC,GMAC_Q1,GMAC_Q2,GMAC_Q3,GMAC_Q4,GMAC_Q5", "capability-instance:gmac:lqfp100:gcol,capability-instance:gmac:lqfp100:gcrs,capability-instance:gmac:lqfp100:gmdc,capability-instance:gmac:lqfp100:gmdio,capability-instance:gmac:lqfp100:grx0,capability-instance:gmac:lqfp100:grx1,capability-instance:gmac:lqfp100:grx2,capability-instance:gmac:lqfp100:grx3,capability-instance:gmac:lqfp100:grxck,capability-instance:gmac:lqfp100:grxdv,capability-instance:gmac:lqfp100:grxer,capability-instance:gmac:lqfp100:gtsucomp,capability-instance:gmac:lqfp100:gtx0,capability-instance:gmac:lqfp100:gtx1,capability-instance:gmac:lqfp100:gtx2,capability-instance:gmac:lqfp100:gtx3,capability-instance:gmac:lqfp100:gtxck,capability-instance:gmac:lqfp100:gtxen,capability-instance:gmac:lqfp100:gtxer", 114},
  {PeripheralId::GPBR, "GPBR", "gpbr", "gpbr_j", "alloy.gpbr.microchip-gpbr-j", 0, 0x400E1890u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 1},
  {PeripheralId::GPIOA, "GPIOA", "gpio", "pio_v", "alloy.gpio.microchip-pio-v", 0, 0x400E0E00u, "PMC.PID10", nullptr, "gate:gpioa", nullptr, nullptr, 14u, 1u, 6u, 1u, 35u, 11u, "PIOA", "capability-instance:gpioa:lqfp100:piodc0,capability-instance:gpioa:lqfp100:piodc1,capability-instance:gpioa:lqfp100:piodc2,capability-instance:gpioa:lqfp100:piodc3,capability-instance:gpioa:lqfp100:piodc4,capability-instance:gpioa:lqfp100:piodc5,capability-instance:gpioa:lqfp100:piodc6,capability-instance:gpioa:lqfp100:piodc7,capability-instance:gpioa:lqfp100:piodcclk,capability-instance:gpioa:lqfp100:piodcen1,capability-instance:gpioa:lqfp100:piodcen2", 54},
  {PeripheralId::GPIOB, "GPIOB", "gpio", "pio_v", "alloy.gpio.microchip-pio-v", 1, 0x400E1000u, "PMC.PID11", nullptr, "gate:gpiob", nullptr, nullptr, 15u, 1u, 0u, 0u, 0u, 0u, "PIOB", "", 54},
  {PeripheralId::GPIOD, "GPIOD", "gpio", "pio_v", "alloy.gpio.microchip-pio-v", 3, 0x400E1400u, "PMC.PID16", nullptr, "gate:gpiod", nullptr, nullptr, 16u, 1u, 0u, 0u, 0u, 0u, "PIOD", "", 54},
  {PeripheralId::HSMCI, "HSMCI", "hsmci", "hsmci_r", "alloy.hsmci.microchip-hsmci-r", 0, 0x40000000u, "PMC.PID18", nullptr, "gate:hsmci", nullptr, nullptr, 17u, 1u, 7u, 1u, 46u, 6u, "HSMCI", "capability-instance:hsmci:lqfp100:mccda,capability-instance:hsmci:lqfp100:mcck,capability-instance:hsmci:lqfp100:mcda0,capability-instance:hsmci:lqfp100:mcda1,capability-instance:hsmci:lqfp100:mcda2,capability-instance:hsmci:lqfp100:mcda3", 20},
  {PeripheralId::I2SC0, "I2SC0", "i2sc0", "i2sc_n", "alloy.i2sc0.microchip-i2sc-n", 0, 0x4008C000u, "PMC.PID69", nullptr, "gate:i2sc0", nullptr, nullptr, 18u, 1u, 8u, 4u, 52u, 5u, "I2SC0", "capability-instance:i2sc0:lqfp100:ck,capability-instance:i2sc0:lqfp100:di0,capability-instance:i2sc0:lqfp100:do0,capability-instance:i2sc0:lqfp100:mck,capability-instance:i2sc0:lqfp100:ws", 10},
  {PeripheralId::ICM, "ICM", "icm", "icm_h", "alloy.icm.microchip-icm-h", 0, 0x40048000u, "PMC.PID32", nullptr, "gate:icm", nullptr, nullptr, 19u, 1u, 0u, 0u, 0u, 0u, "ICM", "", 11},
  {PeripheralId::ISI, "ISI", "isi", "isi_k", "alloy.isi.microchip-isi-k", 0, 0x4004C000u, "PMC.PID59", nullptr, "gate:isi", nullptr, nullptr, 20u, 1u, 0u, 0u, 57u, 15u, "ISI", "capability-instance:isi:lqfp100:d0,capability-instance:isi:lqfp100:d1,capability-instance:isi:lqfp100:d10,capability-instance:isi:lqfp100:d11,capability-instance:isi:lqfp100:d2,capability-instance:isi:lqfp100:d3,capability-instance:isi:lqfp100:d4,capability-instance:isi:lqfp100:d5,capability-instance:isi:lqfp100:d6,capability-instance:isi:lqfp100:d7,capability-instance:isi:lqfp100:d8,capability-instance:isi:lqfp100:d9,capability-instance:isi:lqfp100:hsync,capability-instance:isi:lqfp100:pck,capability-instance:isi:lqfp100:vsync", 25},
  {PeripheralId::ITM, "ITM", "itm", "itm", "alloy.itm.microchip-itm", 0, 0xE0000000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 4},
  {PeripheralId::LOCKBIT, "LOCKBIT", "lockbit", "lockbit_1", "alloy.lockbit.microchip-lockbit-1", 0, 0x00000000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 4},
  {PeripheralId::MATRIX, "MATRIX", "matrix", "matrix_l", "alloy.matrix.microchip-matrix-l", 0, 0x40088000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 10},
  {PeripheralId::MCAN0, "MCAN0", "mcan", "mcan_n", "alloy.can.microchip-mcan-n", 0, 0x40030000u, "PMC.PID35", nullptr, "gate:mcan0", nullptr, nullptr, 21u, 2u, 0u, 0u, 72u, 2u, "MCAN0_INT0,MCAN0_INT1", "capability-instance:mcan0:lqfp100:rx,capability-instance:mcan0:lqfp100:tx", 47},
  {PeripheralId::MCAN1, "MCAN1", "mcan", "mcan_n", "alloy.can.microchip-mcan-n", 1, 0x40034000u, "PMC.PID37", nullptr, "gate:mcan1", nullptr, nullptr, 23u, 2u, 0u, 0u, 74u, 2u, "MCAN1_INT0,MCAN1_INT1", "capability-instance:mcan1:lqfp100:rx,capability-instance:mcan1:lqfp100:tx", 47},
  {PeripheralId::MPU, "MPU", "mpu", "mpu", "alloy.mpu.microchip-mpu", 0, 0xE000ED90u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::NVIC, "NVIC", "nvic", "nvic", "alloy.nvic.microchip-nvic", 0, 0xE000E100u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 7},
  {PeripheralId::PMC, "PMC", "pmc", "pmc_p", "alloy.pmc.microchip-pmc-p", 0, 0x400E0600u, "PMC.PID5", nullptr, "gate:pmc", nullptr, nullptr, 25u, 1u, 0u, 0u, 76u, 7u, "PMC", "capability-instance:pmc:lqfp100:pck0,capability-instance:pmc:lqfp100:pck1,capability-instance:pmc:lqfp100:pck2,capability-instance:pmc:lqfp100:xin,capability-instance:pmc:lqfp100:xin32,capability-instance:pmc:lqfp100:xout,capability-instance:pmc:lqfp100:xout32", 37},
  {PeripheralId::PWM0, "PWM0", "pwm", "pwm_y", "alloy.pwm.microchip-pwm-y", 0, 0x40020000u, "PMC.PID31", nullptr, "gate:pwm0", nullptr, nullptr, 26u, 1u, 12u, 1u, 83u, 13u, "PWM0", "capability-instance:pwm0:lqfp100:pwmextrg0,capability-instance:pwm0:lqfp100:pwmextrg1,capability-instance:pwm0:lqfp100:pwmfi0,capability-instance:pwm0:lqfp100:pwmfi1,capability-instance:pwm0:lqfp100:pwmfi2,capability-instance:pwm0:lqfp100:pwmh0,capability-instance:pwm0:lqfp100:pwmh1,capability-instance:pwm0:lqfp100:pwmh2,capability-instance:pwm0:lqfp100:pwmh3,capability-instance:pwm0:lqfp100:pwml0,capability-instance:pwm0:lqfp100:pwml1,capability-instance:pwm0:lqfp100:pwml2,capability-instance:pwm0:lqfp100:pwml3", 43},
  {PeripheralId::PWM1, "PWM1", "pwm", "pwm_y", "alloy.pwm.microchip-pwm-y", 1, 0x4005C000u, "PMC.PID60", nullptr, "gate:pwm1", nullptr, nullptr, 27u, 1u, 13u, 1u, 96u, 13u, "PWM1", "capability-instance:pwm1:lqfp100:pwmextrg0,capability-instance:pwm1:lqfp100:pwmextrg1,capability-instance:pwm1:lqfp100:pwmfi0,capability-instance:pwm1:lqfp100:pwmfi1,capability-instance:pwm1:lqfp100:pwmfi2,capability-instance:pwm1:lqfp100:pwmh0,capability-instance:pwm1:lqfp100:pwmh1,capability-instance:pwm1:lqfp100:pwmh2,capability-instance:pwm1:lqfp100:pwmh3,capability-instance:pwm1:lqfp100:pwml0,capability-instance:pwm1:lqfp100:pwml1,capability-instance:pwm1:lqfp100:pwml2,capability-instance:pwm1:lqfp100:pwml3", 43},
  {PeripheralId::QSPI, "QSPI", "qspi", "qspi_j", "alloy.qspi.microchip-qspi-j", 0, 0x4007C000u, "PMC.PID43", nullptr, "gate:qspi", nullptr, nullptr, 28u, 1u, 14u, 2u, 109u, 6u, "QSPI", "capability-instance:qspi:lqfp100:qcs,capability-instance:qspi:lqfp100:qio0,capability-instance:qspi:lqfp100:qio1,capability-instance:qspi:lqfp100:qio2,capability-instance:qspi:lqfp100:qio3,capability-instance:qspi:lqfp100:qsck", 16},
  {PeripheralId::RSTC, "RSTC", "rstc", "rstc_n", "alloy.rstc.microchip-rstc-n", 0, 0x400E1800u, "PMC.PID1", nullptr, "gate:rstc", nullptr, nullptr, 29u, 1u, 0u, 0u, 0u, 0u, "RSTC", "", 3},
  {PeripheralId::RSWDT, "RSWDT", "rswdt", "rswdt_g", "alloy.rswdt.microchip-rswdt-g", 0, 0x400E1900u, "PMC.PID63", nullptr, "gate:rswdt", nullptr, nullptr, 30u, 1u, 0u, 0u, 0u, 0u, "RSWDT", "", 3},
  {PeripheralId::RTC, "RTC", "rtc", "rtc_zb", "alloy.rtc.microchip-rtc-zb", 0, 0x400E1860u, "PMC.PID2", nullptr, "gate:rtc", nullptr, nullptr, 31u, 1u, 0u, 0u, 115u, 2u, "RTC", "capability-instance:rtc:lqfp100:rtcout0,capability-instance:rtc:lqfp100:rtcout1", 12},
  {PeripheralId::RTT, "RTT", "rtt", "rtt_m", "alloy.rtt.microchip-rtt-m", 0, 0x400E1830u, "PMC.PID3", nullptr, "gate:rtt", nullptr, nullptr, 32u, 1u, 0u, 0u, 0u, 0u, "RTT", "", 4},
  {PeripheralId::SCB, "SCB", "scb", "scb", "alloy.scb.microchip-scb", 0, 0xE000ED00u, nullptr, nullptr, nullptr, nullptr, nullptr, 33u, 2u, 0u, 0u, 0u, 0u, "CCW,CCF", "", 35},
  {PeripheralId::SCnSCB, "SCnSCB", "scnscb", nullptr, "alloy.scnscb.microchip-scnscb", 0, 0xE000E000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 2},
  {PeripheralId::SPI0, "SPI0", "spi", "spi_zm", "alloy.spi.microchip-spi-zm", 0, 0x40008000u, "PMC.PID21", nullptr, "gate:spi0", nullptr, nullptr, 35u, 1u, 16u, 2u, 117u, 4u, "SPI0", "capability-instance:spi0:lqfp100:cs,capability-instance:spi0:lqfp100:miso,capability-instance:spi0:lqfp100:mosi,capability-instance:spi0:lqfp100:sck", 11},
  {PeripheralId::SSC, "SSC", "ssc", "ssc_q", "alloy.ssc.microchip-ssc-q", 0, 0x40004000u, "PMC.PID22", nullptr, "gate:ssc", nullptr, nullptr, 36u, 1u, 18u, 2u, 121u, 6u, "SSC", "capability-instance:ssc:lqfp100:rd,capability-instance:ssc:lqfp100:rf,capability-instance:ssc:lqfp100:rk,capability-instance:ssc:lqfp100:td,capability-instance:ssc:lqfp100:tf,capability-instance:ssc:lqfp100:tk", 18},
  {PeripheralId::SUPC, "SUPC", "supc", "supc_ze", "alloy.supc.microchip-supc-ze", 0, 0x400E1810u, "PMC.PID0", nullptr, "gate:supc", nullptr, nullptr, 37u, 1u, 0u, 0u, 127u, 14u, "SUPC", "capability-instance:supc:lqfp100:wkup0,capability-instance:supc:lqfp100:wkup1,capability-instance:supc:lqfp100:wkup10,capability-instance:supc:lqfp100:wkup11,capability-instance:supc:lqfp100:wkup12,capability-instance:supc:lqfp100:wkup13,capability-instance:supc:lqfp100:wkup2,capability-instance:supc:lqfp100:wkup3,capability-instance:supc:lqfp100:wkup4,capability-instance:supc:lqfp100:wkup5,capability-instance:supc:lqfp100:wkup6,capability-instance:supc:lqfp100:wkup7,capability-instance:supc:lqfp100:wkup8,capability-instance:supc:lqfp100:wkup9", 7},
  {PeripheralId::SysTick, "SysTick", "systick", nullptr, "alloy.systick.microchip-systick", 0, 0xE000E010u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 4},
  {PeripheralId::TC0, "TC0", "tc", "tc_zl", "alloy.timer.microchip-tc-zl", 0, 0x4000C000u, "PMC.PID23", nullptr, "gate:tc0", nullptr, nullptr, 38u, 3u, 20u, 1u, 141u, 8u, "TC0,TC1,TC2", "capability-instance:tc0:lqfp100:tclk0,capability-instance:tc0:lqfp100:tclk1,capability-instance:tc0:lqfp100:tioa0,capability-instance:tc0:lqfp100:tioa1,capability-instance:tc0:lqfp100:tioa2,capability-instance:tc0:lqfp100:tiob0,capability-instance:tc0:lqfp100:tiob1,capability-instance:tc0:lqfp100:tiob2", 8},
  {PeripheralId::TC1, "TC1", "tc", "tc_zl", "alloy.timer.microchip-tc-zl", 1, 0x40010000u, "PMC.PID26", nullptr, "gate:tc1", nullptr, nullptr, 41u, 3u, 21u, 1u, 0u, 0u, "TC3,TC4,TC5", "", 8},
  {PeripheralId::TC2, "TC2", "tc", "tc_zl", "alloy.timer.microchip-tc-zl", 2, 0x40014000u, "PMC.PID47", nullptr, "gate:tc2", nullptr, nullptr, 44u, 3u, 22u, 1u, 0u, 0u, "TC6,TC7,TC8", "", 8},
  {PeripheralId::TC3, "TC3", "tc", "tc_zl", "alloy.timer.microchip-tc-zl", 3, 0x40054000u, "PMC.PID50", nullptr, "gate:tc3", nullptr, nullptr, 47u, 3u, 23u, 1u, 149u, 3u, "TC9,TC10,TC11", "capability-instance:tc3:lqfp100:tclk11,capability-instance:tc3:lqfp100:tioa11,capability-instance:tc3:lqfp100:tiob11", 8},
  {PeripheralId::TPIU, "TPIU", "tpiu", "tpiu", "alloy.tpiu.microchip-tpiu", 0, 0xE0040000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 17},
  {PeripheralId::TRNG, "TRNG", "trng", "trng_g", "alloy.trng.microchip-trng-g", 0, 0x40070000u, "PMC.PID57", nullptr, "gate:trng", nullptr, nullptr, 50u, 1u, 0u, 0u, 0u, 0u, "TRNG", "", 6},
  {PeripheralId::TWIHS0, "TWIHS0", "twihs", "twihs_z", "alloy.i2c.microchip-twihs-z", 0, 0x40018000u, "PMC.PID19", nullptr, "gate:twihs0", nullptr, nullptr, 51u, 1u, 24u, 2u, 152u, 2u, "TWIHS0", "capability-instance:twihs0:lqfp100:scl,capability-instance:twihs0:lqfp100:sda", 16},
  {PeripheralId::TWIHS1, "TWIHS1", "twihs", "twihs_z", "alloy.i2c.microchip-twihs-z", 1, 0x4001C000u, "PMC.PID20", nullptr, "gate:twihs1", nullptr, nullptr, 52u, 1u, 26u, 2u, 154u, 2u, "TWIHS1", "capability-instance:twihs1:lqfp100:scl,capability-instance:twihs1:lqfp100:sda", 16},
  {PeripheralId::TWIHS2, "TWIHS2", "twihs", "twihs_z", "alloy.i2c.microchip-twihs-z", 2, 0x40060000u, "PMC.PID41", nullptr, "gate:twihs2", nullptr, nullptr, 53u, 1u, 28u, 2u, 156u, 2u, "TWIHS2", "capability-instance:twihs2:lqfp100:scl,capability-instance:twihs2:lqfp100:sda", 16},
  {PeripheralId::UART0, "UART0", "uart", "uart_r", "alloy.uart.microchip-uart-r", 0, 0x400E0800u, "PMC.PID7", nullptr, "gate:uart0", nullptr, nullptr, 54u, 1u, 30u, 2u, 158u, 2u, "UART0", "capability-instance:uart0:lqfp100:urxd0,capability-instance:uart0:lqfp100:utxd0", 11},
  {PeripheralId::UART1, "UART1", "uart", "uart_r", "alloy.uart.microchip-uart-r", 1, 0x400E0A00u, "PMC.PID8", nullptr, "gate:uart1", nullptr, nullptr, 55u, 1u, 32u, 2u, 160u, 2u, "UART1", "capability-instance:uart1:lqfp100:urxd1,capability-instance:uart1:lqfp100:utxd1", 11},
  {PeripheralId::UART2, "UART2", "uart", "uart_r", "alloy.uart.microchip-uart-r", 2, 0x400E1A00u, "PMC.PID44", nullptr, "gate:uart2", nullptr, nullptr, 56u, 1u, 34u, 2u, 162u, 2u, "UART2", "capability-instance:uart2:lqfp100:urxd2,capability-instance:uart2:lqfp100:utxd2", 11},
  {PeripheralId::UART3, "UART3", "uart", "uart_r", "alloy.uart.microchip-uart-r", 3, 0x400E1C00u, "PMC.PID45", nullptr, "gate:uart3", nullptr, nullptr, 57u, 1u, 36u, 2u, 164u, 2u, "UART3", "capability-instance:uart3:lqfp100:urxd3,capability-instance:uart3:lqfp100:utxd3", 11},
  {PeripheralId::UART4, "UART4", "uart", "uart_r", "alloy.uart.microchip-uart-r", 4, 0x400E1E00u, "PMC.PID46", nullptr, "gate:uart4", nullptr, nullptr, 58u, 1u, 38u, 2u, 166u, 2u, "UART4", "capability-instance:uart4:lqfp100:urxd4,capability-instance:uart4:lqfp100:utxd4", 11},
  {PeripheralId::USART0, "USART0", "usart", "usart_zw", "alloy.uart.microchip-usart-zw", 0, 0x40024000u, "PMC.PID13", nullptr, "gate:usart0", nullptr, nullptr, 59u, 1u, 40u, 2u, 168u, 9u, "USART0", "capability-instance:usart0:lqfp100:cts,capability-instance:usart0:lqfp100:dcd0,capability-instance:usart0:lqfp100:dsr0,capability-instance:usart0:lqfp100:dtr0,capability-instance:usart0:lqfp100:ri0,capability-instance:usart0:lqfp100:rts,capability-instance:usart0:lqfp100:rx,capability-instance:usart0:lqfp100:sck0,capability-instance:usart0:lqfp100:tx", 31},
  {PeripheralId::USART1, "USART1", "usart", "usart_zw", "alloy.uart.microchip-usart-zw", 1, 0x40028000u, "PMC.PID14", nullptr, "gate:usart1", nullptr, nullptr, 60u, 1u, 42u, 2u, 177u, 9u, "USART1", "capability-instance:usart1:lqfp100:cts,capability-instance:usart1:lqfp100:dcd1,capability-instance:usart1:lqfp100:dsr1,capability-instance:usart1:lqfp100:dtr1,capability-instance:usart1:lqfp100:loncol1,capability-instance:usart1:lqfp100:rts,capability-instance:usart1:lqfp100:rx,capability-instance:usart1:lqfp100:sck1,capability-instance:usart1:lqfp100:tx", 31},
  {PeripheralId::USART2, "USART2", "usart", "usart_zw", "alloy.uart.microchip-usart-zw", 2, 0x4002C000u, "PMC.PID15", nullptr, "gate:usart2", nullptr, nullptr, 61u, 1u, 44u, 2u, 186u, 9u, "USART2", "capability-instance:usart2:lqfp100:cts,capability-instance:usart2:lqfp100:dcd2,capability-instance:usart2:lqfp100:dsr2,capability-instance:usart2:lqfp100:dtr2,capability-instance:usart2:lqfp100:ri2,capability-instance:usart2:lqfp100:rts,capability-instance:usart2:lqfp100:rx,capability-instance:usart2:lqfp100:sck2,capability-instance:usart2:lqfp100:tx", 31},
  {PeripheralId::USBHS, "USBHS", "usbhs", "usbhs_g", "alloy.usbhs.microchip-usbhs-g", 0, 0x40038000u, "PMC.PID34", nullptr, "gate:usbhs", nullptr, nullptr, 62u, 1u, 0u, 0u, 0u, 0u, "USBHS", "", 41},
  {PeripheralId::UTMI, "UTMI", "utmi", "utmi_a", "alloy.utmi.microchip-utmi-a", 0, 0x400E0400u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 2},
  {PeripheralId::WDT, "WDT", "wdt", "wdt_n", "alloy.wdt.microchip-wdt-n", 0, 0x400E1850u, "PMC.PID4", nullptr, "gate:wdt", nullptr, nullptr, 63u, 1u, 0u, 0u, 0u, 0u, "WDT", "", 3},
  {PeripheralId::XDMAC, "XDMAC", "xdmac", "xdmac_k", "alloy.dma.microchip-xdmac-k", 0, 0x40078000u, "PMC.PID58", nullptr, "gate:xdmac", nullptr, nullptr, 64u, 1u, 0u, 0u, 0u, 0u, "XDMAC", "", 17},
}};
}
}
}
}
}
