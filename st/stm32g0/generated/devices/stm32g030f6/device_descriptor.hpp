#pragma once

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
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
  "stm32g0",
  "stm32g030f6",
  "tssop20",
  "cortex-m0plus",
  "Low-pin-count bootstrap device.",
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
