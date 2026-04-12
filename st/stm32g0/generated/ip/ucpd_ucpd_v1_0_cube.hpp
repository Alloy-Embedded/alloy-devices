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
  IpBlockId::ip_block_ucpd_ucpd_v1_0_Cube,
  PeripheralClassId::class_ucpd,
  BackendSchemaId::schema_alloy_ucpd_st_ucpd_v1_0_cube,
  RegisterProfileId::register_profile_ucpd_ucpd_v1_0_Cube,
  0u,
  2u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 2> kSignalRoles = {{
  {IpBlockId::ip_block_ucpd_ucpd_v1_0_Cube, SignalRoleId::signal_role_frstx1},
  {IpBlockId::ip_block_ucpd_ucpd_v1_0_Cube, SignalRoleId::signal_role_frstx2},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 2> kCapabilities = {{
  {CapabilityId::capability_id_capability_ucpd_ucpd_v1_0_cube_frstx1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_ucpd, CapabilityKeyId::capability_signal_role_frstx1, IpBlockId::ip_block_ucpd_ucpd_v1_0_Cube},
  {CapabilityId::capability_id_capability_ucpd_ucpd_v1_0_cube_frstx2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_ucpd, CapabilityKeyId::capability_signal_role_frstx2, IpBlockId::ip_block_ucpd_ucpd_v1_0_Cube},
}};
}
}
}
}
