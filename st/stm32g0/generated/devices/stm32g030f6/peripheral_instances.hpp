#pragma once

#include <array>
#include <cstdint>
#include "../../clock_tree_lite.hpp"
#include "../../runtime_semantics.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
enum class PeripheralId : std::uint16_t {
  ADC1,
  CRC,
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
  I2C1,
  I2C2,
  IWDG,
  PWR,
  RCC,
  RTC,
  SPI1,
  SPI2,
  SYSCFG,
  TAMP,
  TIM1,
  TIM14,
  TIM16,
  TIM17,
  TIM2,
  TIM3,
  USART1,
  USART2,
  VREFBUF,
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
inline constexpr std::array<PeripheralInstanceDescriptor, 32> kPeripheralInstances = {{
  {PeripheralId::ADC1, PeripheralClassId::class_adc, BackendSchemaId::schema_alloy_adc_st_aditf4_v3_0_g0_cube, 1, 0x40012400u, ClockGateId::stm32g030f6_gate_adc1, ResetId::stm32g030f6_reset_adc1, ClockSelectorId::none, 0u, 1u, 0u, 0u, 0u, 0u, 15},
  {PeripheralId::CRC, PeripheralClassId::class_crc, BackendSchemaId::schema_alloy_crc_st_integtest1_v2_0, 0, 0x40023000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 1u, 1u, 0u, 0u, 0u, 0u, 5},
  {PeripheralId::DBG, PeripheralClassId::class_dbg, BackendSchemaId::schema_alloy_dbg_st_dbg, 0, 0x40015800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::DMA1, PeripheralClassId::class_dma, BackendSchemaId::schema_alloy_dma_st_dma, 1, 0x40020000u, ClockGateId::stm32g030f6_gate_dma1, ResetId::stm32g030f6_reset_dma1, ClockSelectorId::none, 2u, 2u, 0u, 0u, 0u, 0u, 30},
  {PeripheralId::DMAMUX1, PeripheralClassId::class_dma_router, BackendSchemaId::schema_alloy_dma_router_st_dmamux, 1, 0x40020800u, ClockGateId::stm32g030f6_gate_dmamux1, ResetId::stm32g030f6_reset_dmamux1, ClockSelectorId::none, 4u, 1u, 0u, 0u, 0u, 0u, 13},
  {PeripheralId::EXTI, PeripheralClassId::class_exti, BackendSchemaId::schema_alloy_exti_st_exti, 0, 0x40021800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 5u, 3u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::FLASH, PeripheralClassId::class_flash, BackendSchemaId::schema_alloy_flash_st_flash, 0, 0x40022000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 8u, 1u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOA, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 0, 0x50000000u, ClockGateId::stm32g030f6_gate_gpioa, ResetId::stm32g030f6_reset_gpioa, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOB, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 1, 0x50000400u, ClockGateId::stm32g030f6_gate_gpiob, ResetId::stm32g030f6_reset_gpiob, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOC, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 2, 0x50000800u, ClockGateId::stm32g030f6_gate_gpioc, ResetId::stm32g030f6_reset_gpioc, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOD, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 3, 0x50000C00u, ClockGateId::stm32g030f6_gate_gpiod, ResetId::stm32g030f6_reset_gpiod, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOF, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 5, 0x50001400u, ClockGateId::stm32g030f6_gate_gpiof, ResetId::stm32g030f6_reset_gpiof, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::I2C1, PeripheralClassId::class_i2c1, BackendSchemaId::schema_alloy_i2c1_st_i2c2_v1_1_cube, 0, 0x40005400u, ClockGateId::stm32g030f6_gate_i2c1, ResetId::stm32g030f6_reset_i2c1, ClockSelectorId::none, 9u, 1u, 0u, 0u, 0u, 2u, 11},
  {PeripheralId::I2C2, PeripheralClassId::class_i2c2, BackendSchemaId::schema_alloy_i2c2_st_i2c2_v1_1_cube, 0, 0x40005800u, ClockGateId::stm32g030f6_gate_i2c2, ResetId::stm32g030f6_reset_i2c2, ClockSelectorId::none, 10u, 1u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::IWDG, PeripheralClassId::class_iwdg, BackendSchemaId::schema_alloy_iwdg_st_iwdg1_v2_0, 0, 0x40003000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 5},
  {PeripheralId::PWR, PeripheralClassId::class_pwr, BackendSchemaId::schema_alloy_pwr_st_pwr, 0, 0x40007000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 19},
  {PeripheralId::RCC, PeripheralClassId::class_rcc, BackendSchemaId::schema_alloy_rcc_st_stm32g0_64_rcc_v1_0, 0, 0x40021000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 11u, 1u, 0u, 0u, 0u, 0u, 23},
  {PeripheralId::RTC, PeripheralClassId::class_rtc, BackendSchemaId::schema_alloy_rtc_st_rtc3_v1_0_cube, 0, 0x40002800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 12u, 1u, 0u, 0u, 0u, 0u, 20},
  {PeripheralId::SPI1, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_st_spi2s1_v3_5_cube, 1, 0x40013000u, ClockGateId::stm32g030f6_gate_spi1, ResetId::stm32g030f6_reset_spi1, ClockSelectorId::none, 13u, 1u, 0u, 0u, 2u, 4u, 9},
  {PeripheralId::SPI2, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_st_spi2s1_v3_5_cube, 2, 0x40003800u, ClockGateId::stm32g030f6_gate_spi2, ResetId::stm32g030f6_reset_spi2, ClockSelectorId::none, 14u, 1u, 0u, 0u, 6u, 3u, 9},
  {PeripheralId::SYSCFG, PeripheralClassId::class_syscfg, BackendSchemaId::schema_alloy_syscfg_st_syscfg, 0, 0x40010000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 30},
  {PeripheralId::TAMP, PeripheralClassId::class_tamp, BackendSchemaId::schema_alloy_tamp_st_tamp, 0, 0x4000B000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 12},
  {PeripheralId::TIM1, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 1, 0x40012C00u, ClockGateId::stm32g030f6_gate_tim1, ResetId::stm32g030f6_reset_tim1, ClockSelectorId::none, 15u, 2u, 0u, 0u, 9u, 4u, 27},
  {PeripheralId::TIM14, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 14, 0x40002000u, ClockGateId::stm32g030f6_gate_tim14, ResetId::stm32g030f6_reset_tim14, ClockSelectorId::none, 17u, 1u, 0u, 0u, 13u, 1u, 11},
  {PeripheralId::TIM16, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 16, 0x40014400u, ClockGateId::stm32g030f6_gate_tim16, ResetId::stm32g030f6_reset_tim16, ClockSelectorId::none, 18u, 1u, 0u, 0u, 14u, 1u, 17},
  {PeripheralId::TIM17, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 17, 0x40014800u, ClockGateId::stm32g030f6_gate_tim17, ResetId::stm32g030f6_reset_tim17, ClockSelectorId::none, 19u, 1u, 0u, 0u, 15u, 2u, 17},
  {PeripheralId::TIM2, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_tim, 2, 0x40000000u, ClockGateId::stm32g030f6_gate_tim2, ResetId::stm32g030f6_reset_tim2, ClockSelectorId::none, 20u, 2u, 0u, 0u, 0u, 0u, 21},
  {PeripheralId::TIM3, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube, 3, 0x40000400u, ClockGateId::stm32g030f6_gate_tim3, ResetId::stm32g030f6_reset_tim3, ClockSelectorId::none, 0u, 0u, 0u, 0u, 17u, 3u, 21},
  {PeripheralId::USART1, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube, 1, 0x40013800u, ClockGateId::stm32g030f6_gate_usart1, ResetId::stm32g030f6_reset_usart1, ClockSelectorId::stm32g030f6_selector_usart1_kernel, 22u, 1u, 0u, 0u, 20u, 4u, 12},
  {PeripheralId::USART2, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube, 2, 0x40004400u, ClockGateId::stm32g030f6_gate_usart2, ResetId::stm32g030f6_reset_usart2, ClockSelectorId::none, 23u, 1u, 0u, 2u, 24u, 7u, 12},
  {PeripheralId::VREFBUF, PeripheralClassId::class_vrefbuf, BackendSchemaId::schema_alloy_vrefbuf_st_vrefbuf, 0, 0x40010030u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::WWDG, PeripheralClassId::class_wwdg, BackendSchemaId::schema_alloy_wwdg_st_wwdg1_v2_0, 0, 0x40002C00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 24u, 1u, 0u, 0u, 0u, 0u, 3},
}};
}
}
}
}
}
