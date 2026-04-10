#pragma once

namespace microchip {
namespace same70 {
namespace generated {
struct RccDescriptor {
  const char* peripheral;
  const char* enable_signal;
  const char* reset_signal;
};
inline constexpr RccDescriptor kRccMap[] = {
  {"ACC", "PMC.PID33", ""},
  {"AES", "PMC.PID56", ""},
  {"AFEC0", "PMC.PID29", ""},
  {"AFEC1", "PMC.PID40", ""},
  {"DACC", "PMC.PID30", ""},
  {"EFC", "PMC.PID6", ""},
  {"GMAC", "PMC.PID39", ""},
  {"GPIOA", "PMC.PID10", ""},
  {"GPIOB", "PMC.PID11", ""},
  {"GPIOC", "PMC.PID12", ""},
  {"GPIOD", "PMC.PID16", ""},
  {"GPIOE", "PMC.PID17", ""},
  {"HSMCI", "PMC.PID18", ""},
  {"I2SC0", "PMC.PID69", ""},
  {"I2SC1", "PMC.PID70", ""},
  {"ICM", "PMC.PID32", ""},
  {"ISI", "PMC.PID59", ""},
  {"MCAN0", "PMC.PID35", ""},
  {"MCAN1", "PMC.PID37", ""},
  {"PMC", "PMC.PID5", ""},
  {"PWM0", "PMC.PID31", ""},
  {"PWM1", "PMC.PID60", ""},
  {"QSPI", "PMC.PID43", ""},
  {"RSTC", "PMC.PID1", ""},
  {"RSWDT", "PMC.PID63", ""},
  {"RTC", "PMC.PID2", ""},
  {"RTT", "PMC.PID3", ""},
  {"SMC", "PMC.PID9", ""},
  {"SPI0", "PMC.PID21", ""},
  {"SPI1", "PMC.PID42", ""},
  {"SSC", "PMC.PID22", ""},
  {"SUPC", "PMC.PID0", ""},
  {"TC0", "PMC.PID23", ""},
  {"TC1", "PMC.PID26", ""},
  {"TC2", "PMC.PID47", ""},
  {"TC3", "PMC.PID50", ""},
  {"TRNG", "PMC.PID57", ""},
  {"TWIHS0", "PMC.PID19", ""},
  {"TWIHS1", "PMC.PID20", ""},
  {"TWIHS2", "PMC.PID41", ""},
  {"UART0", "PMC.PID7", ""},
  {"UART1", "PMC.PID8", ""},
  {"UART2", "PMC.PID44", ""},
  {"UART3", "PMC.PID45", ""},
  {"UART4", "PMC.PID46", ""},
  {"USART0", "PMC.PID13", ""},
  {"USART1", "PMC.PID14", ""},
  {"USART2", "PMC.PID15", ""},
  {"USBHS", "PMC.PID34", ""},
  {"WDT", "PMC.PID4", ""},
  {"XDMAC", "PMC.PID58", ""},
};
}
}
}
