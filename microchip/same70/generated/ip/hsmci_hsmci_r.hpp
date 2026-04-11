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
  "hsmci",
  "hsmci_r",
  "hsmci",
  "alloy.hsmci.microchip-hsmci-r",
  "hsmci:hsmci_r",
  "mccda,mcck,mcda0,mcda1,mcda2,mcda3",
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
inline constexpr std::array<CapabilityDescriptor, 6> kCapabilities = {{
  {"capability:hsmci:hsmci-r:mccda", "ip-block", "hsmci", "signal-role", "mccda", "hsmci", "hsmci_r", nullptr, nullptr},
  {"capability:hsmci:hsmci-r:mcck", "ip-block", "hsmci", "signal-role", "mcck", "hsmci", "hsmci_r", nullptr, nullptr},
  {"capability:hsmci:hsmci-r:mcda0", "ip-block", "hsmci", "signal-role", "mcda0", "hsmci", "hsmci_r", nullptr, nullptr},
  {"capability:hsmci:hsmci-r:mcda1", "ip-block", "hsmci", "signal-role", "mcda1", "hsmci", "hsmci_r", nullptr, nullptr},
  {"capability:hsmci:hsmci-r:mcda2", "ip-block", "hsmci", "signal-role", "mcda2", "hsmci", "hsmci_r", nullptr, nullptr},
  {"capability:hsmci:hsmci-r:mcda3", "ip-block", "hsmci", "signal-role", "mcda3", "hsmci", "hsmci_r", nullptr, nullptr},
}};
}
}
}
}
