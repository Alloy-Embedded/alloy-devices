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
  "ssc",
  "ssc_q",
  "ssc",
  "alloy.ssc.microchip-ssc-q",
  "ssc:ssc_q",
  "rd,rf,rk,td,tf,tk",
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
  {"capability:ssc:ssc-q:rd", "ip-block", "ssc", "signal-role", "rd", "ssc", "ssc_q", nullptr, nullptr},
  {"capability:ssc:ssc-q:rf", "ip-block", "ssc", "signal-role", "rf", "ssc", "ssc_q", nullptr, nullptr},
  {"capability:ssc:ssc-q:rk", "ip-block", "ssc", "signal-role", "rk", "ssc", "ssc_q", nullptr, nullptr},
  {"capability:ssc:ssc-q:td", "ip-block", "ssc", "signal-role", "td", "ssc", "ssc_q", nullptr, nullptr},
  {"capability:ssc:ssc-q:tf", "ip-block", "ssc", "signal-role", "tf", "ssc", "ssc_q", nullptr, nullptr},
  {"capability:ssc:ssc-q:tk", "ip-block", "ssc", "signal-role", "tk", "ssc", "ssc_q", nullptr, nullptr},
}};
}
}
}
}
