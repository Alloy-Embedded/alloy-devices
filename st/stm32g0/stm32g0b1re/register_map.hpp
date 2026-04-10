#pragma once

#include <cstdint>

namespace st {
namespace stm32g0 {
namespace stm32g0b1re {
inline constexpr const char* kDevice = "stm32g0b1re";
struct PeripheralBase {
  const char* name;
  std::uintptr_t address;
};
inline constexpr PeripheralBase kPeripheralBases[] = {
  {"DMA1", 0x40020000u},
  {"FDCAN1", 0x4000A000u},
  {"GPIOA", 0x50000000u},
  {"GPIOB", 0x50000400u},
  {"RCC", 0x40021000u},
};
}
}
}
