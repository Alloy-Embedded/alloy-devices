#pragma once

#include <array>

namespace microchip {
namespace same70 {
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
  "tc",
  "tc_zl",
  "timer",
  "alloy.timer.microchip-tc-zl",
  "tc:tc_zl",
  "tclk0,tclk1,tclk11,tioa0,tioa1,tioa11,tioa2,tiob0,tiob1,tiob11,tiob2",
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
inline constexpr std::array<CapabilityDescriptor, 11> kCapabilities = {{
  {"capability:tc:tc-zl:tclk0", "ip-block", "timer", "signal-role", "tclk0", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tclk1", "ip-block", "timer", "signal-role", "tclk1", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tclk11", "ip-block", "timer", "signal-role", "tclk11", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tioa0", "ip-block", "timer", "signal-role", "tioa0", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tioa1", "ip-block", "timer", "signal-role", "tioa1", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tioa11", "ip-block", "timer", "signal-role", "tioa11", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tioa2", "ip-block", "timer", "signal-role", "tioa2", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tiob0", "ip-block", "timer", "signal-role", "tiob0", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tiob1", "ip-block", "timer", "signal-role", "tiob1", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tiob11", "ip-block", "timer", "signal-role", "tiob11", "tc", "tc_zl", nullptr, nullptr},
  {"capability:tc:tc-zl:tiob2", "ip-block", "timer", "signal-role", "tiob2", "tc", "tc_zl", nullptr, nullptr},
}};
}
}
}
}
