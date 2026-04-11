#pragma once

#include <array>

namespace microchip {
namespace same70 {
namespace generated {
enum class ClockNodeId : std::uint16_t {
  atsame70n21b_clock_node_pmc,
  atsame70n21b_clock_root,
  atsame70q21b_clock_node_pmc,
  atsame70q21b_clock_root,
};

enum class ClockSelectorId : std::uint16_t {
  none,
};

enum class ClockGateId : std::uint16_t {
  atsame70n21b_gate_acc,
  atsame70n21b_gate_aes,
  atsame70n21b_gate_afec0,
  atsame70n21b_gate_afec1,
  atsame70n21b_gate_dacc,
  atsame70n21b_gate_efc,
  atsame70n21b_gate_gmac,
  atsame70n21b_gate_gpioa,
  atsame70n21b_gate_gpiob,
  atsame70n21b_gate_gpiod,
  atsame70n21b_gate_hsmci,
  atsame70n21b_gate_i2sc0,
  atsame70n21b_gate_icm,
  atsame70n21b_gate_isi,
  atsame70n21b_gate_mcan0,
  atsame70n21b_gate_mcan1,
  atsame70n21b_gate_pmc,
  atsame70n21b_gate_pwm0,
  atsame70n21b_gate_pwm1,
  atsame70n21b_gate_qspi,
  atsame70n21b_gate_rstc,
  atsame70n21b_gate_rswdt,
  atsame70n21b_gate_rtc,
  atsame70n21b_gate_rtt,
  atsame70n21b_gate_spi0,
  atsame70n21b_gate_ssc,
  atsame70n21b_gate_supc,
  atsame70n21b_gate_tc0,
  atsame70n21b_gate_tc1,
  atsame70n21b_gate_tc2,
  atsame70n21b_gate_tc3,
  atsame70n21b_gate_trng,
  atsame70n21b_gate_twihs0,
  atsame70n21b_gate_twihs1,
  atsame70n21b_gate_twihs2,
  atsame70n21b_gate_uart0,
  atsame70n21b_gate_uart1,
  atsame70n21b_gate_uart2,
  atsame70n21b_gate_uart3,
  atsame70n21b_gate_uart4,
  atsame70n21b_gate_usart0,
  atsame70n21b_gate_usart1,
  atsame70n21b_gate_usart2,
  atsame70n21b_gate_usbhs,
  atsame70n21b_gate_wdt,
  atsame70n21b_gate_xdmac,
  atsame70q21b_gate_acc,
  atsame70q21b_gate_aes,
  atsame70q21b_gate_afec0,
  atsame70q21b_gate_afec1,
  atsame70q21b_gate_dacc,
  atsame70q21b_gate_efc,
  atsame70q21b_gate_gmac,
  atsame70q21b_gate_gpioa,
  atsame70q21b_gate_gpiob,
  atsame70q21b_gate_gpioc,
  atsame70q21b_gate_gpiod,
  atsame70q21b_gate_gpioe,
  atsame70q21b_gate_hsmci,
  atsame70q21b_gate_i2sc0,
  atsame70q21b_gate_i2sc1,
  atsame70q21b_gate_icm,
  atsame70q21b_gate_isi,
  atsame70q21b_gate_mcan0,
  atsame70q21b_gate_mcan1,
  atsame70q21b_gate_pmc,
  atsame70q21b_gate_pwm0,
  atsame70q21b_gate_pwm1,
  atsame70q21b_gate_qspi,
  atsame70q21b_gate_rstc,
  atsame70q21b_gate_rswdt,
  atsame70q21b_gate_rtc,
  atsame70q21b_gate_rtt,
  atsame70q21b_gate_smc,
  atsame70q21b_gate_spi0,
  atsame70q21b_gate_spi1,
  atsame70q21b_gate_ssc,
  atsame70q21b_gate_supc,
  atsame70q21b_gate_tc0,
  atsame70q21b_gate_tc1,
  atsame70q21b_gate_tc2,
  atsame70q21b_gate_tc3,
  atsame70q21b_gate_trng,
  atsame70q21b_gate_twihs0,
  atsame70q21b_gate_twihs1,
  atsame70q21b_gate_twihs2,
  atsame70q21b_gate_uart0,
  atsame70q21b_gate_uart1,
  atsame70q21b_gate_uart2,
  atsame70q21b_gate_uart3,
  atsame70q21b_gate_uart4,
  atsame70q21b_gate_usart0,
  atsame70q21b_gate_usart1,
  atsame70q21b_gate_usart2,
  atsame70q21b_gate_usbhs,
  atsame70q21b_gate_wdt,
  atsame70q21b_gate_xdmac,
};

enum class ResetId : std::uint16_t {
  none,
};

struct ClockNodeDescriptor {
  const char* device;
  ClockNodeId node_id;
  const char* node_name;
  const char* kind;
  int parent_index;
  int selector_index;
};
inline constexpr std::array<ClockNodeDescriptor, 4> kClockNodes = {{
  {"atsame70n21b", ClockNodeId::atsame70n21b_clock_node_pmc, "clock-node:pmc", "pmc-domain", 1, -1},
  {"atsame70n21b", ClockNodeId::atsame70n21b_clock_root, "clock-root", "root", -1, -1},
  {"atsame70q21b", ClockNodeId::atsame70q21b_clock_node_pmc, "clock-node:pmc", "pmc-domain", 3, -1},
  {"atsame70q21b", ClockNodeId::atsame70q21b_clock_root, "clock-root", "root", -1, -1},
}};

struct ClockSelectorDescriptor {
  const char* device;
  ClockSelectorId selector_id;
  const char* selector_name;
  std::uint16_t parent_option_offset;
  std::uint16_t parent_option_count;
  const char* register_target;
  const char* register_peripheral;
  const char* register_name;
  int register_offset;
  const char* register_id;
  const char* register_field_id;
};
inline constexpr std::array<ClockSelectorDescriptor, 0> kClockSelectors = {};

struct ClockSelectorParentOption {
  ClockSelectorId selector_id;
  ClockNodeId parent_node_id;
};
inline constexpr std::array<ClockSelectorParentOption, 0> kClockSelectorParentOptions = {};

struct ClockGateDescriptor {
  const char* device;
  ClockGateId gate_id;
  const char* gate_name;
  const char* peripheral;
  int parent_node_index;
  const char* enable_signal;
  const char* register_peripheral;
  const char* register_name;
  int register_offset;
  const char* register_id;
  const char* register_field_id;
};
inline constexpr std::array<ClockGateDescriptor, 97> kClockGates = {{
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_acc, "gate:acc", "ACC", 0, "PMC.PID33", "PMC", "PID33", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_aes, "gate:aes", "AES", 0, "PMC.PID56", "PMC", "PID56", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_afec0, "gate:afec0", "AFEC0", 0, "PMC.PID29", "PMC", "PID29", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_afec1, "gate:afec1", "AFEC1", 0, "PMC.PID40", "PMC", "PID40", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_dacc, "gate:dacc", "DACC", 0, "PMC.PID30", "PMC", "PID30", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_efc, "gate:efc", "EFC", 0, "PMC.PID6", "PMC", "PID6", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_gmac, "gate:gmac", "GMAC", 0, "PMC.PID39", "PMC", "PID39", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_gpioa, "gate:gpioa", "GPIOA", 0, "PMC.PID10", "PMC", "PID10", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_gpiob, "gate:gpiob", "GPIOB", 0, "PMC.PID11", "PMC", "PID11", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_gpiod, "gate:gpiod", "GPIOD", 0, "PMC.PID16", "PMC", "PID16", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_hsmci, "gate:hsmci", "HSMCI", 0, "PMC.PID18", "PMC", "PID18", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_i2sc0, "gate:i2sc0", "I2SC0", 0, "PMC.PID69", "PMC", "PID69", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_icm, "gate:icm", "ICM", 0, "PMC.PID32", "PMC", "PID32", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_isi, "gate:isi", "ISI", 0, "PMC.PID59", "PMC", "PID59", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_mcan0, "gate:mcan0", "MCAN0", 0, "PMC.PID35", "PMC", "PID35", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_mcan1, "gate:mcan1", "MCAN1", 0, "PMC.PID37", "PMC", "PID37", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_pmc, "gate:pmc", "PMC", 0, "PMC.PID5", "PMC", "PID5", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_pwm0, "gate:pwm0", "PWM0", 0, "PMC.PID31", "PMC", "PID31", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_pwm1, "gate:pwm1", "PWM1", 0, "PMC.PID60", "PMC", "PID60", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_qspi, "gate:qspi", "QSPI", 0, "PMC.PID43", "PMC", "PID43", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_rstc, "gate:rstc", "RSTC", 0, "PMC.PID1", "PMC", "PID1", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_rswdt, "gate:rswdt", "RSWDT", 0, "PMC.PID63", "PMC", "PID63", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_rtc, "gate:rtc", "RTC", 0, "PMC.PID2", "PMC", "PID2", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_rtt, "gate:rtt", "RTT", 0, "PMC.PID3", "PMC", "PID3", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_spi0, "gate:spi0", "SPI0", 0, "PMC.PID21", "PMC", "PID21", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_ssc, "gate:ssc", "SSC", 0, "PMC.PID22", "PMC", "PID22", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_supc, "gate:supc", "SUPC", 0, "PMC.PID0", "PMC", "PID0", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_tc0, "gate:tc0", "TC0", 0, "PMC.PID23", "PMC", "PID23", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_tc1, "gate:tc1", "TC1", 0, "PMC.PID26", "PMC", "PID26", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_tc2, "gate:tc2", "TC2", 0, "PMC.PID47", "PMC", "PID47", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_tc3, "gate:tc3", "TC3", 0, "PMC.PID50", "PMC", "PID50", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_trng, "gate:trng", "TRNG", 0, "PMC.PID57", "PMC", "PID57", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_twihs0, "gate:twihs0", "TWIHS0", 0, "PMC.PID19", "PMC", "PID19", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_twihs1, "gate:twihs1", "TWIHS1", 0, "PMC.PID20", "PMC", "PID20", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_twihs2, "gate:twihs2", "TWIHS2", 0, "PMC.PID41", "PMC", "PID41", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart0, "gate:uart0", "UART0", 0, "PMC.PID7", "PMC", "PID7", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart1, "gate:uart1", "UART1", 0, "PMC.PID8", "PMC", "PID8", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart2, "gate:uart2", "UART2", 0, "PMC.PID44", "PMC", "PID44", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart3, "gate:uart3", "UART3", 0, "PMC.PID45", "PMC", "PID45", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart4, "gate:uart4", "UART4", 0, "PMC.PID46", "PMC", "PID46", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_usart0, "gate:usart0", "USART0", 0, "PMC.PID13", "PMC", "PID13", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_usart1, "gate:usart1", "USART1", 0, "PMC.PID14", "PMC", "PID14", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_usart2, "gate:usart2", "USART2", 0, "PMC.PID15", "PMC", "PID15", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_usbhs, "gate:usbhs", "USBHS", 0, "PMC.PID34", "PMC", "PID34", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_wdt, "gate:wdt", "WDT", 0, "PMC.PID4", "PMC", "PID4", -1, nullptr, nullptr},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_xdmac, "gate:xdmac", "XDMAC", 0, "PMC.PID58", "PMC", "PID58", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_acc, "gate:acc", "ACC", 2, "PMC.PID33", "PMC", "PID33", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_aes, "gate:aes", "AES", 2, "PMC.PID56", "PMC", "PID56", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_afec0, "gate:afec0", "AFEC0", 2, "PMC.PID29", "PMC", "PID29", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_afec1, "gate:afec1", "AFEC1", 2, "PMC.PID40", "PMC", "PID40", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_dacc, "gate:dacc", "DACC", 2, "PMC.PID30", "PMC", "PID30", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_efc, "gate:efc", "EFC", 2, "PMC.PID6", "PMC", "PID6", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gmac, "gate:gmac", "GMAC", 2, "PMC.PID39", "PMC", "PID39", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpioa, "gate:gpioa", "GPIOA", 2, "PMC.PID10", "PMC", "PID10", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpiob, "gate:gpiob", "GPIOB", 2, "PMC.PID11", "PMC", "PID11", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpioc, "gate:gpioc", "GPIOC", 2, "PMC.PID12", "PMC", "PID12", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpiod, "gate:gpiod", "GPIOD", 2, "PMC.PID16", "PMC", "PID16", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpioe, "gate:gpioe", "GPIOE", 2, "PMC.PID17", "PMC", "PID17", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_hsmci, "gate:hsmci", "HSMCI", 2, "PMC.PID18", "PMC", "PID18", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_i2sc0, "gate:i2sc0", "I2SC0", 2, "PMC.PID69", "PMC", "PID69", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_i2sc1, "gate:i2sc1", "I2SC1", 2, "PMC.PID70", "PMC", "PID70", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_icm, "gate:icm", "ICM", 2, "PMC.PID32", "PMC", "PID32", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_isi, "gate:isi", "ISI", 2, "PMC.PID59", "PMC", "PID59", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_mcan0, "gate:mcan0", "MCAN0", 2, "PMC.PID35", "PMC", "PID35", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_mcan1, "gate:mcan1", "MCAN1", 2, "PMC.PID37", "PMC", "PID37", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_pmc, "gate:pmc", "PMC", 2, "PMC.PID5", "PMC", "PID5", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_pwm0, "gate:pwm0", "PWM0", 2, "PMC.PID31", "PMC", "PID31", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_pwm1, "gate:pwm1", "PWM1", 2, "PMC.PID60", "PMC", "PID60", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_qspi, "gate:qspi", "QSPI", 2, "PMC.PID43", "PMC", "PID43", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_rstc, "gate:rstc", "RSTC", 2, "PMC.PID1", "PMC", "PID1", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_rswdt, "gate:rswdt", "RSWDT", 2, "PMC.PID63", "PMC", "PID63", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_rtc, "gate:rtc", "RTC", 2, "PMC.PID2", "PMC", "PID2", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_rtt, "gate:rtt", "RTT", 2, "PMC.PID3", "PMC", "PID3", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_smc, "gate:smc", "SMC", 2, "PMC.PID9", "PMC", "PID9", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_spi0, "gate:spi0", "SPI0", 2, "PMC.PID21", "PMC", "PID21", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_spi1, "gate:spi1", "SPI1", 2, "PMC.PID42", "PMC", "PID42", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_ssc, "gate:ssc", "SSC", 2, "PMC.PID22", "PMC", "PID22", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_supc, "gate:supc", "SUPC", 2, "PMC.PID0", "PMC", "PID0", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_tc0, "gate:tc0", "TC0", 2, "PMC.PID23", "PMC", "PID23", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_tc1, "gate:tc1", "TC1", 2, "PMC.PID26", "PMC", "PID26", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_tc2, "gate:tc2", "TC2", 2, "PMC.PID47", "PMC", "PID47", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_tc3, "gate:tc3", "TC3", 2, "PMC.PID50", "PMC", "PID50", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_trng, "gate:trng", "TRNG", 2, "PMC.PID57", "PMC", "PID57", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_twihs0, "gate:twihs0", "TWIHS0", 2, "PMC.PID19", "PMC", "PID19", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_twihs1, "gate:twihs1", "TWIHS1", 2, "PMC.PID20", "PMC", "PID20", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_twihs2, "gate:twihs2", "TWIHS2", 2, "PMC.PID41", "PMC", "PID41", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart0, "gate:uart0", "UART0", 2, "PMC.PID7", "PMC", "PID7", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart1, "gate:uart1", "UART1", 2, "PMC.PID8", "PMC", "PID8", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart2, "gate:uart2", "UART2", 2, "PMC.PID44", "PMC", "PID44", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart3, "gate:uart3", "UART3", 2, "PMC.PID45", "PMC", "PID45", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart4, "gate:uart4", "UART4", 2, "PMC.PID46", "PMC", "PID46", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_usart0, "gate:usart0", "USART0", 2, "PMC.PID13", "PMC", "PID13", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_usart1, "gate:usart1", "USART1", 2, "PMC.PID14", "PMC", "PID14", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_usart2, "gate:usart2", "USART2", 2, "PMC.PID15", "PMC", "PID15", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_usbhs, "gate:usbhs", "USBHS", 2, "PMC.PID34", "PMC", "PID34", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_wdt, "gate:wdt", "WDT", 2, "PMC.PID4", "PMC", "PID4", -1, nullptr, nullptr},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_xdmac, "gate:xdmac", "XDMAC", 2, "PMC.PID58", "PMC", "PID58", -1, nullptr, nullptr},
}};

struct ResetDescriptor {
  const char* device;
  ResetId reset_id;
  const char* reset_name;
  const char* peripheral;
  const char* reset_signal;
  const char* active_level;
  const char* register_peripheral;
  const char* register_name;
  int register_offset;
  const char* register_id;
  const char* register_field_id;
};
inline constexpr std::array<ResetDescriptor, 0> kResets = {};

struct PeripheralClockBindingDescriptor {
  const char* device;
  const char* peripheral;
  int clock_gate_index;
  int reset_index;
  int selector_index;
};
inline constexpr std::array<PeripheralClockBindingDescriptor, 97> kPeripheralClockBindings = {{
  {"atsame70n21b", "ACC", 0, -1, -1},
  {"atsame70n21b", "AES", 1, -1, -1},
  {"atsame70n21b", "AFEC0", 2, -1, -1},
  {"atsame70n21b", "AFEC1", 3, -1, -1},
  {"atsame70n21b", "DACC", 4, -1, -1},
  {"atsame70n21b", "EFC", 5, -1, -1},
  {"atsame70n21b", "GMAC", 6, -1, -1},
  {"atsame70n21b", "GPIOA", 7, -1, -1},
  {"atsame70n21b", "GPIOB", 8, -1, -1},
  {"atsame70n21b", "GPIOD", 9, -1, -1},
  {"atsame70n21b", "HSMCI", 10, -1, -1},
  {"atsame70n21b", "I2SC0", 11, -1, -1},
  {"atsame70n21b", "ICM", 12, -1, -1},
  {"atsame70n21b", "ISI", 13, -1, -1},
  {"atsame70n21b", "MCAN0", 14, -1, -1},
  {"atsame70n21b", "MCAN1", 15, -1, -1},
  {"atsame70n21b", "PMC", 16, -1, -1},
  {"atsame70n21b", "PWM0", 17, -1, -1},
  {"atsame70n21b", "PWM1", 18, -1, -1},
  {"atsame70n21b", "QSPI", 19, -1, -1},
  {"atsame70n21b", "RSTC", 20, -1, -1},
  {"atsame70n21b", "RSWDT", 21, -1, -1},
  {"atsame70n21b", "RTC", 22, -1, -1},
  {"atsame70n21b", "RTT", 23, -1, -1},
  {"atsame70n21b", "SPI0", 24, -1, -1},
  {"atsame70n21b", "SSC", 25, -1, -1},
  {"atsame70n21b", "SUPC", 26, -1, -1},
  {"atsame70n21b", "TC0", 27, -1, -1},
  {"atsame70n21b", "TC1", 28, -1, -1},
  {"atsame70n21b", "TC2", 29, -1, -1},
  {"atsame70n21b", "TC3", 30, -1, -1},
  {"atsame70n21b", "TRNG", 31, -1, -1},
  {"atsame70n21b", "TWIHS0", 32, -1, -1},
  {"atsame70n21b", "TWIHS1", 33, -1, -1},
  {"atsame70n21b", "TWIHS2", 34, -1, -1},
  {"atsame70n21b", "UART0", 35, -1, -1},
  {"atsame70n21b", "UART1", 36, -1, -1},
  {"atsame70n21b", "UART2", 37, -1, -1},
  {"atsame70n21b", "UART3", 38, -1, -1},
  {"atsame70n21b", "UART4", 39, -1, -1},
  {"atsame70n21b", "USART0", 40, -1, -1},
  {"atsame70n21b", "USART1", 41, -1, -1},
  {"atsame70n21b", "USART2", 42, -1, -1},
  {"atsame70n21b", "USBHS", 43, -1, -1},
  {"atsame70n21b", "WDT", 44, -1, -1},
  {"atsame70n21b", "XDMAC", 45, -1, -1},
  {"atsame70q21b", "ACC", 46, -1, -1},
  {"atsame70q21b", "AES", 47, -1, -1},
  {"atsame70q21b", "AFEC0", 48, -1, -1},
  {"atsame70q21b", "AFEC1", 49, -1, -1},
  {"atsame70q21b", "DACC", 50, -1, -1},
  {"atsame70q21b", "EFC", 51, -1, -1},
  {"atsame70q21b", "GMAC", 52, -1, -1},
  {"atsame70q21b", "GPIOA", 53, -1, -1},
  {"atsame70q21b", "GPIOB", 54, -1, -1},
  {"atsame70q21b", "GPIOC", 55, -1, -1},
  {"atsame70q21b", "GPIOD", 56, -1, -1},
  {"atsame70q21b", "GPIOE", 57, -1, -1},
  {"atsame70q21b", "HSMCI", 58, -1, -1},
  {"atsame70q21b", "I2SC0", 59, -1, -1},
  {"atsame70q21b", "I2SC1", 60, -1, -1},
  {"atsame70q21b", "ICM", 61, -1, -1},
  {"atsame70q21b", "ISI", 62, -1, -1},
  {"atsame70q21b", "MCAN0", 63, -1, -1},
  {"atsame70q21b", "MCAN1", 64, -1, -1},
  {"atsame70q21b", "PMC", 65, -1, -1},
  {"atsame70q21b", "PWM0", 66, -1, -1},
  {"atsame70q21b", "PWM1", 67, -1, -1},
  {"atsame70q21b", "QSPI", 68, -1, -1},
  {"atsame70q21b", "RSTC", 69, -1, -1},
  {"atsame70q21b", "RSWDT", 70, -1, -1},
  {"atsame70q21b", "RTC", 71, -1, -1},
  {"atsame70q21b", "RTT", 72, -1, -1},
  {"atsame70q21b", "SMC", 73, -1, -1},
  {"atsame70q21b", "SPI0", 74, -1, -1},
  {"atsame70q21b", "SPI1", 75, -1, -1},
  {"atsame70q21b", "SSC", 76, -1, -1},
  {"atsame70q21b", "SUPC", 77, -1, -1},
  {"atsame70q21b", "TC0", 78, -1, -1},
  {"atsame70q21b", "TC1", 79, -1, -1},
  {"atsame70q21b", "TC2", 80, -1, -1},
  {"atsame70q21b", "TC3", 81, -1, -1},
  {"atsame70q21b", "TRNG", 82, -1, -1},
  {"atsame70q21b", "TWIHS0", 83, -1, -1},
  {"atsame70q21b", "TWIHS1", 84, -1, -1},
  {"atsame70q21b", "TWIHS2", 85, -1, -1},
  {"atsame70q21b", "UART0", 86, -1, -1},
  {"atsame70q21b", "UART1", 87, -1, -1},
  {"atsame70q21b", "UART2", 88, -1, -1},
  {"atsame70q21b", "UART3", 89, -1, -1},
  {"atsame70q21b", "UART4", 90, -1, -1},
  {"atsame70q21b", "USART0", 91, -1, -1},
  {"atsame70q21b", "USART1", 92, -1, -1},
  {"atsame70q21b", "USART2", 93, -1, -1},
  {"atsame70q21b", "USBHS", 94, -1, -1},
  {"atsame70q21b", "WDT", 95, -1, -1},
  {"atsame70q21b", "XDMAC", 96, -1, -1},
}};
}
}
}
