#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g071rb {
enum class InterruptBindingId : std::uint16_t {
  interrupt_binding_adc1_adc_comp,
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
  interrupt_binding_pwr_pvd,
  interrupt_binding_rcc_rcc,
  interrupt_binding_rng_rng,
  interrupt_binding_rtc_rtc_stamp,
  interrupt_binding_spi1_spi1,
  interrupt_binding_spi2_spi2,
  interrupt_binding_tim1_tim1_brk_up_trg_comp,
  interrupt_binding_tim1_tim1_cc,
  interrupt_binding_tim14_tim14,
  interrupt_binding_tim15_tim15,
  interrupt_binding_tim16_tim16,
  interrupt_binding_tim17_tim17,
  interrupt_binding_tim2_tim2,
  interrupt_binding_tim2_tim3,
  interrupt_binding_tim6_tim6_dac_lptim1,
  interrupt_binding_tim7_tim7_lptim2,
  interrupt_binding_ucpd1_ucpd1_ucpd2,
  interrupt_binding_usart1_usart1,
  interrupt_binding_usart2_usart2,
  interrupt_binding_usart3_usart3_usart4_lpuart1,
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
inline constexpr std::array<InterruptBindingDescriptor, 32> kInterruptBindings = {{
  {InterruptBindingId::interrupt_binding_adc1_adc_comp, PeripheralId::ADC1, "ADC1", "ADC_COMP", 12, 28, "ADC_COMP_IRQHandler", nullptr, 0u, 2u},
  {InterruptBindingId::interrupt_binding_crc_cec, PeripheralId::CRC, "CRC", "CEC", 30, 46, "CEC_IRQHandler", nullptr, 2u, 2u},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel1, PeripheralId::DMA1, "DMA1", "DMA_Channel1", 9, 25, "DMA_Channel1_IRQHandler", "interrupt-group:dma1", 4u, 2u},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel2_3, PeripheralId::DMA1, "DMA1", "DMA_Channel2_3", 10, 26, "DMA_Channel2_3_IRQHandler", "interrupt-group:dma1", 6u, 2u},
  {InterruptBindingId::interrupt_binding_dmamux1_dma_channel4_5_6_7, PeripheralId::DMAMUX1, "DMAMUX1", "DMA_Channel4_5_6_7", 11, 27, "DMA_Channel4_5_6_7_IRQHandler", nullptr, 8u, 2u},
  {InterruptBindingId::interrupt_binding_exti_exti0_1, PeripheralId::EXTI, "EXTI", "EXTI0_1", 5, 21, "EXTI0_1_IRQHandler", "interrupt-group:exti", 10u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti2_3, PeripheralId::EXTI, "EXTI", "EXTI2_3", 6, 22, "EXTI2_3_IRQHandler", "interrupt-group:exti", 11u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti4_15, PeripheralId::EXTI, "EXTI", "EXTI4_15", 7, 23, "EXTI4_15_IRQHandler", "interrupt-group:exti", 12u, 1u},
  {InterruptBindingId::interrupt_binding_flash_flash, PeripheralId::FLASH, "FLASH", "FLASH", 3, 19, "FLASH_IRQHandler", nullptr, 13u, 1u},
  {InterruptBindingId::interrupt_binding_i2c1_i2c1, PeripheralId::I2C1, "I2C1", "I2C1", 23, 39, "I2C1_IRQHandler", nullptr, 14u, 1u},
  {InterruptBindingId::interrupt_binding_i2c2_i2c2, PeripheralId::I2C2, "I2C2", "I2C2", 24, 40, "I2C2_IRQHandler", nullptr, 15u, 1u},
  {InterruptBindingId::interrupt_binding_pwr_pvd, PeripheralId::PWR, "PWR", "PVD", 1, 17, "PVD_IRQHandler", nullptr, 16u, 2u},
  {InterruptBindingId::interrupt_binding_rcc_rcc, PeripheralId::RCC, "RCC", "RCC", 4, 20, "RCC_IRQHandler", nullptr, 18u, 1u},
  {InterruptBindingId::interrupt_binding_rng_rng, PeripheralId::RNG, "RNG", "RNG", 31, 47, "RNG_IRQHandler", nullptr, 19u, 1u},
  {InterruptBindingId::interrupt_binding_rtc_rtc_stamp, PeripheralId::RTC, "RTC", "RTC_STAMP", 2, 18, "RTC_STAMP_IRQHandler", nullptr, 20u, 1u},
  {InterruptBindingId::interrupt_binding_spi1_spi1, PeripheralId::SPI1, "SPI1", "SPI1", 25, 41, "SPI1_IRQHandler", nullptr, 21u, 1u},
  {InterruptBindingId::interrupt_binding_spi2_spi2, PeripheralId::SPI2, "SPI2", "SPI2", 26, 42, "SPI2_IRQHandler", nullptr, 22u, 1u},
  {InterruptBindingId::interrupt_binding_tim1_tim1_brk_up_trg_comp, PeripheralId::TIM1, "TIM1", "TIM1_BRK_UP_TRG_COMP", 13, 29, "TIM1_BRK_UP_TRG_COMP_IRQHandler", "interrupt-group:tim1", 27u, 1u},
  {InterruptBindingId::interrupt_binding_tim1_tim1_cc, PeripheralId::TIM1, "TIM1", "TIM1_CC", 14, 30, "TIM1_CC_IRQHandler", "interrupt-group:tim1", 28u, 1u},
  {InterruptBindingId::interrupt_binding_tim14_tim14, PeripheralId::TIM14, "TIM14", "TIM14", 19, 35, "TIM14_IRQHandler", nullptr, 23u, 1u},
  {InterruptBindingId::interrupt_binding_tim15_tim15, PeripheralId::TIM15, "TIM15", "TIM15", 20, 36, "TIM15_IRQHandler", nullptr, 24u, 1u},
  {InterruptBindingId::interrupt_binding_tim16_tim16, PeripheralId::TIM16, "TIM16", "TIM16", 21, 37, "TIM16_IRQHandler", nullptr, 25u, 1u},
  {InterruptBindingId::interrupt_binding_tim17_tim17, PeripheralId::TIM17, "TIM17", "TIM17", 22, 38, "TIM17_IRQHandler", nullptr, 26u, 1u},
  {InterruptBindingId::interrupt_binding_tim2_tim2, PeripheralId::TIM2, "TIM2", "TIM2", 15, 31, "TIM2_IRQHandler", "interrupt-group:tim2", 29u, 1u},
  {InterruptBindingId::interrupt_binding_tim2_tim3, PeripheralId::TIM2, "TIM2", "TIM3", 16, 32, "TIM3_IRQHandler", "interrupt-group:tim2", 30u, 2u},
  {InterruptBindingId::interrupt_binding_tim6_tim6_dac_lptim1, PeripheralId::TIM6, "TIM6", "TIM6_DAC_LPTIM1", 17, 33, "TIM6_DAC_LPTIM1_IRQHandler", nullptr, 32u, 1u},
  {InterruptBindingId::interrupt_binding_tim7_tim7_lptim2, PeripheralId::TIM7, "TIM7", "TIM7_LPTIM2", 18, 34, "TIM7_LPTIM2_IRQHandler", nullptr, 33u, 1u},
  {InterruptBindingId::interrupt_binding_ucpd1_ucpd1_ucpd2, PeripheralId::UCPD1, "UCPD1", "UCPD1_UCPD2", 8, 24, "UCPD1_UCPD2_IRQHandler", nullptr, 34u, 1u},
  {InterruptBindingId::interrupt_binding_usart1_usart1, PeripheralId::USART1, "USART1", "USART1", 27, 43, "USART1_IRQHandler", nullptr, 35u, 1u},
  {InterruptBindingId::interrupt_binding_usart2_usart2, PeripheralId::USART2, "USART2", "USART2", 28, 44, "USART2_IRQHandler", nullptr, 36u, 1u},
  {InterruptBindingId::interrupt_binding_usart3_usart3_usart4_lpuart1, PeripheralId::USART3, "USART3", "USART3_USART4_LPUART1", 29, 45, "USART3_USART4_LPUART1_IRQHandler", nullptr, 37u, 1u},
  {InterruptBindingId::interrupt_binding_wwdg_wwdg, PeripheralId::WWDG, "WWDG", "WWDG", 0, 16, "WWDG_IRQHandler", nullptr, 38u, 1u},
}};

struct InterruptBindingAlias {
  InterruptBindingId binding_id;
  const char* alias_name;
};
inline constexpr std::array<InterruptBindingAlias, 39> kInterruptBindingAliases = {{
  {InterruptBindingId::interrupt_binding_adc1_adc_comp, "ADC1"},
  {InterruptBindingId::interrupt_binding_adc1_adc_comp, "ADC_COMP_IRQHandler"},
  {InterruptBindingId::interrupt_binding_crc_cec, "CRC"},
  {InterruptBindingId::interrupt_binding_crc_cec, "CEC_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel1, "DMA1"},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel1, "DMA_Channel1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel2_3, "DMA1"},
  {InterruptBindingId::interrupt_binding_dma1_dma_channel2_3, "DMA_Channel2_3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dmamux1_dma_channel4_5_6_7, "DMAMUX1"},
  {InterruptBindingId::interrupt_binding_dmamux1_dma_channel4_5_6_7, "DMA_Channel4_5_6_7_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti0_1, "EXTI0_1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti2_3, "EXTI2_3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti4_15, "EXTI4_15_IRQHandler"},
  {InterruptBindingId::interrupt_binding_flash_flash, "FLASH_IRQHandler"},
  {InterruptBindingId::interrupt_binding_i2c1_i2c1, "I2C1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_i2c2_i2c2, "I2C2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_pwr_pvd, "PWR"},
  {InterruptBindingId::interrupt_binding_pwr_pvd, "PVD_IRQHandler"},
  {InterruptBindingId::interrupt_binding_rcc_rcc, "RCC_IRQHandler"},
  {InterruptBindingId::interrupt_binding_rng_rng, "RNG_IRQHandler"},
  {InterruptBindingId::interrupt_binding_rtc_rtc_stamp, "RTC_STAMP_IRQHandler"},
  {InterruptBindingId::interrupt_binding_spi1_spi1, "SPI1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_spi2_spi2, "SPI2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim1_tim1_brk_up_trg_comp, "TIM1_BRK_UP_TRG_COMP_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim1_tim1_cc, "TIM1_CC_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim14_tim14, "TIM14_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim15_tim15, "TIM15_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim16_tim16, "TIM16_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim17_tim17, "TIM17_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim2_tim2, "TIM2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim2_tim3, "TIM2"},
  {InterruptBindingId::interrupt_binding_tim2_tim3, "TIM3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim6_tim6_dac_lptim1, "TIM6_DAC_LPTIM1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim7_tim7_lptim2, "TIM7_LPTIM2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_ucpd1_ucpd1_ucpd2, "UCPD1_UCPD2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_usart1_usart1, "USART1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_usart2_usart2, "USART2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_usart3_usart3_usart4_lpuart1, "USART3_USART4_LPUART1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_wwdg_wwdg, "WWDG_IRQHandler"},
}};
}
}
}
}
}
