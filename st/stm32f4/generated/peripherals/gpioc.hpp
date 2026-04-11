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
  "GPIOC",
  0x40020800u,
  "RCC_AHB1ENR.GPIOCEN",
  "RCC_AHB1RSTR.GPIOCRST",
};
}
}
}
}
