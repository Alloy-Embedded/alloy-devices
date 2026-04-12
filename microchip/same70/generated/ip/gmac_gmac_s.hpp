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
  IpBlockId::ip_block_gmac_gmac_s,
  PeripheralClassId::class_gmac,
  BackendSchemaId::schema_alloy_gmac_microchip_gmac_s,
  RegisterProfileId::register_profile_gmac_gmac_s,
  0u,
  19u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 19> kSignalRoles = {{
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gcol},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gcrs},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gmdc},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gmdio},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_grx0},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_grx1},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_grx2},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_grx3},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_grxck},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_grxdv},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_grxer},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gtsucomp},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gtx0},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gtx1},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gtx2},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gtx3},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gtxck},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gtxen},
  {IpBlockId::ip_block_gmac_gmac_s, SignalRoleId::signal_role_gtxer},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 19> kCapabilities = {{
  {CapabilityId::capability_id_capability_gmac_gmac_s_gcol, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gcol, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gcrs, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gcrs, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gmdc, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gmdc, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gmdio, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gmdio, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_grx0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_grx0, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_grx1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_grx1, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_grx2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_grx2, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_grx3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_grx3, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_grxck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_grxck, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_grxdv, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_grxdv, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_grxer, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_grxer, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gtsucomp, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gtsucomp, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gtx0, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gtx0, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gtx1, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gtx1, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gtx2, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gtx2, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gtx3, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gtx3, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gtxck, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gtxck, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gtxen, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gtxen, IpBlockId::ip_block_gmac_gmac_s},
  {CapabilityId::capability_id_capability_gmac_gmac_s_gtxer, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gmac, CapabilityKeyId::capability_signal_role_gtxer, IpBlockId::ip_block_gmac_gmac_s},
}};
}
}
}
}
