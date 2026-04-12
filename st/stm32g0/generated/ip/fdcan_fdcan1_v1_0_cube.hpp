#pragma once

#include <array>
#include <cstdint>
#include "../runtime_semantics.hpp"

namespace st {
namespace stm32g0 {
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
  IpBlockId::ip_block_fdcan_fdcan1_v1_0_Cube,
  PeripheralClassId::class_fdcan,
  BackendSchemaId::schema_alloy_fdcan_st_fdcan1_v1_0_cube,
  RegisterProfileId::register_profile_fdcan_fdcan1_v1_0_Cube,
  0u,
  2u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 2> kSignalRoles = {{
  {IpBlockId::ip_block_fdcan_fdcan1_v1_0_Cube, SignalRoleId::signal_role_rx},
  {IpBlockId::ip_block_fdcan_fdcan1_v1_0_Cube, SignalRoleId::signal_role_tx},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 2> kCapabilities = {{
  {CapabilityId::capability_id_capability_fdcan_fdcan1_v1_0_cube_rx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_fdcan, CapabilityKeyId::capability_signal_role_rx, IpBlockId::ip_block_fdcan_fdcan1_v1_0_Cube},
  {CapabilityId::capability_id_capability_fdcan_fdcan1_v1_0_cube_tx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_fdcan, CapabilityKeyId::capability_signal_role_tx, IpBlockId::ip_block_fdcan_fdcan1_v1_0_Cube},
}};
}
}
}
}
