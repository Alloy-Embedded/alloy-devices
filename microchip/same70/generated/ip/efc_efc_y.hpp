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
  "efc",
  "efc_y",
  "efc",
  "alloy.efc.microchip-efc-y",
  "efc:efc_y",
  "erase",
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
inline constexpr std::array<CapabilityDescriptor, 1> kCapabilities = {{
  {"capability:efc:efc-y:erase", "ip-block", "efc", "signal-role", "erase", "efc", "efc_y", nullptr, nullptr},
}};
}
}
}
}
