// Generated descriptor-only startup vector unit.

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g0b1re {
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
  {17, "PVD_IRQHandler"},
  {18, "RTC_TAMP_IRQHandler"},
  {19, "FLASH_IRQHandler"},
  {20, "RCC_CRS_IRQHandler"},
  {21, "EXTI0_1_IRQHandler"},
  {22, "EXTI2_3_IRQHandler"},
  {23, "EXTI4_15_IRQHandler"},
  {24, "UCPD1_UCPD2_USB_IRQHandler"},
  {25, "DMA1_Channel1_IRQHandler"},
  {26, "DMA1_Channel2_3_IRQHandler"},
  {27, "DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5_IRQHandler"},
  {28, "ADC_COMP_IRQHandler"},
  {29, "TIM1_BRK_UP_TRG_COM_IRQHandler"},
  {30, "TIM1_CC_IRQHandler"},
  {31, "TIM2_IRQHandler"},
  {32, "TIM3_TIM4_IRQHandler"},
  {33, "TIM6_DAC_LPTIM1_IRQHandler"},
  {34, "TIM7_IRQHandler"},
  {35, "TIM14_IRQHandler"},
  {36, "TIM15_IRQHandler"},
  {37, "TIM16_IRQHandler"},
  {38, "TIM17_IRQHandler"},
  {39, "I2C1_IRQHandler"},
  {40, "I2C2_I2C3_IRQHandler"},
  {41, "SPI1_IRQHandler"},
  {42, "SPI2_SPI3_IRQHandler"},
  {43, "USART1_IRQHandler"},
  {44, "USART2_LPUART2_IRQHandler"},
  {45, "USART3_USART4_USART5_USART6_LPUART1_IRQHandler"},
  {46, "CEC_IRQHandler"},
};
}
}
}
}
}
