#pragma once

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
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
  {4, "Reserved_Handler_4", nullptr, "reserved"},
  {5, "Reserved_Handler_5", nullptr, "reserved"},
  {6, "Reserved_Handler_6", nullptr, "reserved"},
  {7, "Reserved_Handler_7", nullptr, "reserved"},
  {8, "Reserved_Handler_8", nullptr, "reserved"},
  {9, "Reserved_Handler_9", nullptr, "reserved"},
  {10, "Reserved_Handler_10", nullptr, "reserved"},
  {11, "SVCall_Handler", nullptr, "system-exception"},
  {12, "Reserved_Handler_12", nullptr, "reserved"},
  {13, "Reserved_Handler_13", nullptr, "reserved"},
  {14, "PendSV_Handler", nullptr, "system-exception"},
  {15, "SysTick_Handler", nullptr, "system-exception"},
  {16, "WWDG_IRQHandler", "WWDG", "external-interrupt"},
  {18, "RTC_STAMP_IRQHandler", "RTC_STAMP", "external-interrupt"},
  {19, "FLASH_IRQHandler", "FLASH", "external-interrupt"},
  {20, "RCC_IRQHandler", "RCC", "external-interrupt"},
  {21, "EXTI0_1_IRQHandler", "EXTI0_1", "external-interrupt"},
  {22, "EXTI2_3_IRQHandler", "EXTI2_3", "external-interrupt"},
  {23, "EXTI4_15_IRQHandler", "EXTI4_15", "external-interrupt"},
  {25, "DMA_Channel1_IRQHandler", "DMA_Channel1", "external-interrupt"},
  {26, "DMA_Channel2_3_IRQHandler", "DMA_Channel2_3", "external-interrupt"},
  {27, "DMA_Channel4_5_6_7_IRQHandler", "DMA_Channel4_5_6_7", "external-interrupt"},
  {28, "ADC_IRQHandler", "ADC", "external-interrupt"},
  {29, "TIM1_BRK_UP_TRG_COM_IRQHandler", "TIM1_BRK_UP_TRG_COM", "external-interrupt"},
  {30, "TIM1_CC_IRQHandler", "TIM1_CC", "external-interrupt"},
  {31, "TIM2_IRQHandler", "TIM2", "external-interrupt"},
  {32, "TIM3_IRQHandler", "TIM3", "external-interrupt"},
  {35, "TIM14_IRQHandler", "TIM14", "external-interrupt"},
  {37, "TIM16_IRQHandler", "TIM16", "external-interrupt"},
  {38, "TIM17_IRQHandler", "TIM17", "external-interrupt"},
  {39, "I2C1_IRQHandler", "I2C1", "external-interrupt"},
  {40, "I2C2_IRQHandler", "I2C2", "external-interrupt"},
  {41, "SPI1_IRQHandler", "SPI1", "external-interrupt"},
  {42, "SPI2_IRQHandler", "SPI2", "external-interrupt"},
  {43, "USART1_IRQHandler", "USART1", "external-interrupt"},
  {44, "USART2_IRQHandler", "USART2", "external-interrupt"},
  {46, "CEC_IRQHandler", "CEC", "external-interrupt"},
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
