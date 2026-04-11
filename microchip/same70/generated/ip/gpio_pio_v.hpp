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
  "gpio",
  "pio_v",
  "gpio",
  "gpio:pio_v",
  "piodc0,piodc1,piodc2,piodc3,piodc4,piodc5,piodc6,piodc7,piodcclk,piodcen1,piodcen2",
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
inline constexpr std::array<CapabilityDescriptor, 11> kCapabilities = {{
  {"capability:gpio:pio-v:piodc0", "ip-block", "gpio", "signal-role", "piodc0", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodc1", "ip-block", "gpio", "signal-role", "piodc1", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodc2", "ip-block", "gpio", "signal-role", "piodc2", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodc3", "ip-block", "gpio", "signal-role", "piodc3", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodc4", "ip-block", "gpio", "signal-role", "piodc4", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodc5", "ip-block", "gpio", "signal-role", "piodc5", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodc6", "ip-block", "gpio", "signal-role", "piodc6", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodc7", "ip-block", "gpio", "signal-role", "piodc7", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodcclk", "ip-block", "gpio", "signal-role", "piodcclk", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodcen1", "ip-block", "gpio", "signal-role", "piodcen1", "gpio", "pio_v", nullptr, nullptr},
  {"capability:gpio:pio-v:piodcen2", "ip-block", "gpio", "signal-role", "piodcen2", "gpio", "pio_v", nullptr, nullptr},
}};
}
}
}
}
