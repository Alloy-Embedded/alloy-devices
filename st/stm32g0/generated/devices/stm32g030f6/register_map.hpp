#pragma once

#include <cstdint>

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
inline constexpr const char* kDevice = "stm32g030f6";
struct PeripheralBase {
  const char* name;
  std::uintptr_t address;
};
inline constexpr PeripheralBase kPeripheralBases[] = {
  {"ADC1", 0x40012400u},
  {"CRC", 0x40023000u},
  {"DBG", 0x40015800u},
  {"DMA1", 0x40020000u},
  {"DMAMUX1", 0x40020800u},
  {"EXTI", 0x40021800u},
  {"FLASH", 0x40022000u},
  {"GPIOA", 0x50000000u},
  {"GPIOB", 0x50000400u},
  {"GPIOC", 0x50000800u},
  {"GPIOD", 0x50000C00u},
  {"GPIOF", 0x50001400u},
  {"I2C1", 0x40005400u},
  {"I2C2", 0x40005800u},
  {"IWDG", 0x40003000u},
  {"PWR", 0x40007000u},
  {"RCC", 0x40021000u},
  {"RTC", 0x40002800u},
  {"SPI1", 0x40013000u},
  {"SPI2", 0x40003800u},
  {"SYSCFG", 0x40010000u},
  {"TAMP", 0x4000B000u},
  {"TIM1", 0x40012C00u},
  {"TIM14", 0x40002000u},
  {"TIM16", 0x40014400u},
  {"TIM17", 0x40014800u},
  {"TIM2", 0x40000000u},
  {"TIM3", 0x40000400u},
  {"USART1", 0x40013800u},
  {"USART2", 0x40004400u},
  {"VREFBUF", 0x40010030u},
  {"WWDG", 0x40002C00u},
};
}
}
}
}
}
