#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include "runtime_refs.hpp"
#include "runtime_semantics.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
enum class MemoryRegionId : std::uint16_t {
  none,
  stm32g030f6_flash,
  stm32g030f6_sram,
  stm32g071rb_flash,
  stm32g071rb_sram,
  stm32g0b1re_flash,
  stm32g0b1re_sram,
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
  {DeviceRefId::stm32g030f6, MemoryRegionId::stm32g030f6_flash, MemoryKindId::memory_kind_flash, 0x08000000u, 32768u, AccessKindId::access_kind_rx, 0u, 3u},
  {DeviceRefId::stm32g030f6, MemoryRegionId::stm32g030f6_sram, MemoryKindId::memory_kind_sram, 0x20000000u, 8192u, AccessKindId::access_kind_rwx, 3u, 4u},
  {DeviceRefId::stm32g071rb, MemoryRegionId::stm32g071rb_flash, MemoryKindId::memory_kind_flash, 0x08000000u, 131072u, AccessKindId::access_kind_rx, 7u, 3u},
  {DeviceRefId::stm32g071rb, MemoryRegionId::stm32g071rb_sram, MemoryKindId::memory_kind_sram, 0x20000000u, 36864u, AccessKindId::access_kind_rwx, 10u, 4u},
  {DeviceRefId::stm32g0b1re, MemoryRegionId::stm32g0b1re_flash, MemoryKindId::memory_kind_flash, 0x08000000u, 524288u, AccessKindId::access_kind_rx, 14u, 3u},
  {DeviceRefId::stm32g0b1re, MemoryRegionId::stm32g0b1re_sram, MemoryKindId::memory_kind_sram, 0x20000000u, 147456u, AccessKindId::access_kind_rwx, 17u, 4u},
};

struct MemoryStartupRoleRef {
  MemoryRegionId region_id;
  StartupRoleId startup_role_id;
};
inline constexpr std::array<MemoryStartupRoleRef, 21> kMemoryStartupRoles = {{
  {MemoryRegionId::stm32g030f6_flash, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::stm32g030f6_flash, StartupRoleId::startup_role_copy_source},
  {MemoryRegionId::stm32g030f6_flash, StartupRoleId::startup_role_vector_source},
  {MemoryRegionId::stm32g030f6_sram, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::stm32g030f6_sram, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::stm32g030f6_sram, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::stm32g030f6_sram, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::stm32g071rb_flash, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::stm32g071rb_flash, StartupRoleId::startup_role_copy_source},
  {MemoryRegionId::stm32g071rb_flash, StartupRoleId::startup_role_vector_source},
  {MemoryRegionId::stm32g071rb_sram, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::stm32g071rb_sram, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::stm32g071rb_sram, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::stm32g071rb_sram, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::stm32g0b1re_flash, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::stm32g0b1re_flash, StartupRoleId::startup_role_copy_source},
  {MemoryRegionId::stm32g0b1re_flash, StartupRoleId::startup_role_vector_source},
  {MemoryRegionId::stm32g0b1re_sram, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::stm32g0b1re_sram, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::stm32g0b1re_sram, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::stm32g0b1re_sram, StartupRoleId::startup_role_stack_target},
}};
}
}
}
