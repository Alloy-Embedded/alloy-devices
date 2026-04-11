#pragma once

#include <array>

namespace nxp {
namespace imxrt1060 {
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
  "lpspi",
  "lpspi-v1",
  "spi",
  "lpspi:lpspi-v1",
  "cs,sck,sd0,sdi,sdo",
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
inline constexpr std::array<CapabilityDescriptor, 5> kCapabilities = {{
  {"capability:lpspi:lpspi-v1:cs", "ip-block", "spi", "signal-role", "cs", "lpspi", "lpspi-v1", nullptr, nullptr},
  {"capability:lpspi:lpspi-v1:sck", "ip-block", "spi", "signal-role", "sck", "lpspi", "lpspi-v1", nullptr, nullptr},
  {"capability:lpspi:lpspi-v1:sd0", "ip-block", "spi", "signal-role", "sd0", "lpspi", "lpspi-v1", nullptr, nullptr},
  {"capability:lpspi:lpspi-v1:sdi", "ip-block", "spi", "signal-role", "sdi", "lpspi", "lpspi-v1", nullptr, nullptr},
  {"capability:lpspi:lpspi-v1:sdo", "ip-block", "spi", "signal-role", "sdo", "lpspi", "lpspi-v1", nullptr, nullptr},
}};
}
}
}
}
