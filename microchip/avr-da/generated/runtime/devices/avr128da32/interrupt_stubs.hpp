#pragma once

#include <array>
#include <cstdint>
#include "interrupts.hpp"
#include "startup.hpp"

extern "C" {
void Default_Handler();
void NMI_IRQHandler() __attribute__((weak));
void BOD_VLM_IRQHandler() __attribute__((weak));
void RTC_CNT_IRQHandler() __attribute__((weak));
void RTC_PIT_IRQHandler() __attribute__((weak));
void CCL_IRQHandler() __attribute__((weak));
void PORTA_PORT_IRQHandler() __attribute__((weak));
void TCA0_LUNF_IRQHandler() __attribute__((weak));
void TCA0_HUNF_IRQHandler() __attribute__((weak));
void TCA0_CMP0_IRQHandler() __attribute__((weak));
void TCA0_CMP1_IRQHandler() __attribute__((weak));
void TCA0_CMP2_IRQHandler() __attribute__((weak));
void TWI0_TWIS_IRQHandler() __attribute__((weak));
void TWI0_TWIM_IRQHandler() __attribute__((weak));
void SPI0_INT_IRQHandler() __attribute__((weak));
void USART0_RXC_IRQHandler() __attribute__((weak));
void USART0_DRE_IRQHandler() __attribute__((weak));
void USART0_TXC_IRQHandler() __attribute__((weak));
void PORTD_PORT_IRQHandler() __attribute__((weak));
void PTC_IRQHandler() __attribute__((weak));
void PORTC_PORT_IRQHandler() __attribute__((weak));
void USART1_RXC_IRQHandler() __attribute__((weak));
void USART1_DRE_IRQHandler() __attribute__((weak));
void USART1_TXC_IRQHandler() __attribute__((weak));
void PORTF_PORT_IRQHandler() __attribute__((weak));
void NVMCTRL_EE_IRQHandler() __attribute__((weak));
}

namespace microchip {
namespace avr_da {
namespace generated {
namespace runtime {
namespace devices {
namespace avr128da32 {
struct InterruptStubDescriptor {
  InterruptId interrupt_id;
  StartupSymbolId symbol_id;
  std::uint16_t line;
  std::uint16_t vector_slot;
};
inline constexpr std::array<InterruptStubDescriptor, 25> kInterruptStubs = {{
  {InterruptId::NMI, StartupSymbolId::NMI_IRQHandler, 1u, 17u},
  {InterruptId::BOD_VLM, StartupSymbolId::BOD_VLM_IRQHandler, 2u, 18u},
  {InterruptId::RTC_CNT, StartupSymbolId::RTC_CNT_IRQHandler, 3u, 19u},
  {InterruptId::RTC_PIT, StartupSymbolId::RTC_PIT_IRQHandler, 4u, 20u},
  {InterruptId::CCL, StartupSymbolId::CCL_IRQHandler, 5u, 21u},
  {InterruptId::PORTA_PORT, StartupSymbolId::PORTA_PORT_IRQHandler, 6u, 22u},
  {InterruptId::TCA0_LUNF, StartupSymbolId::TCA0_LUNF_IRQHandler, 7u, 23u},
  {InterruptId::TCA0_HUNF, StartupSymbolId::TCA0_HUNF_IRQHandler, 8u, 24u},
  {InterruptId::TCA0_CMP0, StartupSymbolId::TCA0_CMP0_IRQHandler, 9u, 25u},
  {InterruptId::TCA0_CMP1, StartupSymbolId::TCA0_CMP1_IRQHandler, 10u, 26u},
  {InterruptId::TCA0_CMP2, StartupSymbolId::TCA0_CMP2_IRQHandler, 11u, 27u},
  {InterruptId::TWI0_TWIS, StartupSymbolId::TWI0_TWIS_IRQHandler, 16u, 32u},
  {InterruptId::TWI0_TWIM, StartupSymbolId::TWI0_TWIM_IRQHandler, 17u, 33u},
  {InterruptId::SPI0_INT, StartupSymbolId::SPI0_INT_IRQHandler, 18u, 34u},
  {InterruptId::USART0_RXC, StartupSymbolId::USART0_RXC_IRQHandler, 19u, 35u},
  {InterruptId::USART0_DRE, StartupSymbolId::USART0_DRE_IRQHandler, 20u, 36u},
  {InterruptId::USART0_TXC, StartupSymbolId::USART0_TXC_IRQHandler, 21u, 37u},
  {InterruptId::PORTD_PORT, StartupSymbolId::PORTD_PORT_IRQHandler, 22u, 38u},
  {InterruptId::PTC, StartupSymbolId::PTC_IRQHandler, 27u, 43u},
  {InterruptId::PORTC_PORT, StartupSymbolId::PORTC_PORT_IRQHandler, 29u, 45u},
  {InterruptId::USART1_RXC, StartupSymbolId::USART1_RXC_IRQHandler, 31u, 47u},
  {InterruptId::USART1_DRE, StartupSymbolId::USART1_DRE_IRQHandler, 32u, 48u},
  {InterruptId::USART1_TXC, StartupSymbolId::USART1_TXC_IRQHandler, 33u, 49u},
  {InterruptId::PORTF_PORT, StartupSymbolId::PORTF_PORT_IRQHandler, 34u, 50u},
  {InterruptId::NVMCTRL_EE, StartupSymbolId::NVMCTRL_EE_IRQHandler, 35u, 51u},
}};

template<InterruptId Id>
struct InterruptStubTraits {
  static constexpr bool kPresent = false;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::none;
  static constexpr std::uint16_t kLine = 0xFFFFu;
  static constexpr std::uint16_t kVectorSlot = 0xFFFFu;
};

template<>
struct InterruptStubTraits<InterruptId::NMI> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::NMI_IRQHandler;
  static constexpr std::uint16_t kLine = 1u;
  static constexpr std::uint16_t kVectorSlot = 17u;
};

template<>
struct InterruptStubTraits<InterruptId::BOD_VLM> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::BOD_VLM_IRQHandler;
  static constexpr std::uint16_t kLine = 2u;
  static constexpr std::uint16_t kVectorSlot = 18u;
};

template<>
struct InterruptStubTraits<InterruptId::RTC_CNT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RTC_CNT_IRQHandler;
  static constexpr std::uint16_t kLine = 3u;
  static constexpr std::uint16_t kVectorSlot = 19u;
};

template<>
struct InterruptStubTraits<InterruptId::RTC_PIT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RTC_PIT_IRQHandler;
  static constexpr std::uint16_t kLine = 4u;
  static constexpr std::uint16_t kVectorSlot = 20u;
};

template<>
struct InterruptStubTraits<InterruptId::CCL> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CCL_IRQHandler;
  static constexpr std::uint16_t kLine = 5u;
  static constexpr std::uint16_t kVectorSlot = 21u;
};

template<>
struct InterruptStubTraits<InterruptId::PORTA_PORT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PORTA_PORT_IRQHandler;
  static constexpr std::uint16_t kLine = 6u;
  static constexpr std::uint16_t kVectorSlot = 22u;
};

template<>
struct InterruptStubTraits<InterruptId::TCA0_LUNF> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TCA0_LUNF_IRQHandler;
  static constexpr std::uint16_t kLine = 7u;
  static constexpr std::uint16_t kVectorSlot = 23u;
};

template<>
struct InterruptStubTraits<InterruptId::TCA0_HUNF> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TCA0_HUNF_IRQHandler;
  static constexpr std::uint16_t kLine = 8u;
  static constexpr std::uint16_t kVectorSlot = 24u;
};

template<>
struct InterruptStubTraits<InterruptId::TCA0_CMP0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TCA0_CMP0_IRQHandler;
  static constexpr std::uint16_t kLine = 9u;
  static constexpr std::uint16_t kVectorSlot = 25u;
};

template<>
struct InterruptStubTraits<InterruptId::TCA0_CMP1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TCA0_CMP1_IRQHandler;
  static constexpr std::uint16_t kLine = 10u;
  static constexpr std::uint16_t kVectorSlot = 26u;
};

template<>
struct InterruptStubTraits<InterruptId::TCA0_CMP2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TCA0_CMP2_IRQHandler;
  static constexpr std::uint16_t kLine = 11u;
  static constexpr std::uint16_t kVectorSlot = 27u;
};

template<>
struct InterruptStubTraits<InterruptId::TWI0_TWIS> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TWI0_TWIS_IRQHandler;
  static constexpr std::uint16_t kLine = 16u;
  static constexpr std::uint16_t kVectorSlot = 32u;
};

template<>
struct InterruptStubTraits<InterruptId::TWI0_TWIM> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TWI0_TWIM_IRQHandler;
  static constexpr std::uint16_t kLine = 17u;
  static constexpr std::uint16_t kVectorSlot = 33u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI0_INT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI0_INT_IRQHandler;
  static constexpr std::uint16_t kLine = 18u;
  static constexpr std::uint16_t kVectorSlot = 34u;
};

template<>
struct InterruptStubTraits<InterruptId::USART0_RXC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART0_RXC_IRQHandler;
  static constexpr std::uint16_t kLine = 19u;
  static constexpr std::uint16_t kVectorSlot = 35u;
};

template<>
struct InterruptStubTraits<InterruptId::USART0_DRE> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART0_DRE_IRQHandler;
  static constexpr std::uint16_t kLine = 20u;
  static constexpr std::uint16_t kVectorSlot = 36u;
};

template<>
struct InterruptStubTraits<InterruptId::USART0_TXC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART0_TXC_IRQHandler;
  static constexpr std::uint16_t kLine = 21u;
  static constexpr std::uint16_t kVectorSlot = 37u;
};

template<>
struct InterruptStubTraits<InterruptId::PORTD_PORT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PORTD_PORT_IRQHandler;
  static constexpr std::uint16_t kLine = 22u;
  static constexpr std::uint16_t kVectorSlot = 38u;
};

template<>
struct InterruptStubTraits<InterruptId::PTC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PTC_IRQHandler;
  static constexpr std::uint16_t kLine = 27u;
  static constexpr std::uint16_t kVectorSlot = 43u;
};

template<>
struct InterruptStubTraits<InterruptId::PORTC_PORT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PORTC_PORT_IRQHandler;
  static constexpr std::uint16_t kLine = 29u;
  static constexpr std::uint16_t kVectorSlot = 45u;
};

template<>
struct InterruptStubTraits<InterruptId::USART1_RXC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART1_RXC_IRQHandler;
  static constexpr std::uint16_t kLine = 31u;
  static constexpr std::uint16_t kVectorSlot = 47u;
};

template<>
struct InterruptStubTraits<InterruptId::USART1_DRE> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART1_DRE_IRQHandler;
  static constexpr std::uint16_t kLine = 32u;
  static constexpr std::uint16_t kVectorSlot = 48u;
};

template<>
struct InterruptStubTraits<InterruptId::USART1_TXC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART1_TXC_IRQHandler;
  static constexpr std::uint16_t kLine = 33u;
  static constexpr std::uint16_t kVectorSlot = 49u;
};

template<>
struct InterruptStubTraits<InterruptId::PORTF_PORT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PORTF_PORT_IRQHandler;
  static constexpr std::uint16_t kLine = 34u;
  static constexpr std::uint16_t kVectorSlot = 50u;
};

template<>
struct InterruptStubTraits<InterruptId::NVMCTRL_EE> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::NVMCTRL_EE_IRQHandler;
  static constexpr std::uint16_t kLine = 35u;
  static constexpr std::uint16_t kVectorSlot = 51u;
};

}
}
}
}
}
}
