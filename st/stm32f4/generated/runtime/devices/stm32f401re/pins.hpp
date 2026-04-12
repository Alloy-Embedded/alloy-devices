#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f401re {
enum class PinId : std::uint16_t {
  none,
  PA0,
  PA1,
  PA10,
  PA11,
  PA12,
  PA13,
  PA14,
  PA15,
  PA2,
  PA3,
  PA4,
  PA5,
  PA6,
  PA7,
  PA8,
  PA9,
  PB0,
  PB1,
  PB10,
  PB12,
  PB13,
  PB14,
  PB15,
  PB2,
  PB3,
  PB4,
  PB5,
  PB6,
  PB7,
  PB8,
  PB9,
  PC0,
  PC1,
  PC10,
  PC11,
  PC12,
  PC13,
  PC14,
  PC15,
  PC2,
  PC3,
  PC4,
  PC5,
  PC6,
  PC7,
  PC8,
  PC9,
  PD2,
  PH0,
  PH1,
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
struct PinTraits<PinId::PA10> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 10;
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
struct PinTraits<PinId::PA15> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 15;
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
struct PinTraits<PinId::PA8> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 8;
};

template<>
struct PinTraits<PinId::PA9> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_A;
  static constexpr int kPinNumber = 9;
};

template<>
struct PinTraits<PinId::PB0> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::PB1> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::PB10> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 10;
};

template<>
struct PinTraits<PinId::PB12> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 12;
};

template<>
struct PinTraits<PinId::PB13> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 13;
};

template<>
struct PinTraits<PinId::PB14> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 14;
};

template<>
struct PinTraits<PinId::PB15> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 15;
};

template<>
struct PinTraits<PinId::PB2> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::PB3> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::PB4> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::PB5> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::PB6> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 6;
};

template<>
struct PinTraits<PinId::PB7> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::PB8> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 8;
};

template<>
struct PinTraits<PinId::PB9> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_B;
  static constexpr int kPinNumber = 9;
};

template<>
struct PinTraits<PinId::PC0> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::PC1> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::PC10> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 10;
};

template<>
struct PinTraits<PinId::PC11> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 11;
};

template<>
struct PinTraits<PinId::PC12> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 12;
};

template<>
struct PinTraits<PinId::PC13> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 13;
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

template<>
struct PinTraits<PinId::PC2> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::PC3> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::PC4> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::PC5> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::PC6> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 6;
};

template<>
struct PinTraits<PinId::PC7> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::PC8> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 8;
};

template<>
struct PinTraits<PinId::PC9> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_C;
  static constexpr int kPinNumber = 9;
};

template<>
struct PinTraits<PinId::PD2> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_D;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::PH0> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_H;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::PH1> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::port_H;
  static constexpr int kPinNumber = 1;
};

inline constexpr std::array<PinId, 50> kPins = {{
  PinId::PA0,
  PinId::PA1,
  PinId::PA10,
  PinId::PA11,
  PinId::PA12,
  PinId::PA13,
  PinId::PA14,
  PinId::PA15,
  PinId::PA2,
  PinId::PA3,
  PinId::PA4,
  PinId::PA5,
  PinId::PA6,
  PinId::PA7,
  PinId::PA8,
  PinId::PA9,
  PinId::PB0,
  PinId::PB1,
  PinId::PB10,
  PinId::PB12,
  PinId::PB13,
  PinId::PB14,
  PinId::PB15,
  PinId::PB2,
  PinId::PB3,
  PinId::PB4,
  PinId::PB5,
  PinId::PB6,
  PinId::PB7,
  PinId::PB8,
  PinId::PB9,
  PinId::PC0,
  PinId::PC1,
  PinId::PC10,
  PinId::PC11,
  PinId::PC12,
  PinId::PC13,
  PinId::PC14,
  PinId::PC15,
  PinId::PC2,
  PinId::PC3,
  PinId::PC4,
  PinId::PC5,
  PinId::PC6,
  PinId::PC7,
  PinId::PC8,
  PinId::PC9,
  PinId::PD2,
  PinId::PH0,
  PinId::PH1,
}};
}
}
}
}
}
}
