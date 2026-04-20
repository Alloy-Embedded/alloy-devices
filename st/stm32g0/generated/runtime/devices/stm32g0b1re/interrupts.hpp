#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g0b1re {
enum class InterruptId : std::uint16_t {
  none,
  ADC_COMP,
  CEC,
  DMA1_Channel1,
  DMA1_Channel2_3,
  DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5,
  EXTI0_1,
  EXTI2_3,
  EXTI4_15,
  FLASH,
  I2C1,
  I2C2_I2C3,
  PVD,
  RCC_CRS,
  RTC_TAMP,
  SPI1,
  SPI2_SPI3,
  TIM14,
  TIM15,
  TIM16,
  TIM17,
  TIM1_BRK_UP_TRG_COM,
  TIM1_CC,
  TIM2,
  TIM3_TIM4,
  TIM6_DAC_LPTIM1,
  TIM7,
  UCPD1_UCPD2_USB,
  USART1,
  USART2_LPUART2,
  USART3_USART4_USART5_USART6_LPUART1,
  WWDG,
};

struct InterruptDescriptor {
  InterruptId interrupt_id;
  PeripheralId peripheral_id;
  std::uint16_t line;
  std::uint16_t vector_slot;
};
inline constexpr std::array<InterruptDescriptor, 21> kInterruptDescriptors = {{
  {InterruptId::ADC_COMP, PeripheralId::ADC1, 12u, 28u},
  {InterruptId::TIM6_DAC_LPTIM1, PeripheralId::DAC, 17u, 33u},
  {InterruptId::DMA1_Channel1, PeripheralId::DMA1, 9u, 25u},
  {InterruptId::DMA1_Channel2_3, PeripheralId::DMA1, 10u, 26u},
  {InterruptId::DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5, PeripheralId::DMA1, 11u, 27u},
  {InterruptId::RTC_TAMP, PeripheralId::RTC, 2u, 18u},
  {InterruptId::SPI1, PeripheralId::SPI1, 25u, 41u},
  {InterruptId::SPI2_SPI3, PeripheralId::SPI2, 26u, 42u},
  {InterruptId::TIM1_BRK_UP_TRG_COM, PeripheralId::TIM1, 13u, 29u},
  {InterruptId::TIM1_CC, PeripheralId::TIM1, 14u, 30u},
  {InterruptId::TIM14, PeripheralId::TIM14, 19u, 35u},
  {InterruptId::TIM15, PeripheralId::TIM15, 20u, 36u},
  {InterruptId::TIM16, PeripheralId::TIM16, 21u, 37u},
  {InterruptId::TIM17, PeripheralId::TIM17, 22u, 38u},
  {InterruptId::TIM2, PeripheralId::TIM2, 15u, 31u},
  {InterruptId::TIM3_TIM4, PeripheralId::TIM3, 16u, 32u},
  {InterruptId::TIM7, PeripheralId::TIM7, 18u, 34u},
  {InterruptId::USART1, PeripheralId::USART1, 27u, 43u},
  {InterruptId::USART2_LPUART2, PeripheralId::USART2, 28u, 44u},
  {InterruptId::USART3_USART4_USART5_USART6_LPUART1, PeripheralId::USART3, 29u, 45u},
  {InterruptId::WWDG, PeripheralId::WWDG, 0u, 16u},
}};
}
}
}
}
}
}
