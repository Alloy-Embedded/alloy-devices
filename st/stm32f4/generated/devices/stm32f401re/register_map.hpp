#pragma once

#include <cstdint>

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f401re {
inline constexpr const char* kDevice = "stm32f401re";
struct PeripheralBase {
  const char* name;
  std::uintptr_t address;
};
inline constexpr PeripheralBase kPeripheralBases[] = {
  {"ADC1", 0x40012000u},
  {"ADC_Common", 0x40012300u},
  {"CRC", 0x40023000u},
  {"DBG", 0xE0042000u},
  {"DMA1", 0x40026000u},
  {"DMA2", 0x40026400u},
  {"EXTI", 0x40013C00u},
  {"FLASH", 0x40023C00u},
  {"FPU", 0xE000EF34u},
  {"FPU_CPACR", 0xE000ED88u},
  {"GPIOA", 0x40020000u},
  {"GPIOB", 0x40020400u},
  {"GPIOC", 0x40020800u},
  {"GPIOD", 0x40020C00u},
  {"GPIOE", 0x40021000u},
  {"GPIOH", 0x40021C00u},
  {"I2C1", 0x40005400u},
  {"I2C2", 0x40005800u},
  {"I2C3", 0x40005C00u},
  {"I2S2ext", 0x40003400u},
  {"I2S3ext", 0x40004000u},
  {"IWDG", 0x40003000u},
  {"MPU", 0xE000ED90u},
  {"NVIC", 0xE000E100u},
  {"NVIC_STIR", 0xE000EF00u},
  {"OTG_FS_DEVICE", 0x50000800u},
  {"OTG_FS_GLOBAL", 0x50000000u},
  {"OTG_FS_HOST", 0x50000400u},
  {"OTG_FS_PWRCLK", 0x50000E00u},
  {"PWR", 0x40007000u},
  {"RCC", 0x40023800u},
  {"RTC", 0x40002800u},
  {"SCB", 0xE000ED00u},
  {"SCB_ACTRL", 0xE000E008u},
  {"SDIO", 0x40012C00u},
  {"SPI1", 0x40013000u},
  {"SPI2", 0x40003800u},
  {"SPI3", 0x40003C00u},
  {"SPI4", 0x40013400u},
  {"STK", 0xE000E010u},
  {"SYSCFG", 0x40013800u},
  {"TIM1", 0x40010000u},
  {"TIM10", 0x40014400u},
  {"TIM11", 0x40014800u},
  {"TIM2", 0x40000000u},
  {"TIM3", 0x40000400u},
  {"TIM4", 0x40000800u},
  {"TIM5", 0x40000C00u},
  {"TIM8", 0x40010400u},
  {"TIM9", 0x40014000u},
  {"USART1", 0x40011000u},
  {"USART2", 0x40004400u},
  {"USART6", 0x40011400u},
  {"WWDG", 0x40002C00u},
};
}
}
}
}
}
