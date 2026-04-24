#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace microchip {
namespace avr_da {
namespace generated {
namespace runtime {
namespace devices {
namespace avr128da32 {
enum class InterruptId : std::uint16_t {
  none,
  BOD_VLM,
  CCL,
  NMI,
  NVMCTRL_EE,
  PORTA_PORT,
  PORTC_PORT,
  PORTD_PORT,
  PORTF_PORT,
  PTC,
  RTC_CNT,
  RTC_PIT,
  SPI0_INT,
  TCA0_CMP0,
  TCA0_CMP1,
  TCA0_CMP2,
  TCA0_HUNF,
  TCA0_LUNF,
  TWI0_TWIM,
  TWI0_TWIS,
  USART0_DRE,
  USART0_RXC,
  USART0_TXC,
  USART1_DRE,
  USART1_RXC,
  USART1_TXC,
};

struct InterruptDescriptor {
  InterruptId interrupt_id;
  PeripheralId peripheral_id;
  std::uint16_t line;
  std::uint16_t vector_slot;
};
inline constexpr std::array<InterruptDescriptor, 14> kInterruptDescriptors = {{
  {InterruptId::SPI0_INT, PeripheralId::SPI0, 18u, 34u},
  {InterruptId::TCA0_LUNF, PeripheralId::TCA0, 7u, 23u},
  {InterruptId::TCA0_HUNF, PeripheralId::TCA0, 8u, 24u},
  {InterruptId::TCA0_CMP0, PeripheralId::TCA0, 9u, 25u},
  {InterruptId::TCA0_CMP1, PeripheralId::TCA0, 10u, 26u},
  {InterruptId::TCA0_CMP2, PeripheralId::TCA0, 11u, 27u},
  {InterruptId::TWI0_TWIS, PeripheralId::TWI0, 16u, 32u},
  {InterruptId::TWI0_TWIM, PeripheralId::TWI0, 17u, 33u},
  {InterruptId::USART0_RXC, PeripheralId::USART0, 19u, 35u},
  {InterruptId::USART0_DRE, PeripheralId::USART0, 20u, 36u},
  {InterruptId::USART0_TXC, PeripheralId::USART0, 21u, 37u},
  {InterruptId::USART1_RXC, PeripheralId::USART1, 31u, 47u},
  {InterruptId::USART1_DRE, PeripheralId::USART1, 32u, 48u},
  {InterruptId::USART1_TXC, PeripheralId::USART1, 33u, 49u},
}};
}
}
}
}
}
}
