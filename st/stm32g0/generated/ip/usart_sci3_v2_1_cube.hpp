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
  IpBlockId::ip_block_usart_sci3_v2_1_Cube,
  PeripheralClassId::class_uart,
  BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube,
  RegisterProfileId::register_profile_usart_sci3_v2_1_Cube,
  0u,
  7u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 7> kSignalRoles = {{
  {IpBlockId::ip_block_usart_sci3_v2_1_Cube, SignalRoleId::signal_role_ck},
  {IpBlockId::ip_block_usart_sci3_v2_1_Cube, SignalRoleId::signal_role_cts},
  {IpBlockId::ip_block_usart_sci3_v2_1_Cube, SignalRoleId::signal_role_de},
  {IpBlockId::ip_block_usart_sci3_v2_1_Cube, SignalRoleId::signal_role_nss},
  {IpBlockId::ip_block_usart_sci3_v2_1_Cube, SignalRoleId::signal_role_rts},
  {IpBlockId::ip_block_usart_sci3_v2_1_Cube, SignalRoleId::signal_role_rx},
  {IpBlockId::ip_block_usart_sci3_v2_1_Cube, SignalRoleId::signal_role_tx},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 7> kCapabilities = {{
  {CapabilityId::capability_id_capability_usart_sci3_v2_1_cube_ck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_ck, IpBlockId::ip_block_usart_sci3_v2_1_Cube},
  {CapabilityId::capability_id_capability_usart_sci3_v2_1_cube_cts, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_cts, IpBlockId::ip_block_usart_sci3_v2_1_Cube},
  {CapabilityId::capability_id_capability_usart_sci3_v2_1_cube_de, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_de, IpBlockId::ip_block_usart_sci3_v2_1_Cube},
  {CapabilityId::capability_id_capability_usart_sci3_v2_1_cube_nss, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_nss, IpBlockId::ip_block_usart_sci3_v2_1_Cube},
  {CapabilityId::capability_id_capability_usart_sci3_v2_1_cube_rts, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_rts, IpBlockId::ip_block_usart_sci3_v2_1_Cube},
  {CapabilityId::capability_id_capability_usart_sci3_v2_1_cube_rx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_rx, IpBlockId::ip_block_usart_sci3_v2_1_Cube},
  {CapabilityId::capability_id_capability_usart_sci3_v2_1_cube_tx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_tx, IpBlockId::ip_block_usart_sci3_v2_1_Cube},
}};
}
}
}
}
