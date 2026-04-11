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
  const char* backend_schema_id;
  const char* register_profile;
  const char* signal_roles;
};
inline constexpr IpBlockDescriptor kIpBlock = {
  "tim",
  "gptimer2_v2_x_Cube",
  "timer",
  "alloy.timer.st-gptimer2-v2-x-cube",
  "tim:gptimer2_v2_x_Cube",
  "bkin,ch1,ch1n,ch2,ch2n,ch3,ch3n,ch4,etr",
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
inline constexpr std::array<CapabilityDescriptor, 9> kCapabilities = {{
  {"capability:tim:gptimer2-v2-x-cube:bkin", "ip-block", "timer", "signal-role", "bkin", "tim", "gptimer2_v2_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v2-x-cube:ch1", "ip-block", "timer", "signal-role", "ch1", "tim", "gptimer2_v2_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v2-x-cube:ch1n", "ip-block", "timer", "signal-role", "ch1n", "tim", "gptimer2_v2_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v2-x-cube:ch2", "ip-block", "timer", "signal-role", "ch2", "tim", "gptimer2_v2_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v2-x-cube:ch2n", "ip-block", "timer", "signal-role", "ch2n", "tim", "gptimer2_v2_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v2-x-cube:ch3", "ip-block", "timer", "signal-role", "ch3", "tim", "gptimer2_v2_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v2-x-cube:ch3n", "ip-block", "timer", "signal-role", "ch3n", "tim", "gptimer2_v2_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v2-x-cube:ch4", "ip-block", "timer", "signal-role", "ch4", "tim", "gptimer2_v2_x_Cube", nullptr, nullptr},
  {"capability:tim:gptimer2-v2-x-cube:etr", "ip-block", "timer", "signal-role", "etr", "tim", "gptimer2_v2_x_Cube", nullptr, nullptr},
}};
}
}
}
}
