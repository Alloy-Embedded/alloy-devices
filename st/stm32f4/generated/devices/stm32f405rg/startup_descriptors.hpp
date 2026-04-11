#pragma once

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f405rg {
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
  {16, "WWDG_IRQHandler", "WWDG", "external-interrupt"},
  {17, "PVD_IRQHandler", "PVD", "external-interrupt"},
  {18, "TAMP_STAMP_IRQHandler", "TAMP_STAMP", "external-interrupt"},
  {19, "RTC_WKUP_IRQHandler", "RTC_WKUP", "external-interrupt"},
  {21, "RCC_IRQHandler", "RCC", "external-interrupt"},
  {22, "EXTI0_IRQHandler", "EXTI0", "external-interrupt"},
  {23, "EXTI1_IRQHandler", "EXTI1", "external-interrupt"},
  {24, "EXTI2_IRQHandler", "EXTI2", "external-interrupt"},
  {25, "EXTI3_IRQHandler", "EXTI3", "external-interrupt"},
  {26, "EXTI4_IRQHandler", "EXTI4", "external-interrupt"},
  {27, "DMA1_Stream0_IRQHandler", "DMA1_Stream0", "external-interrupt"},
  {28, "DMA1_Stream1_IRQHandler", "DMA1_Stream1", "external-interrupt"},
  {29, "DMA1_Stream2_IRQHandler", "DMA1_Stream2", "external-interrupt"},
  {30, "DMA1_Stream3_IRQHandler", "DMA1_Stream3", "external-interrupt"},
  {31, "DMA1_Stream4_IRQHandler", "DMA1_Stream4", "external-interrupt"},
  {32, "DMA1_Stream5_IRQHandler", "DMA1_Stream5", "external-interrupt"},
  {33, "DMA1_Stream6_IRQHandler", "DMA1_Stream6", "external-interrupt"},
  {34, "ADC_IRQHandler", "ADC", "external-interrupt"},
  {35, "CAN1_TX_IRQHandler", "CAN1_TX", "external-interrupt"},
  {36, "CAN1_RX0_IRQHandler", "CAN1_RX0", "external-interrupt"},
  {37, "CAN1_RX1_IRQHandler", "CAN1_RX1", "external-interrupt"},
  {38, "CAN1_SCE_IRQHandler", "CAN1_SCE", "external-interrupt"},
  {39, "EXTI9_5_IRQHandler", "EXTI9_5", "external-interrupt"},
  {40, "TIM1_BRK_TIM9_IRQHandler", "TIM1_BRK_TIM9", "external-interrupt"},
  {41, "TIM1_UP_TIM10_IRQHandler", "TIM1_UP_TIM10", "external-interrupt"},
  {42, "TIM1_TRG_COM_TIM11_IRQHandler", "TIM1_TRG_COM_TIM11", "external-interrupt"},
  {43, "TIM1_CC_IRQHandler", "TIM1_CC", "external-interrupt"},
  {44, "TIM2_IRQHandler", "TIM2", "external-interrupt"},
  {45, "TIM3_IRQHandler", "TIM3", "external-interrupt"},
  {46, "TIM4_IRQHandler", "TIM4", "external-interrupt"},
  {47, "I2C1_EV_IRQHandler", "I2C1_EV", "external-interrupt"},
  {48, "I2C1_ER_IRQHandler", "I2C1_ER", "external-interrupt"},
  {49, "I2C2_EV_IRQHandler", "I2C2_EV", "external-interrupt"},
  {50, "I2C2_ER_IRQHandler", "I2C2_ER", "external-interrupt"},
  {51, "SPI1_IRQHandler", "SPI1", "external-interrupt"},
  {52, "SPI2_IRQHandler", "SPI2", "external-interrupt"},
  {53, "USART1_IRQHandler", "USART1", "external-interrupt"},
  {54, "USART2_IRQHandler", "USART2", "external-interrupt"},
  {55, "USART3_IRQHandler", "USART3", "external-interrupt"},
  {56, "EXTI15_10_IRQHandler", "EXTI15_10", "external-interrupt"},
  {57, "RTC_Alarm_IRQHandler", "RTC_Alarm", "external-interrupt"},
  {58, "OTG_FS_WKUP_IRQHandler", "OTG_FS_WKUP", "external-interrupt"},
  {59, "TIM8_BRK_TIM12_IRQHandler", "TIM8_BRK_TIM12", "external-interrupt"},
  {60, "TIM8_UP_TIM13_IRQHandler", "TIM8_UP_TIM13", "external-interrupt"},
  {61, "TIM8_TRG_COM_TIM14_IRQHandler", "TIM8_TRG_COM_TIM14", "external-interrupt"},
  {62, "TIM8_CC_IRQHandler", "TIM8_CC", "external-interrupt"},
  {63, "DMA1_Stream7_IRQHandler", "DMA1_Stream7", "external-interrupt"},
  {64, "FSMC_IRQHandler", "FSMC", "external-interrupt"},
  {65, "SDIO_IRQHandler", "SDIO", "external-interrupt"},
  {66, "TIM5_IRQHandler", "TIM5", "external-interrupt"},
  {67, "SPI3_IRQHandler", "SPI3", "external-interrupt"},
  {68, "UART4_IRQHandler", "UART4", "external-interrupt"},
  {69, "UART5_IRQHandler", "UART5", "external-interrupt"},
  {70, "TIM6_DAC_IRQHandler", "TIM6_DAC", "external-interrupt"},
  {71, "TIM7_IRQHandler", "TIM7", "external-interrupt"},
  {72, "DMA2_Stream0_IRQHandler", "DMA2_Stream0", "external-interrupt"},
  {73, "DMA2_Stream1_IRQHandler", "DMA2_Stream1", "external-interrupt"},
  {74, "DMA2_Stream2_IRQHandler", "DMA2_Stream2", "external-interrupt"},
  {75, "DMA2_Stream3_IRQHandler", "DMA2_Stream3", "external-interrupt"},
  {76, "DMA2_Stream4_IRQHandler", "DMA2_Stream4", "external-interrupt"},
  {77, "ETH_IRQHandler", "ETH", "external-interrupt"},
  {78, "ETH_WKUP_IRQHandler", "ETH_WKUP", "external-interrupt"},
  {79, "CAN2_TX_IRQHandler", "CAN2_TX", "external-interrupt"},
  {80, "CAN2_RX0_IRQHandler", "CAN2_RX0", "external-interrupt"},
  {81, "CAN2_RX1_IRQHandler", "CAN2_RX1", "external-interrupt"},
  {82, "CAN2_SCE_IRQHandler", "CAN2_SCE", "external-interrupt"},
  {83, "OTG_FS_IRQHandler", "OTG_FS", "external-interrupt"},
  {84, "DMA2_Stream5_IRQHandler", "DMA2_Stream5", "external-interrupt"},
  {85, "DMA2_Stream6_IRQHandler", "DMA2_Stream6", "external-interrupt"},
  {86, "DMA2_Stream7_IRQHandler", "DMA2_Stream7", "external-interrupt"},
  {87, "USART6_IRQHandler", "USART6", "external-interrupt"},
  {88, "I2C3_EV_IRQHandler", "I2C3_EV", "external-interrupt"},
  {89, "I2C3_ER_IRQHandler", "I2C3_ER", "external-interrupt"},
  {90, "OTG_HS_EP1_OUT_IRQHandler", "OTG_HS_EP1_OUT", "external-interrupt"},
  {91, "OTG_HS_EP1_IN_IRQHandler", "OTG_HS_EP1_IN", "external-interrupt"},
  {92, "OTG_HS_WKUP_IRQHandler", "OTG_HS_WKUP", "external-interrupt"},
  {93, "OTG_HS_IRQHandler", "OTG_HS", "external-interrupt"},
  {94, "DCMI_IRQHandler", "DCMI", "external-interrupt"},
  {95, "CRYP_IRQHandler", "CRYP", "external-interrupt"},
  {96, "HASH_RNG_IRQHandler", "HASH_RNG", "external-interrupt"},
  {97, "FPU_IRQHandler", "FPU", "external-interrupt"},
  {104, "LCD_TFT_IRQHandler", "LCD_TFT", "external-interrupt"},
  {105, "LCD_TFT_1_IRQHandler", "LCD_TFT_1", "external-interrupt"},
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
