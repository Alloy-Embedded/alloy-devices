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
  const char* register_profile;
  const char* signal_roles;
};
inline constexpr IpBlockDescriptor kIpBlock = {
  "usart",
  "sci2_v1_2_Cube",
  "uart",
  "usart:sci2_v1_2_Cube",
  "ck,cts,rts,rx,tx",
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
  {"capability:usart:sci2-v1-2-cube:ck", "ip-block", "uart", "signal-role", "ck", "usart", "sci2_v1_2_Cube", nullptr, nullptr},
  {"capability:usart:sci2-v1-2-cube:cts", "ip-block", "uart", "signal-role", "cts", "usart", "sci2_v1_2_Cube", nullptr, nullptr},
  {"capability:usart:sci2-v1-2-cube:rts", "ip-block", "uart", "signal-role", "rts", "usart", "sci2_v1_2_Cube", nullptr, nullptr},
  {"capability:usart:sci2-v1-2-cube:rx", "ip-block", "uart", "signal-role", "rx", "usart", "sci2_v1_2_Cube", nullptr, nullptr},
  {"capability:usart:sci2-v1-2-cube:tx", "ip-block", "uart", "signal-role", "tx", "usart", "sci2_v1_2_Cube", nullptr, nullptr},
}};
}
}
}
}
