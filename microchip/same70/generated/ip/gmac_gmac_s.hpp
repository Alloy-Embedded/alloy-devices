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
  "gmac",
  "gmac_s",
  "gmac",
  "alloy.gmac.microchip-gmac-s",
  "gmac:gmac_s",
  "gcol,gcrs,gmdc,gmdio,grx0,grx1,grx2,grx3,grxck,grxdv,grxer,gtsucomp,gtx0,gtx1,gtx2,gtx3,gtxck,gtxen,gtxer",
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
inline constexpr std::array<CapabilityDescriptor, 19> kCapabilities = {{
  {"capability:gmac:gmac-s:gcol", "ip-block", "gmac", "signal-role", "gcol", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gcrs", "ip-block", "gmac", "signal-role", "gcrs", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gmdc", "ip-block", "gmac", "signal-role", "gmdc", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gmdio", "ip-block", "gmac", "signal-role", "gmdio", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:grx0", "ip-block", "gmac", "signal-role", "grx0", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:grx1", "ip-block", "gmac", "signal-role", "grx1", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:grx2", "ip-block", "gmac", "signal-role", "grx2", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:grx3", "ip-block", "gmac", "signal-role", "grx3", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:grxck", "ip-block", "gmac", "signal-role", "grxck", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:grxdv", "ip-block", "gmac", "signal-role", "grxdv", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:grxer", "ip-block", "gmac", "signal-role", "grxer", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gtsucomp", "ip-block", "gmac", "signal-role", "gtsucomp", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gtx0", "ip-block", "gmac", "signal-role", "gtx0", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gtx1", "ip-block", "gmac", "signal-role", "gtx1", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gtx2", "ip-block", "gmac", "signal-role", "gtx2", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gtx3", "ip-block", "gmac", "signal-role", "gtx3", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gtxck", "ip-block", "gmac", "signal-role", "gtxck", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gtxen", "ip-block", "gmac", "signal-role", "gtxen", "gmac", "gmac_s", nullptr, nullptr},
  {"capability:gmac:gmac-s:gtxer", "ip-block", "gmac", "signal-role", "gtxer", "gmac", "gmac_s", nullptr, nullptr},
}};
}
}
}
}
