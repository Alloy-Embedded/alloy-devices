#pragma once

#include <array>
#include "runtime_refs.hpp"

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
  none,
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
  RegisterRefId register_id;
  RegisterFieldRefId register_field_id;
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
  RegisterRefId register_id;
  RegisterFieldRefId register_field_id;
};
inline constexpr std::array<ClockGateDescriptor, 97> kClockGates = {{
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_acc, "gate:acc", "ACC", 0, "PMC.PID33", "PMC", "PID33", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_aes, "gate:aes", "AES", 0, "PMC.PID56", "PMC", "PID56", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_afec0, "gate:afec0", "AFEC0", 0, "PMC.PID29", "PMC", "PID29", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_afec1, "gate:afec1", "AFEC1", 0, "PMC.PID40", "PMC", "PID40", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_dacc, "gate:dacc", "DACC", 0, "PMC.PID30", "PMC", "PID30", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_efc, "gate:efc", "EFC", 0, "PMC.PID6", "PMC", "PID6", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_gmac, "gate:gmac", "GMAC", 0, "PMC.PID39", "PMC", "PID39", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_gpioa, "gate:gpioa", "GPIOA", 0, "PMC.PID10", "PMC", "PID10", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_gpiob, "gate:gpiob", "GPIOB", 0, "PMC.PID11", "PMC", "PID11", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_gpiod, "gate:gpiod", "GPIOD", 0, "PMC.PID16", "PMC", "PID16", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_hsmci, "gate:hsmci", "HSMCI", 0, "PMC.PID18", "PMC", "PID18", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_i2sc0, "gate:i2sc0", "I2SC0", 0, "PMC.PID69", "PMC", "PID69", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_icm, "gate:icm", "ICM", 0, "PMC.PID32", "PMC", "PID32", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_isi, "gate:isi", "ISI", 0, "PMC.PID59", "PMC", "PID59", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_mcan0, "gate:mcan0", "MCAN0", 0, "PMC.PID35", "PMC", "PID35", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_mcan1, "gate:mcan1", "MCAN1", 0, "PMC.PID37", "PMC", "PID37", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_pmc, "gate:pmc", "PMC", 0, "PMC.PID5", "PMC", "PID5", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_pwm0, "gate:pwm0", "PWM0", 0, "PMC.PID31", "PMC", "PID31", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_pwm1, "gate:pwm1", "PWM1", 0, "PMC.PID60", "PMC", "PID60", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_qspi, "gate:qspi", "QSPI", 0, "PMC.PID43", "PMC", "PID43", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_rstc, "gate:rstc", "RSTC", 0, "PMC.PID1", "PMC", "PID1", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_rswdt, "gate:rswdt", "RSWDT", 0, "PMC.PID63", "PMC", "PID63", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_rtc, "gate:rtc", "RTC", 0, "PMC.PID2", "PMC", "PID2", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_rtt, "gate:rtt", "RTT", 0, "PMC.PID3", "PMC", "PID3", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_spi0, "gate:spi0", "SPI0", 0, "PMC.PID21", "PMC", "PID21", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_ssc, "gate:ssc", "SSC", 0, "PMC.PID22", "PMC", "PID22", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_supc, "gate:supc", "SUPC", 0, "PMC.PID0", "PMC", "PID0", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_tc0, "gate:tc0", "TC0", 0, "PMC.PID23", "PMC", "PID23", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_tc1, "gate:tc1", "TC1", 0, "PMC.PID26", "PMC", "PID26", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_tc2, "gate:tc2", "TC2", 0, "PMC.PID47", "PMC", "PID47", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_tc3, "gate:tc3", "TC3", 0, "PMC.PID50", "PMC", "PID50", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_trng, "gate:trng", "TRNG", 0, "PMC.PID57", "PMC", "PID57", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_twihs0, "gate:twihs0", "TWIHS0", 0, "PMC.PID19", "PMC", "PID19", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_twihs1, "gate:twihs1", "TWIHS1", 0, "PMC.PID20", "PMC", "PID20", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_twihs2, "gate:twihs2", "TWIHS2", 0, "PMC.PID41", "PMC", "PID41", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart0, "gate:uart0", "UART0", 0, "PMC.PID7", "PMC", "PID7", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart1, "gate:uart1", "UART1", 0, "PMC.PID8", "PMC", "PID8", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart2, "gate:uart2", "UART2", 0, "PMC.PID44", "PMC", "PID44", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart3, "gate:uart3", "UART3", 0, "PMC.PID45", "PMC", "PID45", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_uart4, "gate:uart4", "UART4", 0, "PMC.PID46", "PMC", "PID46", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_usart0, "gate:usart0", "USART0", 0, "PMC.PID13", "PMC", "PID13", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_usart1, "gate:usart1", "USART1", 0, "PMC.PID14", "PMC", "PID14", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_usart2, "gate:usart2", "USART2", 0, "PMC.PID15", "PMC", "PID15", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_usbhs, "gate:usbhs", "USBHS", 0, "PMC.PID34", "PMC", "PID34", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_wdt, "gate:wdt", "WDT", 0, "PMC.PID4", "PMC", "PID4", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70n21b", ClockGateId::atsame70n21b_gate_xdmac, "gate:xdmac", "XDMAC", 0, "PMC.PID58", "PMC", "PID58", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_acc, "gate:acc", "ACC", 2, "PMC.PID33", "PMC", "PID33", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_aes, "gate:aes", "AES", 2, "PMC.PID56", "PMC", "PID56", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_afec0, "gate:afec0", "AFEC0", 2, "PMC.PID29", "PMC", "PID29", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_afec1, "gate:afec1", "AFEC1", 2, "PMC.PID40", "PMC", "PID40", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_dacc, "gate:dacc", "DACC", 2, "PMC.PID30", "PMC", "PID30", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_efc, "gate:efc", "EFC", 2, "PMC.PID6", "PMC", "PID6", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gmac, "gate:gmac", "GMAC", 2, "PMC.PID39", "PMC", "PID39", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpioa, "gate:gpioa", "GPIOA", 2, "PMC.PID10", "PMC", "PID10", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpiob, "gate:gpiob", "GPIOB", 2, "PMC.PID11", "PMC", "PID11", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpioc, "gate:gpioc", "GPIOC", 2, "PMC.PID12", "PMC", "PID12", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpiod, "gate:gpiod", "GPIOD", 2, "PMC.PID16", "PMC", "PID16", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_gpioe, "gate:gpioe", "GPIOE", 2, "PMC.PID17", "PMC", "PID17", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_hsmci, "gate:hsmci", "HSMCI", 2, "PMC.PID18", "PMC", "PID18", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_i2sc0, "gate:i2sc0", "I2SC0", 2, "PMC.PID69", "PMC", "PID69", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_i2sc1, "gate:i2sc1", "I2SC1", 2, "PMC.PID70", "PMC", "PID70", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_icm, "gate:icm", "ICM", 2, "PMC.PID32", "PMC", "PID32", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_isi, "gate:isi", "ISI", 2, "PMC.PID59", "PMC", "PID59", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_mcan0, "gate:mcan0", "MCAN0", 2, "PMC.PID35", "PMC", "PID35", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_mcan1, "gate:mcan1", "MCAN1", 2, "PMC.PID37", "PMC", "PID37", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_pmc, "gate:pmc", "PMC", 2, "PMC.PID5", "PMC", "PID5", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_pwm0, "gate:pwm0", "PWM0", 2, "PMC.PID31", "PMC", "PID31", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_pwm1, "gate:pwm1", "PWM1", 2, "PMC.PID60", "PMC", "PID60", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_qspi, "gate:qspi", "QSPI", 2, "PMC.PID43", "PMC", "PID43", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_rstc, "gate:rstc", "RSTC", 2, "PMC.PID1", "PMC", "PID1", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_rswdt, "gate:rswdt", "RSWDT", 2, "PMC.PID63", "PMC", "PID63", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_rtc, "gate:rtc", "RTC", 2, "PMC.PID2", "PMC", "PID2", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_rtt, "gate:rtt", "RTT", 2, "PMC.PID3", "PMC", "PID3", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_smc, "gate:smc", "SMC", 2, "PMC.PID9", "PMC", "PID9", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_spi0, "gate:spi0", "SPI0", 2, "PMC.PID21", "PMC", "PID21", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_spi1, "gate:spi1", "SPI1", 2, "PMC.PID42", "PMC", "PID42", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_ssc, "gate:ssc", "SSC", 2, "PMC.PID22", "PMC", "PID22", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_supc, "gate:supc", "SUPC", 2, "PMC.PID0", "PMC", "PID0", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_tc0, "gate:tc0", "TC0", 2, "PMC.PID23", "PMC", "PID23", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_tc1, "gate:tc1", "TC1", 2, "PMC.PID26", "PMC", "PID26", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_tc2, "gate:tc2", "TC2", 2, "PMC.PID47", "PMC", "PID47", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_tc3, "gate:tc3", "TC3", 2, "PMC.PID50", "PMC", "PID50", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_trng, "gate:trng", "TRNG", 2, "PMC.PID57", "PMC", "PID57", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_twihs0, "gate:twihs0", "TWIHS0", 2, "PMC.PID19", "PMC", "PID19", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_twihs1, "gate:twihs1", "TWIHS1", 2, "PMC.PID20", "PMC", "PID20", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_twihs2, "gate:twihs2", "TWIHS2", 2, "PMC.PID41", "PMC", "PID41", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart0, "gate:uart0", "UART0", 2, "PMC.PID7", "PMC", "PID7", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart1, "gate:uart1", "UART1", 2, "PMC.PID8", "PMC", "PID8", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart2, "gate:uart2", "UART2", 2, "PMC.PID44", "PMC", "PID44", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart3, "gate:uart3", "UART3", 2, "PMC.PID45", "PMC", "PID45", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_uart4, "gate:uart4", "UART4", 2, "PMC.PID46", "PMC", "PID46", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_usart0, "gate:usart0", "USART0", 2, "PMC.PID13", "PMC", "PID13", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_usart1, "gate:usart1", "USART1", 2, "PMC.PID14", "PMC", "PID14", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_usart2, "gate:usart2", "USART2", 2, "PMC.PID15", "PMC", "PID15", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_usbhs, "gate:usbhs", "USBHS", 2, "PMC.PID34", "PMC", "PID34", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_wdt, "gate:wdt", "WDT", 2, "PMC.PID4", "PMC", "PID4", -1, RegisterRefId::none, RegisterFieldRefId::none},
  {"atsame70q21b", ClockGateId::atsame70q21b_gate_xdmac, "gate:xdmac", "XDMAC", 2, "PMC.PID58", "PMC", "PID58", -1, RegisterRefId::none, RegisterFieldRefId::none},
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
  RegisterRefId register_id;
  RegisterFieldRefId register_field_id;
};
inline constexpr std::array<ResetDescriptor, 0> kResets = {};

struct PeripheralClockBindingDescriptor {
  const char* device;
  const char* peripheral;
  ClockGateId clock_gate_id;
  ResetId reset_id;
  ClockSelectorId selector_id;
};
inline constexpr std::array<PeripheralClockBindingDescriptor, 97> kPeripheralClockBindings = {{
  {"atsame70n21b", "ACC", ClockGateId::atsame70n21b_gate_acc, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "AES", ClockGateId::atsame70n21b_gate_aes, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "AFEC0", ClockGateId::atsame70n21b_gate_afec0, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "AFEC1", ClockGateId::atsame70n21b_gate_afec1, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "DACC", ClockGateId::atsame70n21b_gate_dacc, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "EFC", ClockGateId::atsame70n21b_gate_efc, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "GMAC", ClockGateId::atsame70n21b_gate_gmac, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "GPIOA", ClockGateId::atsame70n21b_gate_gpioa, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "GPIOB", ClockGateId::atsame70n21b_gate_gpiob, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "GPIOD", ClockGateId::atsame70n21b_gate_gpiod, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "HSMCI", ClockGateId::atsame70n21b_gate_hsmci, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "I2SC0", ClockGateId::atsame70n21b_gate_i2sc0, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "ICM", ClockGateId::atsame70n21b_gate_icm, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "ISI", ClockGateId::atsame70n21b_gate_isi, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "MCAN0", ClockGateId::atsame70n21b_gate_mcan0, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "MCAN1", ClockGateId::atsame70n21b_gate_mcan1, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "PMC", ClockGateId::atsame70n21b_gate_pmc, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "PWM0", ClockGateId::atsame70n21b_gate_pwm0, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "PWM1", ClockGateId::atsame70n21b_gate_pwm1, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "QSPI", ClockGateId::atsame70n21b_gate_qspi, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "RSTC", ClockGateId::atsame70n21b_gate_rstc, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "RSWDT", ClockGateId::atsame70n21b_gate_rswdt, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "RTC", ClockGateId::atsame70n21b_gate_rtc, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "RTT", ClockGateId::atsame70n21b_gate_rtt, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "SPI0", ClockGateId::atsame70n21b_gate_spi0, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "SSC", ClockGateId::atsame70n21b_gate_ssc, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "SUPC", ClockGateId::atsame70n21b_gate_supc, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "TC0", ClockGateId::atsame70n21b_gate_tc0, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "TC1", ClockGateId::atsame70n21b_gate_tc1, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "TC2", ClockGateId::atsame70n21b_gate_tc2, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "TC3", ClockGateId::atsame70n21b_gate_tc3, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "TRNG", ClockGateId::atsame70n21b_gate_trng, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "TWIHS0", ClockGateId::atsame70n21b_gate_twihs0, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "TWIHS1", ClockGateId::atsame70n21b_gate_twihs1, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "TWIHS2", ClockGateId::atsame70n21b_gate_twihs2, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "UART0", ClockGateId::atsame70n21b_gate_uart0, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "UART1", ClockGateId::atsame70n21b_gate_uart1, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "UART2", ClockGateId::atsame70n21b_gate_uart2, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "UART3", ClockGateId::atsame70n21b_gate_uart3, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "UART4", ClockGateId::atsame70n21b_gate_uart4, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "USART0", ClockGateId::atsame70n21b_gate_usart0, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "USART1", ClockGateId::atsame70n21b_gate_usart1, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "USART2", ClockGateId::atsame70n21b_gate_usart2, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "USBHS", ClockGateId::atsame70n21b_gate_usbhs, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "WDT", ClockGateId::atsame70n21b_gate_wdt, ResetId::none, ClockSelectorId::none},
  {"atsame70n21b", "XDMAC", ClockGateId::atsame70n21b_gate_xdmac, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "ACC", ClockGateId::atsame70q21b_gate_acc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "AES", ClockGateId::atsame70q21b_gate_aes, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "AFEC0", ClockGateId::atsame70q21b_gate_afec0, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "AFEC1", ClockGateId::atsame70q21b_gate_afec1, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "DACC", ClockGateId::atsame70q21b_gate_dacc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "EFC", ClockGateId::atsame70q21b_gate_efc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "GMAC", ClockGateId::atsame70q21b_gate_gmac, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "GPIOA", ClockGateId::atsame70q21b_gate_gpioa, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "GPIOB", ClockGateId::atsame70q21b_gate_gpiob, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "GPIOC", ClockGateId::atsame70q21b_gate_gpioc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "GPIOD", ClockGateId::atsame70q21b_gate_gpiod, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "GPIOE", ClockGateId::atsame70q21b_gate_gpioe, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "HSMCI", ClockGateId::atsame70q21b_gate_hsmci, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "I2SC0", ClockGateId::atsame70q21b_gate_i2sc0, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "I2SC1", ClockGateId::atsame70q21b_gate_i2sc1, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "ICM", ClockGateId::atsame70q21b_gate_icm, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "ISI", ClockGateId::atsame70q21b_gate_isi, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "MCAN0", ClockGateId::atsame70q21b_gate_mcan0, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "MCAN1", ClockGateId::atsame70q21b_gate_mcan1, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "PMC", ClockGateId::atsame70q21b_gate_pmc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "PWM0", ClockGateId::atsame70q21b_gate_pwm0, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "PWM1", ClockGateId::atsame70q21b_gate_pwm1, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "QSPI", ClockGateId::atsame70q21b_gate_qspi, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "RSTC", ClockGateId::atsame70q21b_gate_rstc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "RSWDT", ClockGateId::atsame70q21b_gate_rswdt, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "RTC", ClockGateId::atsame70q21b_gate_rtc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "RTT", ClockGateId::atsame70q21b_gate_rtt, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "SMC", ClockGateId::atsame70q21b_gate_smc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "SPI0", ClockGateId::atsame70q21b_gate_spi0, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "SPI1", ClockGateId::atsame70q21b_gate_spi1, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "SSC", ClockGateId::atsame70q21b_gate_ssc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "SUPC", ClockGateId::atsame70q21b_gate_supc, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "TC0", ClockGateId::atsame70q21b_gate_tc0, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "TC1", ClockGateId::atsame70q21b_gate_tc1, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "TC2", ClockGateId::atsame70q21b_gate_tc2, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "TC3", ClockGateId::atsame70q21b_gate_tc3, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "TRNG", ClockGateId::atsame70q21b_gate_trng, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "TWIHS0", ClockGateId::atsame70q21b_gate_twihs0, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "TWIHS1", ClockGateId::atsame70q21b_gate_twihs1, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "TWIHS2", ClockGateId::atsame70q21b_gate_twihs2, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "UART0", ClockGateId::atsame70q21b_gate_uart0, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "UART1", ClockGateId::atsame70q21b_gate_uart1, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "UART2", ClockGateId::atsame70q21b_gate_uart2, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "UART3", ClockGateId::atsame70q21b_gate_uart3, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "UART4", ClockGateId::atsame70q21b_gate_uart4, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "USART0", ClockGateId::atsame70q21b_gate_usart0, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "USART1", ClockGateId::atsame70q21b_gate_usart1, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "USART2", ClockGateId::atsame70q21b_gate_usart2, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "USBHS", ClockGateId::atsame70q21b_gate_usbhs, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "WDT", ClockGateId::atsame70q21b_gate_wdt, ResetId::none, ClockSelectorId::none},
  {"atsame70q21b", "XDMAC", ClockGateId::atsame70q21b_gate_xdmac, ResetId::none, ClockSelectorId::none},
}};
}
}
}
