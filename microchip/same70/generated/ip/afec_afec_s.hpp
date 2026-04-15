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
  IpBlockId::ip_block_afec_afec_s,
  PeripheralClassId::class_adc,
  BackendSchemaId::schema_alloy_adc_microchip_afec_s,
  RegisterProfileId::register_profile_afec_afec_s,
  0u,
  10u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 10> kSignalRoles = {{
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_ad0},
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_ad1},
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_ad10},
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_ad2},
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_ad5},
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_ad6},
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_ad7},
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_ad8},
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_ad9},
  {IpBlockId::ip_block_afec_afec_s, SignalRoleId::signal_role_adtrg},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 10> kCapabilities = {{
  {CapabilityId::capability_id_capability_afec_afec_s_ad0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_ad0, IpBlockId::ip_block_afec_afec_s},
  {CapabilityId::capability_id_capability_afec_afec_s_ad1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_ad1, IpBlockId::ip_block_afec_afec_s},
  {CapabilityId::capability_id_capability_afec_afec_s_ad10, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_ad10, IpBlockId::ip_block_afec_afec_s},
  {CapabilityId::capability_id_capability_afec_afec_s_ad2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_ad2, IpBlockId::ip_block_afec_afec_s},
  {CapabilityId::capability_id_capability_afec_afec_s_ad5, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_ad5, IpBlockId::ip_block_afec_afec_s},
  {CapabilityId::capability_id_capability_afec_afec_s_ad6, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_ad6, IpBlockId::ip_block_afec_afec_s},
  {CapabilityId::capability_id_capability_afec_afec_s_ad7, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_ad7, IpBlockId::ip_block_afec_afec_s},
  {CapabilityId::capability_id_capability_afec_afec_s_ad8, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_ad8, IpBlockId::ip_block_afec_afec_s},
  {CapabilityId::capability_id_capability_afec_afec_s_ad9, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_ad9, IpBlockId::ip_block_afec_afec_s},
  {CapabilityId::capability_id_capability_afec_afec_s_adtrg, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_adc, CapabilityKeyId::capability_signal_role_adtrg, IpBlockId::ip_block_afec_afec_s},
}};
}
}
}
}
