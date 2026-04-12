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
  IpBlockId::ip_block_isi_isi_k,
  PeripheralClassId::class_isi,
  BackendSchemaId::schema_alloy_isi_microchip_isi_k,
  RegisterProfileId::register_profile_isi_isi_k,
  0u,
  15u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 15> kSignalRoles = {{
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d0},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d1},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d10},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d11},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d2},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d3},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d4},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d5},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d6},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d7},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d8},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_d9},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_hsync},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_pck},
  {IpBlockId::ip_block_isi_isi_k, SignalRoleId::signal_role_vsync},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 15> kCapabilities = {{
  {CapabilityId::capability_id_capability_isi_isi_k_d0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d0, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d1, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d10, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d10, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d11, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d11, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d2, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d3, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d4, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d4, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d5, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d5, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d6, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d6, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d7, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d7, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d8, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d8, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_d9, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_d9, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_hsync, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_hsync, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_pck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_pck, IpBlockId::ip_block_isi_isi_k},
  {CapabilityId::capability_id_capability_isi_isi_k_vsync, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_isi, CapabilityKeyId::capability_signal_role_vsync, IpBlockId::ip_block_isi_isi_k},
}};
}
}
}
}
