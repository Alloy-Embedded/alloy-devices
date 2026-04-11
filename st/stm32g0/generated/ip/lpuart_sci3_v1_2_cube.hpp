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
  const char* backend_schema_id;
  const char* register_profile;
  const char* signal_roles;
};
inline constexpr IpBlockDescriptor kIpBlock = {
  "lpuart",
  "sci3_v1_2_Cube",
  "uart",
  "alloy.uart.st-sci3-v1-2-cube",
  "lpuart:sci3_v1_2_Cube",
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
  {"capability:lpuart:sci3-v1-2-cube:cts", "ip-block", "uart", "signal-role", "cts", "lpuart", "sci3_v1_2_Cube", nullptr, nullptr},
  {"capability:lpuart:sci3-v1-2-cube:de", "ip-block", "uart", "signal-role", "de", "lpuart", "sci3_v1_2_Cube", nullptr, nullptr},
  {"capability:lpuart:sci3-v1-2-cube:rts", "ip-block", "uart", "signal-role", "rts", "lpuart", "sci3_v1_2_Cube", nullptr, nullptr},
  {"capability:lpuart:sci3-v1-2-cube:rx", "ip-block", "uart", "signal-role", "rx", "lpuart", "sci3_v1_2_Cube", nullptr, nullptr},
  {"capability:lpuart:sci3-v1-2-cube:tx", "ip-block", "uart", "signal-role", "tx", "lpuart", "sci3_v1_2_Cube", nullptr, nullptr},
}};
}
}
}
}
