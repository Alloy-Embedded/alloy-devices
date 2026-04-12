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
  IpBlockId::ip_block_qspi_qspi_j,
  PeripheralClassId::class_qspi,
  BackendSchemaId::schema_alloy_qspi_microchip_qspi_j,
  RegisterProfileId::register_profile_qspi_qspi_j,
  0u,
  6u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 6> kSignalRoles = {{
  {IpBlockId::ip_block_qspi_qspi_j, SignalRoleId::signal_role_qcs},
  {IpBlockId::ip_block_qspi_qspi_j, SignalRoleId::signal_role_qio0},
  {IpBlockId::ip_block_qspi_qspi_j, SignalRoleId::signal_role_qio1},
  {IpBlockId::ip_block_qspi_qspi_j, SignalRoleId::signal_role_qio2},
  {IpBlockId::ip_block_qspi_qspi_j, SignalRoleId::signal_role_qio3},
  {IpBlockId::ip_block_qspi_qspi_j, SignalRoleId::signal_role_qsck},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 6> kCapabilities = {{
  {CapabilityId::capability_id_capability_qspi_qspi_j_qcs, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_qspi, CapabilityKeyId::capability_signal_role_qcs, IpBlockId::ip_block_qspi_qspi_j},
  {CapabilityId::capability_id_capability_qspi_qspi_j_qio0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_qspi, CapabilityKeyId::capability_signal_role_qio0, IpBlockId::ip_block_qspi_qspi_j},
  {CapabilityId::capability_id_capability_qspi_qspi_j_qio1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_qspi, CapabilityKeyId::capability_signal_role_qio1, IpBlockId::ip_block_qspi_qspi_j},
  {CapabilityId::capability_id_capability_qspi_qspi_j_qio2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_qspi, CapabilityKeyId::capability_signal_role_qio2, IpBlockId::ip_block_qspi_qspi_j},
  {CapabilityId::capability_id_capability_qspi_qspi_j_qio3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_qspi, CapabilityKeyId::capability_signal_role_qio3, IpBlockId::ip_block_qspi_qspi_j},
  {CapabilityId::capability_id_capability_qspi_qspi_j_qsck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_qspi, CapabilityKeyId::capability_signal_role_qsck, IpBlockId::ip_block_qspi_qspi_j},
}};
}
}
}
}
