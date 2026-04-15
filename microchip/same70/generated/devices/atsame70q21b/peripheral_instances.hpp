#pragma once

#include <array>
#include <cstdint>
#include "../../clock_tree_lite.hpp"
#include "../../runtime_semantics.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace devices {
namespace atsame70q21b {
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
  GPIOC,
  GPIOD,
  GPIOE,
  HSMCI,
  I2SC0,
  I2SC1,
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
  SMC,
  SPI0,
  SPI1,
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
  PeripheralClassId peripheral_class_id;
  BackendSchemaId schema_id;
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
inline constexpr std::array<PeripheralInstanceDescriptor, 68> kPeripheralInstances = {{
  {PeripheralId::ACC, PeripheralClassId::class_acc, BackendSchemaId::schema_alloy_acc_microchip_acc_j, 0, 0x40044000u, ClockGateId::atsame70q21b_gate_acc, ResetId::none, ClockSelectorId::none, 0u, 1u, 0u, 0u, 0u, 0u, 9},
  {PeripheralId::AES, PeripheralClassId::class_aes, BackendSchemaId::schema_alloy_aes_microchip_aes_w, 0, 0x4006C000u, ClockGateId::atsame70q21b_gate_aes, ResetId::none, ClockSelectorId::none, 1u, 1u, 0u, 2u, 0u, 0u, 16},
  {PeripheralId::AFEC0, PeripheralClassId::class_adc, BackendSchemaId::schema_alloy_adc_microchip_afec_s, 0, 0x4003C000u, ClockGateId::atsame70q21b_gate_afec0, ResetId::none, ClockSelectorId::none, 2u, 1u, 2u, 1u, 0u, 12u, 29},
  {PeripheralId::AFEC1, PeripheralClassId::class_adc, BackendSchemaId::schema_alloy_adc_microchip_afec_s, 1, 0x40064000u, ClockGateId::atsame70q21b_gate_afec1, ResetId::none, ClockSelectorId::none, 3u, 1u, 3u, 1u, 12u, 13u, 29},
  {PeripheralId::CHIPID, PeripheralClassId::class_chipid, BackendSchemaId::schema_alloy_chipid_microchip_chipid_zk, 0, 0x400E0940u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::CoreDebug, PeripheralClassId::class_coredebug, BackendSchemaId::schema_alloy_coredebug_microchip_coredebug, 0, 0xE000EDF0u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::DACC, PeripheralClassId::class_dac, BackendSchemaId::schema_alloy_dac_microchip_dacc_e, 0, 0x40040000u, ClockGateId::atsame70q21b_gate_dacc, ResetId::none, ClockSelectorId::none, 4u, 1u, 4u, 2u, 25u, 3u, 14},
  {PeripheralId::DWT, PeripheralClassId::class_dwt, BackendSchemaId::schema_alloy_dwt_microchip_dwt, 0, 0xE0001000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 34},
  {PeripheralId::EFC, PeripheralClassId::class_efc, BackendSchemaId::schema_alloy_efc_microchip_efc_y, 0, 0x400E0C00u, ClockGateId::atsame70q21b_gate_efc, ResetId::none, ClockSelectorId::none, 5u, 1u, 0u, 0u, 28u, 1u, 5},
  {PeripheralId::ETM, PeripheralClassId::class_etm, BackendSchemaId::schema_alloy_etm_microchip_etm, 0, 0xE0041000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 40},
  {PeripheralId::FPB, PeripheralClassId::class_fpb, BackendSchemaId::schema_alloy_fpb_microchip_fpb, 0, 0xE0002000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 17},
  {PeripheralId::FPU, PeripheralClassId::class_fpu, BackendSchemaId::schema_alloy_fpu_microchip_fpu, 0, 0xE000EF30u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 6u, 2u, 0u, 0u, 0u, 0u, 6},
  {PeripheralId::GMAC, PeripheralClassId::class_gmac, BackendSchemaId::schema_alloy_gmac_microchip_gmac_s, 0, 0x40050000u, ClockGateId::atsame70q21b_gate_gmac, ResetId::none, ClockSelectorId::none, 8u, 6u, 0u, 0u, 29u, 19u, 114},
  {PeripheralId::GPBR, PeripheralClassId::class_gpbr, BackendSchemaId::schema_alloy_gpbr_microchip_gpbr_j, 0, 0x400E1890u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 1},
  {PeripheralId::GPIOA, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_microchip_pio_v, 0, 0x400E0E00u, ClockGateId::atsame70q21b_gate_gpioa, ResetId::none, ClockSelectorId::none, 14u, 1u, 6u, 1u, 48u, 11u, 54},
  {PeripheralId::GPIOB, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_microchip_pio_v, 1, 0x400E1000u, ClockGateId::atsame70q21b_gate_gpiob, ResetId::none, ClockSelectorId::none, 15u, 1u, 0u, 0u, 0u, 0u, 54},
  {PeripheralId::GPIOC, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_microchip_pio_v, 2, 0x400E1200u, ClockGateId::atsame70q21b_gate_gpioc, ResetId::none, ClockSelectorId::none, 16u, 1u, 0u, 0u, 0u, 0u, 54},
  {PeripheralId::GPIOD, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_microchip_pio_v, 3, 0x400E1400u, ClockGateId::atsame70q21b_gate_gpiod, ResetId::none, ClockSelectorId::none, 17u, 1u, 0u, 0u, 0u, 0u, 54},
  {PeripheralId::GPIOE, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_microchip_pio_v, 4, 0x400E1600u, ClockGateId::atsame70q21b_gate_gpioe, ResetId::none, ClockSelectorId::none, 18u, 1u, 0u, 0u, 0u, 0u, 54},
  {PeripheralId::HSMCI, PeripheralClassId::class_hsmci, BackendSchemaId::schema_alloy_hsmci_microchip_hsmci_r, 0, 0x40000000u, ClockGateId::atsame70q21b_gate_hsmci, ResetId::none, ClockSelectorId::none, 19u, 1u, 7u, 1u, 59u, 6u, 20},
  {PeripheralId::I2SC0, PeripheralClassId::class_i2sc0, BackendSchemaId::schema_alloy_i2sc0_microchip_i2sc_n, 0, 0x4008C000u, ClockGateId::atsame70q21b_gate_i2sc0, ResetId::none, ClockSelectorId::none, 20u, 1u, 8u, 4u, 65u, 5u, 10},
  {PeripheralId::I2SC1, PeripheralClassId::class_i2sc1, BackendSchemaId::schema_alloy_i2sc1_microchip_i2sc_n, 0, 0x40090000u, ClockGateId::atsame70q21b_gate_i2sc1, ResetId::none, ClockSelectorId::none, 21u, 1u, 12u, 4u, 70u, 5u, 10},
  {PeripheralId::ICM, PeripheralClassId::class_icm, BackendSchemaId::schema_alloy_icm_microchip_icm_h, 0, 0x40048000u, ClockGateId::atsame70q21b_gate_icm, ResetId::none, ClockSelectorId::none, 22u, 1u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::ISI, PeripheralClassId::class_isi, BackendSchemaId::schema_alloy_isi_microchip_isi_k, 0, 0x4004C000u, ClockGateId::atsame70q21b_gate_isi, ResetId::none, ClockSelectorId::none, 23u, 1u, 0u, 0u, 75u, 15u, 25},
  {PeripheralId::ITM, PeripheralClassId::class_itm, BackendSchemaId::schema_alloy_itm_microchip_itm, 0, 0xE0000000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::LOCKBIT, PeripheralClassId::class_lockbit, BackendSchemaId::schema_alloy_lockbit_microchip_lockbit_1, 0, 0x00000000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::MATRIX, PeripheralClassId::class_matrix, BackendSchemaId::schema_alloy_matrix_microchip_matrix_l, 0, 0x40088000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 10},
  {PeripheralId::MCAN0, PeripheralClassId::class_can, BackendSchemaId::schema_alloy_can_microchip_mcan_n, 0, 0x40030000u, ClockGateId::atsame70q21b_gate_mcan0, ResetId::none, ClockSelectorId::none, 24u, 2u, 0u, 0u, 90u, 2u, 47},
  {PeripheralId::MCAN1, PeripheralClassId::class_can, BackendSchemaId::schema_alloy_can_microchip_mcan_n, 1, 0x40034000u, ClockGateId::atsame70q21b_gate_mcan1, ResetId::none, ClockSelectorId::none, 26u, 2u, 0u, 0u, 92u, 2u, 47},
  {PeripheralId::MPU, PeripheralClassId::class_mpu, BackendSchemaId::schema_alloy_mpu_microchip_mpu, 0, 0xE000ED90u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::NVIC, PeripheralClassId::class_nvic, BackendSchemaId::schema_alloy_nvic_microchip_nvic, 0, 0xE000E100u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 7},
  {PeripheralId::PMC, PeripheralClassId::class_pmc, BackendSchemaId::schema_alloy_pmc_microchip_pmc_p, 0, 0x400E0600u, ClockGateId::atsame70q21b_gate_pmc, ResetId::none, ClockSelectorId::none, 28u, 1u, 0u, 0u, 94u, 7u, 37},
  {PeripheralId::PWM0, PeripheralClassId::class_pwm, BackendSchemaId::schema_alloy_pwm_microchip_pwm_y, 0, 0x40020000u, ClockGateId::atsame70q21b_gate_pwm0, ResetId::none, ClockSelectorId::none, 29u, 1u, 16u, 1u, 101u, 13u, 43},
  {PeripheralId::PWM1, PeripheralClassId::class_pwm, BackendSchemaId::schema_alloy_pwm_microchip_pwm_y, 1, 0x4005C000u, ClockGateId::atsame70q21b_gate_pwm1, ResetId::none, ClockSelectorId::none, 30u, 1u, 17u, 1u, 114u, 13u, 43},
  {PeripheralId::QSPI, PeripheralClassId::class_qspi, BackendSchemaId::schema_alloy_qspi_microchip_qspi_j, 0, 0x4007C000u, ClockGateId::atsame70q21b_gate_qspi, ResetId::none, ClockSelectorId::none, 31u, 1u, 18u, 2u, 127u, 6u, 16},
  {PeripheralId::RSTC, PeripheralClassId::class_rstc, BackendSchemaId::schema_alloy_rstc_microchip_rstc_n, 0, 0x400E1800u, ClockGateId::atsame70q21b_gate_rstc, ResetId::none, ClockSelectorId::none, 32u, 1u, 0u, 0u, 0u, 0u, 3},
  {PeripheralId::RSWDT, PeripheralClassId::class_rswdt, BackendSchemaId::schema_alloy_rswdt_microchip_rswdt_g, 0, 0x400E1900u, ClockGateId::atsame70q21b_gate_rswdt, ResetId::none, ClockSelectorId::none, 33u, 1u, 0u, 0u, 0u, 0u, 3},
  {PeripheralId::RTC, PeripheralClassId::class_rtc, BackendSchemaId::schema_alloy_rtc_microchip_rtc_zb, 0, 0x400E1860u, ClockGateId::atsame70q21b_gate_rtc, ResetId::none, ClockSelectorId::none, 34u, 1u, 0u, 0u, 133u, 2u, 12},
  {PeripheralId::RTT, PeripheralClassId::class_rtt, BackendSchemaId::schema_alloy_rtt_microchip_rtt_m, 0, 0x400E1830u, ClockGateId::atsame70q21b_gate_rtt, ResetId::none, ClockSelectorId::none, 35u, 1u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::SCB, PeripheralClassId::class_scb, BackendSchemaId::schema_alloy_scb_microchip_scb, 0, 0xE000ED00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 36u, 2u, 0u, 0u, 0u, 0u, 35},
  {PeripheralId::SCnSCB, PeripheralClassId::class_scnscb, BackendSchemaId::schema_alloy_scnscb_microchip_scnscb, 0, 0xE000E000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::SMC, PeripheralClassId::class_smc, BackendSchemaId::schema_alloy_smc_microchip_smc_j, 0, 0x40080000u, ClockGateId::atsame70q21b_gate_smc, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 5},
  {PeripheralId::SPI0, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_microchip_spi_zm, 0, 0x40008000u, ClockGateId::atsame70q21b_gate_spi0, ResetId::none, ClockSelectorId::none, 38u, 1u, 20u, 2u, 135u, 4u, 11},
  {PeripheralId::SPI1, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_microchip_spi_zm, 1, 0x40058000u, ClockGateId::atsame70q21b_gate_spi1, ResetId::none, ClockSelectorId::none, 39u, 1u, 22u, 2u, 139u, 4u, 11},
  {PeripheralId::SSC, PeripheralClassId::class_ssc, BackendSchemaId::schema_alloy_ssc_microchip_ssc_q, 0, 0x40004000u, ClockGateId::atsame70q21b_gate_ssc, ResetId::none, ClockSelectorId::none, 40u, 1u, 24u, 2u, 143u, 6u, 18},
  {PeripheralId::SUPC, PeripheralClassId::class_supc, BackendSchemaId::schema_alloy_supc_microchip_supc_ze, 0, 0x400E1810u, ClockGateId::atsame70q21b_gate_supc, ResetId::none, ClockSelectorId::none, 41u, 1u, 0u, 0u, 149u, 14u, 7},
  {PeripheralId::SysTick, PeripheralClassId::class_systick, BackendSchemaId::schema_alloy_systick_microchip_systick, 0, 0xE000E010u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::TC0, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_microchip_tc_zl, 0, 0x4000C000u, ClockGateId::atsame70q21b_gate_tc0, ResetId::none, ClockSelectorId::none, 42u, 3u, 26u, 1u, 163u, 9u, 8},
  {PeripheralId::TC1, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_microchip_tc_zl, 1, 0x40010000u, ClockGateId::atsame70q21b_gate_tc1, ResetId::none, ClockSelectorId::none, 45u, 3u, 27u, 1u, 172u, 9u, 8},
  {PeripheralId::TC2, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_microchip_tc_zl, 2, 0x40014000u, ClockGateId::atsame70q21b_gate_tc2, ResetId::none, ClockSelectorId::none, 48u, 3u, 28u, 1u, 181u, 9u, 8},
  {PeripheralId::TC3, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_microchip_tc_zl, 3, 0x40054000u, ClockGateId::atsame70q21b_gate_tc3, ResetId::none, ClockSelectorId::none, 51u, 3u, 29u, 1u, 190u, 9u, 8},
  {PeripheralId::TPIU, PeripheralClassId::class_tpiu, BackendSchemaId::schema_alloy_tpiu_microchip_tpiu, 0, 0xE0040000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 17},
  {PeripheralId::TRNG, PeripheralClassId::class_trng, BackendSchemaId::schema_alloy_trng_microchip_trng_g, 0, 0x40070000u, ClockGateId::atsame70q21b_gate_trng, ResetId::none, ClockSelectorId::none, 54u, 1u, 0u, 0u, 0u, 0u, 6},
  {PeripheralId::TWIHS0, PeripheralClassId::class_i2c, BackendSchemaId::schema_alloy_i2c_microchip_twihs_z, 0, 0x40018000u, ClockGateId::atsame70q21b_gate_twihs0, ResetId::none, ClockSelectorId::none, 55u, 1u, 30u, 2u, 199u, 2u, 16},
  {PeripheralId::TWIHS1, PeripheralClassId::class_i2c, BackendSchemaId::schema_alloy_i2c_microchip_twihs_z, 1, 0x4001C000u, ClockGateId::atsame70q21b_gate_twihs1, ResetId::none, ClockSelectorId::none, 56u, 1u, 32u, 2u, 201u, 2u, 16},
  {PeripheralId::TWIHS2, PeripheralClassId::class_i2c, BackendSchemaId::schema_alloy_i2c_microchip_twihs_z, 2, 0x40060000u, ClockGateId::atsame70q21b_gate_twihs2, ResetId::none, ClockSelectorId::none, 57u, 1u, 34u, 2u, 203u, 2u, 16},
  {PeripheralId::UART0, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_microchip_uart_r, 0, 0x400E0800u, ClockGateId::atsame70q21b_gate_uart0, ResetId::none, ClockSelectorId::none, 58u, 1u, 36u, 2u, 205u, 2u, 11},
  {PeripheralId::UART1, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_microchip_uart_r, 1, 0x400E0A00u, ClockGateId::atsame70q21b_gate_uart1, ResetId::none, ClockSelectorId::none, 59u, 1u, 38u, 2u, 207u, 2u, 11},
  {PeripheralId::UART2, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_microchip_uart_r, 2, 0x400E1A00u, ClockGateId::atsame70q21b_gate_uart2, ResetId::none, ClockSelectorId::none, 60u, 1u, 40u, 2u, 209u, 2u, 11},
  {PeripheralId::UART3, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_microchip_uart_r, 3, 0x400E1C00u, ClockGateId::atsame70q21b_gate_uart3, ResetId::none, ClockSelectorId::none, 61u, 1u, 42u, 2u, 211u, 2u, 11},
  {PeripheralId::UART4, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_microchip_uart_r, 4, 0x400E1E00u, ClockGateId::atsame70q21b_gate_uart4, ResetId::none, ClockSelectorId::none, 62u, 1u, 44u, 2u, 213u, 2u, 11},
  {PeripheralId::USART0, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_microchip_usart_zw, 0, 0x40024000u, ClockGateId::atsame70q21b_gate_usart0, ResetId::none, ClockSelectorId::none, 63u, 1u, 46u, 2u, 215u, 9u, 31},
  {PeripheralId::USART1, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_microchip_usart_zw, 1, 0x40028000u, ClockGateId::atsame70q21b_gate_usart1, ResetId::none, ClockSelectorId::none, 64u, 1u, 48u, 2u, 224u, 10u, 31},
  {PeripheralId::USART2, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_microchip_usart_zw, 2, 0x4002C000u, ClockGateId::atsame70q21b_gate_usart2, ResetId::none, ClockSelectorId::none, 65u, 1u, 50u, 2u, 234u, 9u, 31},
  {PeripheralId::USBHS, PeripheralClassId::class_usbhs, BackendSchemaId::schema_alloy_usbhs_microchip_usbhs_g, 0, 0x40038000u, ClockGateId::atsame70q21b_gate_usbhs, ResetId::none, ClockSelectorId::none, 66u, 1u, 0u, 0u, 0u, 0u, 41},
  {PeripheralId::UTMI, PeripheralClassId::class_utmi, BackendSchemaId::schema_alloy_utmi_microchip_utmi_a, 0, 0x400E0400u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::WDT, PeripheralClassId::class_wdt, BackendSchemaId::schema_alloy_wdt_microchip_wdt_n, 0, 0x400E1850u, ClockGateId::atsame70q21b_gate_wdt, ResetId::none, ClockSelectorId::none, 67u, 1u, 0u, 0u, 0u, 0u, 3},
  {PeripheralId::XDMAC, PeripheralClassId::class_dma, BackendSchemaId::schema_alloy_dma_microchip_xdmac_k, 0, 0x40078000u, ClockGateId::atsame70q21b_gate_xdmac, ResetId::none, ClockSelectorId::none, 68u, 1u, 0u, 0u, 0u, 0u, 17},
}};
}
}
}
}
}
