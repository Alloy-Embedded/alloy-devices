#pragma once

#include <cstdint>

namespace st {
namespace stm32g0 {
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
  0x50000800u,
  "RCC_IOPENR.GPIOCEN",
  "RCC_IOPRSTR.GPIOCRST",
};
}
}
}
}
