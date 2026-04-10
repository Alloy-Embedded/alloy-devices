// Generated startup metadata bootstrap unit.
#include <cstdint>

namespace st {
namespace stm32g0 {
namespace stm32g0b1re {
struct InterruptDescriptor {
  const char* name;
  int line;
  const char* peripheral;
};
inline constexpr InterruptDescriptor kInterruptTable[] = {
  {"WWDG", 0, "WWDG"},
  {"PVD", 1, "PWR"},
  {"RTC_TAMP", 2, "RTC"},
  {"FLASH", 3, "FLASH"},
  {"RCC_CRS", 4, "RCC"},
  {"EXTI0_1", 5, "EXTI"},
  {"EXTI2_3", 6, "EXTI"},
  {"EXTI4_15", 7, "EXTI"},
  {"UCPD1_UCPD2_USB", 8, "UCPD1"},
  {"DMA1_Channel1", 9, "DMA1"},
  {"DMA1_Channel2_3", 10, "DMA1"},
  {"DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5", 11, "DMA1"},
  {"ADC_COMP", 12, "ADC1"},
  {"TIM1_BRK_UP_TRG_COM", 13, "TIM1"},
  {"TIM1_CC", 14, "TIM1"},
  {"TIM2", 15, "TIM2"},
  {"TIM3_TIM4", 16, "TIM3"},
  {"TIM6_DAC", 17, "TIM6"},
  {"TIM6_DAC_LPTIM1", 17, "DAC"},
  {"TIM7", 18, "TIM7"},
  {"TIM14", 19, "TIM14"},
  {"TIM15", 20, "TIM15"},
  {"TIM16", 21, "TIM16"},
  {"TIM17", 22, "TIM17"},
  {"I2C1", 23, "I2C1"},
  {"I2C2_I2C3", 24, "I2C2"},
  {"SPI1", 25, "SPI1"},
  {"SPI2_SPI3", 26, "SPI2"},
  {"USART1", 27, "USART1"},
  {"USART2_LPUART2", 28, "USART2"},
  {"USART3_USART4_USART5_USART6_LPUART1", 29, "USART3"},
  {"CEC", 30, "HDMI_CEC"},
};
}
}
}
