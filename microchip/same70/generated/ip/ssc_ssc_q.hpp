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
  IpBlockId::ip_block_ssc_ssc_q,
  PeripheralClassId::class_ssc,
  BackendSchemaId::schema_alloy_ssc_microchip_ssc_q,
  RegisterProfileId::register_profile_ssc_ssc_q,
  0u,
  6u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 6> kSignalRoles = {{
  {IpBlockId::ip_block_ssc_ssc_q, SignalRoleId::signal_role_rd},
  {IpBlockId::ip_block_ssc_ssc_q, SignalRoleId::signal_role_rf},
  {IpBlockId::ip_block_ssc_ssc_q, SignalRoleId::signal_role_rk},
  {IpBlockId::ip_block_ssc_ssc_q, SignalRoleId::signal_role_td},
  {IpBlockId::ip_block_ssc_ssc_q, SignalRoleId::signal_role_tf},
  {IpBlockId::ip_block_ssc_ssc_q, SignalRoleId::signal_role_tk},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 6> kCapabilities = {{
  {CapabilityId::capability_id_capability_ssc_ssc_q_rd, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_ssc, CapabilityKeyId::capability_signal_role_rd, IpBlockId::ip_block_ssc_ssc_q},
  {CapabilityId::capability_id_capability_ssc_ssc_q_rf, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_ssc, CapabilityKeyId::capability_signal_role_rf, IpBlockId::ip_block_ssc_ssc_q},
  {CapabilityId::capability_id_capability_ssc_ssc_q_rk, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_ssc, CapabilityKeyId::capability_signal_role_rk, IpBlockId::ip_block_ssc_ssc_q},
  {CapabilityId::capability_id_capability_ssc_ssc_q_td, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_ssc, CapabilityKeyId::capability_signal_role_td, IpBlockId::ip_block_ssc_ssc_q},
  {CapabilityId::capability_id_capability_ssc_ssc_q_tf, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_ssc, CapabilityKeyId::capability_signal_role_tf, IpBlockId::ip_block_ssc_ssc_q},
  {CapabilityId::capability_id_capability_ssc_ssc_q_tk, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_ssc, CapabilityKeyId::capability_signal_role_tk, IpBlockId::ip_block_ssc_ssc_q},
}};
}
}
}
}
