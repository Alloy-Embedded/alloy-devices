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
  "GPIOA",
  0x40020000u,
  "RCC_AHB1ENR.GPIOAEN",
  "RCC_AHB1RSTR.GPIOARST",
};
}
}
}
}
