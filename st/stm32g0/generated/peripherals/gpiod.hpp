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
  "GPIOD",
  0x50000C00u,
  "RCC_IOPENR.GPIODEN",
  "RCC_IOPRSTR.GPIODRST",
};
}
}
}
}
