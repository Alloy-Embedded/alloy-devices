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
  IpBlockId::ip_block_hsmci_hsmci_r,
  PeripheralClassId::class_hsmci,
  BackendSchemaId::schema_alloy_hsmci_microchip_hsmci_r,
  RegisterProfileId::register_profile_hsmci_hsmci_r,
  0u,
  6u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 6> kSignalRoles = {{
  {IpBlockId::ip_block_hsmci_hsmci_r, SignalRoleId::signal_role_mccda},
  {IpBlockId::ip_block_hsmci_hsmci_r, SignalRoleId::signal_role_mcck},
  {IpBlockId::ip_block_hsmci_hsmci_r, SignalRoleId::signal_role_mcda0},
  {IpBlockId::ip_block_hsmci_hsmci_r, SignalRoleId::signal_role_mcda1},
  {IpBlockId::ip_block_hsmci_hsmci_r, SignalRoleId::signal_role_mcda2},
  {IpBlockId::ip_block_hsmci_hsmci_r, SignalRoleId::signal_role_mcda3},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 6> kCapabilities = {{
  {CapabilityId::capability_id_capability_hsmci_hsmci_r_mccda, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_hsmci, CapabilityKeyId::capability_signal_role_mccda, IpBlockId::ip_block_hsmci_hsmci_r},
  {CapabilityId::capability_id_capability_hsmci_hsmci_r_mcck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_hsmci, CapabilityKeyId::capability_signal_role_mcck, IpBlockId::ip_block_hsmci_hsmci_r},
  {CapabilityId::capability_id_capability_hsmci_hsmci_r_mcda0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_hsmci, CapabilityKeyId::capability_signal_role_mcda0, IpBlockId::ip_block_hsmci_hsmci_r},
  {CapabilityId::capability_id_capability_hsmci_hsmci_r_mcda1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_hsmci, CapabilityKeyId::capability_signal_role_mcda1, IpBlockId::ip_block_hsmci_hsmci_r},
  {CapabilityId::capability_id_capability_hsmci_hsmci_r_mcda2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_hsmci, CapabilityKeyId::capability_signal_role_mcda2, IpBlockId::ip_block_hsmci_hsmci_r},
  {CapabilityId::capability_id_capability_hsmci_hsmci_r_mcda3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_hsmci, CapabilityKeyId::capability_signal_role_mcda3, IpBlockId::ip_block_hsmci_hsmci_r},
}};
}
}
}
}
