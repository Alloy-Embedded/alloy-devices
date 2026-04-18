#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "clock_bindings.hpp"
#include "clock_graph.hpp"
#include "peripheral_instances.hpp"
#include "register_fields.hpp"
#include "registers.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1064 {
using EnableDomainId = ClockGateId;

struct EnableDomainDescriptor {
  EnableDomainId enable_domain_id;
  PeripheralId peripheral_id;
  ClockGateId clock_gate_id;
  ClockNodeId parent_clock_node_id;
  RegisterId register_id;
  FieldId field_id;
};
inline constexpr std::array<EnableDomainDescriptor, 17> kEnableDomains = {{
  {EnableDomainId::gate_gpio1, PeripheralId::GPIO1, ClockGateId::gate_gpio1, ClockNodeId::clock_node_ccm_ccgr1, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13},
  {EnableDomainId::gate_gpio2, PeripheralId::GPIO2, ClockGateId::gate_gpio2, ClockNodeId::clock_node_ccm_ccgr0, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15},
  {EnableDomainId::gate_gpio3, PeripheralId::GPIO3, ClockGateId::gate_gpio3, ClockNodeId::clock_node_ccm_ccgr2, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13},
  {EnableDomainId::gate_gpio4, PeripheralId::GPIO4, ClockGateId::gate_gpio4, ClockNodeId::clock_node_ccm_ccgr3, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13},
  {EnableDomainId::gate_gpio5, PeripheralId::GPIO5, ClockGateId::gate_gpio5, ClockNodeId::clock_node_ccm_ccgr1, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg15},
  {EnableDomainId::gate_lpspi1, PeripheralId::LPSPI1, ClockGateId::gate_lpspi1, ClockNodeId::clock_node_lpspi_root, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0},
  {EnableDomainId::gate_lpspi2, PeripheralId::LPSPI2, ClockGateId::gate_lpspi2, ClockNodeId::clock_node_ccm_ccgr1, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1},
  {EnableDomainId::gate_lpspi3, PeripheralId::LPSPI3, ClockGateId::gate_lpspi3, ClockNodeId::clock_node_ccm_ccgr1, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2},
  {EnableDomainId::gate_lpspi4, PeripheralId::LPSPI4, ClockGateId::gate_lpspi4, ClockNodeId::clock_node_ccm_ccgr1, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3},
  {EnableDomainId::gate_lpuart1, PeripheralId::LPUART1, ClockGateId::gate_lpuart1, ClockNodeId::clock_node_lpuart_root, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg12},
  {EnableDomainId::gate_lpuart2, PeripheralId::LPUART2, ClockGateId::gate_lpuart2, ClockNodeId::clock_node_ccm_ccgr0, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg14},
  {EnableDomainId::gate_lpuart3, PeripheralId::LPUART3, ClockGateId::gate_lpuart3, ClockNodeId::clock_node_ccm_ccgr0, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6},
  {EnableDomainId::gate_lpuart4, PeripheralId::LPUART4, ClockGateId::gate_lpuart4, ClockNodeId::clock_node_ccm_ccgr1, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg12},
  {EnableDomainId::gate_lpuart5, PeripheralId::LPUART5, ClockGateId::gate_lpuart5, ClockNodeId::clock_node_ccm_ccgr3, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg1},
  {EnableDomainId::gate_lpuart6, PeripheralId::LPUART6, ClockGateId::gate_lpuart6, ClockNodeId::clock_node_ccm_ccgr3, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg3},
  {EnableDomainId::gate_lpuart7, PeripheralId::LPUART7, ClockGateId::gate_lpuart7, ClockNodeId::clock_node_ccm_ccgr5, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg13},
  {EnableDomainId::gate_lpuart8, PeripheralId::LPUART8, ClockGateId::gate_lpuart8, ClockNodeId::clock_node_ccm_ccgr6, RegisterId::register_ccm_ccgr6, FieldId::field_ccm_ccgr6_cg7},
}};

template<EnableDomainId Id>
struct EnableDomainTraits {
  static constexpr bool kPresent = false;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::none;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<PeripheralId Id>
struct PeripheralEnableDomainTraits {
  static constexpr bool kPresent = false;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::none;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_gpio1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio1;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr1;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg13;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::GPIO1> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_gpio1;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_gpio2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio2;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr0;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr0;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr0_cg15;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::GPIO2> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_gpio2;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_gpio3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio3;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr2;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr2;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr2_cg13;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::GPIO3> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_gpio3;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_gpio4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio4;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr3;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr3;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr3_cg13;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::GPIO4> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_gpio4;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_gpio5> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO5;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio5;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr1;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg15;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::GPIO5> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_gpio5;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpspi1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI1;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi1;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_lpspi_root;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg0;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPSPI1> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpspi1;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpspi2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI2;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi2;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr1;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg1;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPSPI2> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpspi2;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpspi3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI3;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi3;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr1;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg2;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPSPI3> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpspi3;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpspi4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI4;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi4;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr1;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg3;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPSPI4> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpspi4;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpuart1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart1;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_lpuart_root;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr5;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr5_cg12;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPUART1> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpuart1;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpuart2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart2;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr0;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr0;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr0_cg14;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPUART2> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpuart2;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpuart3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART3;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart3;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr0;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr0;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr0_cg6;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPUART3> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpuart3;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpuart4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART4;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart4;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr1;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr1_cg12;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPUART4> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpuart4;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpuart5> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART5;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart5;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr3;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr3;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr3_cg1;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPUART5> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpuart5;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpuart6> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART6;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart6;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr3;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr3;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr3_cg3;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPUART6> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpuart6;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpuart7> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART7;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart7;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr5;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr5;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr5_cg13;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPUART7> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpuart7;
};

template<>
struct EnableDomainTraits<EnableDomainId::gate_lpuart8> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART8;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart8;
  static constexpr ClockNodeId kParentClockNodeId = ClockNodeId::clock_node_ccm_ccgr6;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr6;
  static constexpr FieldId kFieldId = FieldId::field_ccm_ccgr6_cg7;
};

template<>
struct PeripheralEnableDomainTraits<PeripheralId::LPUART8> {
  static constexpr bool kPresent = true;
  static constexpr EnableDomainId kEnableDomainId = EnableDomainId::gate_lpuart8;
};

}
}
}
}
}
}
