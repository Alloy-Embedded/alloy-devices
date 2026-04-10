// Generated startup metadata bootstrap unit.
#include <cstdint>

namespace st {
namespace stm32g0 {
namespace stm32g030f6 {
struct InterruptDescriptor {
  const char* name;
  int line;
  const char* peripheral;
};
inline constexpr InterruptDescriptor kInterruptTable[] = {
  {"WWDG", 0, "WWDG"},
  {"RTC_STAMP", 2, "RTC"},
  {"FLASH", 3, "FLASH"},
  {"RCC", 4, "RCC"},
  {"EXTI0_1", 5, "EXTI"},
  {"EXTI2_3", 6, "EXTI"},
  {"EXTI4_15", 7, "EXTI"},
  {"DMA_Channel1", 9, "DMA1"},
  {"DMA_Channel2_3", 10, "DMA1"},
  {"DMA_Channel4_5_6_7", 11, "DMAMUX1"},
  {"ADC", 12, "ADC1"},
  {"TIM1_BRK_UP_TRG_COM", 13, "TIM1"},
  {"TIM1_CC", 14, "TIM1"},
  {"TIM2", 15, "TIM2"},
  {"TIM3", 16, "TIM2"},
  {"TIM14", 19, "TIM14"},
  {"TIM16", 21, "TIM16"},
  {"TIM17", 22, "TIM17"},
  {"I2C1", 23, "I2C1"},
  {"I2C2", 24, "I2C2"},
  {"SPI1", 25, "SPI1"},
  {"SPI2", 26, "SPI2"},
  {"USART1", 27, "USART1"},
  {"USART2", 28, "USART2"},
  {"CEC", 30, "CRC"},
};
}
}
}
