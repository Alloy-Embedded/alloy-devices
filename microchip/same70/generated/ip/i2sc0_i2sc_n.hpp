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
  "i2sc0",
  "i2sc_n",
  "i2sc0",
  "i2sc0:i2sc_n",
  "ck,di0,do0,mck,ws",
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
  {"capability:i2sc0:i2sc-n:ck", "ip-block", "i2sc0", "signal-role", "ck", "i2sc0", "i2sc_n", nullptr, nullptr},
  {"capability:i2sc0:i2sc-n:di0", "ip-block", "i2sc0", "signal-role", "di0", "i2sc0", "i2sc_n", nullptr, nullptr},
  {"capability:i2sc0:i2sc-n:do0", "ip-block", "i2sc0", "signal-role", "do0", "i2sc0", "i2sc_n", nullptr, nullptr},
  {"capability:i2sc0:i2sc-n:mck", "ip-block", "i2sc0", "signal-role", "mck", "i2sc0", "i2sc_n", nullptr, nullptr},
  {"capability:i2sc0:i2sc-n:ws", "ip-block", "i2sc0", "signal-role", "ws", "i2sc0", "i2sc_n", nullptr, nullptr},
}};
}
}
}
}
