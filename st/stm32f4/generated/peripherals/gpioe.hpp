#pragma once

#include <cstdint>

namespace st {
namespace stm32f4 {
namespace generated {
namespace peripherals {
struct PeripheralDescriptor {
  const char* name;
  std::uintptr_t base_address;
  const char* rcc_enable_signal;
  const char* rcc_reset_signal;
};
inline constexpr PeripheralDescriptor kPeripheral = {
  "GPIOE",
  0x40021000u,
  nullptr,
  nullptr,
};
}
}
}
}
