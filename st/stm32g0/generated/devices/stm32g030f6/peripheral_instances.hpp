#pragma once

#include <array>
#include <cstdint>
#include "../../clock_tree_lite.hpp"

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
inline constexpr std::array<PeripheralInstanceDescriptor, 32> kPeripheralInstances = {{
  {PeripheralId::ADC1, "ADC1", "adc", "aditf4_v3_0_G0_Cube", "alloy.adc.st-aditf4-v3-0-g0-cube", 1, 0x40012400u, ClockGateId::stm32g030f6_gate_adc1, ResetId::stm32g030f6_reset_adc1, ClockSelectorId::none, 0u, 1u, 0u, 0u, 0u, 0u, 15},
  {PeripheralId::CRC, "CRC", "crc", "integtest1_v2_0", "alloy.crc.st-integtest1-v2-0", 0, 0x40023000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 1u, 1u, 0u, 0u, 0u, 0u, 5},
  {PeripheralId::DBG, "DBG", "dbg", nullptr, "alloy.dbg.st-dbg", 0, 0x40015800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 4},
  {PeripheralId::DMA1, "DMA1", "dma", nullptr, "alloy.dma.st-dma", 1, 0x40020000u, ClockGateId::stm32g030f6_gate_dma1, ResetId::stm32g030f6_reset_dma1, ClockSelectorId::none, 2u, 2u, 0u, 0u, 0u, 0u, 30},
  {PeripheralId::DMAMUX1, "DMAMUX1", "dmamux", nullptr, "alloy.dma-router.st-dmamux", 1, 0x40020800u, ClockGateId::stm32g030f6_gate_dmamux1, ResetId::stm32g030f6_reset_dmamux1, ClockSelectorId::none, 4u, 1u, 0u, 0u, 0u, 0u, 13},
  {PeripheralId::EXTI, "EXTI", "exti", nullptr, "alloy.exti.st-exti", 0, 0x40021800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 5u, 3u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::FLASH, "FLASH", "flash", nullptr, "alloy.flash.st-flash", 0, 0x40022000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 8u, 1u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOA, "GPIOA", "gpio", nullptr, "alloy.gpio.st-gpio", 0, 0x50000000u, ClockGateId::stm32g030f6_gate_gpioa, ResetId::stm32g030f6_reset_gpioa, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOB, "GPIOB", "gpio", nullptr, "alloy.gpio.st-gpio", 1, 0x50000400u, ClockGateId::stm32g030f6_gate_gpiob, ResetId::stm32g030f6_reset_gpiob, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOC, "GPIOC", "gpio", nullptr, "alloy.gpio.st-gpio", 2, 0x50000800u, ClockGateId::stm32g030f6_gate_gpioc, ResetId::stm32g030f6_reset_gpioc, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOD, "GPIOD", "gpio", nullptr, "alloy.gpio.st-gpio", 3, 0x50000C00u, ClockGateId::stm32g030f6_gate_gpiod, ResetId::stm32g030f6_reset_gpiod, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::GPIOF, "GPIOF", "gpio", nullptr, "alloy.gpio.st-gpio", 5, 0x50001400u, ClockGateId::stm32g030f6_gate_gpiof, ResetId::stm32g030f6_reset_gpiof, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::I2C1, "I2C1", "i2c1", "i2c2_v1_1_Cube", "alloy.i2c1.st-i2c2-v1-1-cube", 0, 0x40005400u, ClockGateId::stm32g030f6_gate_i2c1, ResetId::stm32g030f6_reset_i2c1, ClockSelectorId::none, 9u, 1u, 0u, 0u, 0u, 2u, 11},
  {PeripheralId::I2C2, "I2C2", "i2c2", "i2c2_v1_1_Cube", "alloy.i2c2.st-i2c2-v1-1-cube", 0, 0x40005800u, ClockGateId::stm32g030f6_gate_i2c2, ResetId::stm32g030f6_reset_i2c2, ClockSelectorId::none, 10u, 1u, 0u, 0u, 0u, 0u, 11},
  {PeripheralId::IWDG, "IWDG", "iwdg", "iwdg1_v2_0", "alloy.iwdg.st-iwdg1-v2-0", 0, 0x40003000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 5},
  {PeripheralId::PWR, "PWR", "pwr", nullptr, "alloy.pwr.st-pwr", 0, 0x40007000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 19},
  {PeripheralId::RCC, "RCC", "rcc", "STM32G0_64_rcc_v1_0", "alloy.rcc.st-stm32g0-64-rcc-v1-0", 0, 0x40021000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 11u, 1u, 0u, 0u, 0u, 0u, 23},
  {PeripheralId::RTC, "RTC", "rtc", "rtc3_v1_0_Cube", "alloy.rtc.st-rtc3-v1-0-cube", 0, 0x40002800u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 12u, 1u, 0u, 0u, 0u, 0u, 20},
  {PeripheralId::SPI1, "SPI1", "spi", "spi2s1_v3_5_Cube", "alloy.spi.st-spi2s1-v3-5-cube", 1, 0x40013000u, ClockGateId::stm32g030f6_gate_spi1, ResetId::stm32g030f6_reset_spi1, ClockSelectorId::none, 13u, 1u, 0u, 0u, 2u, 4u, 9},
  {PeripheralId::SPI2, "SPI2", "spi", "spi2s1_v3_5_Cube", "alloy.spi.st-spi2s1-v3-5-cube", 2, 0x40003800u, ClockGateId::stm32g030f6_gate_spi2, ResetId::stm32g030f6_reset_spi2, ClockSelectorId::none, 14u, 1u, 0u, 0u, 6u, 3u, 9},
  {PeripheralId::SYSCFG, "SYSCFG", "syscfg", nullptr, "alloy.syscfg.st-syscfg", 0, 0x40010000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 30},
  {PeripheralId::TAMP, "TAMP", "tamp", nullptr, "alloy.tamp.st-tamp", 0, 0x4000B000u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 12},
  {PeripheralId::TIM1, "TIM1", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 1, 0x40012C00u, ClockGateId::stm32g030f6_gate_tim1, ResetId::stm32g030f6_reset_tim1, ClockSelectorId::none, 15u, 2u, 0u, 0u, 9u, 4u, 27},
  {PeripheralId::TIM14, "TIM14", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 14, 0x40002000u, ClockGateId::stm32g030f6_gate_tim14, ResetId::stm32g030f6_reset_tim14, ClockSelectorId::none, 17u, 1u, 0u, 0u, 13u, 1u, 11},
  {PeripheralId::TIM16, "TIM16", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 16, 0x40014400u, ClockGateId::stm32g030f6_gate_tim16, ResetId::stm32g030f6_reset_tim16, ClockSelectorId::none, 18u, 1u, 0u, 0u, 14u, 1u, 17},
  {PeripheralId::TIM17, "TIM17", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 17, 0x40014800u, ClockGateId::stm32g030f6_gate_tim17, ResetId::stm32g030f6_reset_tim17, ClockSelectorId::none, 19u, 1u, 0u, 0u, 15u, 2u, 17},
  {PeripheralId::TIM2, "TIM2", "tim", nullptr, "alloy.timer.st-tim", 2, 0x40000000u, ClockGateId::stm32g030f6_gate_tim2, ResetId::stm32g030f6_reset_tim2, ClockSelectorId::none, 20u, 2u, 0u, 0u, 0u, 0u, 21},
  {PeripheralId::TIM3, "TIM3", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 3, 0x40000400u, ClockGateId::stm32g030f6_gate_tim3, ResetId::stm32g030f6_reset_tim3, ClockSelectorId::none, 0u, 0u, 0u, 0u, 17u, 3u, 21},
  {PeripheralId::USART1, "USART1", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 1, 0x40013800u, ClockGateId::stm32g030f6_gate_usart1, ResetId::stm32g030f6_reset_usart1, ClockSelectorId::stm32g030f6_selector_usart1_kernel, 22u, 1u, 0u, 0u, 20u, 4u, 12},
  {PeripheralId::USART2, "USART2", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 2, 0x40004400u, ClockGateId::stm32g030f6_gate_usart2, ResetId::stm32g030f6_reset_usart2, ClockSelectorId::none, 23u, 1u, 0u, 2u, 24u, 7u, 12},
  {PeripheralId::VREFBUF, "VREFBUF", "vrefbuf", nullptr, "alloy.vrefbuf.st-vrefbuf", 0, 0x40010030u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 0u, 0u, 0u, 0u, 0u, 0u, 2},
  {PeripheralId::WWDG, "WWDG", "wwdg", "wwdg1_v2_0", "alloy.wwdg.st-wwdg1-v2-0", 0, 0x40002C00u, ClockGateId::none, ResetId::none, ClockSelectorId::none, 24u, 1u, 0u, 0u, 0u, 0u, 3},
}};
}
}
}
}
}
