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
  "dacc",
  "dacc_e",
  "dacc",
  "alloy.dacc.microchip-dacc-e",
  "dacc:dacc_e",
  "dac0,dac1,datrg",
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
  {"capability:dacc:dacc-e:dac0", "ip-block", "dacc", "signal-role", "dac0", "dacc", "dacc_e", nullptr, nullptr},
  {"capability:dacc:dacc-e:dac1", "ip-block", "dacc", "signal-role", "dac1", "dacc", "dacc_e", nullptr, nullptr},
  {"capability:dacc:dacc-e:datrg", "ip-block", "dacc", "signal-role", "datrg", "dacc", "dacc_e", nullptr, nullptr},
}};
}
}
}
}
