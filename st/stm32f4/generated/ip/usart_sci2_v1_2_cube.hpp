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
  IpBlockId::ip_block_usart_sci2_v1_2_Cube,
  PeripheralClassId::class_uart,
  BackendSchemaId::schema_alloy_uart_st_sci2_v1_2_cube,
  RegisterProfileId::register_profile_usart_sci2_v1_2_Cube,
  0u,
  5u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 5> kSignalRoles = {{
  {IpBlockId::ip_block_usart_sci2_v1_2_Cube, SignalRoleId::signal_role_ck},
  {IpBlockId::ip_block_usart_sci2_v1_2_Cube, SignalRoleId::signal_role_cts},
  {IpBlockId::ip_block_usart_sci2_v1_2_Cube, SignalRoleId::signal_role_rts},
  {IpBlockId::ip_block_usart_sci2_v1_2_Cube, SignalRoleId::signal_role_rx},
  {IpBlockId::ip_block_usart_sci2_v1_2_Cube, SignalRoleId::signal_role_tx},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 5> kCapabilities = {{
  {CapabilityId::capability_id_capability_usart_sci2_v1_2_cube_ck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_ck, IpBlockId::ip_block_usart_sci2_v1_2_Cube},
  {CapabilityId::capability_id_capability_usart_sci2_v1_2_cube_cts, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_cts, IpBlockId::ip_block_usart_sci2_v1_2_Cube},
  {CapabilityId::capability_id_capability_usart_sci2_v1_2_cube_rts, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_rts, IpBlockId::ip_block_usart_sci2_v1_2_Cube},
  {CapabilityId::capability_id_capability_usart_sci2_v1_2_cube_rx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_rx, IpBlockId::ip_block_usart_sci2_v1_2_Cube},
  {CapabilityId::capability_id_capability_usart_sci2_v1_2_cube_tx, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_uart, CapabilityKeyId::capability_signal_role_tx, IpBlockId::ip_block_usart_sci2_v1_2_Cube},
}};
}
}
}
}
