#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g0b1re {
enum class InterruptBindingId : std::uint16_t {
  none,
  interrupt_binding_adc1_adc_comp,
  interrupt_binding_dac_tim6_dac_lptim1,
  interrupt_binding_dma1_dma1_channel1,
  interrupt_binding_dma1_dma1_channel2_3,
  interrupt_binding_dma1_dma1_channel4_5_6_7_dmamux_dma2_channel1_2_3_4_5,
  interrupt_binding_exti_exti0_1,
  interrupt_binding_exti_exti2_3,
  interrupt_binding_exti_exti4_15,
  interrupt_binding_flash_flash,
  interrupt_binding_hdmi_cec_cec,
  interrupt_binding_i2c1_i2c1,
  interrupt_binding_i2c2_i2c2_i2c3,
  interrupt_binding_pwr_pvd,
  interrupt_binding_rcc_rcc_crs,
  interrupt_binding_rtc_rtc_tamp,
  interrupt_binding_spi1_spi1,
  interrupt_binding_spi2_spi2_spi3,
  interrupt_binding_tim1_tim1_brk_up_trg_com,
  interrupt_binding_tim1_tim1_cc,
  interrupt_binding_tim14_tim14,
  interrupt_binding_tim15_tim15,
  interrupt_binding_tim16_tim16,
  interrupt_binding_tim17_tim17,
  interrupt_binding_tim2_tim2,
  interrupt_binding_tim3_tim3_tim4,
  interrupt_binding_tim7_tim7,
  interrupt_binding_ucpd1_ucpd1_ucpd2_usb,
  interrupt_binding_usart1_usart1,
  interrupt_binding_usart2_usart2_lpuart2,
  interrupt_binding_usart3_usart3_usart4_usart5_usart6_lpuart1,
  interrupt_binding_wwdg_wwdg,
};

enum class InterruptId : std::uint16_t {
  none,
  ADC_COMP,
  TIM6_DAC_LPTIM1,
  DMA1_Channel1,
  DMA1_Channel2_3,
  DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5,
  EXTI0_1,
  EXTI2_3,
  EXTI4_15,
  FLASH,
  CEC,
  I2C1,
  I2C2_I2C3,
  PVD,
  RCC_CRS,
  RTC_TAMP,
  SPI1,
  SPI2_SPI3,
  TIM1_BRK_UP_TRG_COM,
  TIM1_CC,
  TIM14,
  TIM15,
  TIM16,
  TIM17,
  TIM2,
  TIM3_TIM4,
  TIM7,
  UCPD1_UCPD2_USB,
  USART1,
  USART2_LPUART2,
  USART3_USART4_USART5_USART6_LPUART1,
  WWDG,
};

enum class InterruptSymbolId : std::uint16_t {
  none,
  ADC_COMP_IRQHandler,
  TIM6_DAC_LPTIM1_IRQHandler,
  DMA1_Channel1_IRQHandler,
  DMA1_Channel2_3_IRQHandler,
  DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5_IRQHandler,
  EXTI0_1_IRQHandler,
  EXTI2_3_IRQHandler,
  EXTI4_15_IRQHandler,
  FLASH_IRQHandler,
  CEC_IRQHandler,
  I2C1_IRQHandler,
  I2C2_I2C3_IRQHandler,
  PVD_IRQHandler,
  RCC_CRS_IRQHandler,
  RTC_TAMP_IRQHandler,
  SPI1_IRQHandler,
  SPI2_SPI3_IRQHandler,
  TIM1_BRK_UP_TRG_COM_IRQHandler,
  TIM1_CC_IRQHandler,
  TIM14_IRQHandler,
  TIM15_IRQHandler,
  TIM16_IRQHandler,
  TIM17_IRQHandler,
  TIM2_IRQHandler,
  TIM3_TIM4_IRQHandler,
  TIM7_IRQHandler,
  UCPD1_UCPD2_USB_IRQHandler,
  USART1_IRQHandler,
  USART2_LPUART2_IRQHandler,
  USART3_USART4_USART5_USART6_LPUART1_IRQHandler,
  WWDG_IRQHandler,
};

enum class InterruptSharedGroupId : std::uint16_t {
  none,
  interrupt_group_dma1,
  interrupt_group_exti,
  interrupt_group_tim1,
};

enum class InterruptAliasId : std::uint16_t {
  none,
  ADC1,
  ADC_COMP_IRQHandler,
  TIM6_DAC,
  TIM6_DAC_LPTIM1_IRQHandler,
  DMA1_Channel1_IRQHandler,
  DMA1_Channel2_3_IRQHandler,
  DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5_IRQHandler,
  EXTI0_1_IRQHandler,
  EXTI2_3_IRQHandler,
  EXTI4_15_IRQHandler,
  FLASH_IRQHandler,
  HDMI_CEC,
  CEC_IRQHandler,
  I2C1_IRQHandler,
  I2C2_I2C3_IRQHandler,
  PWR,
  PVD_IRQHandler,
  RCC_CRS_IRQHandler,
  RTC_TAMP_IRQHandler,
  SPI1_IRQHandler,
  SPI2_SPI3_IRQHandler,
  TIM1_BRK_UP_TRG_COM_IRQHandler,
  TIM1_CC_IRQHandler,
  TIM14_IRQHandler,
  TIM15_IRQHandler,
  TIM16_IRQHandler,
  TIM17_IRQHandler,
  TIM2_IRQHandler,
  TIM3_TIM4_IRQHandler,
  TIM7_IRQHandler,
  UCPD1_UCPD2_USB_IRQHandler,
  USART1_IRQHandler,
  USART2_LPUART2_IRQHandler,
  USART3_USART4_USART5_USART6_LPUART1_IRQHandler,
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
inline constexpr std::array<InterruptBindingDescriptor, 31> kInterruptBindings = {{
  {InterruptBindingId::interrupt_binding_adc1_adc_comp, PeripheralId::ADC1, InterruptId::ADC_COMP, 12, 28, InterruptSymbolId::ADC_COMP_IRQHandler, InterruptSharedGroupId::none, 0u, 2u},
  {InterruptBindingId::interrupt_binding_dac_tim6_dac_lptim1, PeripheralId::DAC, InterruptId::TIM6_DAC_LPTIM1, 17, 33, InterruptSymbolId::TIM6_DAC_LPTIM1_IRQHandler, InterruptSharedGroupId::none, 2u, 2u},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel1, PeripheralId::DMA1, InterruptId::DMA1_Channel1, 9, 25, InterruptSymbolId::DMA1_Channel1_IRQHandler, InterruptSharedGroupId::interrupt_group_dma1, 4u, 1u},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel2_3, PeripheralId::DMA1, InterruptId::DMA1_Channel2_3, 10, 26, InterruptSymbolId::DMA1_Channel2_3_IRQHandler, InterruptSharedGroupId::interrupt_group_dma1, 5u, 1u},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel4_5_6_7_dmamux_dma2_channel1_2_3_4_5, PeripheralId::DMA1, InterruptId::DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5, 11, 27, InterruptSymbolId::DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5_IRQHandler, InterruptSharedGroupId::interrupt_group_dma1, 6u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti0_1, PeripheralId::EXTI, InterruptId::EXTI0_1, 5, 21, InterruptSymbolId::EXTI0_1_IRQHandler, InterruptSharedGroupId::interrupt_group_exti, 7u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti2_3, PeripheralId::EXTI, InterruptId::EXTI2_3, 6, 22, InterruptSymbolId::EXTI2_3_IRQHandler, InterruptSharedGroupId::interrupt_group_exti, 8u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti4_15, PeripheralId::EXTI, InterruptId::EXTI4_15, 7, 23, InterruptSymbolId::EXTI4_15_IRQHandler, InterruptSharedGroupId::interrupt_group_exti, 9u, 1u},
  {InterruptBindingId::interrupt_binding_flash_flash, PeripheralId::FLASH, InterruptId::FLASH, 3, 19, InterruptSymbolId::FLASH_IRQHandler, InterruptSharedGroupId::none, 10u, 1u},
  {InterruptBindingId::interrupt_binding_hdmi_cec_cec, PeripheralId::HDMI_CEC, InterruptId::CEC, 30, 46, InterruptSymbolId::CEC_IRQHandler, InterruptSharedGroupId::none, 11u, 2u},
  {InterruptBindingId::interrupt_binding_i2c1_i2c1, PeripheralId::I2C1, InterruptId::I2C1, 23, 39, InterruptSymbolId::I2C1_IRQHandler, InterruptSharedGroupId::none, 13u, 1u},
  {InterruptBindingId::interrupt_binding_i2c2_i2c2_i2c3, PeripheralId::I2C2, InterruptId::I2C2_I2C3, 24, 40, InterruptSymbolId::I2C2_I2C3_IRQHandler, InterruptSharedGroupId::none, 14u, 1u},
  {InterruptBindingId::interrupt_binding_pwr_pvd, PeripheralId::PWR, InterruptId::PVD, 1, 17, InterruptSymbolId::PVD_IRQHandler, InterruptSharedGroupId::none, 15u, 2u},
  {InterruptBindingId::interrupt_binding_rcc_rcc_crs, PeripheralId::RCC, InterruptId::RCC_CRS, 4, 20, InterruptSymbolId::RCC_CRS_IRQHandler, InterruptSharedGroupId::none, 17u, 1u},
  {InterruptBindingId::interrupt_binding_rtc_rtc_tamp, PeripheralId::RTC, InterruptId::RTC_TAMP, 2, 18, InterruptSymbolId::RTC_TAMP_IRQHandler, InterruptSharedGroupId::none, 18u, 1u},
  {InterruptBindingId::interrupt_binding_spi1_spi1, PeripheralId::SPI1, InterruptId::SPI1, 25, 41, InterruptSymbolId::SPI1_IRQHandler, InterruptSharedGroupId::none, 19u, 1u},
  {InterruptBindingId::interrupt_binding_spi2_spi2_spi3, PeripheralId::SPI2, InterruptId::SPI2_SPI3, 26, 42, InterruptSymbolId::SPI2_SPI3_IRQHandler, InterruptSharedGroupId::none, 20u, 1u},
  {InterruptBindingId::interrupt_binding_tim1_tim1_brk_up_trg_com, PeripheralId::TIM1, InterruptId::TIM1_BRK_UP_TRG_COM, 13, 29, InterruptSymbolId::TIM1_BRK_UP_TRG_COM_IRQHandler, InterruptSharedGroupId::interrupt_group_tim1, 25u, 1u},
  {InterruptBindingId::interrupt_binding_tim1_tim1_cc, PeripheralId::TIM1, InterruptId::TIM1_CC, 14, 30, InterruptSymbolId::TIM1_CC_IRQHandler, InterruptSharedGroupId::interrupt_group_tim1, 26u, 1u},
  {InterruptBindingId::interrupt_binding_tim14_tim14, PeripheralId::TIM14, InterruptId::TIM14, 19, 35, InterruptSymbolId::TIM14_IRQHandler, InterruptSharedGroupId::none, 21u, 1u},
  {InterruptBindingId::interrupt_binding_tim15_tim15, PeripheralId::TIM15, InterruptId::TIM15, 20, 36, InterruptSymbolId::TIM15_IRQHandler, InterruptSharedGroupId::none, 22u, 1u},
  {InterruptBindingId::interrupt_binding_tim16_tim16, PeripheralId::TIM16, InterruptId::TIM16, 21, 37, InterruptSymbolId::TIM16_IRQHandler, InterruptSharedGroupId::none, 23u, 1u},
  {InterruptBindingId::interrupt_binding_tim17_tim17, PeripheralId::TIM17, InterruptId::TIM17, 22, 38, InterruptSymbolId::TIM17_IRQHandler, InterruptSharedGroupId::none, 24u, 1u},
  {InterruptBindingId::interrupt_binding_tim2_tim2, PeripheralId::TIM2, InterruptId::TIM2, 15, 31, InterruptSymbolId::TIM2_IRQHandler, InterruptSharedGroupId::none, 27u, 1u},
  {InterruptBindingId::interrupt_binding_tim3_tim3_tim4, PeripheralId::TIM3, InterruptId::TIM3_TIM4, 16, 32, InterruptSymbolId::TIM3_TIM4_IRQHandler, InterruptSharedGroupId::none, 28u, 1u},
  {InterruptBindingId::interrupt_binding_tim7_tim7, PeripheralId::TIM7, InterruptId::TIM7, 18, 34, InterruptSymbolId::TIM7_IRQHandler, InterruptSharedGroupId::none, 29u, 1u},
  {InterruptBindingId::interrupt_binding_ucpd1_ucpd1_ucpd2_usb, PeripheralId::UCPD1, InterruptId::UCPD1_UCPD2_USB, 8, 24, InterruptSymbolId::UCPD1_UCPD2_USB_IRQHandler, InterruptSharedGroupId::none, 30u, 1u},
  {InterruptBindingId::interrupt_binding_usart1_usart1, PeripheralId::USART1, InterruptId::USART1, 27, 43, InterruptSymbolId::USART1_IRQHandler, InterruptSharedGroupId::none, 31u, 1u},
  {InterruptBindingId::interrupt_binding_usart2_usart2_lpuart2, PeripheralId::USART2, InterruptId::USART2_LPUART2, 28, 44, InterruptSymbolId::USART2_LPUART2_IRQHandler, InterruptSharedGroupId::none, 32u, 1u},
  {InterruptBindingId::interrupt_binding_usart3_usart3_usart4_usart5_usart6_lpuart1, PeripheralId::USART3, InterruptId::USART3_USART4_USART5_USART6_LPUART1, 29, 45, InterruptSymbolId::USART3_USART4_USART5_USART6_LPUART1_IRQHandler, InterruptSharedGroupId::none, 33u, 1u},
  {InterruptBindingId::interrupt_binding_wwdg_wwdg, PeripheralId::WWDG, InterruptId::WWDG, 0, 16, InterruptSymbolId::WWDG_IRQHandler, InterruptSharedGroupId::none, 34u, 1u},
}};

struct InterruptBindingAlias {
  InterruptBindingId binding_id;
  InterruptAliasId alias_id;
};
inline constexpr std::array<InterruptBindingAlias, 35> kInterruptBindingAliases = {{
  {InterruptBindingId::interrupt_binding_adc1_adc_comp, InterruptAliasId::ADC1},
  {InterruptBindingId::interrupt_binding_adc1_adc_comp, InterruptAliasId::ADC_COMP_IRQHandler},
  {InterruptBindingId::interrupt_binding_dac_tim6_dac_lptim1, InterruptAliasId::TIM6_DAC},
  {InterruptBindingId::interrupt_binding_dac_tim6_dac_lptim1, InterruptAliasId::TIM6_DAC_LPTIM1_IRQHandler},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel1, InterruptAliasId::DMA1_Channel1_IRQHandler},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel2_3, InterruptAliasId::DMA1_Channel2_3_IRQHandler},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel4_5_6_7_dmamux_dma2_channel1_2_3_4_5, InterruptAliasId::DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5_IRQHandler},
  {InterruptBindingId::interrupt_binding_exti_exti0_1, InterruptAliasId::EXTI0_1_IRQHandler},
  {InterruptBindingId::interrupt_binding_exti_exti2_3, InterruptAliasId::EXTI2_3_IRQHandler},
  {InterruptBindingId::interrupt_binding_exti_exti4_15, InterruptAliasId::EXTI4_15_IRQHandler},
  {InterruptBindingId::interrupt_binding_flash_flash, InterruptAliasId::FLASH_IRQHandler},
  {InterruptBindingId::interrupt_binding_hdmi_cec_cec, InterruptAliasId::HDMI_CEC},
  {InterruptBindingId::interrupt_binding_hdmi_cec_cec, InterruptAliasId::CEC_IRQHandler},
  {InterruptBindingId::interrupt_binding_i2c1_i2c1, InterruptAliasId::I2C1_IRQHandler},
  {InterruptBindingId::interrupt_binding_i2c2_i2c2_i2c3, InterruptAliasId::I2C2_I2C3_IRQHandler},
  {InterruptBindingId::interrupt_binding_pwr_pvd, InterruptAliasId::PWR},
  {InterruptBindingId::interrupt_binding_pwr_pvd, InterruptAliasId::PVD_IRQHandler},
  {InterruptBindingId::interrupt_binding_rcc_rcc_crs, InterruptAliasId::RCC_CRS_IRQHandler},
  {InterruptBindingId::interrupt_binding_rtc_rtc_tamp, InterruptAliasId::RTC_TAMP_IRQHandler},
  {InterruptBindingId::interrupt_binding_spi1_spi1, InterruptAliasId::SPI1_IRQHandler},
  {InterruptBindingId::interrupt_binding_spi2_spi2_spi3, InterruptAliasId::SPI2_SPI3_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim1_tim1_brk_up_trg_com, InterruptAliasId::TIM1_BRK_UP_TRG_COM_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim1_tim1_cc, InterruptAliasId::TIM1_CC_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim14_tim14, InterruptAliasId::TIM14_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim15_tim15, InterruptAliasId::TIM15_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim16_tim16, InterruptAliasId::TIM16_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim17_tim17, InterruptAliasId::TIM17_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim2_tim2, InterruptAliasId::TIM2_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim3_tim3_tim4, InterruptAliasId::TIM3_TIM4_IRQHandler},
  {InterruptBindingId::interrupt_binding_tim7_tim7, InterruptAliasId::TIM7_IRQHandler},
  {InterruptBindingId::interrupt_binding_ucpd1_ucpd1_ucpd2_usb, InterruptAliasId::UCPD1_UCPD2_USB_IRQHandler},
  {InterruptBindingId::interrupt_binding_usart1_usart1, InterruptAliasId::USART1_IRQHandler},
  {InterruptBindingId::interrupt_binding_usart2_usart2_lpuart2, InterruptAliasId::USART2_LPUART2_IRQHandler},
  {InterruptBindingId::interrupt_binding_usart3_usart3_usart4_usart5_usart6_lpuart1, InterruptAliasId::USART3_USART4_USART5_USART6_LPUART1_IRQHandler},
  {InterruptBindingId::interrupt_binding_wwdg_wwdg, InterruptAliasId::WWDG_IRQHandler},
}};
}
}
}
}
}
