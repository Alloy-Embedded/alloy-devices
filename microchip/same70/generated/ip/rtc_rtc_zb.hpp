#pragma once

#include <array>
#include <cstdint>
#include "../runtime_semantics.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace ip {
struct IpBlockDescriptor {
  IpBlockId ip_block_id;
  PeripheralClassId peripheral_class_id;
  BackendSchemaId schema_id;
  RegisterProfileId register_profile_id;
  std::uint16_t signal_role_offset;
  std::uint16_t signal_role_count;
};
inline constexpr IpBlockDescriptor kIpBlock = {
  IpBlockId::ip_block_rtc_rtc_zb,
  PeripheralClassId::class_rtc,
  BackendSchemaId::schema_alloy_rtc_microchip_rtc_zb,
  RegisterProfileId::register_profile_rtc_rtc_zb,
  0u,
  2u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 2> kSignalRoles = {{
  {IpBlockId::ip_block_rtc_rtc_zb, SignalRoleId::signal_role_rtcout0},
  {IpBlockId::ip_block_rtc_rtc_zb, SignalRoleId::signal_role_rtcout1},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 2> kCapabilities = {{
  {CapabilityId::capability_id_capability_rtc_rtc_zb_rtcout0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_rtc, CapabilityKeyId::capability_signal_role_rtcout0, IpBlockId::ip_block_rtc_rtc_zb},
  {CapabilityId::capability_id_capability_rtc_rtc_zb_rtcout1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_rtc, CapabilityKeyId::capability_signal_role_rtcout1, IpBlockId::ip_block_rtc_rtc_zb},
}};
}
}
}
}
