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
  IpBlockId::ip_block_lptim_G0xx_lptimer1_v1_4_Cube,
  PeripheralClassId::class_lptim,
  BackendSchemaId::schema_alloy_lptim_st_g0xx_lptimer1_v1_4_cube,
  RegisterProfileId::register_profile_lptim_G0xx_lptimer1_v1_4_Cube,
  0u,
  4u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 4> kSignalRoles = {{
  {IpBlockId::ip_block_lptim_G0xx_lptimer1_v1_4_Cube, SignalRoleId::signal_role_etr},
  {IpBlockId::ip_block_lptim_G0xx_lptimer1_v1_4_Cube, SignalRoleId::signal_role_in1},
  {IpBlockId::ip_block_lptim_G0xx_lptimer1_v1_4_Cube, SignalRoleId::signal_role_in2},
  {IpBlockId::ip_block_lptim_G0xx_lptimer1_v1_4_Cube, SignalRoleId::signal_role_out},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 4> kCapabilities = {{
  {CapabilityId::capability_id_capability_lptim_g0xx_lptimer1_v1_4_cube_etr, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_lptim, CapabilityKeyId::capability_signal_role_etr, IpBlockId::ip_block_lptim_G0xx_lptimer1_v1_4_Cube},
  {CapabilityId::capability_id_capability_lptim_g0xx_lptimer1_v1_4_cube_in1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_lptim, CapabilityKeyId::capability_signal_role_in1, IpBlockId::ip_block_lptim_G0xx_lptimer1_v1_4_Cube},
  {CapabilityId::capability_id_capability_lptim_g0xx_lptimer1_v1_4_cube_in2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_lptim, CapabilityKeyId::capability_signal_role_in2, IpBlockId::ip_block_lptim_G0xx_lptimer1_v1_4_Cube},
  {CapabilityId::capability_id_capability_lptim_g0xx_lptimer1_v1_4_cube_out, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_lptim, CapabilityKeyId::capability_signal_role_out, IpBlockId::ip_block_lptim_G0xx_lptimer1_v1_4_Cube},
}};
}
}
}
}
