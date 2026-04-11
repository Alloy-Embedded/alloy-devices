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

struct InterruptBindingDescriptor {
  InterruptBindingId binding_id;
  PeripheralId peripheral_id;
  const char* peripheral_name;
  const char* interrupt_name;
  int line;
  int vector_slot;
  const char* symbol_name;
  const char* shared_group;
  std::uint16_t alias_offset;
  std::uint16_t alias_count;
};
inline constexpr std::array<InterruptBindingDescriptor, 31> kInterruptBindings = {{
  {InterruptBindingId::interrupt_binding_adc1_adc_comp, PeripheralId::ADC1, "ADC1", "ADC_COMP", 12, 28, "ADC_COMP_IRQHandler", nullptr, 0u, 2u},
  {InterruptBindingId::interrupt_binding_dac_tim6_dac_lptim1, PeripheralId::DAC, "DAC", "TIM6_DAC_LPTIM1", 17, 33, "TIM6_DAC_LPTIM1_IRQHandler", nullptr, 2u, 2u},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel1, PeripheralId::DMA1, "DMA1", "DMA1_Channel1", 9, 25, "DMA1_Channel1_IRQHandler", "interrupt-group:dma1", 4u, 1u},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel2_3, PeripheralId::DMA1, "DMA1", "DMA1_Channel2_3", 10, 26, "DMA1_Channel2_3_IRQHandler", "interrupt-group:dma1", 5u, 1u},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel4_5_6_7_dmamux_dma2_channel1_2_3_4_5, PeripheralId::DMA1, "DMA1", "DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5", 11, 27, "DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5_IRQHandler", "interrupt-group:dma1", 6u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti0_1, PeripheralId::EXTI, "EXTI", "EXTI0_1", 5, 21, "EXTI0_1_IRQHandler", "interrupt-group:exti", 7u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti2_3, PeripheralId::EXTI, "EXTI", "EXTI2_3", 6, 22, "EXTI2_3_IRQHandler", "interrupt-group:exti", 8u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti4_15, PeripheralId::EXTI, "EXTI", "EXTI4_15", 7, 23, "EXTI4_15_IRQHandler", "interrupt-group:exti", 9u, 1u},
  {InterruptBindingId::interrupt_binding_flash_flash, PeripheralId::FLASH, "FLASH", "FLASH", 3, 19, "FLASH_IRQHandler", nullptr, 10u, 1u},
  {InterruptBindingId::interrupt_binding_hdmi_cec_cec, PeripheralId::HDMI_CEC, "HDMI_CEC", "CEC", 30, 46, "CEC_IRQHandler", nullptr, 11u, 2u},
  {InterruptBindingId::interrupt_binding_i2c1_i2c1, PeripheralId::I2C1, "I2C1", "I2C1", 23, 39, "I2C1_IRQHandler", nullptr, 13u, 1u},
  {InterruptBindingId::interrupt_binding_i2c2_i2c2_i2c3, PeripheralId::I2C2, "I2C2", "I2C2_I2C3", 24, 40, "I2C2_I2C3_IRQHandler", nullptr, 14u, 1u},
  {InterruptBindingId::interrupt_binding_pwr_pvd, PeripheralId::PWR, "PWR", "PVD", 1, 17, "PVD_IRQHandler", nullptr, 15u, 2u},
  {InterruptBindingId::interrupt_binding_rcc_rcc_crs, PeripheralId::RCC, "RCC", "RCC_CRS", 4, 20, "RCC_CRS_IRQHandler", nullptr, 17u, 1u},
  {InterruptBindingId::interrupt_binding_rtc_rtc_tamp, PeripheralId::RTC, "RTC", "RTC_TAMP", 2, 18, "RTC_TAMP_IRQHandler", nullptr, 18u, 1u},
  {InterruptBindingId::interrupt_binding_spi1_spi1, PeripheralId::SPI1, "SPI1", "SPI1", 25, 41, "SPI1_IRQHandler", nullptr, 19u, 1u},
  {InterruptBindingId::interrupt_binding_spi2_spi2_spi3, PeripheralId::SPI2, "SPI2", "SPI2_SPI3", 26, 42, "SPI2_SPI3_IRQHandler", nullptr, 20u, 1u},
  {InterruptBindingId::interrupt_binding_tim1_tim1_brk_up_trg_com, PeripheralId::TIM1, "TIM1", "TIM1_BRK_UP_TRG_COM", 13, 29, "TIM1_BRK_UP_TRG_COM_IRQHandler", "interrupt-group:tim1", 25u, 1u},
  {InterruptBindingId::interrupt_binding_tim1_tim1_cc, PeripheralId::TIM1, "TIM1", "TIM1_CC", 14, 30, "TIM1_CC_IRQHandler", "interrupt-group:tim1", 26u, 1u},
  {InterruptBindingId::interrupt_binding_tim14_tim14, PeripheralId::TIM14, "TIM14", "TIM14", 19, 35, "TIM14_IRQHandler", nullptr, 21u, 1u},
  {InterruptBindingId::interrupt_binding_tim15_tim15, PeripheralId::TIM15, "TIM15", "TIM15", 20, 36, "TIM15_IRQHandler", nullptr, 22u, 1u},
  {InterruptBindingId::interrupt_binding_tim16_tim16, PeripheralId::TIM16, "TIM16", "TIM16", 21, 37, "TIM16_IRQHandler", nullptr, 23u, 1u},
  {InterruptBindingId::interrupt_binding_tim17_tim17, PeripheralId::TIM17, "TIM17", "TIM17", 22, 38, "TIM17_IRQHandler", nullptr, 24u, 1u},
  {InterruptBindingId::interrupt_binding_tim2_tim2, PeripheralId::TIM2, "TIM2", "TIM2", 15, 31, "TIM2_IRQHandler", nullptr, 27u, 1u},
  {InterruptBindingId::interrupt_binding_tim3_tim3_tim4, PeripheralId::TIM3, "TIM3", "TIM3_TIM4", 16, 32, "TIM3_TIM4_IRQHandler", nullptr, 28u, 1u},
  {InterruptBindingId::interrupt_binding_tim7_tim7, PeripheralId::TIM7, "TIM7", "TIM7", 18, 34, "TIM7_IRQHandler", nullptr, 29u, 1u},
  {InterruptBindingId::interrupt_binding_ucpd1_ucpd1_ucpd2_usb, PeripheralId::UCPD1, "UCPD1", "UCPD1_UCPD2_USB", 8, 24, "UCPD1_UCPD2_USB_IRQHandler", nullptr, 30u, 1u},
  {InterruptBindingId::interrupt_binding_usart1_usart1, PeripheralId::USART1, "USART1", "USART1", 27, 43, "USART1_IRQHandler", nullptr, 31u, 1u},
  {InterruptBindingId::interrupt_binding_usart2_usart2_lpuart2, PeripheralId::USART2, "USART2", "USART2_LPUART2", 28, 44, "USART2_LPUART2_IRQHandler", nullptr, 32u, 1u},
  {InterruptBindingId::interrupt_binding_usart3_usart3_usart4_usart5_usart6_lpuart1, PeripheralId::USART3, "USART3", "USART3_USART4_USART5_USART6_LPUART1", 29, 45, "USART3_USART4_USART5_USART6_LPUART1_IRQHandler", nullptr, 33u, 1u},
  {InterruptBindingId::interrupt_binding_wwdg_wwdg, PeripheralId::WWDG, "WWDG", "WWDG", 0, 16, "WWDG_IRQHandler", nullptr, 34u, 1u},
}};

struct InterruptBindingAlias {
  InterruptBindingId binding_id;
  const char* alias_name;
};
inline constexpr std::array<InterruptBindingAlias, 35> kInterruptBindingAliases = {{
  {InterruptBindingId::interrupt_binding_adc1_adc_comp, "ADC1"},
  {InterruptBindingId::interrupt_binding_adc1_adc_comp, "ADC_COMP_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dac_tim6_dac_lptim1, "TIM6_DAC"},
  {InterruptBindingId::interrupt_binding_dac_tim6_dac_lptim1, "TIM6_DAC_LPTIM1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel1, "DMA1_Channel1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel2_3, "DMA1_Channel2_3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dma1_dma1_channel4_5_6_7_dmamux_dma2_channel1_2_3_4_5, "DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti0_1, "EXTI0_1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti2_3, "EXTI2_3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti4_15, "EXTI4_15_IRQHandler"},
  {InterruptBindingId::interrupt_binding_flash_flash, "FLASH_IRQHandler"},
  {InterruptBindingId::interrupt_binding_hdmi_cec_cec, "HDMI_CEC"},
  {InterruptBindingId::interrupt_binding_hdmi_cec_cec, "CEC_IRQHandler"},
  {InterruptBindingId::interrupt_binding_i2c1_i2c1, "I2C1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_i2c2_i2c2_i2c3, "I2C2_I2C3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_pwr_pvd, "PWR"},
  {InterruptBindingId::interrupt_binding_pwr_pvd, "PVD_IRQHandler"},
  {InterruptBindingId::interrupt_binding_rcc_rcc_crs, "RCC_CRS_IRQHandler"},
  {InterruptBindingId::interrupt_binding_rtc_rtc_tamp, "RTC_TAMP_IRQHandler"},
  {InterruptBindingId::interrupt_binding_spi1_spi1, "SPI1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_spi2_spi2_spi3, "SPI2_SPI3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim1_tim1_brk_up_trg_com, "TIM1_BRK_UP_TRG_COM_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim1_tim1_cc, "TIM1_CC_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim14_tim14, "TIM14_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim15_tim15, "TIM15_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim16_tim16, "TIM16_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim17_tim17, "TIM17_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim2_tim2, "TIM2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim3_tim3_tim4, "TIM3_TIM4_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim7_tim7, "TIM7_IRQHandler"},
  {InterruptBindingId::interrupt_binding_ucpd1_ucpd1_ucpd2_usb, "UCPD1_UCPD2_USB_IRQHandler"},
  {InterruptBindingId::interrupt_binding_usart1_usart1, "USART1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_usart2_usart2_lpuart2, "USART2_LPUART2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_usart3_usart3_usart4_usart5_usart6_lpuart1, "USART3_USART4_USART5_USART6_LPUART1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_wwdg_wwdg, "WWDG_IRQHandler"},
}};
}
}
}
}
}
