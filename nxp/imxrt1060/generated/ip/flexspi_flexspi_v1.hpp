#pragma once

#include <array>
#include <cstdint>
#include "../runtime_semantics.hpp"

namespace nxp {
namespace imxrt1060 {
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
  IpBlockId::ip_block_flexspi_flexspi_v1,
  PeripheralClassId::class_flexspi,
  BackendSchemaId::schema_alloy_flexspi_nxp_flexspi_v1,
  RegisterProfileId::register_profile_flexspi_flexspi_v1,
  0u,
  16u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 16> kSignalRoles = {{
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_a_data00},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_a_data01},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_a_data02},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_a_data03},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_a_dqs},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_a_sclk},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_a_ss0_b},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_a_ss1_b},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_b_data00},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_b_data01},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_b_data02},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_b_data03},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_b_dqs},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_b_sclk},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_b_ss0_b},
  {IpBlockId::ip_block_flexspi_flexspi_v1, SignalRoleId::signal_role_b_ss1_b},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 16> kCapabilities = {{
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_a_data00, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_a_data00, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_a_data01, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_a_data01, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_a_data02, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_a_data02, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_a_data03, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_a_data03, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_a_dqs, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_a_dqs, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_a_sclk, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_a_sclk, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_a_ss0_b, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_a_ss0_b, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_a_ss1_b, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_a_ss1_b, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_b_data00, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_b_data00, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_b_data01, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_b_data01, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_b_data02, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_b_data02, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_b_data03, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_b_data03, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_b_dqs, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_b_dqs, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_b_sclk, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_b_sclk, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_b_ss0_b, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_b_ss0_b, IpBlockId::ip_block_flexspi_flexspi_v1},
  {CapabilityId::capability_id_capability_flexspi_flexspi_v1_b_ss1_b, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_flexspi, CapabilityKeyId::capability_signal_role_b_ss1_b, IpBlockId::ip_block_flexspi_flexspi_v1},
}};
}
}
}
}
