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
  "lpuart",
  "sci3_v1_4_Cube",
  "uart",
  "lpuart:sci3_v1_4_Cube",
  "cts,de,rts,rx,tx",
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
  {"capability:lpuart:sci3-v1-4-cube:cts", "ip-block", "uart", "signal-role", "cts", "lpuart", "sci3_v1_4_Cube", nullptr, nullptr},
  {"capability:lpuart:sci3-v1-4-cube:de", "ip-block", "uart", "signal-role", "de", "lpuart", "sci3_v1_4_Cube", nullptr, nullptr},
  {"capability:lpuart:sci3-v1-4-cube:rts", "ip-block", "uart", "signal-role", "rts", "lpuart", "sci3_v1_4_Cube", nullptr, nullptr},
  {"capability:lpuart:sci3-v1-4-cube:rx", "ip-block", "uart", "signal-role", "rx", "lpuart", "sci3_v1_4_Cube", nullptr, nullptr},
  {"capability:lpuart:sci3-v1-4-cube:tx", "ip-block", "uart", "signal-role", "tx", "lpuart", "sci3_v1_4_Cube", nullptr, nullptr},
}};
}
}
}
}
