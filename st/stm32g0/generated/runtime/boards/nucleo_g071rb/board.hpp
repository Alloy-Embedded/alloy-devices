#pragma once

#include "../../devices/stm32g071rb/pins.hpp"
#include "../../devices/stm32g071rb/peripheral_instances.hpp"
#include "../../devices/stm32g071rb/driver_semantics/gpio.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace boards {
namespace nucleo_g071rb {
struct Buttons {
  static constexpr PinId kUser = PinId::PB7;
  static constexpr bool kUserActiveHigh = false;
};

struct DebugUart {
  static constexpr PeripheralId kPeripheral = PeripheralId::USART2;
  static constexpr PinId kTx = PinId::PA2;
  static constexpr bool kTxActiveHigh = true;
  // UART_DBG_TX signal = TX
  static constexpr PinId kRx = PinId::PA3;
  static constexpr bool kRxActiveHigh = true;
  // UART_DBG_RX signal = RX
};

struct Leds {
  static constexpr PinId kGreen = PinId::PA5;
  static constexpr bool kGreenActiveHigh = true;
};

// Default clock profile: performance-pll-64mhz
// (consumer wires this via clock_profiles header)
}
}
}
}
}
}

static_assert(::st::stm32g0::generated::runtime::devices::stm32g071rb::driver_semantics::GpioSemanticTraits<PinId::PB7>::kPresent, "board pin BUTTON_USER (PB7) not present on stm32g071rb");
static_assert(::st::stm32g0::generated::runtime::devices::stm32g071rb::driver_semantics::GpioSemanticTraits<PinId::PA2>::kPresent, "board pin UART_DBG_TX (PA2) not present on stm32g071rb");
static_assert(::st::stm32g0::generated::runtime::devices::stm32g071rb::driver_semantics::GpioSemanticTraits<PinId::PA3>::kPresent, "board pin UART_DBG_RX (PA3) not present on stm32g071rb");
static_assert(::st::stm32g0::generated::runtime::devices::stm32g071rb::driver_semantics::GpioSemanticTraits<PinId::PA5>::kPresent, "board pin LED_GREEN (PA5) not present on stm32g071rb");
