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
  IpBlockId::ip_block_i2sc1_i2sc_n,
  PeripheralClassId::class_i2sc1,
  BackendSchemaId::schema_alloy_i2sc1_microchip_i2sc_n,
  RegisterProfileId::register_profile_i2sc1_i2sc_n,
  0u,
  5u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 5> kSignalRoles = {{
  {IpBlockId::ip_block_i2sc1_i2sc_n, SignalRoleId::signal_role_ck},
  {IpBlockId::ip_block_i2sc1_i2sc_n, SignalRoleId::signal_role_di0},
  {IpBlockId::ip_block_i2sc1_i2sc_n, SignalRoleId::signal_role_do0},
  {IpBlockId::ip_block_i2sc1_i2sc_n, SignalRoleId::signal_role_mck},
  {IpBlockId::ip_block_i2sc1_i2sc_n, SignalRoleId::signal_role_ws},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 5> kCapabilities = {{
  {CapabilityId::capability_id_capability_i2sc1_i2sc_n_ck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_i2sc1, CapabilityKeyId::capability_signal_role_ck, IpBlockId::ip_block_i2sc1_i2sc_n},
  {CapabilityId::capability_id_capability_i2sc1_i2sc_n_di0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_i2sc1, CapabilityKeyId::capability_signal_role_di0, IpBlockId::ip_block_i2sc1_i2sc_n},
  {CapabilityId::capability_id_capability_i2sc1_i2sc_n_do0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_i2sc1, CapabilityKeyId::capability_signal_role_do0, IpBlockId::ip_block_i2sc1_i2sc_n},
  {CapabilityId::capability_id_capability_i2sc1_i2sc_n_mck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_i2sc1, CapabilityKeyId::capability_signal_role_mck, IpBlockId::ip_block_i2sc1_i2sc_n},
  {CapabilityId::capability_id_capability_i2sc1_i2sc_n_ws, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_i2sc1, CapabilityKeyId::capability_signal_role_ws, IpBlockId::ip_block_i2sc1_i2sc_n},
}};
}
}
}
}
