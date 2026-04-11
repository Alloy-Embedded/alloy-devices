#pragma once

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f401re {
struct VectorSlotDescriptor {
  int slot;
  const char* symbol_name;
  const char* interrupt_name;
  const char* kind;
};
inline constexpr VectorSlotDescriptor kVectorSlots[] = {
  {0, "__stack_top", nullptr, "initial-stack-pointer"},
  {1, "Reset_Handler", nullptr, "reset-handler"},
  {2, "NMI_Handler", nullptr, "system-exception"},
  {3, "HardFault_Handler", nullptr, "system-exception"},
  {4, "MemManage_Handler", nullptr, "system-exception"},
  {5, "BusFault_Handler", nullptr, "system-exception"},
  {6, "UsageFault_Handler", nullptr, "system-exception"},
  {7, "Reserved_Handler_7", nullptr, "reserved"},
  {8, "Reserved_Handler_8", nullptr, "reserved"},
  {9, "Reserved_Handler_9", nullptr, "reserved"},
  {10, "Reserved_Handler_10", nullptr, "reserved"},
  {11, "SVCall_Handler", nullptr, "system-exception"},
  {12, "DebugMon_Handler", nullptr, "system-exception"},
  {13, "Reserved_Handler_13", nullptr, "reserved"},
  {14, "PendSV_Handler", nullptr, "system-exception"},
  {15, "SysTick_Handler", nullptr, "system-exception"},
  {17, "PVD_IRQHandler", "PVD", "external-interrupt"},
  {18, "TAMP_STAMP_IRQHandler", "TAMP_STAMP", "external-interrupt"},
  {19, "RTC_WKUP_IRQHandler", "RTC_WKUP", "external-interrupt"},
  {20, "FLASH_IRQHandler", "FLASH", "external-interrupt"},
  {21, "RCC_IRQHandler", "RCC", "external-interrupt"},
  {22, "EXTI0_IRQHandler", "EXTI0", "external-interrupt"},
  {23, "EXTI1_IRQHandler", "EXTI1", "external-interrupt"},
  {24, "EXTI2_IRQHandler", "EXTI2", "external-interrupt"},
  {25, "EXTI3_IRQHandler", "EXTI3", "external-interrupt"},
  {26, "EXTI4_IRQHandler", "EXTI4", "external-interrupt"},
  {34, "ADC_IRQHandler", "ADC", "external-interrupt"},
  {39, "EXTI9_5_IRQHandler", "EXTI9_5", "external-interrupt"},
  {40, "TIM1_BRK_TIM9_IRQHandler", "TIM1_BRK_TIM9", "external-interrupt"},
  {41, "TIM1_UP_TIM10_IRQHandler", "TIM1_UP_TIM10", "external-interrupt"},
  {42, "TIM1_TRG_COM_TIM11_IRQHandler", "TIM1_TRG_COM_TIM11", "external-interrupt"},
  {43, "TIM1_CC_IRQHandler", "TIM1_CC", "external-interrupt"},
  {44, "TIM2_IRQHandler", "TIM2", "external-interrupt"},
  {45, "TIM3_IRQHandler", "TIM3", "external-interrupt"},
  {47, "I2C1_EV_IRQHandler", "I2C1_EV", "external-interrupt"},
  {48, "I2C1_ER_IRQHandler", "I2C1_ER", "external-interrupt"},
  {49, "I2C2_EV_IRQHandler", "I2C2_EV", "external-interrupt"},
  {50, "I2C2_ER_IRQHandler", "I2C2_ER", "external-interrupt"},
  {51, "SPI1_IRQHandler", "SPI1", "external-interrupt"},
  {52, "SPI2_IRQHandler", "SPI2", "external-interrupt"},
  {56, "EXTI15_10_IRQHandler", "EXTI15_10", "external-interrupt"},
  {57, "RTC_Alarm_IRQHandler", "RTC_Alarm", "external-interrupt"},
  {58, "OTG_FS_WKUP_IRQHandler", "OTG_FS_WKUP", "external-interrupt"},
  {65, "SDIO_IRQHandler", "SDIO", "external-interrupt"},
  {67, "SPI3_IRQHandler", "SPI3", "external-interrupt"},
  {83, "OTG_FS_IRQHandler", "OTG_FS", "external-interrupt"},
  {88, "I2C3_EV_IRQHandler", "I2C3_EV", "external-interrupt"},
  {89, "I2C3_ER_IRQHandler", "I2C3_ER", "external-interrupt"},
  {97, "FPU_IRQHandler", "FPU", "external-interrupt"},
  {100, "SPI4_IRQHandler", "SPI4", "external-interrupt"},
};

struct StartupDescriptor {
  const char* descriptor_id;
  const char* kind;
  const char* source_region;
  const char* target_region;
  const char* symbol;
};
inline constexpr StartupDescriptor kStartupDescriptors[] = {
  {"startup:copy-source:flash", "copy-source-region", "flash", nullptr, nullptr},
  {"startup:copy-target:sram", "copy-target-region", nullptr, "sram", nullptr},
  {"startup:stack-top", "initial-stack-pointer", nullptr, nullptr, "__stack_top"},
  {"startup:vector-source:flash", "vector-source-region", "flash", nullptr, nullptr},
  {"startup:vectors", "vector-table", nullptr, nullptr, "_vectors"},
  {"startup:zero-target:sram", "zero-target-region", nullptr, "sram", nullptr},
};
}
}
}
}
}
