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
  "uart",
  "uart_r",
  "uart",
  "alloy.uart.microchip-uart-r",
  "uart:uart_r",
  "urxd0,urxd1,urxd2,urxd3,urxd4,utxd0,utxd1,utxd2,utxd3,utxd4",
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
inline constexpr std::array<CapabilityDescriptor, 10> kCapabilities = {{
  {"capability:uart:uart-r:urxd0", "ip-block", "uart", "signal-role", "urxd0", "uart", "uart_r", nullptr, nullptr},
  {"capability:uart:uart-r:urxd1", "ip-block", "uart", "signal-role", "urxd1", "uart", "uart_r", nullptr, nullptr},
  {"capability:uart:uart-r:urxd2", "ip-block", "uart", "signal-role", "urxd2", "uart", "uart_r", nullptr, nullptr},
  {"capability:uart:uart-r:urxd3", "ip-block", "uart", "signal-role", "urxd3", "uart", "uart_r", nullptr, nullptr},
  {"capability:uart:uart-r:urxd4", "ip-block", "uart", "signal-role", "urxd4", "uart", "uart_r", nullptr, nullptr},
  {"capability:uart:uart-r:utxd0", "ip-block", "uart", "signal-role", "utxd0", "uart", "uart_r", nullptr, nullptr},
  {"capability:uart:uart-r:utxd1", "ip-block", "uart", "signal-role", "utxd1", "uart", "uart_r", nullptr, nullptr},
  {"capability:uart:uart-r:utxd2", "ip-block", "uart", "signal-role", "utxd2", "uart", "uart_r", nullptr, nullptr},
  {"capability:uart:uart-r:utxd3", "ip-block", "uart", "signal-role", "utxd3", "uart", "uart_r", nullptr, nullptr},
  {"capability:uart:uart-r:utxd4", "ip-block", "uart", "signal-role", "utxd4", "uart", "uart_r", nullptr, nullptr},
}};
}
}
}
}
