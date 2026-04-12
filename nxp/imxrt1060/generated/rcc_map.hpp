#pragma once

#include "runtime_refs.hpp"
#include "clock_tree_lite.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
struct RccDescriptor {
  DeviceRefId device_id;
  PeripheralRefId peripheral_id;
  ClockGateId gate_id;
  ResetId reset_id;
};
inline constexpr RccDescriptor kRccMap[] = {
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_FLEXSPI, ClockGateId::mimxrt1062_gate_flexspi, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_FLEXSPI2, ClockGateId::mimxrt1062_gate_flexspi2, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_GPIO1, ClockGateId::mimxrt1062_gate_gpio1, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_GPIO2, ClockGateId::mimxrt1062_gate_gpio2, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_GPIO3, ClockGateId::mimxrt1062_gate_gpio3, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_GPIO4, ClockGateId::mimxrt1062_gate_gpio4, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_GPIO5, ClockGateId::mimxrt1062_gate_gpio5, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPI2C1, ClockGateId::mimxrt1062_gate_lpi2c1, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPI2C2, ClockGateId::mimxrt1062_gate_lpi2c2, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPI2C3, ClockGateId::mimxrt1062_gate_lpi2c3, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPI2C4, ClockGateId::mimxrt1062_gate_lpi2c4, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPSPI1, ClockGateId::mimxrt1062_gate_lpspi1, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPSPI2, ClockGateId::mimxrt1062_gate_lpspi2, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPSPI3, ClockGateId::mimxrt1062_gate_lpspi3, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPSPI4, ClockGateId::mimxrt1062_gate_lpspi4, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPUART1, ClockGateId::mimxrt1062_gate_lpuart1, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPUART2, ClockGateId::mimxrt1062_gate_lpuart2, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPUART3, ClockGateId::mimxrt1062_gate_lpuart3, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPUART4, ClockGateId::mimxrt1062_gate_lpuart4, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPUART5, ClockGateId::mimxrt1062_gate_lpuart5, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPUART6, ClockGateId::mimxrt1062_gate_lpuart6, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPUART7, ClockGateId::mimxrt1062_gate_lpuart7, ResetId::none},
  {DeviceRefId::mimxrt1062, PeripheralRefId::mimxrt1062_LPUART8, ClockGateId::mimxrt1062_gate_lpuart8, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_FLEXSPI, ClockGateId::mimxrt1064_gate_flexspi, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_FLEXSPI2, ClockGateId::mimxrt1064_gate_flexspi2, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_GPIO1, ClockGateId::mimxrt1064_gate_gpio1, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_GPIO2, ClockGateId::mimxrt1064_gate_gpio2, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_GPIO3, ClockGateId::mimxrt1064_gate_gpio3, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_GPIO4, ClockGateId::mimxrt1064_gate_gpio4, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_GPIO5, ClockGateId::mimxrt1064_gate_gpio5, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPI2C1, ClockGateId::mimxrt1064_gate_lpi2c1, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPI2C2, ClockGateId::mimxrt1064_gate_lpi2c2, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPI2C3, ClockGateId::mimxrt1064_gate_lpi2c3, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPI2C4, ClockGateId::mimxrt1064_gate_lpi2c4, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPSPI1, ClockGateId::mimxrt1064_gate_lpspi1, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPSPI2, ClockGateId::mimxrt1064_gate_lpspi2, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPSPI3, ClockGateId::mimxrt1064_gate_lpspi3, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPSPI4, ClockGateId::mimxrt1064_gate_lpspi4, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPUART1, ClockGateId::mimxrt1064_gate_lpuart1, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPUART2, ClockGateId::mimxrt1064_gate_lpuart2, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPUART3, ClockGateId::mimxrt1064_gate_lpuart3, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPUART4, ClockGateId::mimxrt1064_gate_lpuart4, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPUART5, ClockGateId::mimxrt1064_gate_lpuart5, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPUART6, ClockGateId::mimxrt1064_gate_lpuart6, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPUART7, ClockGateId::mimxrt1064_gate_lpuart7, ResetId::none},
  {DeviceRefId::mimxrt1064, PeripheralRefId::mimxrt1064_LPUART8, ClockGateId::mimxrt1064_gate_lpuart8, ResetId::none},
};
}
}
}
