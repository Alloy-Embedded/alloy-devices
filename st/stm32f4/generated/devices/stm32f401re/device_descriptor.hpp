#pragma once

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f401re {
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
  "st",
  "stm32f4",
  "stm32f401re",
  "lqfp64",
  "cortex-m4f",
  "Representative low-cost entry-level F4 device.",
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
