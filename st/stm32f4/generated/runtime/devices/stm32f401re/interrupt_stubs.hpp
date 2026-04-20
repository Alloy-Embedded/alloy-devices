#pragma once

#include <array>
#include <cstdint>
#include "interrupts.hpp"
#include "startup.hpp"

extern "C" {
void Default_Handler();
void PVD_IRQHandler() __attribute__((weak));
void TAMP_STAMP_IRQHandler() __attribute__((weak));
void RTC_WKUP_IRQHandler() __attribute__((weak));
void FLASH_IRQHandler() __attribute__((weak));
void RCC_IRQHandler() __attribute__((weak));
void EXTI0_IRQHandler() __attribute__((weak));
void EXTI1_IRQHandler() __attribute__((weak));
void EXTI2_IRQHandler() __attribute__((weak));
void EXTI3_IRQHandler() __attribute__((weak));
void EXTI4_IRQHandler() __attribute__((weak));
void ADC_IRQHandler() __attribute__((weak));
void EXTI9_5_IRQHandler() __attribute__((weak));
void TIM1_BRK_TIM9_IRQHandler() __attribute__((weak));
void TIM1_UP_TIM10_IRQHandler() __attribute__((weak));
void TIM1_TRG_COM_TIM11_IRQHandler() __attribute__((weak));
void TIM1_CC_IRQHandler() __attribute__((weak));
void TIM2_IRQHandler() __attribute__((weak));
void TIM3_IRQHandler() __attribute__((weak));
void I2C1_EV_IRQHandler() __attribute__((weak));
void I2C1_ER_IRQHandler() __attribute__((weak));
void I2C2_EV_IRQHandler() __attribute__((weak));
void I2C2_ER_IRQHandler() __attribute__((weak));
void SPI1_IRQHandler() __attribute__((weak));
void SPI2_IRQHandler() __attribute__((weak));
void EXTI15_10_IRQHandler() __attribute__((weak));
void RTC_Alarm_IRQHandler() __attribute__((weak));
void OTG_FS_WKUP_IRQHandler() __attribute__((weak));
void SDIO_IRQHandler() __attribute__((weak));
void SPI3_IRQHandler() __attribute__((weak));
void OTG_FS_IRQHandler() __attribute__((weak));
void I2C3_EV_IRQHandler() __attribute__((weak));
void I2C3_ER_IRQHandler() __attribute__((weak));
void FPU_IRQHandler() __attribute__((weak));
void SPI4_IRQHandler() __attribute__((weak));
}

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f401re {
struct InterruptStubDescriptor {
  InterruptId interrupt_id;
  StartupSymbolId symbol_id;
  std::uint16_t line;
  std::uint16_t vector_slot;
};
inline constexpr std::array<InterruptStubDescriptor, 34> kInterruptStubs = {{
  {InterruptId::PVD, StartupSymbolId::PVD_IRQHandler, 1u, 17u},
  {InterruptId::TAMP_STAMP, StartupSymbolId::TAMP_STAMP_IRQHandler, 2u, 18u},
  {InterruptId::RTC_WKUP, StartupSymbolId::RTC_WKUP_IRQHandler, 3u, 19u},
  {InterruptId::FLASH, StartupSymbolId::FLASH_IRQHandler, 4u, 20u},
  {InterruptId::RCC, StartupSymbolId::RCC_IRQHandler, 5u, 21u},
  {InterruptId::EXTI0, StartupSymbolId::EXTI0_IRQHandler, 6u, 22u},
  {InterruptId::EXTI1, StartupSymbolId::EXTI1_IRQHandler, 7u, 23u},
  {InterruptId::EXTI2, StartupSymbolId::EXTI2_IRQHandler, 8u, 24u},
  {InterruptId::EXTI3, StartupSymbolId::EXTI3_IRQHandler, 9u, 25u},
  {InterruptId::EXTI4, StartupSymbolId::EXTI4_IRQHandler, 10u, 26u},
  {InterruptId::ADC, StartupSymbolId::ADC_IRQHandler, 18u, 34u},
  {InterruptId::EXTI9_5, StartupSymbolId::EXTI9_5_IRQHandler, 23u, 39u},
  {InterruptId::TIM1_BRK_TIM9, StartupSymbolId::TIM1_BRK_TIM9_IRQHandler, 24u, 40u},
  {InterruptId::TIM1_UP_TIM10, StartupSymbolId::TIM1_UP_TIM10_IRQHandler, 25u, 41u},
  {InterruptId::TIM1_TRG_COM_TIM11, StartupSymbolId::TIM1_TRG_COM_TIM11_IRQHandler, 26u, 42u},
  {InterruptId::TIM1_CC, StartupSymbolId::TIM1_CC_IRQHandler, 27u, 43u},
  {InterruptId::TIM2, StartupSymbolId::TIM2_IRQHandler, 28u, 44u},
  {InterruptId::TIM3, StartupSymbolId::TIM3_IRQHandler, 29u, 45u},
  {InterruptId::I2C1_EV, StartupSymbolId::I2C1_EV_IRQHandler, 31u, 47u},
  {InterruptId::I2C1_ER, StartupSymbolId::I2C1_ER_IRQHandler, 32u, 48u},
  {InterruptId::I2C2_EV, StartupSymbolId::I2C2_EV_IRQHandler, 33u, 49u},
  {InterruptId::I2C2_ER, StartupSymbolId::I2C2_ER_IRQHandler, 34u, 50u},
  {InterruptId::SPI1, StartupSymbolId::SPI1_IRQHandler, 35u, 51u},
  {InterruptId::SPI2, StartupSymbolId::SPI2_IRQHandler, 36u, 52u},
  {InterruptId::EXTI15_10, StartupSymbolId::EXTI15_10_IRQHandler, 40u, 56u},
  {InterruptId::RTC_Alarm, StartupSymbolId::RTC_Alarm_IRQHandler, 41u, 57u},
  {InterruptId::OTG_FS_WKUP, StartupSymbolId::OTG_FS_WKUP_IRQHandler, 42u, 58u},
  {InterruptId::SDIO, StartupSymbolId::SDIO_IRQHandler, 49u, 65u},
  {InterruptId::SPI3, StartupSymbolId::SPI3_IRQHandler, 51u, 67u},
  {InterruptId::OTG_FS, StartupSymbolId::OTG_FS_IRQHandler, 67u, 83u},
  {InterruptId::I2C3_EV, StartupSymbolId::I2C3_EV_IRQHandler, 72u, 88u},
  {InterruptId::I2C3_ER, StartupSymbolId::I2C3_ER_IRQHandler, 73u, 89u},
  {InterruptId::FPU, StartupSymbolId::FPU_IRQHandler, 81u, 97u},
  {InterruptId::SPI4, StartupSymbolId::SPI4_IRQHandler, 84u, 100u},
}};

template<InterruptId Id>
struct InterruptStubTraits {
  static constexpr bool kPresent = false;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::none;
  static constexpr std::uint16_t kLine = 0xFFFFu;
  static constexpr std::uint16_t kVectorSlot = 0xFFFFu;
};

template<>
struct InterruptStubTraits<InterruptId::PVD> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PVD_IRQHandler;
  static constexpr std::uint16_t kLine = 1u;
  static constexpr std::uint16_t kVectorSlot = 17u;
};

template<>
struct InterruptStubTraits<InterruptId::TAMP_STAMP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TAMP_STAMP_IRQHandler;
  static constexpr std::uint16_t kLine = 2u;
  static constexpr std::uint16_t kVectorSlot = 18u;
};

template<>
struct InterruptStubTraits<InterruptId::RTC_WKUP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RTC_WKUP_IRQHandler;
  static constexpr std::uint16_t kLine = 3u;
  static constexpr std::uint16_t kVectorSlot = 19u;
};

template<>
struct InterruptStubTraits<InterruptId::FLASH> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FLASH_IRQHandler;
  static constexpr std::uint16_t kLine = 4u;
  static constexpr std::uint16_t kVectorSlot = 20u;
};

template<>
struct InterruptStubTraits<InterruptId::RCC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RCC_IRQHandler;
  static constexpr std::uint16_t kLine = 5u;
  static constexpr std::uint16_t kVectorSlot = 21u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI0_IRQHandler;
  static constexpr std::uint16_t kLine = 6u;
  static constexpr std::uint16_t kVectorSlot = 22u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI1_IRQHandler;
  static constexpr std::uint16_t kLine = 7u;
  static constexpr std::uint16_t kVectorSlot = 23u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI2_IRQHandler;
  static constexpr std::uint16_t kLine = 8u;
  static constexpr std::uint16_t kVectorSlot = 24u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI3_IRQHandler;
  static constexpr std::uint16_t kLine = 9u;
  static constexpr std::uint16_t kVectorSlot = 25u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI4_IRQHandler;
  static constexpr std::uint16_t kLine = 10u;
  static constexpr std::uint16_t kVectorSlot = 26u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC_IRQHandler;
  static constexpr std::uint16_t kLine = 18u;
  static constexpr std::uint16_t kVectorSlot = 34u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI9_5> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI9_5_IRQHandler;
  static constexpr std::uint16_t kLine = 23u;
  static constexpr std::uint16_t kVectorSlot = 39u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_BRK_TIM9> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_BRK_TIM9_IRQHandler;
  static constexpr std::uint16_t kLine = 24u;
  static constexpr std::uint16_t kVectorSlot = 40u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_UP_TIM10> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_UP_TIM10_IRQHandler;
  static constexpr std::uint16_t kLine = 25u;
  static constexpr std::uint16_t kVectorSlot = 41u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_TRG_COM_TIM11> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_TRG_COM_TIM11_IRQHandler;
  static constexpr std::uint16_t kLine = 26u;
  static constexpr std::uint16_t kVectorSlot = 42u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_CC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_CC_IRQHandler;
  static constexpr std::uint16_t kLine = 27u;
  static constexpr std::uint16_t kVectorSlot = 43u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM2_IRQHandler;
  static constexpr std::uint16_t kLine = 28u;
  static constexpr std::uint16_t kVectorSlot = 44u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM3_IRQHandler;
  static constexpr std::uint16_t kLine = 29u;
  static constexpr std::uint16_t kVectorSlot = 45u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C1_EV> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C1_EV_IRQHandler;
  static constexpr std::uint16_t kLine = 31u;
  static constexpr std::uint16_t kVectorSlot = 47u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C1_ER> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C1_ER_IRQHandler;
  static constexpr std::uint16_t kLine = 32u;
  static constexpr std::uint16_t kVectorSlot = 48u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C2_EV> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C2_EV_IRQHandler;
  static constexpr std::uint16_t kLine = 33u;
  static constexpr std::uint16_t kVectorSlot = 49u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C2_ER> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C2_ER_IRQHandler;
  static constexpr std::uint16_t kLine = 34u;
  static constexpr std::uint16_t kVectorSlot = 50u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI1_IRQHandler;
  static constexpr std::uint16_t kLine = 35u;
  static constexpr std::uint16_t kVectorSlot = 51u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI2_IRQHandler;
  static constexpr std::uint16_t kLine = 36u;
  static constexpr std::uint16_t kVectorSlot = 52u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI15_10> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI15_10_IRQHandler;
  static constexpr std::uint16_t kLine = 40u;
  static constexpr std::uint16_t kVectorSlot = 56u;
};

template<>
struct InterruptStubTraits<InterruptId::RTC_Alarm> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RTC_Alarm_IRQHandler;
  static constexpr std::uint16_t kLine = 41u;
  static constexpr std::uint16_t kVectorSlot = 57u;
};

template<>
struct InterruptStubTraits<InterruptId::OTG_FS_WKUP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::OTG_FS_WKUP_IRQHandler;
  static constexpr std::uint16_t kLine = 42u;
  static constexpr std::uint16_t kVectorSlot = 58u;
};

template<>
struct InterruptStubTraits<InterruptId::SDIO> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SDIO_IRQHandler;
  static constexpr std::uint16_t kLine = 49u;
  static constexpr std::uint16_t kVectorSlot = 65u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI3_IRQHandler;
  static constexpr std::uint16_t kLine = 51u;
  static constexpr std::uint16_t kVectorSlot = 67u;
};

template<>
struct InterruptStubTraits<InterruptId::OTG_FS> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::OTG_FS_IRQHandler;
  static constexpr std::uint16_t kLine = 67u;
  static constexpr std::uint16_t kVectorSlot = 83u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C3_EV> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C3_EV_IRQHandler;
  static constexpr std::uint16_t kLine = 72u;
  static constexpr std::uint16_t kVectorSlot = 88u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C3_ER> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C3_ER_IRQHandler;
  static constexpr std::uint16_t kLine = 73u;
  static constexpr std::uint16_t kVectorSlot = 89u;
};

template<>
struct InterruptStubTraits<InterruptId::FPU> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FPU_IRQHandler;
  static constexpr std::uint16_t kLine = 81u;
  static constexpr std::uint16_t kVectorSlot = 97u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI4_IRQHandler;
  static constexpr std::uint16_t kLine = 84u;
  static constexpr std::uint16_t kVectorSlot = 100u;
};

}
}
}
}
}
}
