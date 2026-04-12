#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
enum class InterruptBindingId : std::uint16_t {
  none,
  interrupt_binding_adc1_adc,
  interrupt_binding_crc_cec,
  interrupt_binding_dma1_dma_channel1,
  interrupt_binding_dma1_dma_channel2_3,
  interrupt_binding_dmamux1_dma_channel4_5_6_7,
  interrupt_binding_exti_exti0_1,
  interrupt_binding_exti_exti2_3,
  interrupt_binding_exti_exti4_15,
  interrupt_binding_flash_flash,
  interrupt_binding_i2c1_i2c1,
  interrupt_binding_i2c2_i2c2,
  interrupt_binding_rcc_rcc,
  interrupt_binding_rtc_rtc_stamp,
  interrupt_binding_spi1_spi1,
  interrupt_binding_spi2_spi2,
  interrupt_binding_tim1_tim1_brk_up_trg_com,
  interrupt_binding_tim1_tim1_cc,
  interrupt_binding_tim14_tim14,
  interrupt_binding_tim16_tim16,
  interrupt_binding_tim17_tim17,
  interrupt_binding_tim2_tim2,
  interrupt_binding_tim2_tim3,
  interrupt_binding_usart1_usart1,
  interrupt_binding_usart2_usart2,
  interrupt_binding_wwdg_wwdg,
};

enum class InterruptId : std::uint16_t {
  none,
  ADC,
  CEC,
  DMA_Channel1,
  DMA_Channel2_3,
  DMA_Channel4_5_6_7,
  EXTI0_1,
  EXTI2_3,
  EXTI4_15,
  FLASH,
  I2C1,
  I2C2,
  RCC,
  RTC_STAMP,
  SPI1,
  SPI2,
  TIM1_BRK_UP_TRG_COM,
  TIM1_CC,
  TIM14,
  TIM16,
  TIM17,
  TIM2,
  TIM3,
  USART1,
  USART2,
  WWDG,
};

enum class InterruptSymbolId : std::uint16_t {
  none,
  ADC_IRQHandler,
  CEC_IRQHandler,
  DMA_Channel1_IRQHandler,
  DMA_Channel2_3_IRQHandler,
  DMA_Channel4_5_6_7_IRQHandler,
  EXTI0_1_IRQHandler,
  EXTI2_3_IRQHandler,
  EXTI4_15_IRQHandler,
  FLASH_IRQHandler,
  I2C1_IRQHandler,
  I2C2_IRQHandler,
  RCC_IRQHandler,
  RTC_STAMP_IRQHandler,
  SPI1_IRQHandler,
  SPI2_IRQHandler,
  TIM1_BRK_UP_TRG_COM_IRQHandler,
  TIM1_CC_IRQHandler,
  TIM14_IRQHandler,
  TIM16_IRQHandler,
  TIM17_IRQHandler,
  TIM2_IRQHandler,
  TIM3_IRQHandler,
  USART1_IRQHandler,
  USART2_IRQHandler,
  WWDG_IRQHandler,
};

enum class InterruptSharedGroupId : std::uint16_t {
  none,
  interrupt_group_dma1,
  interrupt_group_exti,
  interrupt_group_tim1,
  interrupt_group_tim2,
};

enum class InterruptAliasId : std::uint16_t {
  none,
  ADC1,
  ADC_IRQHandler,
  CRC,
  CEC_IRQHandler,
  DMA1,
  DMA_Channel1_IRQHandler,
  DMA_Channel2_3_IRQHandler,
  DMAMUX1,
  DMA_Channel4_5_6_7_IRQHandler,
  EXTI0_1_IRQHandler,
  EXTI2_3_IRQHandler,
  EXTI4_15_IRQHandler,
  FLASH_IRQHandler,
  I2C1_IRQHandler,
  I2C2_IRQHandler,
  RCC_IRQHandler,
  RTC_STAMP_IRQHandler,
  SPI1_IRQHandler,
  SPI2_IRQHandler,
  TIM1_BRK_UP_TRG_COM_IRQHandler,
  TIM1_CC_IRQHandler,
  TIM14_IRQHandler,
  TIM16_IRQHandler,
  TIM17_IRQHandler,
  TIM2_IRQHandler,
  TIM2,
  TIM3_IRQHandler,
  USART1_IRQHandler,
  USART2_IRQHandler,
  WWDG_IRQHandler,
};

struct InterruptBindingDescriptor {
  InterruptBindingId binding_id;
  PeripheralId peripheral_id;
  InterruptId interrupt_id;
  int line;
  int vector_slot;
  InterruptSymbolId symbol_id;
  InterruptSharedGroupId shared_group_id;
  std::uint16_t alias_offset;
  std::uint16_t alias_count;
};
inline constexpr std::array<InterruptBindingDescriptor, 25> kInterruptBindings = {{
  {InterruptBindingId::interrupt_binding_adc1_adc, PeripheralId::ADC1, InterruptId::ADC, 12, 28, InterruptSymbolId::ADC_IRQHandler, InterruptSharedGroupId::none, 0u, 2u},
  {InterruptBindingId::interrupt_binding_crc_cec, PeripheralId::CRC, InterruptId::CEC, 30, 46, InterruptSymbolId::CEC_IRQHandler, InterruptSharedGroupId::none, 2u, 2u},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel1, PeripheralId::DMA1, InterruptId::DMA_Channel1, 9, 25, InterruptSymbolId::DMA_Channel1_IRQHandler, InterruptSharedGroupId::interrupt_group_dma1, 4u, 2u},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel2_3, PeripheralId::DMA1, InterruptId::DMA_Channel2_3, 10, 26, InterruptSymbolId::DMA_Channel2_3_IRQHandler, InterruptSharedGroupId::interrupt_group_dma1, 6u, 2u},
  {InterruptBindingId::interrupt_binding_dmamux1_dma_channel4_5_6_7, PeripheralId::DMAMUX1, InterruptId::DMA_Channel4_5_6_7, 11, 27, InterruptSymbolId::DMA_Channel4_5_6_7_IRQHandler, InterruptSharedGroupId::none, 8u, 2u},
  {InterruptBindingId::interrupt_binding_exti_exti0_1, PeripheralId::EXTI, InterruptId::EXTI0_1, 5, 21, InterruptSymbolId::EXTI0_1_IRQHandler, InterruptSharedGroupId::interrupt_group_exti, 10u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti2_3, PeripheralId::EXTI, InterruptId::EXTI2_3, 6, 22, InterruptSymbolId::EXTI2_3_IRQHandler, InterruptSharedGroupId::interrupt_group_exti, 11u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti4_15, PeripheralId::EXTI, InterruptId::EXTI4_15, 7, 23, InterruptSymbolId::EXTI4_15_IRQHandler, InterruptSharedGroupId::interrupt_group_exti, 12u, 1u},
  {InterruptBindingId::interrupt_binding_flash_flash, PeripheralId::FLASH, InterruptId::FLASH, 3, 19, InterruptSymbolId::FLASH_IRQHandler, InterruptSharedGroupId::none, 13u, 1u},
  {InterruptBindingId::interrupt_binding_i2c1_i2c1, PeripheralId::I2C1, InterruptId::I2C1, 23, 39, InterruptSymbolId::I2C1_IRQHandler, InterruptSharedGroupId::none, 14u, 1u},
  {InterruptBindingId::interrupt_binding_i2c2_i2c2, PeripheralId::I2C2, InterruptId::I2C2, 24, 40, InterruptSymbolId::I2C2_IRQHandler, InterruptSharedGroupId::none, 15u, 1u},
  {InterruptBindingId::interrupt_binding_rcc_rcc, PeripheralId::RCC, InterruptId::RCC, 4, 20, InterruptSymbolId::RCC_IRQHandler, InterruptSharedGroupId::none, 16u, 1u},
  {InterruptBindingId::interrupt_binding_rtc_rtc_stamp, PeripheralId::RTC, InterruptId::RTC_STAMP, 2, 18, InterruptSymbolId::RTC_STAMP_IRQHandler, InterruptSharedGroupId::none, 17u, 1u},
  {InterruptBindingId::interrupt_binding_spi1_spi1, PeripheralId::SPI1, InterruptId::SPI1, 25, 41, InterruptSymbolId::SPI1_IRQHandler, InterruptSharedGroupId::none, 18u, 1u},
  {InterruptBindingId::interrupt_binding_spi2_spi2, PeripheralId::SPI2, InterruptId::SPI2, 26, 42, InterruptSymbolId::SPI2_IRQHandler, InterruptSharedGroupId::none, 19u, 1u},
  {InterruptBindingId::interrupt_binding_tim1_tim1_brk_up_trg_com, PeripheralId::TIM1, InterruptId::TIM1_BRK_UP_TRG_COM, 13, 29, InterruptSymbolId::TIM1_BRK_UP_TRG_COM_IRQHandler, InterruptSharedGroupId::interrupt_group_tim1, 23u, 1u},
  {InterruptBindingId::interrupt_binding_tim1_tim1_cc, PeripheralId::TIM1, InterruptId::TIM1_CC, 14, 30, InterruptSymbolId::TIM1_CC_IRQHandler, InterruptSharedGroupId::interrupt_group_tim1, 24u, 1u},
  {InterruptBindingId::interrupt_binding_tim14_tim14, PeripheralId::TIM14, InterruptId::TIM14, 19, 35, InterruptSymbolId::TIM14_IRQHandler, InterruptSharedGroupId::none, 20u, 1u},
  {InterruptBindingId::interrupt_binding_tim16_tim16, PeripheralId::TIM16, InterruptId::TIM16, 21, 37, InterruptSymbolId::TIM16_IRQHandler, InterruptSharedGroupId::none, 21u, 1u},
  {InterruptBindingId::interrupt_binding_tim17_tim17, PeripheralId::TIM17, InterruptId::TIM17, 22, 38, InterruptSymbolId::TIM17_IRQHandler, InterruptSharedGroupId::none, 22u, 1u},
  {InterruptBindingId::interrupt_binding_tim2_tim2, PeripheralId::TIM2, InterruptId::TIM2, 15, 31, InterruptSymbolId::TIM2_IRQHandler, InterruptSharedGroupId::interrupt_group_tim2, 25u, 1u},
  {InterruptBindingId::interrupt_binding_tim2_tim3, PeripheralId::TIM2, InterruptId::TIM3, 16, 32, InterruptSymbolId::TIM3_IRQHandler, InterruptSharedGroupId::interrupt_group_tim2, 26u, 2u},
  {InterruptBindingId::interrupt_binding_usart1_usart1, PeripheralId::USART1, InterruptId::USART1, 27, 43, InterruptSymbolId::USART1_IRQHandler, InterruptSharedGroupId::none, 28u, 1u},
  {InterruptBindingId::interrupt_binding_usart2_usart2, PeripheralId::USART2, InterruptId::USART2, 28, 44, InterruptSymbolId::USART2_IRQHandler, InterruptSharedGroupId::none, 29u, 1u},
  {InterruptBindingId::interrupt_binding_wwdg_wwdg, PeripheralId::WWDG, InterruptId::WWDG, 0, 16, InterruptSymbolId::WWDG_IRQHandler, InterruptSharedGroupId::none, 30u, 1u},
}};

struct InterruptBindingAlias {
  InterruptBindingId binding_id;
  InterruptAliasId alias_id;
};
inline constexpr std::array<InterruptBindingAlias, 31> kInterruptBindingAliases = {{
  {InterruptBindingId::interrupt_binding_adc1_adc, InterruptAliasId::ADC1},
  {InterruptBindingId::interrupt_binding_adc1_adc, InterruptAliasId::ADC_IRQHandler},
  {InterruptBindingId::interrupt_binding_crc_cec, InterruptAliasId::CRC},
  {InterruptBindingId::interrupt_binding_crc_cec, InterruptAliasId::CEC_IRQHandler},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel1, InterruptAliasId::DMA1},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel1, InterruptAliasId::DMA_Channel1_IRQHandler},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel2_3, InterruptAliasId::DMA1},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel2_3, InterruptAliasId::DMA_Channel2_3_IRQHandler},
  {InterruptBindingId::interrupt_binding_dmamux1_dma_channel4_5_6_7, InterruptAliasId::DMAMUX1},
  {InterruptBindingId::interrupt_binding_dmamux1_dma_channel4_5_6_7, InterruptAliasId::DMA_Channel4_5_6_7_IRQHandler},
  {InterruptBindingId::interrupt_binding_exti_exti0_1, InterruptAliasId::EXTI0_1_IRQHandler},
  {InterruptBindingId::interrupt_binding_exti_exti2_3, InterruptAliasId::EXTI2_3_IRQHandler},
  {InterruptBindingId::interrupt_binding_exti_exti4_15, InterruptAliasId::EXTI4_15_IRQHandler},
  {InterruptBindingId::interrupt_binding_flash_flash, InterruptAliasId::FLASH_IRQHandler},
  {InterruptBindingId::interrupt_binding_i2c1_i2c1, InterruptAliasId::I2C1_IRQHandler},
  {InterruptBindingId::interrupt_binding_i2c2_i2c2, InterruptAliasId::I2C2_IRQHandler},
  {InterruptBindingId::interrupt_binding_rcc_rcc, InterruptAliasId::RCC_IRQHandler},
  {InterruptBindingId::interrupt_binding_rtc_rtc_stamp, InterruptAliasId::RTC_STAMP_IRQHandler},
  {InterruptBindingId::interrupt_binding_spi1_spi1, InterruptAliasId::SPI1_IRQHandler},
  {InterruptBindingId::interrupt_binding_spi2_spi2, InterruptAliasId::SPI2_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim1_tim1_brk_up_trg_com, InterruptAliasId::TIM1_BRK_UP_TRG_COM_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim1_tim1_cc, InterruptAliasId::TIM1_CC_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim14_tim14, InterruptAliasId::TIM14_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim16_tim16, InterruptAliasId::TIM16_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim17_tim17, InterruptAliasId::TIM17_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim2_tim2, InterruptAliasId::TIM2_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim2_tim3, InterruptAliasId::TIM2},
  {InterruptBindingId::interrupt_binding_tim2_tim3, InterruptAliasId::TIM3_IRQHandler},
  {InterruptBindingId::interrupt_binding_usart1_usart1, InterruptAliasId::USART1_IRQHandler},
  {InterruptBindingId::interrupt_binding_usart2_usart2, InterruptAliasId::USART2_IRQHandler},
  {InterruptBindingId::interrupt_binding_wwdg_wwdg, InterruptAliasId::WWDG_IRQHandler},
}};
}
}
}
}
}
