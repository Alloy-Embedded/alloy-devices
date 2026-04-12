#pragma once

#include "../../runtime_refs.hpp"
#include "../../runtime_semantics.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace devices {
namespace atsame70q21b {
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
  PackageRefId::atsame70q21b_lqfp144,
  CoreId::core_cortex_m7f,
  114,
  68,
  69,
  13,
  243,
  12,
};
}
}
}
}
}
