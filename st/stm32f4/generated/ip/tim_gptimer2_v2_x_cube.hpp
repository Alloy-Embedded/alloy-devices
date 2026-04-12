#pragma once

#include <array>
#include <cstdint>
#include "../runtime_semantics.hpp"

namespace st {
namespace stm32f4 {
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
  IpBlockId::ip_block_tim_gptimer2_v2_x_Cube,
  PeripheralClassId::class_timer,
  BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube,
  RegisterProfileId::register_profile_tim_gptimer2_v2_x_Cube,
  0u,
  9u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 9> kSignalRoles = {{
  {IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, SignalRoleId::signal_role_bkin},
  {IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, SignalRoleId::signal_role_ch1},
  {IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, SignalRoleId::signal_role_ch1n},
  {IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, SignalRoleId::signal_role_ch2},
  {IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, SignalRoleId::signal_role_ch2n},
  {IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, SignalRoleId::signal_role_ch3},
  {IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, SignalRoleId::signal_role_ch3n},
  {IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, SignalRoleId::signal_role_ch4},
  {IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, SignalRoleId::signal_role_etr},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 9> kCapabilities = {{
  {CapabilityId::capability_id_capability_tim_gptimer2_v2_x_cube_bkin, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_bkin, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube},
  {CapabilityId::capability_id_capability_tim_gptimer2_v2_x_cube_ch1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_ch1, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube},
  {CapabilityId::capability_id_capability_tim_gptimer2_v2_x_cube_ch1n, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_ch1n, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube},
  {CapabilityId::capability_id_capability_tim_gptimer2_v2_x_cube_ch2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_ch2, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube},
  {CapabilityId::capability_id_capability_tim_gptimer2_v2_x_cube_ch2n, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_ch2n, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube},
  {CapabilityId::capability_id_capability_tim_gptimer2_v2_x_cube_ch3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_ch3, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube},
  {CapabilityId::capability_id_capability_tim_gptimer2_v2_x_cube_ch3n, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_ch3n, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube},
  {CapabilityId::capability_id_capability_tim_gptimer2_v2_x_cube_ch4, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_ch4, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube},
  {CapabilityId::capability_id_capability_tim_gptimer2_v2_x_cube_etr, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_etr, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube},
}};
}
}
}
}
