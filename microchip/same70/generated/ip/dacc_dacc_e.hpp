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
  IpBlockId::ip_block_dacc_dacc_e,
  PeripheralClassId::class_dac,
  BackendSchemaId::schema_alloy_dac_microchip_dacc_e,
  RegisterProfileId::register_profile_dacc_dacc_e,
  0u,
  3u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 3> kSignalRoles = {{
  {IpBlockId::ip_block_dacc_dacc_e, SignalRoleId::signal_role_dac0},
  {IpBlockId::ip_block_dacc_dacc_e, SignalRoleId::signal_role_dac1},
  {IpBlockId::ip_block_dacc_dacc_e, SignalRoleId::signal_role_datrg},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 3> kCapabilities = {{
  {CapabilityId::capability_id_capability_dacc_dacc_e_dac0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_dac, CapabilityKeyId::capability_signal_role_dac0, IpBlockId::ip_block_dacc_dacc_e},
  {CapabilityId::capability_id_capability_dacc_dacc_e_dac1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_dac, CapabilityKeyId::capability_signal_role_dac1, IpBlockId::ip_block_dacc_dacc_e},
  {CapabilityId::capability_id_capability_dacc_dacc_e_datrg, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_dac, CapabilityKeyId::capability_signal_role_datrg, IpBlockId::ip_block_dacc_dacc_e},
}};
}
}
}
}
