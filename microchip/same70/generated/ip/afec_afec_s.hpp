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
  "afec",
  "afec_s",
  "afec",
  "alloy.afec.microchip-afec-s",
  "afec:afec_s",
  "ad0,ad1,ad10,ad2,ad5,ad6,ad7,ad8,ad9,adtrg",
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
inline constexpr std::array<CapabilityDescriptor, 10> kCapabilities = {{
  {"capability:afec:afec-s:ad0", "ip-block", "afec", "signal-role", "ad0", "afec", "afec_s", nullptr, nullptr},
  {"capability:afec:afec-s:ad1", "ip-block", "afec", "signal-role", "ad1", "afec", "afec_s", nullptr, nullptr},
  {"capability:afec:afec-s:ad10", "ip-block", "afec", "signal-role", "ad10", "afec", "afec_s", nullptr, nullptr},
  {"capability:afec:afec-s:ad2", "ip-block", "afec", "signal-role", "ad2", "afec", "afec_s", nullptr, nullptr},
  {"capability:afec:afec-s:ad5", "ip-block", "afec", "signal-role", "ad5", "afec", "afec_s", nullptr, nullptr},
  {"capability:afec:afec-s:ad6", "ip-block", "afec", "signal-role", "ad6", "afec", "afec_s", nullptr, nullptr},
  {"capability:afec:afec-s:ad7", "ip-block", "afec", "signal-role", "ad7", "afec", "afec_s", nullptr, nullptr},
  {"capability:afec:afec-s:ad8", "ip-block", "afec", "signal-role", "ad8", "afec", "afec_s", nullptr, nullptr},
  {"capability:afec:afec-s:ad9", "ip-block", "afec", "signal-role", "ad9", "afec", "afec_s", nullptr, nullptr},
  {"capability:afec:afec-s:adtrg", "ip-block", "afec", "signal-role", "adtrg", "afec", "afec_s", nullptr, nullptr},
}};
}
}
}
}
