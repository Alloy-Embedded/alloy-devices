// Generated startup metadata bootstrap unit.
#include <cstdint>

namespace st {
namespace stm32g0 {
namespace stm32g071rb {
struct InterruptDescriptor {
  const char* name;
  int line;
  const char* peripheral;
};
inline constexpr InterruptDescriptor kInterruptTable[] = {
  {"WWDG", 0, "WWDG"},
  {"PVD", 1, "PWR"},
  {"RTC_STAMP", 2, "RTC"},
  {"FLASH", 3, "FLASH"},
  {"RCC", 4, "RCC"},
  {"EXTI0_1", 5, "EXTI"},
  {"EXTI2_3", 6, "EXTI"},
  {"EXTI4_15", 7, "EXTI"},
  {"UCPD1_UCPD2", 8, "UCPD1"},
  {"DMA_Channel1", 9, "DMA1"},
  {"DMA_Channel2_3", 10, "DMA1"},
  {"DMA_Channel4_5_6_7", 11, "DMAMUX1"},
  {"ADC_COMP", 12, "ADC1"},
  {"TIM1_BRK_UP_TRG_COMP", 13, "TIM1"},
  {"TIM1_CC", 14, "TIM1"},
  {"TIM2", 15, "TIM2"},
  {"TIM3", 16, "TIM2"},
  {"TIM6_DAC_LPTIM1", 17, "TIM6"},
  {"TIM7_LPTIM2", 18, "TIM7"},
  {"TIM14", 19, "TIM14"},
  {"TIM15", 20, "TIM15"},
  {"TIM16", 21, "TIM16"},
  {"TIM17", 22, "TIM17"},
  {"I2C1", 23, "I2C1"},
  {"I2C2", 24, "I2C2"},
  {"SPI1", 25, "SPI1"},
  {"SPI2", 26, "SPI2"},
  {"USART1", 27, "USART1"},
  {"USART2", 28, "USART2"},
  {"USART3_USART4_LPUART1", 29, "USART3"},
  {"CEC", 30, "CRC"},
  {"RNG", 31, "RNG"},
};
}
}
}
