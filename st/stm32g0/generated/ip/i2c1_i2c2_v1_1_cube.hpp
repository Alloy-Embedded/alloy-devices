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
  const char* backend_schema_id;
  const char* register_profile;
  const char* signal_roles;
};
inline constexpr IpBlockDescriptor kIpBlock = {
  "i2c1",
  "i2c2_v1_1_Cube",
  "i2c1",
  "alloy.i2c1.st-i2c2-v1-1-cube",
  "i2c1:i2c2_v1_1_Cube",
  "sda,smba",
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
  {"capability:i2c1:i2c2-v1-1-cube:sda", "ip-block", "i2c1", "signal-role", "sda", "i2c1", "i2c2_v1_1_Cube", nullptr, nullptr},
  {"capability:i2c1:i2c2-v1-1-cube:smba", "ip-block", "i2c1", "signal-role", "smba", "i2c1", "i2c2_v1_1_Cube", nullptr, nullptr},
}};
}
}
}
}
