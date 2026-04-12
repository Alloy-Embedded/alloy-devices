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
  IpBlockId::ip_block_spi_spi2s1_v2_2_Cube,
  PeripheralClassId::class_spi,
  BackendSchemaId::schema_alloy_spi_st_spi2s1_v2_2_cube,
  RegisterProfileId::register_profile_spi_spi2s1_v2_2_Cube,
  0u,
  4u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 4> kSignalRoles = {{
  {IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, SignalRoleId::signal_role_miso},
  {IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, SignalRoleId::signal_role_mosi},
  {IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, SignalRoleId::signal_role_nss},
  {IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, SignalRoleId::signal_role_sck},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 4> kCapabilities = {{
  {CapabilityId::capability_id_capability_spi_spi2s1_v2_2_cube_miso, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_spi, CapabilityKeyId::capability_signal_role_miso, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube},
  {CapabilityId::capability_id_capability_spi_spi2s1_v2_2_cube_mosi, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_spi, CapabilityKeyId::capability_signal_role_mosi, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube},
  {CapabilityId::capability_id_capability_spi_spi2s1_v2_2_cube_nss, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_spi, CapabilityKeyId::capability_signal_role_nss, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube},
  {CapabilityId::capability_id_capability_spi_spi2s1_v2_2_cube_sck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_spi, CapabilityKeyId::capability_signal_role_sck, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube},
}};
}
}
}
}
