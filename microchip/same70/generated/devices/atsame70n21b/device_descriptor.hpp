#pragma once

namespace microchip {
namespace same70 {
namespace generated {
namespace devices {
namespace atsame70n21b {
struct DeviceDescriptor {
  const char* vendor;
  const char* family;
  const char* device;
  const char* package_name;
  const char* core;
  const char* summary;
  int pin_count;
  int peripheral_count;
  int interrupt_count;
  int memory_region_count;
  int capability_overlay_count;
  int startup_descriptor_count;
};
inline constexpr DeviceDescriptor kDeviceDescriptor = {
  "microchip",
  "same70",
  "atsame70n21b",
  "lqfp100",
  "cortex-m7f",
  "Second SAME70 package variant used to validate package-sensitive normalization.",
  72,
  63,
  65,
  9,
  195,
  12,
};
}
}
}
}
}
