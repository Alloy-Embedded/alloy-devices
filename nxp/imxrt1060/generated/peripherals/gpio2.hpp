#pragma once

#include <cstdint>

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace peripherals {
struct PeripheralDescriptor {
  const char* name;
  std::uintptr_t base_address;
  const char* rcc_enable_signal;
  const char* rcc_reset_signal;
};
inline constexpr PeripheralDescriptor kPeripheral = {
  "GPIO2",
  0x401BC000u,
  "CCM_CCGR0.CG15",
  nullptr,
};
}
}
}
}
