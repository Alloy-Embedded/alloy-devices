#pragma once

#include <array>

namespace microchip {
namespace same70 {
namespace generated {
struct ClockNodeDescriptor {
  const char* device;
  const char* node_id;
  const char* kind;
  const char* parent;
  const char* selector;
};
inline constexpr std::array<ClockNodeDescriptor, 4> kClockNodes = {{
  {"atsame70n21b", "clock-node:pmc", "pmc-domain", "clock-root", nullptr},
  {"atsame70n21b", "clock-root", "root", nullptr, nullptr},
  {"atsame70q21b", "clock-node:pmc", "pmc-domain", "clock-root", nullptr},
  {"atsame70q21b", "clock-root", "root", nullptr, nullptr},
}};

struct ClockSelectorDescriptor {
  const char* device;
  const char* selector_id;
  const char* parent_options;
  const char* register_target;
};
inline constexpr std::array<ClockSelectorDescriptor, 0> kClockSelectors = {};

struct ClockGateDescriptor {
  const char* device;
  const char* gate_id;
  const char* peripheral;
  const char* enable_signal;
  const char* parent_node;
};
inline constexpr std::array<ClockGateDescriptor, 97> kClockGates = {{
  {"atsame70n21b", "gate:acc", "ACC", "PMC.PID33", "clock-node:pmc"},
  {"atsame70n21b", "gate:aes", "AES", "PMC.PID56", "clock-node:pmc"},
  {"atsame70n21b", "gate:afec0", "AFEC0", "PMC.PID29", "clock-node:pmc"},
  {"atsame70n21b", "gate:afec1", "AFEC1", "PMC.PID40", "clock-node:pmc"},
  {"atsame70n21b", "gate:dacc", "DACC", "PMC.PID30", "clock-node:pmc"},
  {"atsame70n21b", "gate:efc", "EFC", "PMC.PID6", "clock-node:pmc"},
  {"atsame70n21b", "gate:gmac", "GMAC", "PMC.PID39", "clock-node:pmc"},
  {"atsame70n21b", "gate:gpioa", "GPIOA", "PMC.PID10", "clock-node:pmc"},
  {"atsame70n21b", "gate:gpiob", "GPIOB", "PMC.PID11", "clock-node:pmc"},
  {"atsame70n21b", "gate:gpiod", "GPIOD", "PMC.PID16", "clock-node:pmc"},
  {"atsame70n21b", "gate:hsmci", "HSMCI", "PMC.PID18", "clock-node:pmc"},
  {"atsame70n21b", "gate:i2sc0", "I2SC0", "PMC.PID69", "clock-node:pmc"},
  {"atsame70n21b", "gate:icm", "ICM", "PMC.PID32", "clock-node:pmc"},
  {"atsame70n21b", "gate:isi", "ISI", "PMC.PID59", "clock-node:pmc"},
  {"atsame70n21b", "gate:mcan0", "MCAN0", "PMC.PID35", "clock-node:pmc"},
  {"atsame70n21b", "gate:mcan1", "MCAN1", "PMC.PID37", "clock-node:pmc"},
  {"atsame70n21b", "gate:pmc", "PMC", "PMC.PID5", "clock-node:pmc"},
  {"atsame70n21b", "gate:pwm0", "PWM0", "PMC.PID31", "clock-node:pmc"},
  {"atsame70n21b", "gate:pwm1", "PWM1", "PMC.PID60", "clock-node:pmc"},
  {"atsame70n21b", "gate:qspi", "QSPI", "PMC.PID43", "clock-node:pmc"},
  {"atsame70n21b", "gate:rstc", "RSTC", "PMC.PID1", "clock-node:pmc"},
  {"atsame70n21b", "gate:rswdt", "RSWDT", "PMC.PID63", "clock-node:pmc"},
  {"atsame70n21b", "gate:rtc", "RTC", "PMC.PID2", "clock-node:pmc"},
  {"atsame70n21b", "gate:rtt", "RTT", "PMC.PID3", "clock-node:pmc"},
  {"atsame70n21b", "gate:spi0", "SPI0", "PMC.PID21", "clock-node:pmc"},
  {"atsame70n21b", "gate:ssc", "SSC", "PMC.PID22", "clock-node:pmc"},
  {"atsame70n21b", "gate:supc", "SUPC", "PMC.PID0", "clock-node:pmc"},
  {"atsame70n21b", "gate:tc0", "TC0", "PMC.PID23", "clock-node:pmc"},
  {"atsame70n21b", "gate:tc1", "TC1", "PMC.PID26", "clock-node:pmc"},
  {"atsame70n21b", "gate:tc2", "TC2", "PMC.PID47", "clock-node:pmc"},
  {"atsame70n21b", "gate:tc3", "TC3", "PMC.PID50", "clock-node:pmc"},
  {"atsame70n21b", "gate:trng", "TRNG", "PMC.PID57", "clock-node:pmc"},
  {"atsame70n21b", "gate:twihs0", "TWIHS0", "PMC.PID19", "clock-node:pmc"},
  {"atsame70n21b", "gate:twihs1", "TWIHS1", "PMC.PID20", "clock-node:pmc"},
  {"atsame70n21b", "gate:twihs2", "TWIHS2", "PMC.PID41", "clock-node:pmc"},
  {"atsame70n21b", "gate:uart0", "UART0", "PMC.PID7", "clock-node:pmc"},
  {"atsame70n21b", "gate:uart1", "UART1", "PMC.PID8", "clock-node:pmc"},
  {"atsame70n21b", "gate:uart2", "UART2", "PMC.PID44", "clock-node:pmc"},
  {"atsame70n21b", "gate:uart3", "UART3", "PMC.PID45", "clock-node:pmc"},
  {"atsame70n21b", "gate:uart4", "UART4", "PMC.PID46", "clock-node:pmc"},
  {"atsame70n21b", "gate:usart0", "USART0", "PMC.PID13", "clock-node:pmc"},
  {"atsame70n21b", "gate:usart1", "USART1", "PMC.PID14", "clock-node:pmc"},
  {"atsame70n21b", "gate:usart2", "USART2", "PMC.PID15", "clock-node:pmc"},
  {"atsame70n21b", "gate:usbhs", "USBHS", "PMC.PID34", "clock-node:pmc"},
  {"atsame70n21b", "gate:wdt", "WDT", "PMC.PID4", "clock-node:pmc"},
  {"atsame70n21b", "gate:xdmac", "XDMAC", "PMC.PID58", "clock-node:pmc"},
  {"atsame70q21b", "gate:acc", "ACC", "PMC.PID33", "clock-node:pmc"},
  {"atsame70q21b", "gate:aes", "AES", "PMC.PID56", "clock-node:pmc"},
  {"atsame70q21b", "gate:afec0", "AFEC0", "PMC.PID29", "clock-node:pmc"},
  {"atsame70q21b", "gate:afec1", "AFEC1", "PMC.PID40", "clock-node:pmc"},
  {"atsame70q21b", "gate:dacc", "DACC", "PMC.PID30", "clock-node:pmc"},
  {"atsame70q21b", "gate:efc", "EFC", "PMC.PID6", "clock-node:pmc"},
  {"atsame70q21b", "gate:gmac", "GMAC", "PMC.PID39", "clock-node:pmc"},
  {"atsame70q21b", "gate:gpioa", "GPIOA", "PMC.PID10", "clock-node:pmc"},
  {"atsame70q21b", "gate:gpiob", "GPIOB", "PMC.PID11", "clock-node:pmc"},
  {"atsame70q21b", "gate:gpioc", "GPIOC", "PMC.PID12", "clock-node:pmc"},
  {"atsame70q21b", "gate:gpiod", "GPIOD", "PMC.PID16", "clock-node:pmc"},
  {"atsame70q21b", "gate:gpioe", "GPIOE", "PMC.PID17", "clock-node:pmc"},
  {"atsame70q21b", "gate:hsmci", "HSMCI", "PMC.PID18", "clock-node:pmc"},
  {"atsame70q21b", "gate:i2sc0", "I2SC0", "PMC.PID69", "clock-node:pmc"},
  {"atsame70q21b", "gate:i2sc1", "I2SC1", "PMC.PID70", "clock-node:pmc"},
  {"atsame70q21b", "gate:icm", "ICM", "PMC.PID32", "clock-node:pmc"},
  {"atsame70q21b", "gate:isi", "ISI", "PMC.PID59", "clock-node:pmc"},
  {"atsame70q21b", "gate:mcan0", "MCAN0", "PMC.PID35", "clock-node:pmc"},
  {"atsame70q21b", "gate:mcan1", "MCAN1", "PMC.PID37", "clock-node:pmc"},
  {"atsame70q21b", "gate:pmc", "PMC", "PMC.PID5", "clock-node:pmc"},
  {"atsame70q21b", "gate:pwm0", "PWM0", "PMC.PID31", "clock-node:pmc"},
  {"atsame70q21b", "gate:pwm1", "PWM1", "PMC.PID60", "clock-node:pmc"},
  {"atsame70q21b", "gate:qspi", "QSPI", "PMC.PID43", "clock-node:pmc"},
  {"atsame70q21b", "gate:rstc", "RSTC", "PMC.PID1", "clock-node:pmc"},
  {"atsame70q21b", "gate:rswdt", "RSWDT", "PMC.PID63", "clock-node:pmc"},
  {"atsame70q21b", "gate:rtc", "RTC", "PMC.PID2", "clock-node:pmc"},
  {"atsame70q21b", "gate:rtt", "RTT", "PMC.PID3", "clock-node:pmc"},
  {"atsame70q21b", "gate:smc", "SMC", "PMC.PID9", "clock-node:pmc"},
  {"atsame70q21b", "gate:spi0", "SPI0", "PMC.PID21", "clock-node:pmc"},
  {"atsame70q21b", "gate:spi1", "SPI1", "PMC.PID42", "clock-node:pmc"},
  {"atsame70q21b", "gate:ssc", "SSC", "PMC.PID22", "clock-node:pmc"},
  {"atsame70q21b", "gate:supc", "SUPC", "PMC.PID0", "clock-node:pmc"},
  {"atsame70q21b", "gate:tc0", "TC0", "PMC.PID23", "clock-node:pmc"},
  {"atsame70q21b", "gate:tc1", "TC1", "PMC.PID26", "clock-node:pmc"},
  {"atsame70q21b", "gate:tc2", "TC2", "PMC.PID47", "clock-node:pmc"},
  {"atsame70q21b", "gate:tc3", "TC3", "PMC.PID50", "clock-node:pmc"},
  {"atsame70q21b", "gate:trng", "TRNG", "PMC.PID57", "clock-node:pmc"},
  {"atsame70q21b", "gate:twihs0", "TWIHS0", "PMC.PID19", "clock-node:pmc"},
  {"atsame70q21b", "gate:twihs1", "TWIHS1", "PMC.PID20", "clock-node:pmc"},
  {"atsame70q21b", "gate:twihs2", "TWIHS2", "PMC.PID41", "clock-node:pmc"},
  {"atsame70q21b", "gate:uart0", "UART0", "PMC.PID7", "clock-node:pmc"},
  {"atsame70q21b", "gate:uart1", "UART1", "PMC.PID8", "clock-node:pmc"},
  {"atsame70q21b", "gate:uart2", "UART2", "PMC.PID44", "clock-node:pmc"},
  {"atsame70q21b", "gate:uart3", "UART3", "PMC.PID45", "clock-node:pmc"},
  {"atsame70q21b", "gate:uart4", "UART4", "PMC.PID46", "clock-node:pmc"},
  {"atsame70q21b", "gate:usart0", "USART0", "PMC.PID13", "clock-node:pmc"},
  {"atsame70q21b", "gate:usart1", "USART1", "PMC.PID14", "clock-node:pmc"},
  {"atsame70q21b", "gate:usart2", "USART2", "PMC.PID15", "clock-node:pmc"},
  {"atsame70q21b", "gate:usbhs", "USBHS", "PMC.PID34", "clock-node:pmc"},
  {"atsame70q21b", "gate:wdt", "WDT", "PMC.PID4", "clock-node:pmc"},
  {"atsame70q21b", "gate:xdmac", "XDMAC", "PMC.PID58", "clock-node:pmc"},
}};

struct ResetDescriptor {
  const char* device;
  const char* reset_id;
  const char* peripheral;
  const char* reset_signal;
  const char* active_level;
};
inline constexpr std::array<ResetDescriptor, 0> kResets = {};

struct PeripheralClockBindingDescriptor {
  const char* device;
  const char* peripheral;
  const char* clock_gate_id;
  const char* reset_id;
  const char* selector_id;
};
inline constexpr std::array<PeripheralClockBindingDescriptor, 97> kPeripheralClockBindings = {{
  {"atsame70n21b", "ACC", "gate:acc", nullptr, nullptr},
  {"atsame70n21b", "AES", "gate:aes", nullptr, nullptr},
  {"atsame70n21b", "AFEC0", "gate:afec0", nullptr, nullptr},
  {"atsame70n21b", "AFEC1", "gate:afec1", nullptr, nullptr},
  {"atsame70n21b", "DACC", "gate:dacc", nullptr, nullptr},
  {"atsame70n21b", "EFC", "gate:efc", nullptr, nullptr},
  {"atsame70n21b", "GMAC", "gate:gmac", nullptr, nullptr},
  {"atsame70n21b", "GPIOA", "gate:gpioa", nullptr, nullptr},
  {"atsame70n21b", "GPIOB", "gate:gpiob", nullptr, nullptr},
  {"atsame70n21b", "GPIOD", "gate:gpiod", nullptr, nullptr},
  {"atsame70n21b", "HSMCI", "gate:hsmci", nullptr, nullptr},
  {"atsame70n21b", "I2SC0", "gate:i2sc0", nullptr, nullptr},
  {"atsame70n21b", "ICM", "gate:icm", nullptr, nullptr},
  {"atsame70n21b", "ISI", "gate:isi", nullptr, nullptr},
  {"atsame70n21b", "MCAN0", "gate:mcan0", nullptr, nullptr},
  {"atsame70n21b", "MCAN1", "gate:mcan1", nullptr, nullptr},
  {"atsame70n21b", "PMC", "gate:pmc", nullptr, nullptr},
  {"atsame70n21b", "PWM0", "gate:pwm0", nullptr, nullptr},
  {"atsame70n21b", "PWM1", "gate:pwm1", nullptr, nullptr},
  {"atsame70n21b", "QSPI", "gate:qspi", nullptr, nullptr},
  {"atsame70n21b", "RSTC", "gate:rstc", nullptr, nullptr},
  {"atsame70n21b", "RSWDT", "gate:rswdt", nullptr, nullptr},
  {"atsame70n21b", "RTC", "gate:rtc", nullptr, nullptr},
  {"atsame70n21b", "RTT", "gate:rtt", nullptr, nullptr},
  {"atsame70n21b", "SPI0", "gate:spi0", nullptr, nullptr},
  {"atsame70n21b", "SSC", "gate:ssc", nullptr, nullptr},
  {"atsame70n21b", "SUPC", "gate:supc", nullptr, nullptr},
  {"atsame70n21b", "TC0", "gate:tc0", nullptr, nullptr},
  {"atsame70n21b", "TC1", "gate:tc1", nullptr, nullptr},
  {"atsame70n21b", "TC2", "gate:tc2", nullptr, nullptr},
  {"atsame70n21b", "TC3", "gate:tc3", nullptr, nullptr},
  {"atsame70n21b", "TRNG", "gate:trng", nullptr, nullptr},
  {"atsame70n21b", "TWIHS0", "gate:twihs0", nullptr, nullptr},
  {"atsame70n21b", "TWIHS1", "gate:twihs1", nullptr, nullptr},
  {"atsame70n21b", "TWIHS2", "gate:twihs2", nullptr, nullptr},
  {"atsame70n21b", "UART0", "gate:uart0", nullptr, nullptr},
  {"atsame70n21b", "UART1", "gate:uart1", nullptr, nullptr},
  {"atsame70n21b", "UART2", "gate:uart2", nullptr, nullptr},
  {"atsame70n21b", "UART3", "gate:uart3", nullptr, nullptr},
  {"atsame70n21b", "UART4", "gate:uart4", nullptr, nullptr},
  {"atsame70n21b", "USART0", "gate:usart0", nullptr, nullptr},
  {"atsame70n21b", "USART1", "gate:usart1", nullptr, nullptr},
  {"atsame70n21b", "USART2", "gate:usart2", nullptr, nullptr},
  {"atsame70n21b", "USBHS", "gate:usbhs", nullptr, nullptr},
  {"atsame70n21b", "WDT", "gate:wdt", nullptr, nullptr},
  {"atsame70n21b", "XDMAC", "gate:xdmac", nullptr, nullptr},
  {"atsame70q21b", "ACC", "gate:acc", nullptr, nullptr},
  {"atsame70q21b", "AES", "gate:aes", nullptr, nullptr},
  {"atsame70q21b", "AFEC0", "gate:afec0", nullptr, nullptr},
  {"atsame70q21b", "AFEC1", "gate:afec1", nullptr, nullptr},
  {"atsame70q21b", "DACC", "gate:dacc", nullptr, nullptr},
  {"atsame70q21b", "EFC", "gate:efc", nullptr, nullptr},
  {"atsame70q21b", "GMAC", "gate:gmac", nullptr, nullptr},
  {"atsame70q21b", "GPIOA", "gate:gpioa", nullptr, nullptr},
  {"atsame70q21b", "GPIOB", "gate:gpiob", nullptr, nullptr},
  {"atsame70q21b", "GPIOC", "gate:gpioc", nullptr, nullptr},
  {"atsame70q21b", "GPIOD", "gate:gpiod", nullptr, nullptr},
  {"atsame70q21b", "GPIOE", "gate:gpioe", nullptr, nullptr},
  {"atsame70q21b", "HSMCI", "gate:hsmci", nullptr, nullptr},
  {"atsame70q21b", "I2SC0", "gate:i2sc0", nullptr, nullptr},
  {"atsame70q21b", "I2SC1", "gate:i2sc1", nullptr, nullptr},
  {"atsame70q21b", "ICM", "gate:icm", nullptr, nullptr},
  {"atsame70q21b", "ISI", "gate:isi", nullptr, nullptr},
  {"atsame70q21b", "MCAN0", "gate:mcan0", nullptr, nullptr},
  {"atsame70q21b", "MCAN1", "gate:mcan1", nullptr, nullptr},
  {"atsame70q21b", "PMC", "gate:pmc", nullptr, nullptr},
  {"atsame70q21b", "PWM0", "gate:pwm0", nullptr, nullptr},
  {"atsame70q21b", "PWM1", "gate:pwm1", nullptr, nullptr},
  {"atsame70q21b", "QSPI", "gate:qspi", nullptr, nullptr},
  {"atsame70q21b", "RSTC", "gate:rstc", nullptr, nullptr},
  {"atsame70q21b", "RSWDT", "gate:rswdt", nullptr, nullptr},
  {"atsame70q21b", "RTC", "gate:rtc", nullptr, nullptr},
  {"atsame70q21b", "RTT", "gate:rtt", nullptr, nullptr},
  {"atsame70q21b", "SMC", "gate:smc", nullptr, nullptr},
  {"atsame70q21b", "SPI0", "gate:spi0", nullptr, nullptr},
  {"atsame70q21b", "SPI1", "gate:spi1", nullptr, nullptr},
  {"atsame70q21b", "SSC", "gate:ssc", nullptr, nullptr},
  {"atsame70q21b", "SUPC", "gate:supc", nullptr, nullptr},
  {"atsame70q21b", "TC0", "gate:tc0", nullptr, nullptr},
  {"atsame70q21b", "TC1", "gate:tc1", nullptr, nullptr},
  {"atsame70q21b", "TC2", "gate:tc2", nullptr, nullptr},
  {"atsame70q21b", "TC3", "gate:tc3", nullptr, nullptr},
  {"atsame70q21b", "TRNG", "gate:trng", nullptr, nullptr},
  {"atsame70q21b", "TWIHS0", "gate:twihs0", nullptr, nullptr},
  {"atsame70q21b", "TWIHS1", "gate:twihs1", nullptr, nullptr},
  {"atsame70q21b", "TWIHS2", "gate:twihs2", nullptr, nullptr},
  {"atsame70q21b", "UART0", "gate:uart0", nullptr, nullptr},
  {"atsame70q21b", "UART1", "gate:uart1", nullptr, nullptr},
  {"atsame70q21b", "UART2", "gate:uart2", nullptr, nullptr},
  {"atsame70q21b", "UART3", "gate:uart3", nullptr, nullptr},
  {"atsame70q21b", "UART4", "gate:uart4", nullptr, nullptr},
  {"atsame70q21b", "USART0", "gate:usart0", nullptr, nullptr},
  {"atsame70q21b", "USART1", "gate:usart1", nullptr, nullptr},
  {"atsame70q21b", "USART2", "gate:usart2", nullptr, nullptr},
  {"atsame70q21b", "USBHS", "gate:usbhs", nullptr, nullptr},
  {"atsame70q21b", "WDT", "gate:wdt", nullptr, nullptr},
  {"atsame70q21b", "XDMAC", "gate:xdmac", nullptr, nullptr},
}};
}
}
}
