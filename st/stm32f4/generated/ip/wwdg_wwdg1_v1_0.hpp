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
  "wwdg",
  "wwdg1_v1_0",
  "wwdg",
  "alloy.wwdg.st-wwdg1-v1-0",
  "wwdg:wwdg1_v1_0",
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
