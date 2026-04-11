// Generated descriptor-only startup vector unit.

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
struct StartupVectorDescriptor {
  int slot;
  const char* symbol_name;
};
inline constexpr StartupVectorDescriptor kStartupVectorTable[] = {
  {0, "__stack_top"},
  {1, "Reset_Handler"},
  {2, "NMI_Handler"},
  {3, "HardFault_Handler"},
  {4, "Reserved_Handler_4"},
  {5, "Reserved_Handler_5"},
  {6, "Reserved_Handler_6"},
  {7, "Reserved_Handler_7"},
  {8, "Reserved_Handler_8"},
  {9, "Reserved_Handler_9"},
  {10, "Reserved_Handler_10"},
  {11, "SVCall_Handler"},
  {12, "Reserved_Handler_12"},
  {13, "Reserved_Handler_13"},
  {14, "PendSV_Handler"},
  {15, "SysTick_Handler"},
  {16, "WWDG_IRQHandler"},
  {18, "RTC_STAMP_IRQHandler"},
  {19, "FLASH_IRQHandler"},
  {20, "RCC_IRQHandler"},
  {21, "EXTI0_1_IRQHandler"},
  {22, "EXTI2_3_IRQHandler"},
  {23, "EXTI4_15_IRQHandler"},
  {25, "DMA_Channel1_IRQHandler"},
  {26, "DMA_Channel2_3_IRQHandler"},
  {27, "DMA_Channel4_5_6_7_IRQHandler"},
  {28, "ADC_IRQHandler"},
  {29, "TIM1_BRK_UP_TRG_COM_IRQHandler"},
  {30, "TIM1_CC_IRQHandler"},
  {31, "TIM2_IRQHandler"},
  {32, "TIM3_IRQHandler"},
  {35, "TIM14_IRQHandler"},
  {37, "TIM16_IRQHandler"},
  {38, "TIM17_IRQHandler"},
  {39, "I2C1_IRQHandler"},
  {40, "I2C2_IRQHandler"},
  {41, "SPI1_IRQHandler"},
  {42, "SPI2_IRQHandler"},
  {43, "USART1_IRQHandler"},
  {44, "USART2_IRQHandler"},
  {46, "CEC_IRQHandler"},
};
}
}
}
}
}
