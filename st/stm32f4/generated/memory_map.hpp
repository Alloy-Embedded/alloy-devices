#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include "runtime_refs.hpp"
#include "runtime_semantics.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
enum class MemoryRegionId : std::uint16_t {
  none,
  stm32f401re_flash,
  stm32f401re_sram,
  stm32f405rg_flash,
  stm32f405rg_sram,
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
  {DeviceRefId::stm32f401re, MemoryRegionId::stm32f401re_flash, MemoryKindId::memory_kind_flash, 0x08000000u, 524288u, AccessKindId::access_kind_rx, 0u, 3u},
  {DeviceRefId::stm32f401re, MemoryRegionId::stm32f401re_sram, MemoryKindId::memory_kind_sram, 0x20000000u, 98304u, AccessKindId::access_kind_rwx, 3u, 4u},
  {DeviceRefId::stm32f405rg, MemoryRegionId::stm32f405rg_flash, MemoryKindId::memory_kind_flash, 0x08000000u, 1048576u, AccessKindId::access_kind_rx, 7u, 3u},
  {DeviceRefId::stm32f405rg, MemoryRegionId::stm32f405rg_sram, MemoryKindId::memory_kind_sram, 0x20000000u, 196608u, AccessKindId::access_kind_rwx, 10u, 4u},
};

struct MemoryStartupRoleRef {
  MemoryRegionId region_id;
  StartupRoleId startup_role_id;
};
inline constexpr std::array<MemoryStartupRoleRef, 14> kMemoryStartupRoles = {{
  {MemoryRegionId::stm32f401re_flash, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::stm32f401re_flash, StartupRoleId::startup_role_copy_source},
  {MemoryRegionId::stm32f401re_flash, StartupRoleId::startup_role_vector_source},
  {MemoryRegionId::stm32f401re_sram, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::stm32f401re_sram, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::stm32f401re_sram, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::stm32f401re_sram, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::stm32f405rg_flash, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::stm32f405rg_flash, StartupRoleId::startup_role_copy_source},
  {MemoryRegionId::stm32f405rg_flash, StartupRoleId::startup_role_vector_source},
  {MemoryRegionId::stm32f405rg_sram, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::stm32f405rg_sram, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::stm32f405rg_sram, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::stm32f405rg_sram, StartupRoleId::startup_role_stack_target},
}};
}
}
}
