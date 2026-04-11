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
  "pwm",
  "pwm_y",
  "pwm",
  "alloy.pwm.microchip-pwm-y",
  "pwm:pwm_y",
  "pwmextrg0,pwmextrg1,pwmfi0,pwmfi1,pwmfi2,pwmh0,pwmh1,pwmh2,pwmh3,pwml0,pwml1,pwml2,pwml3",
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
inline constexpr std::array<CapabilityDescriptor, 13> kCapabilities = {{
  {"capability:pwm:pwm-y:pwmextrg0", "ip-block", "pwm", "signal-role", "pwmextrg0", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwmextrg1", "ip-block", "pwm", "signal-role", "pwmextrg1", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwmfi0", "ip-block", "pwm", "signal-role", "pwmfi0", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwmfi1", "ip-block", "pwm", "signal-role", "pwmfi1", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwmfi2", "ip-block", "pwm", "signal-role", "pwmfi2", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwmh0", "ip-block", "pwm", "signal-role", "pwmh0", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwmh1", "ip-block", "pwm", "signal-role", "pwmh1", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwmh2", "ip-block", "pwm", "signal-role", "pwmh2", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwmh3", "ip-block", "pwm", "signal-role", "pwmh3", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwml0", "ip-block", "pwm", "signal-role", "pwml0", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwml1", "ip-block", "pwm", "signal-role", "pwml1", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwml2", "ip-block", "pwm", "signal-role", "pwml2", "pwm", "pwm_y", nullptr, nullptr},
  {"capability:pwm:pwm-y:pwml3", "ip-block", "pwm", "signal-role", "pwml3", "pwm", "pwm_y", nullptr, nullptr},
}};
}
}
}
}
