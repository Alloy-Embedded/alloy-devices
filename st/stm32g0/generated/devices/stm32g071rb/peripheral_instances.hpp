#pragma once

#include <array>
#include <cstdint>
#include "../../clock_tree_lite.hpp"
#include "../../runtime_semantics.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g071rb {
enum class PeripheralId : std::uint16_t {
  ADC1,
  COMP,
  CRC,
  DAC,
  DBG,
  DMA1,
  DMAMUX1,
  EXTI,
  FLASH,
  GPIOA,
  GPIOB,
  GPIOC,
  GPIOD,
  GPIOF,
  HDMI_CEC,
  I2C1,
  I2C2,
  IWDG,
  LPTIM1,
  LPTIM2,
  LPUART1,
  PWR,
  RCC,
  RNG,
  RTC,
  SPI1,
  SPI2,
  SYSCFG_VREFBUF,
  TAMP,
  TIM1,
  TIM14,
  TIM15,
  TIM16,
  TIM17,
  TIM2,
  TIM3,
  TIM6,
  TIM7,
  UCPD1,
  UCPD2,
  USART1,
  USART2,
  USART3,
  USART4,
  WWDG,
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
inline constexpr std::array<PeripheralInstanceDescriptor, 45> kPeripheralInstances = {{
  {PeripheralId::ADC1, PeripheralClassId::class_adc, BackendSchemaId::schema_alloy_adc_st_aditf4_v3_0_g0_cube, 1, 0x40012400u, ClockGateId::stm32g071rb_gate_adc1, ResetId::stm32g071rb_reset_adc1, ClockSelectorId::none, 0u, 1u, 0u, 0u, 0u, 0u, 15},
  {PeripheralId::COMP, PeripheralClassId::class_comp, BackendSchemaId::schema_alloy_comp_st_comp, 0, 0x40010200u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::CRC, PeripheralClassId::class_crc, BackendSchemaId::schema_alloy_crc_st_integtest1_v2_0, 0, 0x40023000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 1u, 1u, 0u, 0u, 0u, 0u, 5},
  {PeripheralId::DAC, PeripheralClassId::class_dac, BackendSchemaId::schema_alloy_dac_st_dac, 0, 0x40007400u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 24},
  {PeripheralId::DBG, PeripheralClassId::class_dbg, BackendSchemaId::schema_alloy_dbg_st_dbg, 0, 0x40015800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::DMA1, PeripheralClassId::class_dma, BackendSchemaId::schema_alloy_dma_st_dma, 1, 0x40020000u, ClockGateId::stm32g071rb_gate_dma1, ResetId::stm32g071rb_reset_dma1, ClockSelectorId::none, 2u, 2u, 0u, 0u, 0u, 0u, 30},
  {PeripheralId::DMAMUX1, PeripheralClassId::class_dma_router, BackendSchemaId::schema_alloy_dma_router_st_dmamux, 1, 0x40020800u, ClockGateId::stm32g071rb_gate_dmamux1, ResetId::stm32g071rb_reset_dmamux1, ClockSelectorId::none, 4u, 1u, 0u, 0u, 0u, 0u, 20},
  {PeripheralId::EXTI, PeripheralClassId::class_exti, BackendSchemaId::schema_alloy_exti_st_exti, 0, 0x40021800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 5u, 3u, 0u, 0u, 0u, 0u, 22},
  {PeripheralId::FLASH, PeripheralClassId::class_flash, BackendSchemaId::schema_alloy_flash_st_flash, 0, 0x40022000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 8u, 1u, 0u, 0u, 0u, 0u, 14},
  {PeripheralId::GPIOA, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 0, 0x50000000u, ClockGateId::stm32g071rb_gate_gpioa, ResetId::stm32g071rb_reset_gpioa, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOB, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 1, 0x50000400u, ClockGateId::stm32g071rb_gate_gpiob, ResetId::stm32g071rb_reset_gpiob, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOC, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 2, 0x50000800u, ClockGateId::stm32g071rb_gate_gpioc, ResetId::stm32g071rb_reset_gpioc, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOD, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 3, 0x50000C00u, ClockGateId::stm32g071rb_gate_gpiod, ResetId::stm32g071rb_reset_gpiod, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOF, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 5, 0x50001400u, ClockGateId::stm32g071rb_gate_gpiof, ResetId::stm32g071rb_reset_gpiof, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::HDMI_CEC, PeripheralClassId::class_hdmi_cec, BackendSchemaId::schema_alloy_hdmi_cec_st_hdmi_cec_v2_0_cube, 0, 0x40007800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 6},
  {PeripheralId::I2C1, PeripheralClassId::class_i2c1, BackendSchemaId::schema_alloy_i2c1_st_i2c2_v1_1_cube, 0, 0x40005400u, ClockGateId::stm32g071rb_gate_i2c1, ResetId::stm32g071rb_reset_i2c1, ClockSelectorId::none, 9u, 1u, 0u, 0u, 0u, 3u, 11},
  {PeripheralId::I2C2, PeripheralClassId::class_i2c2, BackendSchemaId::schema_alloy_i2c2_st_i2c2_v1_1_cube, 0, 0x40005800u, ClockGateId::stm32g071rb_gate_i2c2, ResetId::stm32g071rb_reset_i2c2, ClockSelectorId::none, 10u, 1u, 0u, 0u, 3u, 2u, 11},
  {PeripheralId::IWDG, PeripheralClassId::class_iwdg, BackendSchemaId::schema_alloy_iwdg_st_iwdg1_v2_0, 0, 0x40003000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 9},
  {PeripheralId::LPTIM1, PeripheralClassId::class_lptim, BackendSchemaId::schema_alloy_lptim_st_g0xx_lptimer1_v1_4_cube, 1, 0x40007C00u, ClockGateId::stm32g071rb_gate_lptim1, ResetId::stm32g071rb_reset_lptim1, ClockSelectorId::none, 0u, 0u, 0u, 0u, 5u, 4u, 9},
  {PeripheralId::LPTIM2, PeripheralClassId::class_lptim, BackendSchemaId::schema_alloy_lptim_st_g0xx_lptimer1_v1_4_cube, 2, 0x40009400u, ClockGateId::stm32g071rb_gate_lptim2, ResetId::stm32g071rb_reset_lptim2, ClockSelectorId::none, 0u, 0u, 0u, 0u, 9u, 3u, 9},
  {PeripheralId::LPUART1, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci3_v1_2_cube, 1, 0x40008000u, ClockGateId::stm32g071rb_gate_lpuart1, ResetId::stm32g071rb_reset_lpuart1, ClockSelectorId::stm32g071rb_selector_lpuart1_kernel, 0u, 0u, 0u, 0u, 12u, 5u, 15},
  {PeripheralId::PWR, PeripheralClassId::class_pwr, BackendSchemaId::schema_alloy_pwr_st_pwr, 0, 0x40007000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 11u, 1u, 0u, 0u, 0u, 0u, 17},
  {PeripheralId::RCC, PeripheralClassId::class_rcc, BackendSchemaId::schema_alloy_rcc_st_stm32g05_rcc_v1_0, 0, 0x40021000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 12u, 1u, 0u, 0u, 0u, 0u, 22},
  {PeripheralId::RNG, PeripheralClassId::class_rng, BackendSchemaId::schema_alloy_rng_st_rng, 0, 0x40025000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 13u, 1u, 0u, 0u, 0u, 0u, 3},
  {PeripheralId::RTC, PeripheralClassId::class_rtc, BackendSchemaId::schema_alloy_rtc_st_rtc3_v1_0_cube, 0, 0x40002800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 14u, 1u, 0u, 0u, 0u, 0u, 24},
  {PeripheralId::SPI1, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_st_spi2s1_v3_3_cube, 1, 0x40013000u, ClockGateId::stm32g071rb_gate_spi1, ResetId::stm32g071rb_reset_spi1, ClockSelectorId::none, 15u, 1u, 0u, 0u, 17u, 4u, 13},
  {PeripheralId::SPI2, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_st_spi2s1_v3_3_cube, 2, 0x40003800u, ClockGateId::stm32g071rb_gate_spi2, ResetId::stm32g071rb_reset_spi2, ClockSelectorId::none, 16u, 1u, 0u, 0u, 21u, 4u, 13},
  {PeripheralId::SYSCFG_VREFBUF, PeripheralClassId::class_syscfg_vrefbuf, BackendSchemaId::schema_alloy_syscfg_vrefbuf_st_syscfg_vrefbuf, 0, 0x40010000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 36},
  {PeripheralId::TAMP, PeripheralClassId::class_tamp, BackendSchemaId::schema_alloy_tamp_st_tamp, 0, 0x4000B000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 17},
  {PeripheralId::TIM1, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 1, 0x40012C00u, ClockGateId::stm32g071rb_gate_tim1, ResetId::stm32g071rb_reset_tim1, ClockSelectorId::none, 17u, 2u, 0u, 0u, 25u, 9u, 26},
  {PeripheralId::TIM14, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 14, 0x40002000u, ClockGateId::stm32g071rb_gate_tim14, ResetId::stm32g071rb_reset_tim14, ClockSelectorId::none, 19u, 1u, 0u, 0u, 34u, 1u, 11},
  {PeripheralId::TIM15, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 15, 0x40014000u, ClockGateId::stm32g071rb_gate_tim15, ResetId::stm32g071rb_reset_tim15, ClockSelectorId::none, 20u, 1u, 0u, 0u, 35u, 4u, 19},
  {PeripheralId::TIM16, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 16, 0x40014400u, ClockGateId::stm32g071rb_gate_tim16, ResetId::stm32g071rb_reset_tim16, ClockSelectorId::none, 21u, 1u, 0u, 0u, 39u, 3u, 17},
  {PeripheralId::TIM17, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 17, 0x40014800u, ClockGateId::stm32g071rb_gate_tim17, ResetId::stm32g071rb_reset_tim17, ClockSelectorId::none, 22u, 1u, 0u, 0u, 42u, 3u, 17},
  {PeripheralId::TIM2, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 2, 0x40000000u, ClockGateId::stm32g071rb_gate_tim2, ResetId::stm32g071rb_reset_tim2, ClockSelectorId::none, 23u, 2u, 0u, 0u, 45u, 5u, 21},
  {PeripheralId::TIM3, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 3, 0x40000400u, ClockGateId::stm32g071rb_gate_tim3, ResetId::stm32g071rb_reset_tim3, ClockSelectorId::none, 0u, 0u, 0u, 0u, 50u, 5u, 21},
  {PeripheralId::TIM6, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 6, 0x40001000u, ClockGateId::stm32g071rb_gate_tim6, ResetId::stm32g071rb_reset_tim6, ClockSelectorId::none, 25u, 1u, 0u, 0u, 0u, 0u, 8},
  {PeripheralId::TIM7, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 7, 0x40001400u, ClockGateId::stm32g071rb_gate_tim7, ResetId::stm32g071rb_reset_tim7, ClockSelectorId::none, 26u, 1u, 0u, 0u, 0u, 0u, 8},
  {PeripheralId::UCPD1, PeripheralClassId::class_ucpd, BackendSchemaId::schema_alloy_ucpd_st_ucpd_v1_0_cube, 1, 0x4000A000u, ClockGateId::stm32g071rb_gate_ucpd1, ResetId::stm32g071rb_reset_ucpd1, ClockSelectorId::none, 27u, 1u, 0u, 0u, 55u, 2u, 18},
  {PeripheralId::UCPD2, PeripheralClassId::class_ucpd, BackendSchemaId::schema_alloy_ucpd_st_ucpd_v1_0_cube, 2, 0x4000A400u, ClockGateId::stm32g071rb_gate_ucpd2, ResetId::stm32g071rb_reset_ucpd2, ClockSelectorId::none, 0u, 0u, 0u, 0u, 57u, 2u, 18},
  {PeripheralId::USART1, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube, 1, 0x40013800u, ClockGateId::stm32g071rb_gate_usart1, ResetId::stm32g071rb_reset_usart1, ClockSelectorId::stm32g071rb_selector_usart1_kernel, 28u, 1u, 0u, 2u, 59u, 7u, 12},
  {PeripheralId::USART2, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube, 2, 0x40004400u, ClockGateId::stm32g071rb_gate_usart2, ResetId::stm32g071rb_reset_usart2, ClockSelectorId::none, 29u, 1u, 0u, 0u, 66u, 7u, 12},
  {PeripheralId::USART3, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube, 3, 0x40004800u, ClockGateId::stm32g071rb_gate_usart3, ResetId::stm32g071rb_reset_usart3, ClockSelectorId::none, 30u, 1u, 0u, 0u, 73u, 7u, 12},
  {PeripheralId::USART4, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube, 4, 0x40004C00u, ClockGateId::stm32g071rb_gate_usart4, ResetId::stm32g071rb_reset_usart4, ClockSelectorId::none, 0u, 0u, 0u, 0u, 80u, 7u, 12},
  {PeripheralId::WWDG, PeripheralClassId::class_wwdg, BackendSchemaId::schema_alloy_wwdg_st_wwdg1_v2_0, 0, 0x40002C00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 31u, 1u, 0u, 0u, 0u, 0u, 3},
}};
}
}
}
}
}
