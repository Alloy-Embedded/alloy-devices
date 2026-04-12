#pragma once

#include "clock_tree_lite.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
struct RccDescriptor {
  const char* device;
  const char* peripheral;
  ClockGateId gate_id;
  ResetId reset_id;
};
inline constexpr RccDescriptor kRccMap[] = {
  {"mimxrt1062", "FLEXSPI", ClockGateId::mimxrt1062_gate_flexspi, ResetId::none},
  {"mimxrt1062", "FLEXSPI2", ClockGateId::mimxrt1062_gate_flexspi2, ResetId::none},
  {"mimxrt1062", "GPIO1", ClockGateId::mimxrt1062_gate_gpio1, ResetId::none},
  {"mimxrt1062", "GPIO2", ClockGateId::mimxrt1062_gate_gpio2, ResetId::none},
  {"mimxrt1062", "GPIO3", ClockGateId::mimxrt1062_gate_gpio3, ResetId::none},
  {"mimxrt1062", "GPIO4", ClockGateId::mimxrt1062_gate_gpio4, ResetId::none},
  {"mimxrt1062", "GPIO5", ClockGateId::mimxrt1062_gate_gpio5, ResetId::none},
  {"mimxrt1062", "LPI2C1", ClockGateId::mimxrt1062_gate_lpi2c1, ResetId::none},
  {"mimxrt1062", "LPI2C2", ClockGateId::mimxrt1062_gate_lpi2c2, ResetId::none},
  {"mimxrt1062", "LPI2C3", ClockGateId::mimxrt1062_gate_lpi2c3, ResetId::none},
  {"mimxrt1062", "LPI2C4", ClockGateId::mimxrt1062_gate_lpi2c4, ResetId::none},
  {"mimxrt1062", "LPSPI1", ClockGateId::mimxrt1062_gate_lpspi1, ResetId::none},
  {"mimxrt1062", "LPSPI2", ClockGateId::mimxrt1062_gate_lpspi2, ResetId::none},
  {"mimxrt1062", "LPSPI3", ClockGateId::mimxrt1062_gate_lpspi3, ResetId::none},
  {"mimxrt1062", "LPSPI4", ClockGateId::mimxrt1062_gate_lpspi4, ResetId::none},
  {"mimxrt1062", "LPUART1", ClockGateId::mimxrt1062_gate_lpuart1, ResetId::none},
  {"mimxrt1062", "LPUART2", ClockGateId::mimxrt1062_gate_lpuart2, ResetId::none},
  {"mimxrt1062", "LPUART3", ClockGateId::mimxrt1062_gate_lpuart3, ResetId::none},
  {"mimxrt1062", "LPUART4", ClockGateId::mimxrt1062_gate_lpuart4, ResetId::none},
  {"mimxrt1062", "LPUART5", ClockGateId::mimxrt1062_gate_lpuart5, ResetId::none},
  {"mimxrt1062", "LPUART6", ClockGateId::mimxrt1062_gate_lpuart6, ResetId::none},
  {"mimxrt1062", "LPUART7", ClockGateId::mimxrt1062_gate_lpuart7, ResetId::none},
  {"mimxrt1062", "LPUART8", ClockGateId::mimxrt1062_gate_lpuart8, ResetId::none},
  {"mimxrt1064", "FLEXSPI", ClockGateId::mimxrt1064_gate_flexspi, ResetId::none},
  {"mimxrt1064", "FLEXSPI2", ClockGateId::mimxrt1064_gate_flexspi2, ResetId::none},
  {"mimxrt1064", "GPIO1", ClockGateId::mimxrt1064_gate_gpio1, ResetId::none},
  {"mimxrt1064", "GPIO2", ClockGateId::mimxrt1064_gate_gpio2, ResetId::none},
  {"mimxrt1064", "GPIO3", ClockGateId::mimxrt1064_gate_gpio3, ResetId::none},
  {"mimxrt1064", "GPIO4", ClockGateId::mimxrt1064_gate_gpio4, ResetId::none},
  {"mimxrt1064", "GPIO5", ClockGateId::mimxrt1064_gate_gpio5, ResetId::none},
  {"mimxrt1064", "LPI2C1", ClockGateId::mimxrt1064_gate_lpi2c1, ResetId::none},
  {"mimxrt1064", "LPI2C2", ClockGateId::mimxrt1064_gate_lpi2c2, ResetId::none},
  {"mimxrt1064", "LPI2C3", ClockGateId::mimxrt1064_gate_lpi2c3, ResetId::none},
  {"mimxrt1064", "LPI2C4", ClockGateId::mimxrt1064_gate_lpi2c4, ResetId::none},
  {"mimxrt1064", "LPSPI1", ClockGateId::mimxrt1064_gate_lpspi1, ResetId::none},
  {"mimxrt1064", "LPSPI2", ClockGateId::mimxrt1064_gate_lpspi2, ResetId::none},
  {"mimxrt1064", "LPSPI3", ClockGateId::mimxrt1064_gate_lpspi3, ResetId::none},
  {"mimxrt1064", "LPSPI4", ClockGateId::mimxrt1064_gate_lpspi4, ResetId::none},
  {"mimxrt1064", "LPUART1", ClockGateId::mimxrt1064_gate_lpuart1, ResetId::none},
  {"mimxrt1064", "LPUART2", ClockGateId::mimxrt1064_gate_lpuart2, ResetId::none},
  {"mimxrt1064", "LPUART3", ClockGateId::mimxrt1064_gate_lpuart3, ResetId::none},
  {"mimxrt1064", "LPUART4", ClockGateId::mimxrt1064_gate_lpuart4, ResetId::none},
  {"mimxrt1064", "LPUART5", ClockGateId::mimxrt1064_gate_lpuart5, ResetId::none},
  {"mimxrt1064", "LPUART6", ClockGateId::mimxrt1064_gate_lpuart6, ResetId::none},
  {"mimxrt1064", "LPUART7", ClockGateId::mimxrt1064_gate_lpuart7, ResetId::none},
  {"mimxrt1064", "LPUART8", ClockGateId::mimxrt1064_gate_lpuart8, ResetId::none},
};
}
}
}
