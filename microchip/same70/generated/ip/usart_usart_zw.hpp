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
  const char* backend_schema_id;
  const char* register_profile;
  const char* signal_roles;
};
inline constexpr IpBlockDescriptor kIpBlock = {
  "usart",
  "usart_zw",
  "uart",
  "alloy.uart.microchip-usart-zw",
  "usart:usart_zw",
  "cts,dcd0,dcd1,dcd2,dsr0,dsr1,dsr2,dtr0,dtr1,dtr2,loncol1,ri0,ri2,rts,rx,sck0,sck1,sck2,tx",
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
inline constexpr std::array<CapabilityDescriptor, 19> kCapabilities = {{
  {"capability:usart:usart-zw:cts", "ip-block", "uart", "signal-role", "cts", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:dcd0", "ip-block", "uart", "signal-role", "dcd0", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:dcd1", "ip-block", "uart", "signal-role", "dcd1", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:dcd2", "ip-block", "uart", "signal-role", "dcd2", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:dsr0", "ip-block", "uart", "signal-role", "dsr0", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:dsr1", "ip-block", "uart", "signal-role", "dsr1", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:dsr2", "ip-block", "uart", "signal-role", "dsr2", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:dtr0", "ip-block", "uart", "signal-role", "dtr0", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:dtr1", "ip-block", "uart", "signal-role", "dtr1", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:dtr2", "ip-block", "uart", "signal-role", "dtr2", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:loncol1", "ip-block", "uart", "signal-role", "loncol1", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:ri0", "ip-block", "uart", "signal-role", "ri0", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:ri2", "ip-block", "uart", "signal-role", "ri2", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:rts", "ip-block", "uart", "signal-role", "rts", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:rx", "ip-block", "uart", "signal-role", "rx", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:sck0", "ip-block", "uart", "signal-role", "sck0", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:sck1", "ip-block", "uart", "signal-role", "sck1", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:sck2", "ip-block", "uart", "signal-role", "sck2", "usart", "usart_zw", nullptr, nullptr},
  {"capability:usart:usart-zw:tx", "ip-block", "uart", "signal-role", "tx", "usart", "usart_zw", nullptr, nullptr},
}};
}
}
}
}
