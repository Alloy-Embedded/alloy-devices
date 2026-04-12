#pragma once

#include <array>
#include <cstdint>
#include "../../clock_tree_lite.hpp"
#include "../../runtime_semantics.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f401re {
enum class PeripheralId : std::uint16_t {
  ADC1,
  ADC_Common,
  CRC,
  DBG,
  DMA1,
  DMA2,
  EXTI,
  FLASH,
  FPU,
  FPU_CPACR,
  GPIOA,
  GPIOB,
  GPIOC,
  GPIOD,
  GPIOE,
  GPIOH,
  I2C1,
  I2C2,
  I2C3,
  I2S2ext,
  I2S3ext,
  IWDG,
  MPU,
  NVIC,
  NVIC_STIR,
  OTG_FS_DEVICE,
  OTG_FS_GLOBAL,
  OTG_FS_HOST,
  OTG_FS_PWRCLK,
  PWR,
  RCC,
  RTC,
  SCB,
  SCB_ACTRL,
  SDIO,
  SPI1,
  SPI2,
  SPI3,
  SPI4,
  STK,
  SYSCFG,
  TIM1,
  TIM10,
  TIM11,
  TIM2,
  TIM3,
  TIM4,
  TIM5,
  TIM8,
  TIM9,
  USART1,
  USART2,
  USART6,
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
inline constexpr std::array<PeripheralInstanceDescriptor, 54> kPeripheralInstances = {{
  {PeripheralId::ADC1, PeripheralClassId::class_adc, BackendSchemaId::schema_alloy_adc_st_aditf2_v1_1_cube, 1, 0x40012000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 1u, 0u, 0u, 0u, 0u, 20},
  {PeripheralId::ADC_Common, PeripheralClassId::class_adc_common, BackendSchemaId::schema_alloy_adc_common_st_adc_common, 0, 0x40012300u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 1u, 1u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::CRC, PeripheralClassId::class_crc, BackendSchemaId::schema_alloy_crc_st_integtest1_v1_0, 0, 0x40023000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 3},
  {PeripheralId::DBG, PeripheralClassId::class_dbg, BackendSchemaId::schema_alloy_dbg_st_dbg, 0, 0xE0042000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::DMA1, PeripheralClassId::class_dma, BackendSchemaId::schema_alloy_dma_st_dma, 1, 0x40026000u, ClockGateId::stm32f401re_gate_dma1, ResetId::stm32f401re_reset_dma1, ClockSelectorId::none, 2u, 2u, 0u, 0u, 0u, 0u, 52},
  {PeripheralId::DMA2, PeripheralClassId::class_dma, BackendSchemaId::schema_alloy_dma_st_dma, 2, 0x40026400u, ClockGateId::stm32f401re_gate_dma2, ResetId::stm32f401re_reset_dma2, ClockSelectorId::none, 4u, 1u, 0u, 0u, 0u, 0u, 52},
  {PeripheralId::EXTI, PeripheralClassId::class_exti, BackendSchemaId::schema_alloy_exti_st_exti, 0, 0x40013C00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 5u, 8u, 0u, 0u, 0u, 0u, 6},
  {PeripheralId::FLASH, PeripheralClassId::class_flash, BackendSchemaId::schema_alloy_flash_st_flash, 0, 0x40023C00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 13u, 1u, 0u, 0u, 0u, 0u, 6},
  {PeripheralId::FPU, PeripheralClassId::class_fpu, BackendSchemaId::schema_alloy_fpu_st_fpu, 0, 0xE000EF34u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 3},
  {PeripheralId::FPU_CPACR, PeripheralClassId::class_fpu_cpacr, BackendSchemaId::schema_alloy_fpu_cpacr_st_fpu_cpacr, 0, 0xE000ED88u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 1},
  {PeripheralId::GPIOA, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 0, 0x40020000u, ClockGateId::stm32f401re_gate_gpioa, ResetId::stm32f401re_reset_gpioa, ClockSelectorId::none, 14u, 1u, 0u, 0u, 0u, 0u, 10},
  {PeripheralId::GPIOB, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 1, 0x40020400u, ClockGateId::stm32f401re_gate_gpiob, ResetId::stm32f401re_reset_gpiob, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 10},
  {PeripheralId::GPIOC, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 2, 0x40020800u, ClockGateId::stm32f401re_gate_gpioc, ResetId::stm32f401re_reset_gpioc, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 10},
  {PeripheralId::GPIOD, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 3, 0x40020C00u, ClockGateId::stm32f401re_gate_gpiod, ResetId::stm32f401re_reset_gpiod, ClockSelectorId::none, 15u, 4u, 0u, 0u, 0u, 0u, 10},
  {PeripheralId::GPIOE, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 4, 0x40021000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 10},
  {PeripheralId::GPIOH, PeripheralClassId::class_gpio, BackendSchemaId::schema_alloy_gpio_st_gpio, 7, 0x40021C00u, ClockGateId::stm32f401re_gate_gpioh, ResetId::stm32f401re_reset_gpioh, ClockSelectorId::none, 19u, 1u, 0u, 0u, 0u, 0u, 10},
  {PeripheralId::I2C1, PeripheralClassId::class_i2c1, BackendSchemaId::schema_alloy_i2c1_st_i2c1_v1_5_cube, 0, 0x40005400u, ClockGateId::stm32f401re_gate_i2c1, ResetId::stm32f401re_reset_i2c1, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 3u, 9},
  {PeripheralId::I2C2, PeripheralClassId::class_i2c2, BackendSchemaId::schema_alloy_i2c2_st_i2c1_v1_5_cube, 0, 0x40005800u, ClockGateId::stm32f401re_gate_i2c2, ResetId::stm32f401re_reset_i2c2, ClockSelectorId::none, 0u, 0u, 0u, 0u, 3u, 3u, 9},
  {PeripheralId::I2C3, PeripheralClassId::class_i2c3, BackendSchemaId::schema_alloy_i2c3_st_i2c1_v1_5_cube, 0, 0x40005C00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 20u, 1u, 0u, 0u, 0u, 0u, 9},
  {PeripheralId::I2S2ext, PeripheralClassId::class_i2s2ext, BackendSchemaId::schema_alloy_i2s2ext_st_i2s2ext, 0, 0x40003400u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 9},
  {PeripheralId::I2S3ext, PeripheralClassId::class_i2s3ext, BackendSchemaId::schema_alloy_i2s3ext_st_i2s3ext, 0, 0x40004000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 9},
  {PeripheralId::IWDG, PeripheralClassId::class_iwdg, BackendSchemaId::schema_alloy_iwdg_st_iwdg1_v1_1, 0, 0x40003000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::MPU, PeripheralClassId::class_mpu, BackendSchemaId::schema_alloy_mpu_st_mpu, 0, 0xE000ED90u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 5},
  {PeripheralId::NVIC, PeripheralClassId::class_nvic, BackendSchemaId::schema_alloy_nvic_st_stm32f401, 0, 0xE000E100u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 35},
  {PeripheralId::NVIC_STIR, PeripheralClassId::class_nvic_stir, BackendSchemaId::schema_alloy_nvic_stir_st_nvic_stir, 0, 0xE000EF00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 1},
  {PeripheralId::OTG_FS_DEVICE, PeripheralClassId::class_otg_fs_device, BackendSchemaId::schema_alloy_otg_fs_device_st_otg_fs_device, 0, 0x50000800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 38},
  {PeripheralId::OTG_FS_GLOBAL, PeripheralClassId::class_otg_fs_global, BackendSchemaId::schema_alloy_otg_fs_global_st_otg_fs_global, 0, 0x50000000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 17},
  {PeripheralId::OTG_FS_HOST, PeripheralClassId::class_otg_fs_host, BackendSchemaId::schema_alloy_otg_fs_host_st_otg_fs_host, 0, 0x50000400u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 39},
  {PeripheralId::OTG_FS_PWRCLK, PeripheralClassId::class_otg_fs_pwrclk, BackendSchemaId::schema_alloy_otg_fs_pwrclk_st_otg_fs_pwrclk, 0, 0x50000E00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 1},
  {PeripheralId::PWR, PeripheralClassId::class_pwr, BackendSchemaId::schema_alloy_pwr_st_pwr, 0, 0x40007000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::RCC, PeripheralClassId::class_rcc, BackendSchemaId::schema_alloy_rcc_st_stm32f417_rcc_v1_0, 0, 0x40023800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 21u, 2u, 0u, 0u, 0u, 0u, 20},
  {PeripheralId::RTC, PeripheralClassId::class_rtc, BackendSchemaId::schema_alloy_rtc_st_rtc2_v2_3, 0, 0x40002800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 23u, 2u, 0u, 0u, 0u, 0u, 39},
  {PeripheralId::SCB, PeripheralClassId::class_scb, BackendSchemaId::schema_alloy_scb_st_scb, 0, 0xE000ED00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 15},
  {PeripheralId::SCB_ACTRL, PeripheralClassId::class_scb_actrl, BackendSchemaId::schema_alloy_scb_actrl_st_scb_actrl, 0, 0xE000E008u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 1},
  {PeripheralId::SDIO, PeripheralClassId::class_sdio, BackendSchemaId::schema_alloy_sdio_st_sdmmc_v1_2_cube, 0, 0x40012C00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 25u, 2u, 0u, 0u, 0u, 0u, 18},
  {PeripheralId::SPI1, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_st_spi2s1_v2_2_cube, 1, 0x40013000u, ClockGateId::stm32f401re_gate_spi1, ResetId::stm32f401re_reset_spi1, ClockSelectorId::none, 0u, 0u, 0u, 0u, 6u, 4u, 9},
  {PeripheralId::SPI2, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_st_spi2s1_v2_2_cube, 2, 0x40003800u, ClockGateId::stm32f401re_gate_spi2, ResetId::stm32f401re_reset_spi2, ClockSelectorId::none, 0u, 0u, 0u, 0u, 10u, 4u, 9},
  {PeripheralId::SPI3, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_st_spi2s1_v2_2_cube, 3, 0x40003C00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 9},
  {PeripheralId::SPI4, PeripheralClassId::class_spi, BackendSchemaId::schema_alloy_spi_st_spi, 4, 0x40013400u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 9},
  {PeripheralId::STK, PeripheralClassId::class_stk, BackendSchemaId::schema_alloy_stk_st_stk, 0, 0xE000E010u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::SYSCFG, PeripheralClassId::class_syscfg, BackendSchemaId::schema_alloy_syscfg_st_syscfg, 0, 0x40013800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 7},
  {PeripheralId::TIM1, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube, 1, 0x40010000u, ClockGateId::stm32f401re_gate_tim1, ResetId::stm32f401re_reset_tim1, ClockSelectorId::none, 0u, 0u, 0u, 0u, 14u, 9u, 20},
  {PeripheralId::TIM10, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube, 10, 0x40014400u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 27u, 1u, 0u, 0u, 0u, 0u, 10},
  {PeripheralId::TIM11, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube, 11, 0x40014800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 28u, 1u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::TIM2, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube, 2, 0x40000000u, ClockGateId::stm32f401re_gate_tim2, ResetId::stm32f401re_reset_tim2, ClockSelectorId::none, 29u, 1u, 0u, 0u, 23u, 5u, 19},
  {PeripheralId::TIM3, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube, 3, 0x40000400u, ClockGateId::stm32f401re_gate_tim3, ResetId::stm32f401re_reset_tim3, ClockSelectorId::none, 30u, 1u, 0u, 0u, 28u, 5u, 18},
  {PeripheralId::TIM4, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube, 4, 0x40000800u, ClockGateId::stm32f401re_gate_tim4, ResetId::stm32f401re_reset_tim4, ClockSelectorId::none, 0u, 0u, 0u, 0u, 33u, 4u, 18},
  {PeripheralId::TIM5, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube, 5, 0x40000C00u, ClockGateId::stm32f401re_gate_tim5, ResetId::stm32f401re_reset_tim5, ClockSelectorId::none, 0u, 0u, 0u, 0u, 37u, 3u, 19},
  {PeripheralId::TIM8, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_tim, 8, 0x40010400u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 20},
  {PeripheralId::TIM9, PeripheralClassId::class_timer, BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube, 9, 0x40014000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 13},
  {PeripheralId::USART1, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci2_v1_2_cube, 1, 0x40011000u, ClockGateId::stm32f401re_gate_usart1, ResetId::stm32f401re_reset_usart1, ClockSelectorId::none, 31u, 2u, 0u, 0u, 40u, 5u, 7},
  {PeripheralId::USART2, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci2_v1_2_cube, 2, 0x40004400u, ClockGateId::stm32f401re_gate_usart2, ResetId::stm32f401re_reset_usart2, ClockSelectorId::none, 0u, 0u, 0u, 2u, 45u, 4u, 7},
  {PeripheralId::USART6, PeripheralClassId::class_uart, BackendSchemaId::schema_alloy_uart_st_sci2_v1_2_cube, 6, 0x40011400u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 7},
  {PeripheralId::WWDG, PeripheralClassId::class_wwdg, BackendSchemaId::schema_alloy_wwdg_st_wwdg1_v1_0, 0, 0x40002C00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 33u, 1u, 0u, 0u, 0u, 0u, 3},
}};
}
}
}
}
}
