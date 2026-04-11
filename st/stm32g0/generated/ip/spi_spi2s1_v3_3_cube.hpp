#pragma once

#include <array>

namespace st {
namespace stm32g0 {
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
  "spi",
  "spi2s1_v3_3_Cube",
  "spi",
  "spi:spi2s1_v3_3_Cube",
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
  {"capability:spi:spi2s1-v3-3-cube:miso", "ip-block", "spi", "signal-role", "miso", "spi", "spi2s1_v3_3_Cube", nullptr, nullptr},
  {"capability:spi:spi2s1-v3-3-cube:mosi", "ip-block", "spi", "signal-role", "mosi", "spi", "spi2s1_v3_3_Cube", nullptr, nullptr},
  {"capability:spi:spi2s1-v3-3-cube:nss", "ip-block", "spi", "signal-role", "nss", "spi", "spi2s1_v3_3_Cube", nullptr, nullptr},
  {"capability:spi:spi2s1-v3-3-cube:sck", "ip-block", "spi", "signal-role", "sck", "spi", "spi2s1_v3_3_Cube", nullptr, nullptr},
}};
}
}
}
}
