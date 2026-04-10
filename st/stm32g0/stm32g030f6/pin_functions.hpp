#pragma once

namespace st {
namespace stm32g0 {
namespace stm32g030f6 {
struct PinFunctionDescriptor {
  const char* pin_name;
  const char* function;
  const char* peripheral;
  const char* signal;
  int af_number;
};
inline constexpr PinFunctionDescriptor kPinFunctions[] = {
  {"PA0", "gpio", "GPIOA", "IN0", -1},
  {"PA2", "gpio", "GPIOA", "IN2", -1},
  {"PA2", "usart2_tx", "USART2", "TX", 1},
  {"PA3", "gpio", "GPIOA", "IN3", -1},
  {"PA3", "usart2_rx", "USART2", "RX", 1},
};
}
}
}
