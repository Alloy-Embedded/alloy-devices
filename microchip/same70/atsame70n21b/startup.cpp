// Generated startup metadata bootstrap unit.
#include <cstdint>

namespace microchip {
namespace same70 {
namespace atsame70n21b {
struct InterruptDescriptor {
  const char* name;
  int line;
  const char* peripheral;
};
inline constexpr InterruptDescriptor kInterruptTable[] = {
  {"SUPC", 0, "SUPC"},
  {"RSTC", 1, "RSTC"},
  {"RTC", 2, "RTC"},
  {"RTT", 3, "RTT"},
  {"WDT", 4, "WDT"},
  {"PMC", 5, "PMC"},
  {"EFC", 6, "EFC"},
  {"UART0", 7, "UART0"},
  {"UART1", 8, "UART1"},
  {"PIOA", 10, "GPIOA"},
  {"PIOB", 11, "GPIOB"},
  {"USART0", 13, "USART0"},
  {"USART1", 14, "USART1"},
  {"USART2", 15, "USART2"},
  {"PIOD", 16, "GPIOD"},
  {"HSMCI", 18, "HSMCI"},
  {"TWIHS0", 19, "TWIHS0"},
  {"TWIHS1", 20, "TWIHS1"},
  {"SPI0", 21, "SPI0"},
  {"SSC", 22, "SSC"},
  {"TC0", 23, "TC0"},
  {"TC1", 24, "TC0"},
  {"TC2", 25, "TC0"},
  {"TC3", 26, "TC1"},
  {"TC4", 27, "TC1"},
  {"TC5", 28, "TC1"},
  {"AFEC0", 29, "AFEC0"},
  {"DACC", 30, "DACC"},
  {"PWM0", 31, "PWM0"},
  {"ICM", 32, "ICM"},
  {"ACC", 33, "ACC"},
  {"USBHS", 34, "USBHS"},
  {"MCAN0_INT0", 35, "MCAN0"},
  {"MCAN0_INT1", 36, "MCAN0"},
  {"MCAN1_INT0", 37, "MCAN1"},
  {"MCAN1_INT1", 38, "MCAN1"},
  {"GMAC", 39, "GMAC"},
  {"AFEC1", 40, "AFEC1"},
  {"TWIHS2", 41, "TWIHS2"},
  {"QSPI", 43, "QSPI"},
  {"UART2", 44, "UART2"},
  {"UART3", 45, "UART3"},
  {"UART4", 46, "UART4"},
  {"TC6", 47, "TC2"},
  {"TC7", 48, "TC2"},
  {"TC8", 49, "TC2"},
  {"TC9", 50, "TC3"},
  {"TC10", 51, "TC3"},
  {"TC11", 52, "TC3"},
  {"AES", 56, "AES"},
  {"TRNG", 57, "TRNG"},
  {"XDMAC", 58, "XDMAC"},
  {"ISI", 59, "ISI"},
  {"PWM1", 60, "PWM1"},
  {"FPU", 61, "FPU"},
  {"RSWDT", 63, "RSWDT"},
  {"CCW", 64, "SCB"},
  {"CCF", 65, "SCB"},
  {"GMAC_Q1", 66, "GMAC"},
  {"GMAC_Q2", 67, "GMAC"},
  {"IXC", 68, "FPU"},
  {"I2SC0", 69, "I2SC0"},
  {"GMAC_Q3", 71, "GMAC"},
  {"GMAC_Q4", 72, "GMAC"},
  {"GMAC_Q5", 73, "GMAC"},
};
}
}
}
