// Generated startup metadata bootstrap unit.
#include <cstdint>

namespace st {
namespace stm32g0 {
namespace stm32g0b1re {
struct InterruptDescriptor {
  const char* name;
  int line;
  const char* peripheral;
};
inline constexpr InterruptDescriptor kInterruptTable[] = {
  {"RCC_CRS", 4, "RCC"},
  {"DMA1_Channel1", 9, "DMA1"},
  {"FDCAN1_IT0", 19, "FDCAN1"},
};
}
}
}
