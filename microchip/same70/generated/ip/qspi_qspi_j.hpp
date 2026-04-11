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
  "qspi",
  "qspi_j",
  "qspi",
  "alloy.qspi.microchip-qspi-j",
  "qspi:qspi_j",
  "qcs,qio0,qio1,qio2,qio3,qsck",
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
  {"capability:qspi:qspi-j:qcs", "ip-block", "qspi", "signal-role", "qcs", "qspi", "qspi_j", nullptr, nullptr},
  {"capability:qspi:qspi-j:qio0", "ip-block", "qspi", "signal-role", "qio0", "qspi", "qspi_j", nullptr, nullptr},
  {"capability:qspi:qspi-j:qio1", "ip-block", "qspi", "signal-role", "qio1", "qspi", "qspi_j", nullptr, nullptr},
  {"capability:qspi:qspi-j:qio2", "ip-block", "qspi", "signal-role", "qio2", "qspi", "qspi_j", nullptr, nullptr},
  {"capability:qspi:qspi-j:qio3", "ip-block", "qspi", "signal-role", "qio3", "qspi", "qspi_j", nullptr, nullptr},
  {"capability:qspi:qspi-j:qsck", "ip-block", "qspi", "signal-role", "qsck", "qspi", "qspi_j", nullptr, nullptr},
}};
}
}
}
}
