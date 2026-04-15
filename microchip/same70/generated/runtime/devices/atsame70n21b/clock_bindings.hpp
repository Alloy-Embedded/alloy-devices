#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "peripheral_instances.hpp"
#include "registers.hpp"
#include "register_fields.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace runtime {
namespace devices {
namespace atsame70n21b {
template<ClockGateId Id>
struct ClockGateTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<>
struct ClockGateTraits<ClockGateId::gate_afec0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid29;
};

template<>
struct ClockGateTraits<ClockGateId::gate_afec1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer1_pid40;
};

template<>
struct ClockGateTraits<ClockGateId::gate_dacc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid30;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpioa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid10;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpiob> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid11;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpiod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid16;
};

template<>
struct ClockGateTraits<ClockGateId::gate_pwm0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid31;
};

template<>
struct ClockGateTraits<ClockGateId::gate_pwm1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer1_pid60;
};

template<>
struct ClockGateTraits<ClockGateId::gate_rswdt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<>
struct ClockGateTraits<ClockGateId::gate_spi0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid21;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tc0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid23;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tc1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid26;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tc2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer1_pid47;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tc3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer1_pid50;
};

template<>
struct ClockGateTraits<ClockGateId::gate_twihs0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid19;
};

template<>
struct ClockGateTraits<ClockGateId::gate_twihs1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid20;
};

template<>
struct ClockGateTraits<ClockGateId::gate_twihs2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer1_pid41;
};

template<>
struct ClockGateTraits<ClockGateId::gate_uart0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid7;
};

template<>
struct ClockGateTraits<ClockGateId::gate_uart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid8;
};

template<>
struct ClockGateTraits<ClockGateId::gate_uart2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer1_pid44;
};

template<>
struct ClockGateTraits<ClockGateId::gate_uart3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer1_pid45;
};

template<>
struct ClockGateTraits<ClockGateId::gate_uart4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer1_pid46;
};

template<>
struct ClockGateTraits<ClockGateId::gate_usart0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid13;
};

template<>
struct ClockGateTraits<ClockGateId::gate_usart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid14;
};

template<>
struct ClockGateTraits<ClockGateId::gate_usart2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer0_pid15;
};

template<>
struct ClockGateTraits<ClockGateId::gate_wdt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer0;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<>
struct ClockGateTraits<ClockGateId::gate_xdmac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pmc_pcer1;
  static constexpr FieldId kFieldId = FieldId::field_pmc_pcer1_pid58;
};

template<ResetId Id>
struct ResetTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::none;
};

template<ClockSelectorId Id>
struct ClockSelectorTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<PeripheralId Id>
struct PeripheralClockBindingTraits {
  static constexpr bool kPresent = false;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::AFEC0> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_afec0;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::AFEC1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_afec1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::DACC> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_dacc;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOA> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpioa;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOB> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpiob;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOD> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpiod;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::PWM0> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_pwm0;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::PWM1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_pwm1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::RSWDT> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_rswdt;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::SPI0> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_spi0;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TC0> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tc0;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TC1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tc1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TC2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tc2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TC3> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tc3;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TWIHS0> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_twihs0;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TWIHS1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_twihs1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TWIHS2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_twihs2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::UART0> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_uart0;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::UART1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_uart1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::UART2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_uart2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::UART3> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_uart3;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::UART4> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_uart4;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::USART0> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart0;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::USART1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::USART2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::WDT> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_wdt;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::XDMAC> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_xdmac;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

inline constexpr std::array<PeripheralId, 27> kClockBoundPeripherals = {{
  PeripheralId::AFEC0,
  PeripheralId::AFEC1,
  PeripheralId::DACC,
  PeripheralId::GPIOA,
  PeripheralId::GPIOB,
  PeripheralId::GPIOD,
  PeripheralId::PWM0,
  PeripheralId::PWM1,
  PeripheralId::RSWDT,
  PeripheralId::SPI0,
  PeripheralId::TC0,
  PeripheralId::TC1,
  PeripheralId::TC2,
  PeripheralId::TC3,
  PeripheralId::TWIHS0,
  PeripheralId::TWIHS1,
  PeripheralId::TWIHS2,
  PeripheralId::UART0,
  PeripheralId::UART1,
  PeripheralId::UART2,
  PeripheralId::UART3,
  PeripheralId::UART4,
  PeripheralId::USART0,
  PeripheralId::USART1,
  PeripheralId::USART2,
  PeripheralId::WDT,
  PeripheralId::XDMAC,
}};
}
}
}
}
}
}
