#pragma once

#include <cstdint>

namespace st {
namespace stm32g0 {
namespace stm32g071rb {
inline constexpr const char* kDevice = "stm32g071rb";
struct PeripheralBase {
  const char* name;
  std::uintptr_t address;
};
inline constexpr PeripheralBase kPeripheralBases[] = {
  {"ADC1", 0x40012400u},
  {"COMP", 0x40010200u},
  {"CRC", 0x40023000u},
  {"DAC", 0x40007400u},
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
  {"HDMI_CEC", 0x40007800u},
  {"I2C1", 0x40005400u},
  {"I2C2", 0x40005800u},
  {"IWDG", 0x40003000u},
  {"LPTIM1", 0x40007C00u},
  {"LPTIM2", 0x40009400u},
  {"LPUART1", 0x40008000u},
  {"PWR", 0x40007000u},
  {"RCC", 0x40021000u},
  {"RNG", 0x40025000u},
  {"RTC", 0x40002800u},
  {"SPI1", 0x40013000u},
  {"SPI2", 0x40003800u},
  {"SYSCFG_VREFBUF", 0x40010000u},
  {"TAMP", 0x4000B000u},
  {"TIM1", 0x40012C00u},
  {"TIM14", 0x40002000u},
  {"TIM15", 0x40014000u},
  {"TIM16", 0x40014400u},
  {"TIM17", 0x40014800u},
  {"TIM2", 0x40000000u},
  {"TIM3", 0x40000400u},
  {"TIM6", 0x40001000u},
  {"TIM7", 0x40001400u},
  {"UCPD1", 0x4000A000u},
  {"UCPD2", 0x4000A400u},
  {"USART1", 0x40013800u},
  {"USART2", 0x40004400u},
  {"USART3", 0x40004800u},
  {"USART4", 0x40004C00u},
  {"WWDG", 0x40002C00u},
};
}
}
}
