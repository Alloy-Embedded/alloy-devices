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
  "pmc",
  "pmc_p",
  "pmc",
  "alloy.pmc.microchip-pmc-p",
  "pmc:pmc_p",
  "pck0,pck1,pck2,xin,xin32,xout,xout32",
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
inline constexpr std::array<CapabilityDescriptor, 7> kCapabilities = {{
  {"capability:pmc:pmc-p:pck0", "ip-block", "pmc", "signal-role", "pck0", "pmc", "pmc_p", nullptr, nullptr},
  {"capability:pmc:pmc-p:pck1", "ip-block", "pmc", "signal-role", "pck1", "pmc", "pmc_p", nullptr, nullptr},
  {"capability:pmc:pmc-p:pck2", "ip-block", "pmc", "signal-role", "pck2", "pmc", "pmc_p", nullptr, nullptr},
  {"capability:pmc:pmc-p:xin", "ip-block", "pmc", "signal-role", "xin", "pmc", "pmc_p", nullptr, nullptr},
  {"capability:pmc:pmc-p:xin32", "ip-block", "pmc", "signal-role", "xin32", "pmc", "pmc_p", nullptr, nullptr},
  {"capability:pmc:pmc-p:xout", "ip-block", "pmc", "signal-role", "xout", "pmc", "pmc_p", nullptr, nullptr},
  {"capability:pmc:pmc-p:xout32", "ip-block", "pmc", "signal-role", "xout32", "pmc", "pmc_p", nullptr, nullptr},
}};
}
}
}
}
