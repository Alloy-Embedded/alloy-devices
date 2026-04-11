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
  "hdmi_cec",
  "hdmi_cec_v2_0_Cube",
  "hdmi_cec",
  "alloy.hdmi_cec.st-hdmi-cec-v2-0-cube",
  "hdmi_cec:hdmi_cec_v2_0_Cube",
  "",
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
inline constexpr std::array<CapabilityDescriptor, 0> kCapabilities = {};
}
}
}
}
