#pragma once

namespace st {
namespace stm32g0 {
namespace stm32g0b1re {
struct PinFunctionDescriptor {
  const char* pin_name;
  const char* function;
  const char* peripheral;
  const char* signal;
  int af_number;
};
inline constexpr PinFunctionDescriptor kPinFunctions[] = {
  {"PA11", "gpio", "GPIOA", "IN11", -1},
  {"PA11", "fdcan1_rx", "FDCAN1", "RX", 3},
  {"PA12", "gpio", "GPIOA", "IN12", -1},
  {"PA12", "fdcan1_tx", "FDCAN1", "TX", 3},
  {"PB8", "gpio", "GPIOB", "IN8", -1},
};
}
}
}
