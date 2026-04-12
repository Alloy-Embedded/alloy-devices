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
  IpBlockId::ip_block_mcan_mcan_n,
  PeripheralClassId::class_can,
  BackendSchemaId::schema_alloy_can_microchip_mcan_n,
  RegisterProfileId::register_profile_mcan_mcan_n,
  0u,
  2u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 2> kSignalRoles = {{
  {IpBlockId::ip_block_mcan_mcan_n, SignalRoleId::signal_role_rx},
  {IpBlockId::ip_block_mcan_mcan_n, SignalRoleId::signal_role_tx},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 2> kCapabilities = {{
  {CapabilityId::capability_id_capability_mcan_mcan_n_rx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_can, CapabilityKeyId::capability_signal_role_rx, IpBlockId::ip_block_mcan_mcan_n},
  {CapabilityId::capability_id_capability_mcan_mcan_n_tx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_can, CapabilityKeyId::capability_signal_role_tx, IpBlockId::ip_block_mcan_mcan_n},
}};
}
}
}
}
