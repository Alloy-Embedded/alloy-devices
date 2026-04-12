#pragma once

#include "../../runtime_refs.hpp"
#include "../../runtime_semantics.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g0b1re {
struct DeviceDescriptor {
  PackageRefId package_id;
  CoreId core_id;
  int pin_count;
  int peripheral_count;
  int interrupt_count;
  int memory_region_count;
  int capability_overlay_count;
  int startup_descriptor_count;
};
inline constexpr DeviceDescriptor kDeviceDescriptor = {
  PackageRefId::stm32g0b1re_lqfp64,
  CoreId::core_cortex_m0plus,
  60,
  55,
  31,
  2,
  121,
  6,
};
}
}
}
}
}
