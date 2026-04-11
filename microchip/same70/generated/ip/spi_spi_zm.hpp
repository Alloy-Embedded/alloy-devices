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
  "spi",
  "spi_zm",
  "spi",
  "spi:spi_zm",
  "cs,miso,mosi,sck",
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
  {"capability:spi:spi-zm:cs", "ip-block", "spi", "signal-role", "cs", "spi", "spi_zm", nullptr, nullptr},
  {"capability:spi:spi-zm:miso", "ip-block", "spi", "signal-role", "miso", "spi", "spi_zm", nullptr, nullptr},
  {"capability:spi:spi-zm:mosi", "ip-block", "spi", "signal-role", "mosi", "spi", "spi_zm", nullptr, nullptr},
  {"capability:spi:spi-zm:sck", "ip-block", "spi", "signal-role", "sck", "spi", "spi_zm", nullptr, nullptr},
}};
}
}
}
}
