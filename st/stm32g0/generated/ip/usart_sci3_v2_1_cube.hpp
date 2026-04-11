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
  "usart",
  "sci3_v2_1_Cube",
  "uart",
  "alloy.uart.st-sci3-v2-1-cube",
  "usart:sci3_v2_1_Cube",
  "ck,cts,de,nss,rts,rx,tx",
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
inline constexpr std::array<CapabilityDescriptor, 7> kCapabilities = {{
  {"capability:usart:sci3-v2-1-cube:ck", "ip-block", "uart", "signal-role", "ck", "usart", "sci3_v2_1_Cube", nullptr, nullptr},
  {"capability:usart:sci3-v2-1-cube:cts", "ip-block", "uart", "signal-role", "cts", "usart", "sci3_v2_1_Cube", nullptr, nullptr},
  {"capability:usart:sci3-v2-1-cube:de", "ip-block", "uart", "signal-role", "de", "usart", "sci3_v2_1_Cube", nullptr, nullptr},
  {"capability:usart:sci3-v2-1-cube:nss", "ip-block", "uart", "signal-role", "nss", "usart", "sci3_v2_1_Cube", nullptr, nullptr},
  {"capability:usart:sci3-v2-1-cube:rts", "ip-block", "uart", "signal-role", "rts", "usart", "sci3_v2_1_Cube", nullptr, nullptr},
  {"capability:usart:sci3-v2-1-cube:rx", "ip-block", "uart", "signal-role", "rx", "usart", "sci3_v2_1_Cube", nullptr, nullptr},
  {"capability:usart:sci3-v2-1-cube:tx", "ip-block", "uart", "signal-role", "tx", "usart", "sci3_v2_1_Cube", nullptr, nullptr},
}};
}
}
}
}
