#pragma once

#include "../../runtime_refs.hpp"
#include "../../runtime_semantics.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
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
  PackageRefId::stm32g030f6_tssop20,
  CoreId::core_cortex_m0plus,
  17,
  32,
  25,
  2,
  31,
  6,
};
}
}
}
}
}
