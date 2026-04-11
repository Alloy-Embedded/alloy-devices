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
  "mcan",
  "mcan_n",
  "can",
  "alloy.can.microchip-mcan-n",
  "mcan:mcan_n",
  "rx,tx",
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
  {"capability:mcan:mcan-n:rx", "ip-block", "can", "signal-role", "rx", "mcan", "mcan_n", nullptr, nullptr},
  {"capability:mcan:mcan-n:tx", "ip-block", "can", "signal-role", "tx", "mcan", "mcan_n", nullptr, nullptr},
}};
}
}
}
}
