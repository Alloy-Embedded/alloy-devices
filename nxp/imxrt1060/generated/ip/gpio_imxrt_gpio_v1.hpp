#pragma once

#include <array>

namespace nxp {
namespace imxrt1060 {
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
  "gpio",
  "imxrt-gpio-v1",
  "gpio",
  "gpio:imxrt-gpio-v1",
  "io00,io01,io02,io03,io04,io05,io06,io07,io08,io09,io10,io11,io12,io13,io14,io15,io16,io17,io18,io19,io20,io21,io22,io23,io24,io25,io26,io27,io28,io29,io30,io31",
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
inline constexpr std::array<CapabilityDescriptor, 32> kCapabilities = {{
  {"capability:gpio:imxrt-gpio-v1:io00", "ip-block", "gpio", "signal-role", "io00", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io01", "ip-block", "gpio", "signal-role", "io01", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io02", "ip-block", "gpio", "signal-role", "io02", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io03", "ip-block", "gpio", "signal-role", "io03", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io04", "ip-block", "gpio", "signal-role", "io04", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io05", "ip-block", "gpio", "signal-role", "io05", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io06", "ip-block", "gpio", "signal-role", "io06", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io07", "ip-block", "gpio", "signal-role", "io07", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io08", "ip-block", "gpio", "signal-role", "io08", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io09", "ip-block", "gpio", "signal-role", "io09", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io10", "ip-block", "gpio", "signal-role", "io10", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io11", "ip-block", "gpio", "signal-role", "io11", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io12", "ip-block", "gpio", "signal-role", "io12", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io13", "ip-block", "gpio", "signal-role", "io13", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io14", "ip-block", "gpio", "signal-role", "io14", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io15", "ip-block", "gpio", "signal-role", "io15", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io16", "ip-block", "gpio", "signal-role", "io16", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io17", "ip-block", "gpio", "signal-role", "io17", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io18", "ip-block", "gpio", "signal-role", "io18", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io19", "ip-block", "gpio", "signal-role", "io19", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io20", "ip-block", "gpio", "signal-role", "io20", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io21", "ip-block", "gpio", "signal-role", "io21", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io22", "ip-block", "gpio", "signal-role", "io22", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io23", "ip-block", "gpio", "signal-role", "io23", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io24", "ip-block", "gpio", "signal-role", "io24", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io25", "ip-block", "gpio", "signal-role", "io25", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io26", "ip-block", "gpio", "signal-role", "io26", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io27", "ip-block", "gpio", "signal-role", "io27", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io28", "ip-block", "gpio", "signal-role", "io28", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io29", "ip-block", "gpio", "signal-role", "io29", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io30", "ip-block", "gpio", "signal-role", "io30", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
  {"capability:gpio:imxrt-gpio-v1:io31", "ip-block", "gpio", "signal-role", "io31", "gpio", "imxrt-gpio-v1", nullptr, nullptr},
}};
}
}
}
}
