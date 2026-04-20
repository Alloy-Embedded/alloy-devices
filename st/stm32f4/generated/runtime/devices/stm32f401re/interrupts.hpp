#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f401re {
enum class InterruptId : std::uint16_t {
  none,
  ADC,
  EXTI0,
  EXTI1,
  EXTI15_10,
  EXTI2,
  EXTI3,
  EXTI4,
  EXTI9_5,
  FLASH,
  FPU,
  I2C1_ER,
  I2C1_EV,
  I2C2_ER,
  I2C2_EV,
  I2C3_ER,
  I2C3_EV,
  OTG_FS,
  OTG_FS_WKUP,
  PVD,
  RCC,
  RTC_Alarm,
  RTC_WKUP,
  SDIO,
  SPI1,
  SPI2,
  SPI3,
  SPI4,
  TAMP_STAMP,
  TIM1_BRK_TIM9,
  TIM1_CC,
  TIM1_TRG_COM_TIM11,
  TIM1_UP_TIM10,
  TIM2,
  TIM3,
};

struct InterruptDescriptor {
  InterruptId interrupt_id;
  PeripheralId peripheral_id;
  std::uint16_t line;
  std::uint16_t vector_slot;
};
inline constexpr std::array<InterruptDescriptor, 19> kInterruptDescriptors = {{
  {InterruptId::ADC, PeripheralId::ADC1, 18u, 34u},
  {InterruptId::RTC_WKUP, PeripheralId::DMA1, 3u, 19u},
  {InterruptId::RTC_Alarm, PeripheralId::DMA1, 41u, 57u},
  {InterruptId::RCC, PeripheralId::DMA2, 5u, 21u},
  {InterruptId::TIM2, PeripheralId::GPIOA, 28u, 44u},
  {InterruptId::TIM1_BRK_TIM9, PeripheralId::GPIOD, 24u, 40u},
  {InterruptId::TIM1_UP_TIM10, PeripheralId::GPIOD, 25u, 41u},
  {InterruptId::TIM1_TRG_COM_TIM11, PeripheralId::GPIOD, 26u, 42u},
  {InterruptId::TIM1_CC, PeripheralId::GPIOD, 27u, 43u},
  {InterruptId::SDIO, PeripheralId::GPIOH, 49u, 65u},
  {InterruptId::I2C2_EV, PeripheralId::RTC, 33u, 49u},
  {InterruptId::I2C2_ER, PeripheralId::RTC, 34u, 50u},
  {InterruptId::SPI1, PeripheralId::TIM10, 35u, 51u},
  {InterruptId::SPI2, PeripheralId::TIM11, 36u, 52u},
  {InterruptId::SPI3, PeripheralId::TIM2, 51u, 67u},
  {InterruptId::SPI4, PeripheralId::TIM3, 84u, 100u},
  {InterruptId::OTG_FS_WKUP, PeripheralId::USART1, 42u, 58u},
  {InterruptId::OTG_FS, PeripheralId::USART1, 67u, 83u},
  {InterruptId::PVD, PeripheralId::WWDG, 1u, 17u},
}};
}
}
}
}
}
}
