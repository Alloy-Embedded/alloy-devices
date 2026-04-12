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
  IpBlockId::ip_block_i2c3_i2c2_v1_1_Cube,
  PeripheralClassId::class_i2c3,
  BackendSchemaId::schema_alloy_i2c3_st_i2c2_v1_1_cube,
  RegisterProfileId::register_profile_i2c3_i2c2_v1_1_Cube,
  0u,
  2u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 2> kSignalRoles = {{
  {IpBlockId::ip_block_i2c3_i2c2_v1_1_Cube, SignalRoleId::signal_role_scl},
  {IpBlockId::ip_block_i2c3_i2c2_v1_1_Cube, SignalRoleId::signal_role_sda},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 2> kCapabilities = {{
  {CapabilityId::capability_id_capability_i2c3_i2c2_v1_1_cube_scl, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_i2c3, CapabilityKeyId::capability_signal_role_scl, IpBlockId::ip_block_i2c3_i2c2_v1_1_Cube},
  {CapabilityId::capability_id_capability_i2c3_i2c2_v1_1_cube_sda, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_i2c3, CapabilityKeyId::capability_signal_role_sda, IpBlockId::ip_block_i2c3_i2c2_v1_1_Cube},
}};
}
}
}
}
