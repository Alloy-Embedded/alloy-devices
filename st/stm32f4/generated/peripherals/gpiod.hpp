#pragma once

#include <cstdint>
#include "../clock_tree_lite.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace peripherals {
struct PeripheralDescriptor {
  const char* device;
  const char* name;
  const char* backend_schema_id;
  std::uintptr_t base_address;
  ClockGateId clock_gate_id;
  ResetId reset_id;
};
inline constexpr PeripheralDescriptor kPeripheral = {
  "stm32f401re",
  "GPIOD",
  "alloy.gpio.st-gpio",
  0x40020C00u,
  ClockGateId::stm32f401re_gate_gpiod,
  ResetId::stm32f401re_reset_gpiod,
};
}
}
}
}
