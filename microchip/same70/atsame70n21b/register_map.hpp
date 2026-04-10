#pragma once

#include <cstdint>

namespace microchip {
namespace same70 {
namespace atsame70n21b {
inline constexpr const char* kDevice = "atsame70n21b";
struct PeripheralBase {
  const char* name;
  std::uintptr_t address;
};
inline constexpr PeripheralBase kPeripheralBases[] = {
  {"ACC", 0x40044000u},
  {"AES", 0x4006C000u},
  {"AFEC0", 0x4003C000u},
  {"AFEC1", 0x40064000u},
  {"CHIPID", 0x400E0940u},
  {"CoreDebug", 0xE000EDF0u},
  {"DACC", 0x40040000u},
  {"DWT", 0xE0001000u},
  {"EFC", 0x400E0C00u},
  {"ETM", 0xE0041000u},
  {"FPB", 0xE0002000u},
  {"FPU", 0xE000EF30u},
  {"GMAC", 0x40050000u},
  {"GPBR", 0x400E1890u},
  {"GPIOA", 0x400E0E00u},
  {"GPIOB", 0x400E1000u},
  {"GPIOD", 0x400E1400u},
  {"HSMCI", 0x40000000u},
  {"I2SC0", 0x4008C000u},
  {"ICM", 0x40048000u},
  {"ISI", 0x4004C000u},
  {"ITM", 0xE0000000u},
  {"LOCKBIT", 0x00000000u},
  {"MATRIX", 0x40088000u},
  {"MCAN0", 0x40030000u},
  {"MCAN1", 0x40034000u},
  {"MPU", 0xE000ED90u},
  {"NVIC", 0xE000E100u},
  {"PMC", 0x400E0600u},
  {"PWM0", 0x40020000u},
  {"PWM1", 0x4005C000u},
  {"QSPI", 0x4007C000u},
  {"RSTC", 0x400E1800u},
  {"RSWDT", 0x400E1900u},
  {"RTC", 0x400E1860u},
  {"RTT", 0x400E1830u},
  {"SCB", 0xE000ED00u},
  {"SCnSCB", 0xE000E000u},
  {"SPI0", 0x40008000u},
  {"SSC", 0x40004000u},
  {"SUPC", 0x400E1810u},
  {"SysTick", 0xE000E010u},
  {"TC0", 0x4000C000u},
  {"TC1", 0x40010000u},
  {"TC2", 0x40014000u},
  {"TC3", 0x40054000u},
  {"TPIU", 0xE0040000u},
  {"TRNG", 0x40070000u},
  {"TWIHS0", 0x40018000u},
  {"TWIHS1", 0x4001C000u},
  {"TWIHS2", 0x40060000u},
  {"UART0", 0x400E0800u},
  {"UART1", 0x400E0A00u},
  {"UART2", 0x400E1A00u},
  {"UART3", 0x400E1C00u},
  {"UART4", 0x400E1E00u},
  {"USART0", 0x40024000u},
  {"USART1", 0x40028000u},
  {"USART2", 0x4002C000u},
  {"USBHS", 0x40038000u},
  {"UTMI", 0x400E0400u},
  {"WDT", 0x400E1850u},
  {"XDMAC", 0x40078000u},
};
}
}
}
