#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include "runtime_refs.hpp"
#include "runtime_semantics.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
enum class MemoryRegionId : std::uint16_t {
  none,
  mimxrt1062_OCRAM,
  mimxrt1064_OCRAM,
  mimxrt1064_FLASH,
};

struct MemoryDescriptor {
  DeviceRefId device_id;
  MemoryRegionId region_id;
  MemoryKindId kind_id;
  std::uintptr_t base_address;
  std::size_t size_bytes;
  AccessKindId access_id;
  std::uint16_t startup_role_offset;
  std::uint16_t startup_role_count;
};
inline constexpr MemoryDescriptor kMemoryMap[] = {
  {DeviceRefId::mimxrt1062, MemoryRegionId::mimxrt1062_OCRAM, MemoryKindId::memory_kind_ram, 0x20200000u, 1048576u, AccessKindId::access_kind_read_write, 0u, 4u},
  {DeviceRefId::mimxrt1064, MemoryRegionId::mimxrt1064_OCRAM, MemoryKindId::memory_kind_ram, 0x20200000u, 1048576u, AccessKindId::access_kind_read_write, 6u, 4u},
  {DeviceRefId::mimxrt1064, MemoryRegionId::mimxrt1064_FLASH, MemoryKindId::memory_kind_flash, 0x70000000u, 4194304u, AccessKindId::access_kind_read_only, 4u, 2u},
};

struct MemoryStartupRoleRef {
  MemoryRegionId region_id;
  StartupRoleId startup_role_id;
};
inline constexpr std::array<MemoryStartupRoleRef, 10> kMemoryStartupRoles = {{
  {MemoryRegionId::mimxrt1062_OCRAM, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::mimxrt1062_OCRAM, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::mimxrt1062_OCRAM, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::mimxrt1062_OCRAM, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::mimxrt1064_OCRAM, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::mimxrt1064_OCRAM, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::mimxrt1064_OCRAM, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::mimxrt1064_OCRAM, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::mimxrt1064_FLASH, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::mimxrt1064_FLASH, StartupRoleId::startup_role_copy_source},
}};
}
}
}
