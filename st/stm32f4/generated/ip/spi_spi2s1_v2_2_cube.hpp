#pragma once

#include <array>

namespace st {
namespace stm32f4 {
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
  "spi",
  "spi2s1_v2_2_Cube",
  "spi",
  "alloy.spi.st-spi2s1-v2-2-cube",
  "spi:spi2s1_v2_2_Cube",
  "miso,mosi,nss,sck",
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
inline constexpr std::array<CapabilityDescriptor, 4> kCapabilities = {{
  {"capability:spi:spi2s1-v2-2-cube:miso", "ip-block", "spi", "signal-role", "miso", "spi", "spi2s1_v2_2_Cube", nullptr, nullptr},
  {"capability:spi:spi2s1-v2-2-cube:mosi", "ip-block", "spi", "signal-role", "mosi", "spi", "spi2s1_v2_2_Cube", nullptr, nullptr},
  {"capability:spi:spi2s1-v2-2-cube:nss", "ip-block", "spi", "signal-role", "nss", "spi", "spi2s1_v2_2_Cube", nullptr, nullptr},
  {"capability:spi:spi2s1-v2-2-cube:sck", "ip-block", "spi", "signal-role", "sck", "spi", "spi2s1_v2_2_Cube", nullptr, nullptr},
}};
}
}
}
}
