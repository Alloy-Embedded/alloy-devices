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
  "tim",
  "gptimer2_v3_x_Cube",
  "timer",
  "tim:gptimer2_v3_x_Cube",
  "bk,ch1,ch1n,ch2,ch2n,ch3",
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
inline constexpr std::array<CapabilityDescriptor, 6> kCapabilities = {{
  {"capability:tim:gptimer2-v3-x-cube:bk", "ip-block", "timer", "signal-role", "bk", "tim", "gptimer2_v3_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v3-x-cube:ch1", "ip-block", "timer", "signal-role", "ch1", "tim", "gptimer2_v3_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v3-x-cube:ch1n", "ip-block", "timer", "signal-role", "ch1n", "tim", "gptimer2_v3_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v3-x-cube:ch2", "ip-block", "timer", "signal-role", "ch2", "tim", "gptimer2_v3_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v3-x-cube:ch2n", "ip-block", "timer", "signal-role", "ch2n", "tim", "gptimer2_v3_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v3-x-cube:ch3", "ip-block", "timer", "signal-role", "ch3", "tim", "gptimer2_v3_x_Cube", nullptr, nullptr},
}};
}
}
}
}
