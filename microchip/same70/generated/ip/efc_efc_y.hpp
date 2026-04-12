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
  IpBlockId::ip_block_efc_efc_y,
  PeripheralClassId::class_efc,
  BackendSchemaId::schema_alloy_efc_microchip_efc_y,
  RegisterProfileId::register_profile_efc_efc_y,
  0u,
  1u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 1> kSignalRoles = {{
  {IpBlockId::ip_block_efc_efc_y, SignalRoleId::signal_role_erase},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 1> kCapabilities = {{
  {CapabilityId::capability_id_capability_efc_efc_y_erase, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_efc, CapabilityKeyId::capability_signal_role_erase, IpBlockId::ip_block_efc_efc_y},
}};
}
}
}
}
