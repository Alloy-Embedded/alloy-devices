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
  "ucpd",
  "ucpd_v1_0_Cube",
  "ucpd",
  "ucpd:ucpd_v1_0_Cube",
  "frstx1,frstx2",
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
inline constexpr std::array<CapabilityDescriptor, 2> kCapabilities = {{
  {"capability:ucpd:ucpd-v1-0-cube:frstx1", "ip-block", "ucpd", "signal-role", "frstx1", "ucpd", "ucpd_v1_0_Cube", nullptr, nullptr},
  {"capability:ucpd:ucpd-v1-0-cube:frstx2", "ip-block", "ucpd", "signal-role", "frstx2", "ucpd", "ucpd_v1_0_Cube", nullptr, nullptr},
}};
}
}
}
}
