#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g030f6 {
enum class PinId : std::uint16_t {
  none,
  PA0,
  PA1,
  PA11,
  PA12,
  PA13,
  PA14,
  PA2,
  PA3,
  PA4,
  PA5,
  PA6,
  PA7,
  PB0,
  PB3,
  PB7,
  PC14,
  PC15,
};

template<PinId Id>
struct PinTraits {
  static constexpr bool kPresent = false;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = -1;
};

template<>
struct PinTraits<PinId::PA0> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::PA1> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::PA11> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 11;
};

template<>
struct PinTraits<PinId::PA12> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 12;
};

template<>
struct PinTraits<PinId::PA13> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 13;
};

template<>
struct PinTraits<PinId::PA14> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 14;
};

template<>
struct PinTraits<PinId::PA2> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::PA3> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::PA4> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::PA5> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::PA6> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 6;
};

template<>
struct PinTraits<PinId::PA7> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::PB0> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::PB3> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::PB7> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::PC14> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 14;
};

template<>
struct PinTraits<PinId::PC15> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 15;
};

inline constexpr std::array<PinId, 17> kPins = {{
  PinId::PA0,
  PinId::PA1,
  PinId::PA11,
  PinId::PA12,
  PinId::PA13,
  PinId::PA14,
  PinId::PA2,
  PinId::PA3,
  PinId::PA4,
  PinId::PA5,
  PinId::PA6,
  PinId::PA7,
  PinId::PB0,
  PinId::PB3,
  PinId::PB7,
  PinId::PC14,
  PinId::PC15,
}};
}
}
}
}
}
}
