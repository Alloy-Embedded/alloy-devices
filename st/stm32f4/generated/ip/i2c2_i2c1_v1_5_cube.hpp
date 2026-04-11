#pragma once

#include <array>

namespace st {
namespace stm32f4 {
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
  "i2c2",
  "i2c1_v1_5_Cube",
  "i2c2",
  "i2c2:i2c1_v1_5_Cube",
  "scl,sda,smba",
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
inline constexpr std::array<CapabilityDescriptor, 3> kCapabilities = {{
  {"capability:i2c2:i2c1-v1-5-cube:scl", "ip-block", "i2c2", "signal-role", "scl", "i2c2", "i2c1_v1_5_Cube", nullptr, nullptr},
  {"capability:i2c2:i2c1-v1-5-cube:sda", "ip-block", "i2c2", "signal-role", "sda", "i2c2", "i2c1_v1_5_Cube", nullptr, nullptr},
  {"capability:i2c2:i2c1-v1-5-cube:smba", "ip-block", "i2c2", "signal-role", "smba", "i2c2", "i2c1_v1_5_Cube", nullptr, nullptr},
}};
}
}
}
}
