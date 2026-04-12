#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "peripheral_instances.hpp"
#include "registers.hpp"
#include "register_fields.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1064 {
template<ClockGateId Id>
struct ClockGateTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpio1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg13;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpio2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr0;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr0_cg15;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpio3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr2;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr2_cg13;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpio4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr3;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr3_cg13;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpio5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg15;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpspi1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg0;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpspi2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg1;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpspi3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg2;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpspi4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg3;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpuart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr5;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr5_cg12;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpuart2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr0;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr0_cg14;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpuart3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr0;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr0_cg6;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpuart4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg12;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpuart5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr3;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr3_cg1;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpuart6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr3;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr3_cg3;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpuart7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr5;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr5_cg13;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpuart8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr6;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr6_cg7;
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

template<>
struct ClockSelectorTraits<ClockSelectorId::selector_lpspi_root> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_cbcmr;
  static constexpr FieldId kFieldId = FieldId::field_ccm_cbcmr_lpspi_clk_sel;
};

template<>
struct ClockSelectorTraits<ClockSelectorId::selector_lpuart_root> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_cscdr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_cscdr1_uart_clk_sel;
};

template<PeripheralId Id>
struct PeripheralClockBindingTraits {
  static constexpr bool kPresent = false;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO10> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO3> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio3;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO4> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio4;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO5> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio5;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO6> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO7> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO8> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIO9> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPSPI1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::selector_lpspi_root;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPSPI2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPSPI3> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi3;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPSPI4> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi4;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPUART1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::selector_lpuart_root;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPUART2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPUART3> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart3;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPUART4> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart4;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPUART5> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart5;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPUART6> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart6;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPUART7> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart7;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPUART8> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart8;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

inline constexpr std::array<PeripheralId, 22> kClockBoundPeripherals = {{
  PeripheralId::GPIO1,
  PeripheralId::GPIO10,
  PeripheralId::GPIO2,
  PeripheralId::GPIO3,
  PeripheralId::GPIO4,
  PeripheralId::GPIO5,
  PeripheralId::GPIO6,
  PeripheralId::GPIO7,
  PeripheralId::GPIO8,
  PeripheralId::GPIO9,
  PeripheralId::LPSPI1,
  PeripheralId::LPSPI2,
  PeripheralId::LPSPI3,
  PeripheralId::LPSPI4,
  PeripheralId::LPUART1,
  PeripheralId::LPUART2,
  PeripheralId::LPUART3,
  PeripheralId::LPUART4,
  PeripheralId::LPUART5,
  PeripheralId::LPUART6,
  PeripheralId::LPUART7,
  PeripheralId::LPUART8,
}};
}
}
}
}
}
}
