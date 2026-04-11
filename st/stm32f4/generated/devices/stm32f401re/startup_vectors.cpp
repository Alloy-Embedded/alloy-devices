// Generated descriptor-only startup vector unit.

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f401re {
struct StartupVectorDescriptor {
  int slot;
  const char* symbol_name;
};
inline constexpr StartupVectorDescriptor kStartupVectorTable[] = {
  {0, "__stack_top"},
  {1, "Reset_Handler"},
  {2, "NMI_Handler"},
  {3, "HardFault_Handler"},
  {4, "MemManage_Handler"},
  {5, "BusFault_Handler"},
  {6, "UsageFault_Handler"},
  {7, "Reserved_Handler_7"},
  {8, "Reserved_Handler_8"},
  {9, "Reserved_Handler_9"},
  {10, "Reserved_Handler_10"},
  {11, "SVCall_Handler"},
  {12, "DebugMon_Handler"},
  {13, "Reserved_Handler_13"},
  {14, "PendSV_Handler"},
  {15, "SysTick_Handler"},
  {17, "PVD_IRQHandler"},
  {18, "TAMP_STAMP_IRQHandler"},
  {19, "RTC_WKUP_IRQHandler"},
  {20, "FLASH_IRQHandler"},
  {21, "RCC_IRQHandler"},
  {22, "EXTI0_IRQHandler"},
  {23, "EXTI1_IRQHandler"},
  {24, "EXTI2_IRQHandler"},
  {25, "EXTI3_IRQHandler"},
  {26, "EXTI4_IRQHandler"},
  {34, "ADC_IRQHandler"},
  {39, "EXTI9_5_IRQHandler"},
  {40, "TIM1_BRK_TIM9_IRQHandler"},
  {41, "TIM1_UP_TIM10_IRQHandler"},
  {42, "TIM1_TRG_COM_TIM11_IRQHandler"},
  {43, "TIM1_CC_IRQHandler"},
  {44, "TIM2_IRQHandler"},
  {45, "TIM3_IRQHandler"},
  {47, "I2C1_EV_IRQHandler"},
  {48, "I2C1_ER_IRQHandler"},
  {49, "I2C2_EV_IRQHandler"},
  {50, "I2C2_ER_IRQHandler"},
  {51, "SPI1_IRQHandler"},
  {52, "SPI2_IRQHandler"},
  {56, "EXTI15_10_IRQHandler"},
  {57, "RTC_Alarm_IRQHandler"},
  {58, "OTG_FS_WKUP_IRQHandler"},
  {65, "SDIO_IRQHandler"},
  {67, "SPI3_IRQHandler"},
  {83, "OTG_FS_IRQHandler"},
  {88, "I2C3_EV_IRQHandler"},
  {89, "I2C3_ER_IRQHandler"},
  {97, "FPU_IRQHandler"},
  {100, "SPI4_IRQHandler"},
};
}
}
}
}
}
