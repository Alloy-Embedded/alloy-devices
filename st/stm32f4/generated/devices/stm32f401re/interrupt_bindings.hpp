#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f401re {
enum class InterruptBindingId : std::uint16_t {
  interrupt_binding_adc1_adc,
  interrupt_binding_adc_common_fpu,
  interrupt_binding_dma1_rtc_wkup,
  interrupt_binding_dma1_rtc_alarm,
  interrupt_binding_dma2_rcc,
  interrupt_binding_exti_tamp_stamp,
  interrupt_binding_exti_exti0,
  interrupt_binding_exti_exti1,
  interrupt_binding_exti_exti2,
  interrupt_binding_exti_exti3,
  interrupt_binding_exti_exti4,
  interrupt_binding_exti_exti9_5,
  interrupt_binding_exti_exti15_10,
  interrupt_binding_flash_flash,
  interrupt_binding_gpioa_tim2,
  interrupt_binding_gpiod_tim1_brk_tim9,
  interrupt_binding_gpiod_tim1_up_tim10,
  interrupt_binding_gpiod_tim1_trg_com_tim11,
  interrupt_binding_gpiod_tim1_cc,
  interrupt_binding_gpioh_sdio,
  interrupt_binding_i2c3_tim3,
  interrupt_binding_rcc_i2c1_ev,
  interrupt_binding_rcc_i2c1_er,
  interrupt_binding_rtc_i2c2_ev,
  interrupt_binding_rtc_i2c2_er,
  interrupt_binding_sdio_i2c3_ev,
  interrupt_binding_sdio_i2c3_er,
  interrupt_binding_tim10_spi1,
  interrupt_binding_tim11_spi2,
  interrupt_binding_tim2_spi3,
  interrupt_binding_tim3_spi4,
  interrupt_binding_usart1_otg_fs_wkup,
  interrupt_binding_usart1_otg_fs,
  interrupt_binding_wwdg_pvd,
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
inline constexpr std::array<InterruptBindingDescriptor, 34> kInterruptBindings = {{
  {InterruptBindingId::interrupt_binding_adc1_adc, PeripheralId::ADC1, "ADC1", "ADC", 18, 34, "ADC_IRQHandler", nullptr, 2u, 2u},
  {InterruptBindingId::interrupt_binding_adc_common_fpu, PeripheralId::ADC_Common, "ADC_Common", "FPU", 81, 97, "FPU_IRQHandler", nullptr, 0u, 2u},
  {InterruptBindingId::interrupt_binding_dma1_rtc_wkup, PeripheralId::DMA1, "DMA1", "RTC_WKUP", 3, 19, "RTC_WKUP_IRQHandler", "interrupt-group:dma1", 6u, 2u},
  {InterruptBindingId::interrupt_binding_dma1_rtc_alarm, PeripheralId::DMA1, "DMA1", "RTC_Alarm", 41, 57, "RTC_Alarm_IRQHandler", "interrupt-group:dma1", 4u, 2u},
  {InterruptBindingId::interrupt_binding_dma2_rcc, PeripheralId::DMA2, "DMA2", "RCC", 5, 21, "RCC_IRQHandler", nullptr, 8u, 2u},
  {InterruptBindingId::interrupt_binding_exti_tamp_stamp, PeripheralId::EXTI, "EXTI", "TAMP_STAMP", 2, 18, "TAMP_STAMP_IRQHandler", "interrupt-group:exti", 17u, 2u},
  {InterruptBindingId::interrupt_binding_exti_exti0, PeripheralId::EXTI, "EXTI", "EXTI0", 6, 22, "EXTI0_IRQHandler", "interrupt-group:exti", 10u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti1, PeripheralId::EXTI, "EXTI", "EXTI1", 7, 23, "EXTI1_IRQHandler", "interrupt-group:exti", 11u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti2, PeripheralId::EXTI, "EXTI", "EXTI2", 8, 24, "EXTI2_IRQHandler", "interrupt-group:exti", 13u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti3, PeripheralId::EXTI, "EXTI", "EXTI3", 9, 25, "EXTI3_IRQHandler", "interrupt-group:exti", 14u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti4, PeripheralId::EXTI, "EXTI", "EXTI4", 10, 26, "EXTI4_IRQHandler", "interrupt-group:exti", 15u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti9_5, PeripheralId::EXTI, "EXTI", "EXTI9_5", 23, 39, "EXTI9_5_IRQHandler", "interrupt-group:exti", 16u, 1u},
  {InterruptBindingId::interrupt_binding_exti_exti15_10, PeripheralId::EXTI, "EXTI", "EXTI15_10", 40, 56, "EXTI15_10_IRQHandler", "interrupt-group:exti", 12u, 1u},
  {InterruptBindingId::interrupt_binding_flash_flash, PeripheralId::FLASH, "FLASH", "FLASH", 4, 20, "FLASH_IRQHandler", nullptr, 19u, 1u},
  {InterruptBindingId::interrupt_binding_gpioa_tim2, PeripheralId::GPIOA, "GPIOA", "TIM2", 28, 44, "TIM2_IRQHandler", nullptr, 20u, 2u},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_brk_tim9, PeripheralId::GPIOD, "GPIOD", "TIM1_BRK_TIM9", 24, 40, "TIM1_BRK_TIM9_IRQHandler", "interrupt-group:gpiod", 22u, 2u},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_up_tim10, PeripheralId::GPIOD, "GPIOD", "TIM1_UP_TIM10", 25, 41, "TIM1_UP_TIM10_IRQHandler", "interrupt-group:gpiod", 28u, 2u},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_trg_com_tim11, PeripheralId::GPIOD, "GPIOD", "TIM1_TRG_COM_TIM11", 26, 42, "TIM1_TRG_COM_TIM11_IRQHandler", "interrupt-group:gpiod", 26u, 2u},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_cc, PeripheralId::GPIOD, "GPIOD", "TIM1_CC", 27, 43, "TIM1_CC_IRQHandler", "interrupt-group:gpiod", 24u, 2u},
  {InterruptBindingId::interrupt_binding_gpioh_sdio, PeripheralId::GPIOH, "GPIOH", "SDIO", 49, 65, "SDIO_IRQHandler", nullptr, 30u, 2u},
  {InterruptBindingId::interrupt_binding_i2c3_tim3, PeripheralId::I2C3, "I2C3", "TIM3", 29, 45, "TIM3_IRQHandler", nullptr, 32u, 2u},
  {InterruptBindingId::interrupt_binding_rcc_i2c1_ev, PeripheralId::RCC, "RCC", "I2C1_EV", 31, 47, "I2C1_EV_IRQHandler", "interrupt-group:rcc", 36u, 2u},
  {InterruptBindingId::interrupt_binding_rcc_i2c1_er, PeripheralId::RCC, "RCC", "I2C1_ER", 32, 48, "I2C1_ER_IRQHandler", "interrupt-group:rcc", 34u, 2u},
  {InterruptBindingId::interrupt_binding_rtc_i2c2_ev, PeripheralId::RTC, "RTC", "I2C2_EV", 33, 49, "I2C2_EV_IRQHandler", "interrupt-group:rtc", 40u, 2u},
  {InterruptBindingId::interrupt_binding_rtc_i2c2_er, PeripheralId::RTC, "RTC", "I2C2_ER", 34, 50, "I2C2_ER_IRQHandler", "interrupt-group:rtc", 38u, 2u},
  {InterruptBindingId::interrupt_binding_sdio_i2c3_ev, PeripheralId::SDIO, "SDIO", "I2C3_EV", 72, 88, "I2C3_EV_IRQHandler", "interrupt-group:sdio", 44u, 2u},
  {InterruptBindingId::interrupt_binding_sdio_i2c3_er, PeripheralId::SDIO, "SDIO", "I2C3_ER", 73, 89, "I2C3_ER_IRQHandler", "interrupt-group:sdio", 42u, 2u},
  {InterruptBindingId::interrupt_binding_tim10_spi1, PeripheralId::TIM10, "TIM10", "SPI1", 35, 51, "SPI1_IRQHandler", nullptr, 46u, 2u},
  {InterruptBindingId::interrupt_binding_tim11_spi2, PeripheralId::TIM11, "TIM11", "SPI2", 36, 52, "SPI2_IRQHandler", nullptr, 48u, 2u},
  {InterruptBindingId::interrupt_binding_tim2_spi3, PeripheralId::TIM2, "TIM2", "SPI3", 51, 67, "SPI3_IRQHandler", nullptr, 50u, 2u},
  {InterruptBindingId::interrupt_binding_tim3_spi4, PeripheralId::TIM3, "TIM3", "SPI4", 84, 100, "SPI4_IRQHandler", nullptr, 52u, 2u},
  {InterruptBindingId::interrupt_binding_usart1_otg_fs_wkup, PeripheralId::USART1, "USART1", "OTG_FS_WKUP", 42, 58, "OTG_FS_WKUP_IRQHandler", "interrupt-group:usart1", 56u, 2u},
  {InterruptBindingId::interrupt_binding_usart1_otg_fs, PeripheralId::USART1, "USART1", "OTG_FS", 67, 83, "OTG_FS_IRQHandler", "interrupt-group:usart1", 54u, 2u},
  {InterruptBindingId::interrupt_binding_wwdg_pvd, PeripheralId::WWDG, "WWDG", "PVD", 1, 17, "PVD_IRQHandler", nullptr, 58u, 2u},
}};

struct InterruptBindingAlias {
  InterruptBindingId binding_id;
  const char* alias_name;
};
inline constexpr std::array<InterruptBindingAlias, 60> kInterruptBindingAliases = {{
  {InterruptBindingId::interrupt_binding_adc1_adc, "ADC1"},
  {InterruptBindingId::interrupt_binding_adc1_adc, "ADC_IRQHandler"},
  {InterruptBindingId::interrupt_binding_adc_common_fpu, "ADC_Common"},
  {InterruptBindingId::interrupt_binding_adc_common_fpu, "FPU_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dma1_rtc_wkup, "DMA1"},
  {InterruptBindingId::interrupt_binding_dma1_rtc_wkup, "RTC_WKUP_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dma1_rtc_alarm, "DMA1"},
  {InterruptBindingId::interrupt_binding_dma1_rtc_alarm, "RTC_Alarm_IRQHandler"},
  {InterruptBindingId::interrupt_binding_dma2_rcc, "DMA2"},
  {InterruptBindingId::interrupt_binding_dma2_rcc, "RCC_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_tamp_stamp, "EXTI"},
  {InterruptBindingId::interrupt_binding_exti_tamp_stamp, "TAMP_STAMP_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti0, "EXTI0_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti1, "EXTI1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti2, "EXTI2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti3, "EXTI3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti4, "EXTI4_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti9_5, "EXTI9_5_IRQHandler"},
  {InterruptBindingId::interrupt_binding_exti_exti15_10, "EXTI15_10_IRQHandler"},
  {InterruptBindingId::interrupt_binding_flash_flash, "FLASH_IRQHandler"},
  {InterruptBindingId::interrupt_binding_gpioa_tim2, "GPIOA"},
  {InterruptBindingId::interrupt_binding_gpioa_tim2, "TIM2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_brk_tim9, "GPIOD"},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_brk_tim9, "TIM1_BRK_TIM9_IRQHandler"},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_up_tim10, "GPIOD"},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_up_tim10, "TIM1_UP_TIM10_IRQHandler"},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_trg_com_tim11, "GPIOD"},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_trg_com_tim11, "TIM1_TRG_COM_TIM11_IRQHandler"},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_cc, "GPIOD"},
  {InterruptBindingId::interrupt_binding_gpiod_tim1_cc, "TIM1_CC_IRQHandler"},
  {InterruptBindingId::interrupt_binding_gpioh_sdio, "GPIOH"},
  {InterruptBindingId::interrupt_binding_gpioh_sdio, "SDIO_IRQHandler"},
  {InterruptBindingId::interrupt_binding_i2c3_tim3, "I2C3"},
  {InterruptBindingId::interrupt_binding_i2c3_tim3, "TIM3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_rcc_i2c1_ev, "RCC"},
  {InterruptBindingId::interrupt_binding_rcc_i2c1_ev, "I2C1_EV_IRQHandler"},
  {InterruptBindingId::interrupt_binding_rcc_i2c1_er, "RCC"},
  {InterruptBindingId::interrupt_binding_rcc_i2c1_er, "I2C1_ER_IRQHandler"},
  {InterruptBindingId::interrupt_binding_rtc_i2c2_ev, "RTC"},
  {InterruptBindingId::interrupt_binding_rtc_i2c2_ev, "I2C2_EV_IRQHandler"},
  {InterruptBindingId::interrupt_binding_rtc_i2c2_er, "RTC"},
  {InterruptBindingId::interrupt_binding_rtc_i2c2_er, "I2C2_ER_IRQHandler"},
  {InterruptBindingId::interrupt_binding_sdio_i2c3_ev, "SDIO"},
  {InterruptBindingId::interrupt_binding_sdio_i2c3_ev, "I2C3_EV_IRQHandler"},
  {InterruptBindingId::interrupt_binding_sdio_i2c3_er, "SDIO"},
  {InterruptBindingId::interrupt_binding_sdio_i2c3_er, "I2C3_ER_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim10_spi1, "TIM10"},
  {InterruptBindingId::interrupt_binding_tim10_spi1, "SPI1_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim11_spi2, "TIM11"},
  {InterruptBindingId::interrupt_binding_tim11_spi2, "SPI2_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim2_spi3, "TIM2"},
  {InterruptBindingId::interrupt_binding_tim2_spi3, "SPI3_IRQHandler"},
  {InterruptBindingId::interrupt_binding_tim3_spi4, "TIM3"},
  {InterruptBindingId::interrupt_binding_tim3_spi4, "SPI4_IRQHandler"},
  {InterruptBindingId::interrupt_binding_usart1_otg_fs_wkup, "USART1"},
  {InterruptBindingId::interrupt_binding_usart1_otg_fs_wkup, "OTG_FS_WKUP_IRQHandler"},
  {InterruptBindingId::interrupt_binding_usart1_otg_fs, "USART1"},
  {InterruptBindingId::interrupt_binding_usart1_otg_fs, "OTG_FS_IRQHandler"},
  {InterruptBindingId::interrupt_binding_wwdg_pvd, "WWDG"},
  {InterruptBindingId::interrupt_binding_wwdg_pvd, "PVD_IRQHandler"},
}};
}
}
}
}
}
