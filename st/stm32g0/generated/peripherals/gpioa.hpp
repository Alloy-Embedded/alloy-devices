#pragma once

#include <cstdint>
#include "../clock_tree_lite.hpp"

namespace st {
namespace stm32g0 {
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
  "stm32g030f6",
  "GPIOA",
  "alloy.gpio.st-gpio",
  0x50000000u,
  ClockGateId::stm32g030f6_gate_gpioa,
  ResetId::stm32g030f6_reset_gpioa,
};
}
}
}
}
