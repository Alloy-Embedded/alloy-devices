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
  IpBlockId::ip_block_tc_tc_zl,
  PeripheralClassId::class_timer,
  BackendSchemaId::schema_alloy_timer_microchip_tc_zl,
  RegisterProfileId::register_profile_tc_tc_zl,
  0u,
  11u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 11> kSignalRoles = {{
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tclk0},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tclk1},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tclk11},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tioa0},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tioa1},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tioa11},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tioa2},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tiob0},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tiob1},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tiob11},
  {IpBlockId::ip_block_tc_tc_zl, SignalRoleId::signal_role_tiob2},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 11> kCapabilities = {{
  {CapabilityId::capability_id_capability_tc_tc_zl_tclk0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tclk0, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tclk1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tclk1, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tclk11, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tclk11, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tioa0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tioa0, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tioa1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tioa1, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tioa11, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tioa11, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tioa2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tioa2, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tiob0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tiob0, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tiob1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tiob1, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tiob11, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tiob11, IpBlockId::ip_block_tc_tc_zl},
  {CapabilityId::capability_id_capability_tc_tc_zl_tiob2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_timer, CapabilityKeyId::capability_signal_role_tiob2, IpBlockId::ip_block_tc_tc_zl},
}};
}
}
}
}
