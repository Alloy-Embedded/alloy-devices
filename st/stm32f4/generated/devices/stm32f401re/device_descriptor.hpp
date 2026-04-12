#pragma once

#include "../../runtime_refs.hpp"
#include "../../runtime_semantics.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f401re {
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
  PackageRefId::stm32f401re_lqfp64,
  CoreId::core_cortex_m4f,
  50,
  54,
  34,
  2,
  49,
  6,
};
}
}
}
}
}
