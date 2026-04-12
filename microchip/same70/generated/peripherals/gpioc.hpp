#pragma once

#include <cstdint>
#include "../clock_tree_lite.hpp"

namespace microchip {
namespace same70 {
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
  "atsame70q21b",
  "GPIOC",
  "alloy.gpio.microchip-pio-v",
  0x400E1200u,
  ClockGateId::atsame70q21b_gate_gpioc,
  ResetId::none,
};
}
}
}
}
