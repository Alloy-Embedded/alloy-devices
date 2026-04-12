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
  IpBlockId::ip_block_pmc_pmc_p,
  PeripheralClassId::class_pmc,
  BackendSchemaId::schema_alloy_pmc_microchip_pmc_p,
  RegisterProfileId::register_profile_pmc_pmc_p,
  0u,
  7u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 7> kSignalRoles = {{
  {IpBlockId::ip_block_pmc_pmc_p, SignalRoleId::signal_role_pck0},
  {IpBlockId::ip_block_pmc_pmc_p, SignalRoleId::signal_role_pck1},
  {IpBlockId::ip_block_pmc_pmc_p, SignalRoleId::signal_role_pck2},
  {IpBlockId::ip_block_pmc_pmc_p, SignalRoleId::signal_role_xin},
  {IpBlockId::ip_block_pmc_pmc_p, SignalRoleId::signal_role_xin32},
  {IpBlockId::ip_block_pmc_pmc_p, SignalRoleId::signal_role_xout},
  {IpBlockId::ip_block_pmc_pmc_p, SignalRoleId::signal_role_xout32},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 7> kCapabilities = {{
  {CapabilityId::capability_id_capability_pmc_pmc_p_pck0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pmc, CapabilityKeyId::capability_signal_role_pck0, IpBlockId::ip_block_pmc_pmc_p},
  {CapabilityId::capability_id_capability_pmc_pmc_p_pck1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pmc, CapabilityKeyId::capability_signal_role_pck1, IpBlockId::ip_block_pmc_pmc_p},
  {CapabilityId::capability_id_capability_pmc_pmc_p_pck2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pmc, CapabilityKeyId::capability_signal_role_pck2, IpBlockId::ip_block_pmc_pmc_p},
  {CapabilityId::capability_id_capability_pmc_pmc_p_xin, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pmc, CapabilityKeyId::capability_signal_role_xin, IpBlockId::ip_block_pmc_pmc_p},
  {CapabilityId::capability_id_capability_pmc_pmc_p_xin32, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pmc, CapabilityKeyId::capability_signal_role_xin32, IpBlockId::ip_block_pmc_pmc_p},
  {CapabilityId::capability_id_capability_pmc_pmc_p_xout, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pmc, CapabilityKeyId::capability_signal_role_xout, IpBlockId::ip_block_pmc_pmc_p},
  {CapabilityId::capability_id_capability_pmc_pmc_p_xout32, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pmc, CapabilityKeyId::capability_signal_role_xout32, IpBlockId::ip_block_pmc_pmc_p},
}};
}
}
}
}
