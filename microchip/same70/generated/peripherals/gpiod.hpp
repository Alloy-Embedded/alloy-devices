#pragma once

#include <cstdint>
#include "../clock_tree_lite.hpp"
#include "../runtime_semantics.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace peripherals {
struct PeripheralDescriptor {
  PeripheralClassId peripheral_class_id;
  BackendSchemaId schema_id;
  std::uintptr_t base_address;
  ClockGateId clock_gate_id;
  ResetId reset_id;
};
inline constexpr PeripheralDescriptor kPeripheral = {
  PeripheralClassId::class_gpio,
  BackendSchemaId::schema_alloy_gpio_microchip_pio_v,
  0x400E1400u,
  ClockGateId::atsame70n21b_gate_gpiod,
  ResetId::none,
};
}
}
}
}
