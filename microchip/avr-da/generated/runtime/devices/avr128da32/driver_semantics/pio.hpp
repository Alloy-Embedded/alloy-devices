#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"

namespace microchip {
namespace avr_da {
namespace generated {
namespace runtime {
namespace devices {
namespace avr128da32 {
namespace driver_semantics {
template<PeripheralId Id>
struct PioSemanticTraits {
  static constexpr bool kPresent = false;
};

inline constexpr std::array<PeripheralId, 0> kPioSemanticPeripherals = {};
}
}
}
}
}
}
}
