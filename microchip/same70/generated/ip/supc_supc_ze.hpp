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
  IpBlockId::ip_block_supc_supc_ze,
  PeripheralClassId::class_supc,
  BackendSchemaId::schema_alloy_supc_microchip_supc_ze,
  RegisterProfileId::register_profile_supc_supc_ze,
  0u,
  14u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 14> kSignalRoles = {{
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup0},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup1},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup10},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup11},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup12},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup13},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup2},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup3},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup4},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup5},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup6},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup7},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup8},
  {IpBlockId::ip_block_supc_supc_ze, SignalRoleId::signal_role_wkup9},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 14> kCapabilities = {{
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup0, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup1, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup10, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup10, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup11, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup11, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup12, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup12, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup13, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup13, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup2, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup3, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup4, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup4, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup5, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup5, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup6, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup6, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup7, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup7, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup8, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup8, IpBlockId::ip_block_supc_supc_ze},
  {CapabilityId::capability_id_capability_supc_supc_ze_wkup9, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_supc, CapabilityKeyId::capability_signal_role_wkup9, IpBlockId::ip_block_supc_supc_ze},
}};
}
}
}
}
