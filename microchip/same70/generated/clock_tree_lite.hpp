#pragma once

#include <array>
#include "runtime_refs.hpp"
#include "runtime_semantics.hpp"

namespace microchip {
namespace same70 {
namespace generated {
enum class ClockNodeId : std::uint16_t {
  none,
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
  DeviceRefId device_id;
  ClockNodeId node_id;
  ClockNodeKindId kind_id;
  ClockNodeId parent_node_id;
  ClockSelectorId selector_id;
};
inline constexpr std::array<ClockNodeDescriptor, 4> kClockNodes = {{
  {DeviceRefId::atsame70n21b, ClockNodeId::atsame70n21b_clock_node_pmc, ClockNodeKindId::clock_node_kind_pmc_domain, ClockNodeId::atsame70n21b_clock_root, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, ClockNodeId::atsame70n21b_clock_root, ClockNodeKindId::clock_node_kind_root, ClockNodeId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, ClockNodeId::atsame70q21b_clock_node_pmc, ClockNodeKindId::clock_node_kind_pmc_domain, ClockNodeId::atsame70q21b_clock_root, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, ClockNodeId::atsame70q21b_clock_root, ClockNodeKindId::clock_node_kind_root, ClockNodeId::none, ClockSelectorId::none},
}};

struct ClockSelectorDescriptor {
  DeviceRefId device_id;
  ClockSelectorId selector_id;
  std::uint16_t parent_option_offset;
  std::uint16_t parent_option_count;
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
  DeviceRefId device_id;
  ClockGateId gate_id;
  PeripheralRefId peripheral_id;
  ClockNodeId parent_node_id;
  RegisterRefId register_id;
  RegisterFieldRefId register_field_id;
};
inline constexpr std::array<ClockGateDescriptor, 97> kClockGates = {{
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_acc, PeripheralRefId::atsame70n21b_ACC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_aes, PeripheralRefId::atsame70n21b_AES, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_afec0, PeripheralRefId::atsame70n21b_AFEC0, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_afec1, PeripheralRefId::atsame70n21b_AFEC1, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_dacc, PeripheralRefId::atsame70n21b_DACC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_efc, PeripheralRefId::atsame70n21b_EFC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_gmac, PeripheralRefId::atsame70n21b_GMAC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_gpioa, PeripheralRefId::atsame70n21b_GPIOA, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_gpiob, PeripheralRefId::atsame70n21b_GPIOB, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_gpiod, PeripheralRefId::atsame70n21b_GPIOD, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_hsmci, PeripheralRefId::atsame70n21b_HSMCI, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_i2sc0, PeripheralRefId::atsame70n21b_I2SC0, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_icm, PeripheralRefId::atsame70n21b_ICM, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_isi, PeripheralRefId::atsame70n21b_ISI, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_mcan0, PeripheralRefId::atsame70n21b_MCAN0, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_mcan1, PeripheralRefId::atsame70n21b_MCAN1, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_pmc, PeripheralRefId::atsame70n21b_PMC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_pwm0, PeripheralRefId::atsame70n21b_PWM0, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_pwm1, PeripheralRefId::atsame70n21b_PWM1, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_qspi, PeripheralRefId::atsame70n21b_QSPI, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_rstc, PeripheralRefId::atsame70n21b_RSTC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_rswdt, PeripheralRefId::atsame70n21b_RSWDT, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_rtc, PeripheralRefId::atsame70n21b_RTC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_rtt, PeripheralRefId::atsame70n21b_RTT, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_spi0, PeripheralRefId::atsame70n21b_SPI0, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_ssc, PeripheralRefId::atsame70n21b_SSC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_supc, PeripheralRefId::atsame70n21b_SUPC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_tc0, PeripheralRefId::atsame70n21b_TC0, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_tc1, PeripheralRefId::atsame70n21b_TC1, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_tc2, PeripheralRefId::atsame70n21b_TC2, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_tc3, PeripheralRefId::atsame70n21b_TC3, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_trng, PeripheralRefId::atsame70n21b_TRNG, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_twihs0, PeripheralRefId::atsame70n21b_TWIHS0, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_twihs1, PeripheralRefId::atsame70n21b_TWIHS1, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_twihs2, PeripheralRefId::atsame70n21b_TWIHS2, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_uart0, PeripheralRefId::atsame70n21b_UART0, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_uart1, PeripheralRefId::atsame70n21b_UART1, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_uart2, PeripheralRefId::atsame70n21b_UART2, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_uart3, PeripheralRefId::atsame70n21b_UART3, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_uart4, PeripheralRefId::atsame70n21b_UART4, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_usart0, PeripheralRefId::atsame70n21b_USART0, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_usart1, PeripheralRefId::atsame70n21b_USART1, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_usart2, PeripheralRefId::atsame70n21b_USART2, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_usbhs, PeripheralRefId::atsame70n21b_USBHS, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_wdt, PeripheralRefId::atsame70n21b_WDT, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70n21b, ClockGateId::atsame70n21b_gate_xdmac, PeripheralRefId::atsame70n21b_XDMAC, ClockNodeId::atsame70n21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_acc, PeripheralRefId::atsame70q21b_ACC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_aes, PeripheralRefId::atsame70q21b_AES, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_afec0, PeripheralRefId::atsame70q21b_AFEC0, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_afec1, PeripheralRefId::atsame70q21b_AFEC1, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_dacc, PeripheralRefId::atsame70q21b_DACC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_efc, PeripheralRefId::atsame70q21b_EFC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_gmac, PeripheralRefId::atsame70q21b_GMAC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_gpioa, PeripheralRefId::atsame70q21b_GPIOA, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_gpiob, PeripheralRefId::atsame70q21b_GPIOB, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_gpioc, PeripheralRefId::atsame70q21b_GPIOC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_gpiod, PeripheralRefId::atsame70q21b_GPIOD, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_gpioe, PeripheralRefId::atsame70q21b_GPIOE, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_hsmci, PeripheralRefId::atsame70q21b_HSMCI, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_i2sc0, PeripheralRefId::atsame70q21b_I2SC0, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_i2sc1, PeripheralRefId::atsame70q21b_I2SC1, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_icm, PeripheralRefId::atsame70q21b_ICM, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_isi, PeripheralRefId::atsame70q21b_ISI, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_mcan0, PeripheralRefId::atsame70q21b_MCAN0, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_mcan1, PeripheralRefId::atsame70q21b_MCAN1, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_pmc, PeripheralRefId::atsame70q21b_PMC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_pwm0, PeripheralRefId::atsame70q21b_PWM0, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_pwm1, PeripheralRefId::atsame70q21b_PWM1, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_qspi, PeripheralRefId::atsame70q21b_QSPI, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_rstc, PeripheralRefId::atsame70q21b_RSTC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_rswdt, PeripheralRefId::atsame70q21b_RSWDT, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_rtc, PeripheralRefId::atsame70q21b_RTC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_rtt, PeripheralRefId::atsame70q21b_RTT, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_smc, PeripheralRefId::atsame70q21b_SMC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_spi0, PeripheralRefId::atsame70q21b_SPI0, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_spi1, PeripheralRefId::atsame70q21b_SPI1, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_ssc, PeripheralRefId::atsame70q21b_SSC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_supc, PeripheralRefId::atsame70q21b_SUPC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_tc0, PeripheralRefId::atsame70q21b_TC0, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_tc1, PeripheralRefId::atsame70q21b_TC1, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_tc2, PeripheralRefId::atsame70q21b_TC2, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_tc3, PeripheralRefId::atsame70q21b_TC3, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_trng, PeripheralRefId::atsame70q21b_TRNG, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_twihs0, PeripheralRefId::atsame70q21b_TWIHS0, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_twihs1, PeripheralRefId::atsame70q21b_TWIHS1, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_twihs2, PeripheralRefId::atsame70q21b_TWIHS2, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_uart0, PeripheralRefId::atsame70q21b_UART0, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_uart1, PeripheralRefId::atsame70q21b_UART1, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_uart2, PeripheralRefId::atsame70q21b_UART2, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_uart3, PeripheralRefId::atsame70q21b_UART3, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_uart4, PeripheralRefId::atsame70q21b_UART4, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_usart0, PeripheralRefId::atsame70q21b_USART0, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_usart1, PeripheralRefId::atsame70q21b_USART1, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_usart2, PeripheralRefId::atsame70q21b_USART2, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_usbhs, PeripheralRefId::atsame70q21b_USBHS, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_wdt, PeripheralRefId::atsame70q21b_WDT, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
  {DeviceRefId::atsame70q21b, ClockGateId::atsame70q21b_gate_xdmac, PeripheralRefId::atsame70q21b_XDMAC, ClockNodeId::atsame70q21b_clock_node_pmc, RegisterRefId::none, RegisterFieldRefId::none},
}};

struct ResetDescriptor {
  DeviceRefId device_id;
  ResetId reset_id;
  PeripheralRefId peripheral_id;
  ActiveLevelId active_level_id;
  RegisterRefId register_id;
  RegisterFieldRefId register_field_id;
};
inline constexpr std::array<ResetDescriptor, 0> kResets = {};

struct PeripheralClockBindingDescriptor {
  DeviceRefId device_id;
  PeripheralRefId peripheral_id;
  ClockGateId clock_gate_id;
  ResetId reset_id;
  ClockSelectorId selector_id;
};
inline constexpr std::array<PeripheralClockBindingDescriptor, 97> kPeripheralClockBindings = {{
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_ACC, ClockGateId::atsame70n21b_gate_acc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_AES, ClockGateId::atsame70n21b_gate_aes, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_AFEC0, ClockGateId::atsame70n21b_gate_afec0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_AFEC1, ClockGateId::atsame70n21b_gate_afec1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_DACC, ClockGateId::atsame70n21b_gate_dacc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_EFC, ClockGateId::atsame70n21b_gate_efc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_GMAC, ClockGateId::atsame70n21b_gate_gmac, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_GPIOA, ClockGateId::atsame70n21b_gate_gpioa, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_GPIOB, ClockGateId::atsame70n21b_gate_gpiob, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_GPIOD, ClockGateId::atsame70n21b_gate_gpiod, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_HSMCI, ClockGateId::atsame70n21b_gate_hsmci, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_I2SC0, ClockGateId::atsame70n21b_gate_i2sc0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_ICM, ClockGateId::atsame70n21b_gate_icm, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_ISI, ClockGateId::atsame70n21b_gate_isi, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_MCAN0, ClockGateId::atsame70n21b_gate_mcan0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_MCAN1, ClockGateId::atsame70n21b_gate_mcan1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_PMC, ClockGateId::atsame70n21b_gate_pmc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_PWM0, ClockGateId::atsame70n21b_gate_pwm0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_PWM1, ClockGateId::atsame70n21b_gate_pwm1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_QSPI, ClockGateId::atsame70n21b_gate_qspi, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_RSTC, ClockGateId::atsame70n21b_gate_rstc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_RSWDT, ClockGateId::atsame70n21b_gate_rswdt, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_RTC, ClockGateId::atsame70n21b_gate_rtc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_RTT, ClockGateId::atsame70n21b_gate_rtt, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_SPI0, ClockGateId::atsame70n21b_gate_spi0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_SSC, ClockGateId::atsame70n21b_gate_ssc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_SUPC, ClockGateId::atsame70n21b_gate_supc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_TC0, ClockGateId::atsame70n21b_gate_tc0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_TC1, ClockGateId::atsame70n21b_gate_tc1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_TC2, ClockGateId::atsame70n21b_gate_tc2, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_TC3, ClockGateId::atsame70n21b_gate_tc3, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_TRNG, ClockGateId::atsame70n21b_gate_trng, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_TWIHS0, ClockGateId::atsame70n21b_gate_twihs0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_TWIHS1, ClockGateId::atsame70n21b_gate_twihs1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_TWIHS2, ClockGateId::atsame70n21b_gate_twihs2, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_UART0, ClockGateId::atsame70n21b_gate_uart0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_UART1, ClockGateId::atsame70n21b_gate_uart1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_UART2, ClockGateId::atsame70n21b_gate_uart2, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_UART3, ClockGateId::atsame70n21b_gate_uart3, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_UART4, ClockGateId::atsame70n21b_gate_uart4, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_USART0, ClockGateId::atsame70n21b_gate_usart0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_USART1, ClockGateId::atsame70n21b_gate_usart1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_USART2, ClockGateId::atsame70n21b_gate_usart2, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_USBHS, ClockGateId::atsame70n21b_gate_usbhs, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_WDT, ClockGateId::atsame70n21b_gate_wdt, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70n21b, PeripheralRefId::atsame70n21b_XDMAC, ClockGateId::atsame70n21b_gate_xdmac, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_ACC, ClockGateId::atsame70q21b_gate_acc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_AES, ClockGateId::atsame70q21b_gate_aes, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_AFEC0, ClockGateId::atsame70q21b_gate_afec0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_AFEC1, ClockGateId::atsame70q21b_gate_afec1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_DACC, ClockGateId::atsame70q21b_gate_dacc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_EFC, ClockGateId::atsame70q21b_gate_efc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_GMAC, ClockGateId::atsame70q21b_gate_gmac, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_GPIOA, ClockGateId::atsame70q21b_gate_gpioa, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_GPIOB, ClockGateId::atsame70q21b_gate_gpiob, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_GPIOC, ClockGateId::atsame70q21b_gate_gpioc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_GPIOD, ClockGateId::atsame70q21b_gate_gpiod, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_GPIOE, ClockGateId::atsame70q21b_gate_gpioe, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_HSMCI, ClockGateId::atsame70q21b_gate_hsmci, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_I2SC0, ClockGateId::atsame70q21b_gate_i2sc0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_I2SC1, ClockGateId::atsame70q21b_gate_i2sc1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_ICM, ClockGateId::atsame70q21b_gate_icm, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_ISI, ClockGateId::atsame70q21b_gate_isi, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_MCAN0, ClockGateId::atsame70q21b_gate_mcan0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_MCAN1, ClockGateId::atsame70q21b_gate_mcan1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_PMC, ClockGateId::atsame70q21b_gate_pmc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_PWM0, ClockGateId::atsame70q21b_gate_pwm0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_PWM1, ClockGateId::atsame70q21b_gate_pwm1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_QSPI, ClockGateId::atsame70q21b_gate_qspi, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_RSTC, ClockGateId::atsame70q21b_gate_rstc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_RSWDT, ClockGateId::atsame70q21b_gate_rswdt, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_RTC, ClockGateId::atsame70q21b_gate_rtc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_RTT, ClockGateId::atsame70q21b_gate_rtt, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_SMC, ClockGateId::atsame70q21b_gate_smc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_SPI0, ClockGateId::atsame70q21b_gate_spi0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_SPI1, ClockGateId::atsame70q21b_gate_spi1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_SSC, ClockGateId::atsame70q21b_gate_ssc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_SUPC, ClockGateId::atsame70q21b_gate_supc, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_TC0, ClockGateId::atsame70q21b_gate_tc0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_TC1, ClockGateId::atsame70q21b_gate_tc1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_TC2, ClockGateId::atsame70q21b_gate_tc2, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_TC3, ClockGateId::atsame70q21b_gate_tc3, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_TRNG, ClockGateId::atsame70q21b_gate_trng, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_TWIHS0, ClockGateId::atsame70q21b_gate_twihs0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_TWIHS1, ClockGateId::atsame70q21b_gate_twihs1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_TWIHS2, ClockGateId::atsame70q21b_gate_twihs2, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_UART0, ClockGateId::atsame70q21b_gate_uart0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_UART1, ClockGateId::atsame70q21b_gate_uart1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_UART2, ClockGateId::atsame70q21b_gate_uart2, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_UART3, ClockGateId::atsame70q21b_gate_uart3, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_UART4, ClockGateId::atsame70q21b_gate_uart4, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_USART0, ClockGateId::atsame70q21b_gate_usart0, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_USART1, ClockGateId::atsame70q21b_gate_usart1, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_USART2, ClockGateId::atsame70q21b_gate_usart2, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_USBHS, ClockGateId::atsame70q21b_gate_usbhs, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_WDT, ClockGateId::atsame70q21b_gate_wdt, ResetId::none, ClockSelectorId::none},
  {DeviceRefId::atsame70q21b, PeripheralRefId::atsame70q21b_XDMAC, ClockGateId::atsame70q21b_gate_xdmac, ResetId::none, ClockSelectorId::none},
}};
}
}
}
