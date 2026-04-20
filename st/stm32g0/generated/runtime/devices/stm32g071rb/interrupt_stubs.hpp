#pragma once

#include <array>
#include <cstdint>
#include "interrupts.hpp"
#include "startup.hpp"

extern "C" {
void Default_Handler();
void WWDG_IRQHandler() __attribute__((weak));
void PVD_IRQHandler() __attribute__((weak));
void RTC_STAMP_IRQHandler() __attribute__((weak));
void FLASH_IRQHandler() __attribute__((weak));
void RCC_IRQHandler() __attribute__((weak));
void EXTI0_1_IRQHandler() __attribute__((weak));
void EXTI2_3_IRQHandler() __attribute__((weak));
void EXTI4_15_IRQHandler() __attribute__((weak));
void UCPD1_UCPD2_IRQHandler() __attribute__((weak));
void DMA_Channel1_IRQHandler() __attribute__((weak));
void DMA_Channel2_3_IRQHandler() __attribute__((weak));
void DMA_Channel4_5_6_7_IRQHandler() __attribute__((weak));
void ADC_COMP_IRQHandler() __attribute__((weak));
void TIM1_BRK_UP_TRG_COMP_IRQHandler() __attribute__((weak));
void TIM1_CC_IRQHandler() __attribute__((weak));
void TIM2_IRQHandler() __attribute__((weak));
void TIM3_IRQHandler() __attribute__((weak));
void TIM6_DAC_LPTIM1_IRQHandler() __attribute__((weak));
void TIM7_LPTIM2_IRQHandler() __attribute__((weak));
void TIM14_IRQHandler() __attribute__((weak));
void TIM15_IRQHandler() __attribute__((weak));
void TIM16_IRQHandler() __attribute__((weak));
void TIM17_IRQHandler() __attribute__((weak));
void I2C1_IRQHandler() __attribute__((weak));
void I2C2_IRQHandler() __attribute__((weak));
void SPI1_IRQHandler() __attribute__((weak));
void SPI2_IRQHandler() __attribute__((weak));
void USART1_IRQHandler() __attribute__((weak));
void USART2_IRQHandler() __attribute__((weak));
void USART3_USART4_LPUART1_IRQHandler() __attribute__((weak));
void CEC_IRQHandler() __attribute__((weak));
void RNG_IRQHandler() __attribute__((weak));
}

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g071rb {
struct InterruptStubDescriptor {
  InterruptId interrupt_id;
  StartupSymbolId symbol_id;
  std::uint16_t line;
  std::uint16_t vector_slot;
};
inline constexpr std::array<InterruptStubDescriptor, 32> kInterruptStubs = {{
  {InterruptId::WWDG, StartupSymbolId::WWDG_IRQHandler, 0u, 16u},
  {InterruptId::PVD, StartupSymbolId::PVD_IRQHandler, 1u, 17u},
  {InterruptId::RTC_STAMP, StartupSymbolId::RTC_STAMP_IRQHandler, 2u, 18u},
  {InterruptId::FLASH, StartupSymbolId::FLASH_IRQHandler, 3u, 19u},
  {InterruptId::RCC, StartupSymbolId::RCC_IRQHandler, 4u, 20u},
  {InterruptId::EXTI0_1, StartupSymbolId::EXTI0_1_IRQHandler, 5u, 21u},
  {InterruptId::EXTI2_3, StartupSymbolId::EXTI2_3_IRQHandler, 6u, 22u},
  {InterruptId::EXTI4_15, StartupSymbolId::EXTI4_15_IRQHandler, 7u, 23u},
  {InterruptId::UCPD1_UCPD2, StartupSymbolId::UCPD1_UCPD2_IRQHandler, 8u, 24u},
  {InterruptId::DMA_Channel1, StartupSymbolId::DMA_Channel1_IRQHandler, 9u, 25u},
  {InterruptId::DMA_Channel2_3, StartupSymbolId::DMA_Channel2_3_IRQHandler, 10u, 26u},
  {InterruptId::DMA_Channel4_5_6_7, StartupSymbolId::DMA_Channel4_5_6_7_IRQHandler, 11u, 27u},
  {InterruptId::ADC_COMP, StartupSymbolId::ADC_COMP_IRQHandler, 12u, 28u},
  {InterruptId::TIM1_BRK_UP_TRG_COMP, StartupSymbolId::TIM1_BRK_UP_TRG_COMP_IRQHandler, 13u, 29u},
  {InterruptId::TIM1_CC, StartupSymbolId::TIM1_CC_IRQHandler, 14u, 30u},
  {InterruptId::TIM2, StartupSymbolId::TIM2_IRQHandler, 15u, 31u},
  {InterruptId::TIM3, StartupSymbolId::TIM3_IRQHandler, 16u, 32u},
  {InterruptId::TIM6_DAC_LPTIM1, StartupSymbolId::TIM6_DAC_LPTIM1_IRQHandler, 17u, 33u},
  {InterruptId::TIM7_LPTIM2, StartupSymbolId::TIM7_LPTIM2_IRQHandler, 18u, 34u},
  {InterruptId::TIM14, StartupSymbolId::TIM14_IRQHandler, 19u, 35u},
  {InterruptId::TIM15, StartupSymbolId::TIM15_IRQHandler, 20u, 36u},
  {InterruptId::TIM16, StartupSymbolId::TIM16_IRQHandler, 21u, 37u},
  {InterruptId::TIM17, StartupSymbolId::TIM17_IRQHandler, 22u, 38u},
  {InterruptId::I2C1, StartupSymbolId::I2C1_IRQHandler, 23u, 39u},
  {InterruptId::I2C2, StartupSymbolId::I2C2_IRQHandler, 24u, 40u},
  {InterruptId::SPI1, StartupSymbolId::SPI1_IRQHandler, 25u, 41u},
  {InterruptId::SPI2, StartupSymbolId::SPI2_IRQHandler, 26u, 42u},
  {InterruptId::USART1, StartupSymbolId::USART1_IRQHandler, 27u, 43u},
  {InterruptId::USART2, StartupSymbolId::USART2_IRQHandler, 28u, 44u},
  {InterruptId::USART3_USART4_LPUART1, StartupSymbolId::USART3_USART4_LPUART1_IRQHandler, 29u, 45u},
  {InterruptId::CEC, StartupSymbolId::CEC_IRQHandler, 30u, 46u},
  {InterruptId::RNG, StartupSymbolId::RNG_IRQHandler, 31u, 47u},
}};

template<InterruptId Id>
struct InterruptStubTraits {
  static constexpr bool kPresent = false;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::none;
  static constexpr std::uint16_t kLine = 0xFFFFu;
  static constexpr std::uint16_t kVectorSlot = 0xFFFFu;
};

template<>
struct InterruptStubTraits<InterruptId::WWDG> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::WWDG_IRQHandler;
  static constexpr std::uint16_t kLine = 0u;
  static constexpr std::uint16_t kVectorSlot = 16u;
};

template<>
struct InterruptStubTraits<InterruptId::PVD> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PVD_IRQHandler;
  static constexpr std::uint16_t kLine = 1u;
  static constexpr std::uint16_t kVectorSlot = 17u;
};

template<>
struct InterruptStubTraits<InterruptId::RTC_STAMP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RTC_STAMP_IRQHandler;
  static constexpr std::uint16_t kLine = 2u;
  static constexpr std::uint16_t kVectorSlot = 18u;
};

template<>
struct InterruptStubTraits<InterruptId::FLASH> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FLASH_IRQHandler;
  static constexpr std::uint16_t kLine = 3u;
  static constexpr std::uint16_t kVectorSlot = 19u;
};

template<>
struct InterruptStubTraits<InterruptId::RCC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RCC_IRQHandler;
  static constexpr std::uint16_t kLine = 4u;
  static constexpr std::uint16_t kVectorSlot = 20u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI0_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI0_1_IRQHandler;
  static constexpr std::uint16_t kLine = 5u;
  static constexpr std::uint16_t kVectorSlot = 21u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI2_3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI2_3_IRQHandler;
  static constexpr std::uint16_t kLine = 6u;
  static constexpr std::uint16_t kVectorSlot = 22u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI4_15> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI4_15_IRQHandler;
  static constexpr std::uint16_t kLine = 7u;
  static constexpr std::uint16_t kVectorSlot = 23u;
};

template<>
struct InterruptStubTraits<InterruptId::UCPD1_UCPD2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::UCPD1_UCPD2_IRQHandler;
  static constexpr std::uint16_t kLine = 8u;
  static constexpr std::uint16_t kVectorSlot = 24u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA_Channel1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA_Channel1_IRQHandler;
  static constexpr std::uint16_t kLine = 9u;
  static constexpr std::uint16_t kVectorSlot = 25u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA_Channel2_3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA_Channel2_3_IRQHandler;
  static constexpr std::uint16_t kLine = 10u;
  static constexpr std::uint16_t kVectorSlot = 26u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA_Channel4_5_6_7> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA_Channel4_5_6_7_IRQHandler;
  static constexpr std::uint16_t kLine = 11u;
  static constexpr std::uint16_t kVectorSlot = 27u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC_COMP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC_COMP_IRQHandler;
  static constexpr std::uint16_t kLine = 12u;
  static constexpr std::uint16_t kVectorSlot = 28u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_BRK_UP_TRG_COMP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_BRK_UP_TRG_COMP_IRQHandler;
  static constexpr std::uint16_t kLine = 13u;
  static constexpr std::uint16_t kVectorSlot = 29u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_CC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_CC_IRQHandler;
  static constexpr std::uint16_t kLine = 14u;
  static constexpr std::uint16_t kVectorSlot = 30u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM2_IRQHandler;
  static constexpr std::uint16_t kLine = 15u;
  static constexpr std::uint16_t kVectorSlot = 31u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM3_IRQHandler;
  static constexpr std::uint16_t kLine = 16u;
  static constexpr std::uint16_t kVectorSlot = 32u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM6_DAC_LPTIM1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM6_DAC_LPTIM1_IRQHandler;
  static constexpr std::uint16_t kLine = 17u;
  static constexpr std::uint16_t kVectorSlot = 33u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM7_LPTIM2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM7_LPTIM2_IRQHandler;
  static constexpr std::uint16_t kLine = 18u;
  static constexpr std::uint16_t kVectorSlot = 34u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM14> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM14_IRQHandler;
  static constexpr std::uint16_t kLine = 19u;
  static constexpr std::uint16_t kVectorSlot = 35u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM15> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM15_IRQHandler;
  static constexpr std::uint16_t kLine = 20u;
  static constexpr std::uint16_t kVectorSlot = 36u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM16> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM16_IRQHandler;
  static constexpr std::uint16_t kLine = 21u;
  static constexpr std::uint16_t kVectorSlot = 37u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM17> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM17_IRQHandler;
  static constexpr std::uint16_t kLine = 22u;
  static constexpr std::uint16_t kVectorSlot = 38u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C1_IRQHandler;
  static constexpr std::uint16_t kLine = 23u;
  static constexpr std::uint16_t kVectorSlot = 39u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C2_IRQHandler;
  static constexpr std::uint16_t kLine = 24u;
  static constexpr std::uint16_t kVectorSlot = 40u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI1_IRQHandler;
  static constexpr std::uint16_t kLine = 25u;
  static constexpr std::uint16_t kVectorSlot = 41u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI2_IRQHandler;
  static constexpr std::uint16_t kLine = 26u;
  static constexpr std::uint16_t kVectorSlot = 42u;
};

template<>
struct InterruptStubTraits<InterruptId::USART1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART1_IRQHandler;
  static constexpr std::uint16_t kLine = 27u;
  static constexpr std::uint16_t kVectorSlot = 43u;
};

template<>
struct InterruptStubTraits<InterruptId::USART2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART2_IRQHandler;
  static constexpr std::uint16_t kLine = 28u;
  static constexpr std::uint16_t kVectorSlot = 44u;
};

template<>
struct InterruptStubTraits<InterruptId::USART3_USART4_LPUART1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART3_USART4_LPUART1_IRQHandler;
  static constexpr std::uint16_t kLine = 29u;
  static constexpr std::uint16_t kVectorSlot = 45u;
};

template<>
struct InterruptStubTraits<InterruptId::CEC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CEC_IRQHandler;
  static constexpr std::uint16_t kLine = 30u;
  static constexpr std::uint16_t kVectorSlot = 46u;
};

template<>
struct InterruptStubTraits<InterruptId::RNG> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RNG_IRQHandler;
  static constexpr std::uint16_t kLine = 31u;
  static constexpr std::uint16_t kVectorSlot = 47u;
};

}
}
}
}
}
}
