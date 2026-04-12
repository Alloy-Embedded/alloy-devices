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
  IpBlockId::ip_block_gpio_pio_v,
  PeripheralClassId::class_gpio,
  BackendSchemaId::schema_alloy_gpio_microchip_pio_v,
  RegisterProfileId::register_profile_gpio_pio_v,
  0u,
  11u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 11> kSignalRoles = {{
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodc0},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodc1},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodc2},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodc3},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodc4},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodc5},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodc6},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodc7},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodcclk},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodcen1},
  {IpBlockId::ip_block_gpio_pio_v, SignalRoleId::signal_role_piodcen2},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 11> kCapabilities = {{
  {CapabilityId::capability_id_capability_gpio_pio_v_piodc0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodc0, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodc1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodc1, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodc2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodc2, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodc3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodc3, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodc4, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodc4, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodc5, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodc5, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodc6, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodc6, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodc7, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodc7, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodcclk, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodcclk, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodcen1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodcen1, IpBlockId::ip_block_gpio_pio_v},
  {CapabilityId::capability_id_capability_gpio_pio_v_piodcen2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_piodcen2, IpBlockId::ip_block_gpio_pio_v},
}};
}
}
}
}
