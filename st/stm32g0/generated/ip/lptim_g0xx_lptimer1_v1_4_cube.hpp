#pragma once

#include <array>

namespace st {
namespace stm32g0 {
namespace generated {
namespace ip {
struct IpBlockDescriptor {
  const char* ip_name;
  const char* ip_version;
  const char* peripheral_class;
  const char* register_profile;
  const char* signal_roles;
};
inline constexpr IpBlockDescriptor kIpBlock = {
  "lptim",
  "G0xx_lptimer1_v1_4_Cube",
  "lptim",
  "lptim:G0xx_lptimer1_v1_4_Cube",
  "etr,in1,in2,out",
};

struct CapabilityDescriptor {
  const char* capability_id;
  const char* scope;
  const char* peripheral_class;
  const char* name;
  const char* value;
  const char* ip_name;
  const char* ip_version;
  const char* peripheral;
  const char* package;
};
inline constexpr std::array<CapabilityDescriptor, 4> kCapabilities = {{
  {"capability:lptim:g0xx-lptimer1-v1-4-cube:etr", "ip-block", "lptim", "signal-role", "etr", "lptim", "G0xx_lptimer1_v1_4_Cube", nullptr, nullptr},
  {"capability:lptim:g0xx-lptimer1-v1-4-cube:in1", "ip-block", "lptim", "signal-role", "in1", "lptim", "G0xx_lptimer1_v1_4_Cube", nullptr, nullptr},
  {"capability:lptim:g0xx-lptimer1-v1-4-cube:in2", "ip-block", "lptim", "signal-role", "in2", "lptim", "G0xx_lptimer1_v1_4_Cube", nullptr, nullptr},
  {"capability:lptim:g0xx-lptimer1-v1-4-cube:out", "ip-block", "lptim", "signal-role", "out", "lptim", "G0xx_lptimer1_v1_4_Cube", nullptr, nullptr},
}};
}
}
}
}
