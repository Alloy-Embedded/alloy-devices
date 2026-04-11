#pragma once

namespace microchip {
namespace same70 {
namespace generated {
namespace devices {
namespace atsame70q21b {
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
  {16, "SUPC_IRQHandler", "SUPC", "external-interrupt"},
  {17, "RSTC_IRQHandler", "RSTC", "external-interrupt"},
  {18, "RTC_IRQHandler", "RTC", "external-interrupt"},
  {19, "RTT_IRQHandler", "RTT", "external-interrupt"},
  {20, "WDT_IRQHandler", "WDT", "external-interrupt"},
  {21, "PMC_IRQHandler", "PMC", "external-interrupt"},
  {22, "EFC_IRQHandler", "EFC", "external-interrupt"},
  {23, "UART0_IRQHandler", "UART0", "external-interrupt"},
  {24, "UART1_IRQHandler", "UART1", "external-interrupt"},
  {26, "PIOA_IRQHandler", "PIOA", "external-interrupt"},
  {27, "PIOB_IRQHandler", "PIOB", "external-interrupt"},
  {28, "PIOC_IRQHandler", "PIOC", "external-interrupt"},
  {29, "USART0_IRQHandler", "USART0", "external-interrupt"},
  {30, "USART1_IRQHandler", "USART1", "external-interrupt"},
  {31, "USART2_IRQHandler", "USART2", "external-interrupt"},
  {32, "PIOD_IRQHandler", "PIOD", "external-interrupt"},
  {33, "PIOE_IRQHandler", "PIOE", "external-interrupt"},
  {34, "HSMCI_IRQHandler", "HSMCI", "external-interrupt"},
  {35, "TWIHS0_IRQHandler", "TWIHS0", "external-interrupt"},
  {36, "TWIHS1_IRQHandler", "TWIHS1", "external-interrupt"},
  {37, "SPI0_IRQHandler", "SPI0", "external-interrupt"},
  {38, "SSC_IRQHandler", "SSC", "external-interrupt"},
  {39, "TC0_IRQHandler", "TC0", "external-interrupt"},
  {40, "TC1_IRQHandler", "TC1", "external-interrupt"},
  {41, "TC2_IRQHandler", "TC2", "external-interrupt"},
  {42, "TC3_IRQHandler", "TC3", "external-interrupt"},
  {43, "TC4_IRQHandler", "TC4", "external-interrupt"},
  {44, "TC5_IRQHandler", "TC5", "external-interrupt"},
  {45, "AFEC0_IRQHandler", "AFEC0", "external-interrupt"},
  {46, "DACC_IRQHandler", "DACC", "external-interrupt"},
  {47, "PWM0_IRQHandler", "PWM0", "external-interrupt"},
  {48, "ICM_IRQHandler", "ICM", "external-interrupt"},
  {49, "ACC_IRQHandler", "ACC", "external-interrupt"},
  {50, "USBHS_IRQHandler", "USBHS", "external-interrupt"},
  {51, "MCAN0_INT0_IRQHandler", "MCAN0_INT0", "external-interrupt"},
  {52, "MCAN0_INT1_IRQHandler", "MCAN0_INT1", "external-interrupt"},
  {53, "MCAN1_INT0_IRQHandler", "MCAN1_INT0", "external-interrupt"},
  {54, "MCAN1_INT1_IRQHandler", "MCAN1_INT1", "external-interrupt"},
  {55, "GMAC_IRQHandler", "GMAC", "external-interrupt"},
  {56, "AFEC1_IRQHandler", "AFEC1", "external-interrupt"},
  {57, "TWIHS2_IRQHandler", "TWIHS2", "external-interrupt"},
  {58, "SPI1_IRQHandler", "SPI1", "external-interrupt"},
  {59, "QSPI_IRQHandler", "QSPI", "external-interrupt"},
  {60, "UART2_IRQHandler", "UART2", "external-interrupt"},
  {61, "UART3_IRQHandler", "UART3", "external-interrupt"},
  {62, "UART4_IRQHandler", "UART4", "external-interrupt"},
  {63, "TC6_IRQHandler", "TC6", "external-interrupt"},
  {64, "TC7_IRQHandler", "TC7", "external-interrupt"},
  {65, "TC8_IRQHandler", "TC8", "external-interrupt"},
  {66, "TC9_IRQHandler", "TC9", "external-interrupt"},
  {67, "TC10_IRQHandler", "TC10", "external-interrupt"},
  {68, "TC11_IRQHandler", "TC11", "external-interrupt"},
  {72, "AES_IRQHandler", "AES", "external-interrupt"},
  {73, "TRNG_IRQHandler", "TRNG", "external-interrupt"},
  {74, "XDMAC_IRQHandler", "XDMAC", "external-interrupt"},
  {75, "ISI_IRQHandler", "ISI", "external-interrupt"},
  {76, "PWM1_IRQHandler", "PWM1", "external-interrupt"},
  {77, "FPU_IRQHandler", "FPU", "external-interrupt"},
  {79, "RSWDT_IRQHandler", "RSWDT", "external-interrupt"},
  {80, "CCW_IRQHandler", "CCW", "external-interrupt"},
  {81, "CCF_IRQHandler", "CCF", "external-interrupt"},
  {82, "GMAC_Q1_IRQHandler", "GMAC_Q1", "external-interrupt"},
  {83, "GMAC_Q2_IRQHandler", "GMAC_Q2", "external-interrupt"},
  {84, "IXC_IRQHandler", "IXC", "external-interrupt"},
  {85, "I2SC0_IRQHandler", "I2SC0", "external-interrupt"},
  {86, "I2SC1_IRQHandler", "I2SC1", "external-interrupt"},
  {87, "GMAC_Q3_IRQHandler", "GMAC_Q3", "external-interrupt"},
  {88, "GMAC_Q4_IRQHandler", "GMAC_Q4", "external-interrupt"},
  {89, "GMAC_Q5_IRQHandler", "GMAC_Q5", "external-interrupt"},
};

struct StartupDescriptor {
  const char* descriptor_id;
  const char* kind;
  const char* source_region;
  const char* target_region;
  const char* symbol;
};
inline constexpr StartupDescriptor kStartupDescriptors[] = {
  {"startup:copy-source:iflash", "copy-source-region", "iflash", nullptr, nullptr},
  {"startup:copy-source:irom", "copy-source-region", "irom", nullptr, nullptr},
  {"startup:copy-target:dtcm", "copy-target-region", nullptr, "dtcm", nullptr},
  {"startup:copy-target:iram", "copy-target-region", nullptr, "iram", nullptr},
  {"startup:copy-target:itcm", "copy-target-region", nullptr, "itcm", nullptr},
  {"startup:stack-top", "initial-stack-pointer", nullptr, nullptr, "__stack_top"},
  {"startup:vector-source:iflash", "vector-source-region", "iflash", nullptr, nullptr},
  {"startup:vector-source:irom", "vector-source-region", "irom", nullptr, nullptr},
  {"startup:vectors", "vector-table", nullptr, nullptr, "_vectors"},
  {"startup:zero-target:dtcm", "zero-target-region", nullptr, "dtcm", nullptr},
  {"startup:zero-target:iram", "zero-target-region", nullptr, "iram", nullptr},
  {"startup:zero-target:itcm", "zero-target-region", nullptr, "itcm", nullptr},
};
}
}
}
}
}
