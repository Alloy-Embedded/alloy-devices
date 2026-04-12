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
  IpBlockId::ip_block_uart_uart_r,
  PeripheralClassId::class_uart,
  BackendSchemaId::schema_alloy_uart_microchip_uart_r,
  RegisterProfileId::register_profile_uart_uart_r,
  0u,
  10u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 10> kSignalRoles = {{
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_urxd0},
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_urxd1},
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_urxd2},
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_urxd3},
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_urxd4},
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_utxd0},
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_utxd1},
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_utxd2},
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_utxd3},
  {IpBlockId::ip_block_uart_uart_r, SignalRoleId::signal_role_utxd4},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 10> kCapabilities = {{
  {CapabilityId::capability_id_capability_uart_uart_r_urxd0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_urxd0, IpBlockId::ip_block_uart_uart_r},
  {CapabilityId::capability_id_capability_uart_uart_r_urxd1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_urxd1, IpBlockId::ip_block_uart_uart_r},
  {CapabilityId::capability_id_capability_uart_uart_r_urxd2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_urxd2, IpBlockId::ip_block_uart_uart_r},
  {CapabilityId::capability_id_capability_uart_uart_r_urxd3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_urxd3, IpBlockId::ip_block_uart_uart_r},
  {CapabilityId::capability_id_capability_uart_uart_r_urxd4, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_urxd4, IpBlockId::ip_block_uart_uart_r},
  {CapabilityId::capability_id_capability_uart_uart_r_utxd0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_utxd0, IpBlockId::ip_block_uart_uart_r},
  {CapabilityId::capability_id_capability_uart_uart_r_utxd1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_utxd1, IpBlockId::ip_block_uart_uart_r},
  {CapabilityId::capability_id_capability_uart_uart_r_utxd2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_utxd2, IpBlockId::ip_block_uart_uart_r},
  {CapabilityId::capability_id_capability_uart_uart_r_utxd3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_utxd3, IpBlockId::ip_block_uart_uart_r},
  {CapabilityId::capability_id_capability_uart_uart_r_utxd4, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_utxd4, IpBlockId::ip_block_uart_uart_r},
}};
}
}
}
}
