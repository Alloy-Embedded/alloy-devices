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
  IpBlockId::ip_block_twihs_twihs_z,
  PeripheralClassId::class_i2c,
  BackendSchemaId::schema_alloy_i2c_microchip_twihs_z,
  RegisterProfileId::register_profile_twihs_twihs_z,
  0u,
  2u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 2> kSignalRoles = {{
  {IpBlockId::ip_block_twihs_twihs_z, SignalRoleId::signal_role_scl},
  {IpBlockId::ip_block_twihs_twihs_z, SignalRoleId::signal_role_sda},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 2> kCapabilities = {{
  {CapabilityId::capability_id_capability_twihs_twihs_z_scl, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_i2c, CapabilityKeyId::capability_signal_role_scl, IpBlockId::ip_block_twihs_twihs_z},
  {CapabilityId::capability_id_capability_twihs_twihs_z_sda, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_i2c, CapabilityKeyId::capability_signal_role_sda, IpBlockId::ip_block_twihs_twihs_z},
}};
}
}
}
}
