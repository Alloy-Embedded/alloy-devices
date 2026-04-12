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
  IpBlockId::ip_block_pwm_pwm_y,
  PeripheralClassId::class_pwm,
  BackendSchemaId::schema_alloy_pwm_microchip_pwm_y,
  RegisterProfileId::register_profile_pwm_pwm_y,
  0u,
  13u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 13> kSignalRoles = {{
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwmextrg0},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwmextrg1},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwmfi0},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwmfi1},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwmfi2},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwmh0},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwmh1},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwmh2},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwmh3},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwml0},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwml1},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwml2},
  {IpBlockId::ip_block_pwm_pwm_y, SignalRoleId::signal_role_pwml3},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 13> kCapabilities = {{
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwmextrg0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwmextrg0, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwmextrg1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwmextrg1, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwmfi0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwmfi0, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwmfi1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwmfi1, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwmfi2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwmfi2, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwmh0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwmh0, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwmh1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwmh1, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwmh2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwmh2, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwmh3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwmh3, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwml0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwml0, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwml1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwml1, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwml2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwml2, IpBlockId::ip_block_pwm_pwm_y},
  {CapabilityId::capability_id_capability_pwm_pwm_y_pwml3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_pwm, CapabilityKeyId::capability_signal_role_pwml3, IpBlockId::ip_block_pwm_pwm_y},
}};
}
}
}
}
