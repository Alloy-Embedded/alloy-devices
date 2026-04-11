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
  const char* register_profile;
  const char* signal_roles;
};
inline constexpr IpBlockDescriptor kIpBlock = {
  "isi",
  "isi_k",
  "isi",
  "isi:isi_k",
  "d0,d1,d10,d11,d2,d3,d4,d5,d6,d7,d8,d9,hsync,pck,vsync",
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
inline constexpr std::array<CapabilityDescriptor, 15> kCapabilities = {{
  {"capability:isi:isi-k:d0", "ip-block", "isi", "signal-role", "d0", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d1", "ip-block", "isi", "signal-role", "d1", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d10", "ip-block", "isi", "signal-role", "d10", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d11", "ip-block", "isi", "signal-role", "d11", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d2", "ip-block", "isi", "signal-role", "d2", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d3", "ip-block", "isi", "signal-role", "d3", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d4", "ip-block", "isi", "signal-role", "d4", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d5", "ip-block", "isi", "signal-role", "d5", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d6", "ip-block", "isi", "signal-role", "d6", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d7", "ip-block", "isi", "signal-role", "d7", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d8", "ip-block", "isi", "signal-role", "d8", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:d9", "ip-block", "isi", "signal-role", "d9", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:hsync", "ip-block", "isi", "signal-role", "hsync", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:pck", "ip-block", "isi", "signal-role", "pck", "isi", "isi_k", nullptr, nullptr},
  {"capability:isi:isi-k:vsync", "ip-block", "isi", "signal-role", "vsync", "isi", "isi_k", nullptr, nullptr},
}};
}
}
}
}
