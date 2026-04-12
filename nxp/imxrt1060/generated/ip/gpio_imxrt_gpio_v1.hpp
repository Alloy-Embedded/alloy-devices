#pragma once

#include <array>
#include <cstdint>
#include "../runtime_semantics.hpp"

namespace nxp {
namespace imxrt1060 {
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
  IpBlockId::ip_block_gpio_imxrt_gpio_v1,
  PeripheralClassId::class_gpio,
  BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1,
  RegisterProfileId::register_profile_gpio_imxrt_gpio_v1,
  0u,
  32u,
};

struct IpBlockSignalRoleRef {
  IpBlockId ip_block_id;
  SignalRoleId signal_role_id;
};
inline constexpr std::array<IpBlockSignalRoleRef, 32> kSignalRoles = {{
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io00},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io01},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io02},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io03},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io04},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io05},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io06},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io07},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io08},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io09},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io10},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io11},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io12},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io13},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io14},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io15},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io16},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io17},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io18},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io19},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io20},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io21},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io22},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io23},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io24},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io25},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io26},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io27},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io28},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io29},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io30},
  {IpBlockId::ip_block_gpio_imxrt_gpio_v1, SignalRoleId::signal_role_io31},
}};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
};
inline constexpr std::array<CapabilityDescriptor, 32> kCapabilities = {{
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io00, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io00, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io01, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io01, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io02, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io02, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io03, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io03, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io04, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io04, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io05, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io05, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io06, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io06, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io07, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io07, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io08, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io08, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io09, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io09, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io10, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io10, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io11, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io11, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io12, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io12, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io13, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io13, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io14, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io14, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io15, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io15, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io16, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io16, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io17, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io17, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io18, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io18, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io19, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io19, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io20, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io20, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io21, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io21, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io22, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io22, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io23, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io23, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io24, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io24, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io25, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io25, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io26, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io26, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io27, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io27, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io28, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io28, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io29, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io29, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io30, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io30, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
  {CapabilityId::capability_id_capability_gpio_imxrt_gpio_v1_io31, CapabilityScopeId::capability_scope_ip_block, PeripheralClassId::class_gpio, CapabilityKeyId::capability_signal_role_io31, IpBlockId::ip_block_gpio_imxrt_gpio_v1},
}};
}
}
}
}
