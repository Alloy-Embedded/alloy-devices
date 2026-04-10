#pragma once

#include <cstdint>

namespace st {
namespace stm32g0 {
namespace stm32g030f6 {
inline constexpr const char* kDevice = "stm32g030f6";
struct PeripheralBase {
  const char* name;
  std::uintptr_t address;
};
inline constexpr PeripheralBase kPeripheralBases[] = {
  {"DMA1", 0x40020000u},
  {"GPIOA", 0x50000000u},
  {"RCC", 0x40021000u},
  {"USART2", 0x40004400u},
};
}
}
}
