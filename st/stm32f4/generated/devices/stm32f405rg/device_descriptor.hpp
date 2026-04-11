#pragma once

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f405rg {
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
  "stm32f405rg",
  "lqfp64",
  "cortex-m4f",
  "Representative higher-feature F4 device with USB OTG.",
  51,
  91,
  83,
  2,
  49,
  6,
};
}
}
}
}
}
