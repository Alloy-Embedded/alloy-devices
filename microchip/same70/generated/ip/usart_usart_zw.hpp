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
  IpBlockId::ip_block_usart_usart_zw,
  PeripheralClassId::class_uart,
  BackendSchemaId::schema_alloy_uart_microchip_usart_zw,
  RegisterProfileId::register_profile_usart_usart_zw,
  0u,
  19u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 19> kSignalRoles = {{
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_cts},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_dcd0},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_dcd1},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_dcd2},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_dsr0},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_dsr1},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_dsr2},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_dtr0},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_dtr1},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_dtr2},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_loncol1},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_ri0},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_ri2},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_rts},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_rx},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_sck0},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_sck1},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_sck2},
  {IpBlockId::ip_block_usart_usart_zw, SignalRoleId::signal_role_tx},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 19> kCapabilities = {{
  {CapabilityId::capability_id_capability_usart_usart_zw_cts, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_cts, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_dcd0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_dcd0, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_dcd1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_dcd1, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_dcd2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_dcd2, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_dsr0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_dsr0, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_dsr1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_dsr1, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_dsr2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_dsr2, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_dtr0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_dtr0, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_dtr1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_dtr1, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_dtr2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_dtr2, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_loncol1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_loncol1, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_ri0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_ri0, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_ri2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_ri2, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_rts, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_rts, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_rx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_rx, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_sck0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_sck0, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_sck1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_sck1, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_sck2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_sck2, IpBlockId::ip_block_usart_usart_zw},
  {CapabilityId::capability_id_capability_usart_usart_zw_tx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_tx, IpBlockId::ip_block_usart_usart_zw},
}};
}
}
}
}
