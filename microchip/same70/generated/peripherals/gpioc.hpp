#pragma once

#include <cstdint>

namespace microchip {
namespace same70 {
namespace generated {
namespace peripherals {
struct PeripheralDescriptor {
  const char* name;
  std::uintptr_t base_address;
  const char* rcc_enable_signal;
  const char* rcc_reset_signal;
};
inline constexpr PeripheralDescriptor kPeripheral = {
  "GPIOC",
  0x400E1200u,
  "PMC.PID12",
  nullptr,
};
}
}
}
}
