#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f405rg {
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
