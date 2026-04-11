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
  "supc",
  "supc_ze",
  "supc",
  "supc:supc_ze",
  "wkup0,wkup1,wkup10,wkup11,wkup12,wkup13,wkup2,wkup3,wkup4,wkup5,wkup6,wkup7,wkup8,wkup9",
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
inline constexpr std::array<CapabilityDescriptor, 14> kCapabilities = {{
  {"capability:supc:supc-ze:wkup0", "ip-block", "supc", "signal-role", "wkup0", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup1", "ip-block", "supc", "signal-role", "wkup1", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup10", "ip-block", "supc", "signal-role", "wkup10", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup11", "ip-block", "supc", "signal-role", "wkup11", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup12", "ip-block", "supc", "signal-role", "wkup12", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup13", "ip-block", "supc", "signal-role", "wkup13", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup2", "ip-block", "supc", "signal-role", "wkup2", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup3", "ip-block", "supc", "signal-role", "wkup3", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup4", "ip-block", "supc", "signal-role", "wkup4", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup5", "ip-block", "supc", "signal-role", "wkup5", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup6", "ip-block", "supc", "signal-role", "wkup6", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup7", "ip-block", "supc", "signal-role", "wkup7", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup8", "ip-block", "supc", "signal-role", "wkup8", "supc", "supc_ze", nullptr, nullptr},
  {"capability:supc:supc-ze:wkup9", "ip-block", "supc", "signal-role", "wkup9", "supc", "supc_ze", nullptr, nullptr},
}};
}
}
}
}
