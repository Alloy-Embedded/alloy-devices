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
  "flexspi",
  "flexspi-v1",
  "flexspi",
  "flexspi:flexspi-v1",
  "a_data00,a_data01,a_data02,a_data03,a_dqs,a_sclk,a_ss0_b,a_ss1_b,b_data00,b_data01,b_data02,b_data03,b_dqs,b_sclk,b_ss0_b,b_ss1_b",
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
inline constexpr std::array<CapabilityDescriptor, 16> kCapabilities = {{
  {"capability:flexspi:flexspi-v1:a-data00", "ip-block", "flexspi", "signal-role", "a_data00", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:a-data01", "ip-block", "flexspi", "signal-role", "a_data01", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:a-data02", "ip-block", "flexspi", "signal-role", "a_data02", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:a-data03", "ip-block", "flexspi", "signal-role", "a_data03", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:a-dqs", "ip-block", "flexspi", "signal-role", "a_dqs", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:a-sclk", "ip-block", "flexspi", "signal-role", "a_sclk", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:a-ss0-b", "ip-block", "flexspi", "signal-role", "a_ss0_b", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:a-ss1-b", "ip-block", "flexspi", "signal-role", "a_ss1_b", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:b-data00", "ip-block", "flexspi", "signal-role", "b_data00", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:b-data01", "ip-block", "flexspi", "signal-role", "b_data01", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:b-data02", "ip-block", "flexspi", "signal-role", "b_data02", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:b-data03", "ip-block", "flexspi", "signal-role", "b_data03", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:b-dqs", "ip-block", "flexspi", "signal-role", "b_dqs", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:b-sclk", "ip-block", "flexspi", "signal-role", "b_sclk", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:b-ss0-b", "ip-block", "flexspi", "signal-role", "b_ss0_b", "flexspi", "flexspi-v1", nullptr, nullptr},
  {"capability:flexspi:flexspi-v1:b-ss1-b", "ip-block", "flexspi", "signal-role", "b_ss1_b", "flexspi", "flexspi-v1", nullptr, nullptr},
}};
}
}
}
}
