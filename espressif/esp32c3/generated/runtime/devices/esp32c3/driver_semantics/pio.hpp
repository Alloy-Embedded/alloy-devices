#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"

namespace espressif {
namespace esp32c3 {
namespace generated {
namespace runtime {
namespace devices {
namespace esp32c3 {
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
