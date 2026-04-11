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
  const char* register_profile;
  const char* signal_roles;
};
inline constexpr IpBlockDescriptor kIpBlock = {
  "rtc",
  "rtc_zb",
  "rtc",
  "rtc:rtc_zb",
  "rtcout0,rtcout1",
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
  {"capability:rtc:rtc-zb:rtcout0", "ip-block", "rtc", "signal-role", "rtcout0", "rtc", "rtc_zb", nullptr, nullptr},
  {"capability:rtc:rtc-zb:rtcout1", "ip-block", "rtc", "signal-role", "rtcout1", "rtc", "rtc_zb", nullptr, nullptr},
}};
}
}
}
}
