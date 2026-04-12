#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include "runtime_refs.hpp"
#include "runtime_semantics.hpp"

namespace microchip {
namespace same70 {
namespace generated {
enum class MemoryRegionId : std::uint16_t {
  none,
  atsame70n21b_itcm,
  atsame70n21b_iflash,
  atsame70n21b_irom,
  atsame70n21b_dtcm,
  atsame70n21b_iram,
  atsame70n21b_peripherals,
  atsame70n21b_qspimem,
  atsame70n21b_aximx,
  atsame70n21b_system,
  atsame70q21b_itcm,
  atsame70q21b_iflash,
  atsame70q21b_irom,
  atsame70q21b_dtcm,
  atsame70q21b_iram,
  atsame70q21b_peripherals,
  atsame70q21b_ebi_cs0,
  atsame70q21b_ebi_cs1,
  atsame70q21b_ebi_cs2,
  atsame70q21b_ebi_cs3,
  atsame70q21b_qspimem,
  atsame70q21b_aximx,
  atsame70q21b_system,
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
  {DeviceRefId::atsame70n21b, MemoryRegionId::atsame70n21b_itcm, MemoryKindId::memory_kind_sram, 0x00000000u, 131072u, AccessKindId::access_kind_rwx, 14u, 4u},
  {DeviceRefId::atsame70n21b, MemoryRegionId::atsame70n21b_iflash, MemoryKindId::memory_kind_flash, 0x00400000u, 2097152u, AccessKindId::access_kind_rwx, 4u, 3u},
  {DeviceRefId::atsame70n21b, MemoryRegionId::atsame70n21b_irom, MemoryKindId::memory_kind_rom, 0x00800000u, 16384u, AccessKindId::access_kind_x, 11u, 3u},
  {DeviceRefId::atsame70n21b, MemoryRegionId::atsame70n21b_dtcm, MemoryKindId::memory_kind_sram, 0x20000000u, 131072u, AccessKindId::access_kind_rwx, 0u, 4u},
  {DeviceRefId::atsame70n21b, MemoryRegionId::atsame70n21b_iram, MemoryKindId::memory_kind_sram, 0x20400000u, 393216u, AccessKindId::access_kind_rwx, 7u, 4u},
  {DeviceRefId::atsame70n21b, MemoryRegionId::atsame70n21b_peripherals, MemoryKindId::memory_kind_io, 0x40000000u, 536870912u, AccessKindId::access_kind_rw, 18u, 0u},
  {DeviceRefId::atsame70n21b, MemoryRegionId::atsame70n21b_qspimem, MemoryKindId::memory_kind_memory, 0x80000000u, 536870912u, AccessKindId::access_kind_rwx, 18u, 0u},
  {DeviceRefId::atsame70n21b, MemoryRegionId::atsame70n21b_aximx, MemoryKindId::memory_kind_memory, 0xA0000000u, 1048576u, AccessKindId::access_kind_rw, 0u, 0u},
  {DeviceRefId::atsame70n21b, MemoryRegionId::atsame70n21b_system, MemoryKindId::memory_kind_io, 0xE0000000u, 268435456u, AccessKindId::access_kind_rw, 18u, 0u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_itcm, MemoryKindId::memory_kind_sram, 0x00000000u, 131072u, AccessKindId::access_kind_rwx, 32u, 4u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_iflash, MemoryKindId::memory_kind_flash, 0x00400000u, 2097152u, AccessKindId::access_kind_rwx, 22u, 3u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_irom, MemoryKindId::memory_kind_rom, 0x00800000u, 16384u, AccessKindId::access_kind_x, 29u, 3u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_dtcm, MemoryKindId::memory_kind_sram, 0x20000000u, 131072u, AccessKindId::access_kind_rwx, 18u, 4u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_iram, MemoryKindId::memory_kind_sram, 0x20400000u, 393216u, AccessKindId::access_kind_rwx, 25u, 4u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_peripherals, MemoryKindId::memory_kind_io, 0x40000000u, 536870912u, AccessKindId::access_kind_rw, 36u, 0u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_ebi_cs0, MemoryKindId::memory_kind_memory, 0x60000000u, 16777216u, AccessKindId::access_kind_rwx, 22u, 0u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_ebi_cs1, MemoryKindId::memory_kind_memory, 0x61000000u, 16777216u, AccessKindId::access_kind_rwx, 22u, 0u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_ebi_cs2, MemoryKindId::memory_kind_memory, 0x62000000u, 16777216u, AccessKindId::access_kind_rwx, 22u, 0u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_ebi_cs3, MemoryKindId::memory_kind_memory, 0x63000000u, 16777216u, AccessKindId::access_kind_rwx, 22u, 0u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_qspimem, MemoryKindId::memory_kind_memory, 0x80000000u, 536870912u, AccessKindId::access_kind_rwx, 36u, 0u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_aximx, MemoryKindId::memory_kind_memory, 0xA0000000u, 1048576u, AccessKindId::access_kind_rw, 18u, 0u},
  {DeviceRefId::atsame70q21b, MemoryRegionId::atsame70q21b_system, MemoryKindId::memory_kind_io, 0xE0000000u, 268435456u, AccessKindId::access_kind_rw, 36u, 0u},
};

struct MemoryStartupRoleRef {
  MemoryRegionId region_id;
  StartupRoleId startup_role_id;
};
inline constexpr std::array<MemoryStartupRoleRef, 36> kMemoryStartupRoles = {{
  {MemoryRegionId::atsame70n21b_itcm, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::atsame70n21b_itcm, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::atsame70n21b_itcm, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::atsame70n21b_itcm, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::atsame70n21b_iflash, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::atsame70n21b_iflash, StartupRoleId::startup_role_copy_source},
  {MemoryRegionId::atsame70n21b_iflash, StartupRoleId::startup_role_vector_source},
  {MemoryRegionId::atsame70n21b_irom, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::atsame70n21b_irom, StartupRoleId::startup_role_copy_source},
  {MemoryRegionId::atsame70n21b_irom, StartupRoleId::startup_role_vector_source},
  {MemoryRegionId::atsame70n21b_dtcm, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::atsame70n21b_dtcm, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::atsame70n21b_dtcm, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::atsame70n21b_dtcm, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::atsame70n21b_iram, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::atsame70n21b_iram, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::atsame70n21b_iram, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::atsame70n21b_iram, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::atsame70q21b_itcm, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::atsame70q21b_itcm, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::atsame70q21b_itcm, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::atsame70q21b_itcm, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::atsame70q21b_iflash, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::atsame70q21b_iflash, StartupRoleId::startup_role_copy_source},
  {MemoryRegionId::atsame70q21b_iflash, StartupRoleId::startup_role_vector_source},
  {MemoryRegionId::atsame70q21b_irom, StartupRoleId::startup_role_nonvolatile},
  {MemoryRegionId::atsame70q21b_irom, StartupRoleId::startup_role_copy_source},
  {MemoryRegionId::atsame70q21b_irom, StartupRoleId::startup_role_vector_source},
  {MemoryRegionId::atsame70q21b_dtcm, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::atsame70q21b_dtcm, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::atsame70q21b_dtcm, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::atsame70q21b_dtcm, StartupRoleId::startup_role_stack_target},
  {MemoryRegionId::atsame70q21b_iram, StartupRoleId::startup_role_volatile_target},
  {MemoryRegionId::atsame70q21b_iram, StartupRoleId::startup_role_copy_target},
  {MemoryRegionId::atsame70q21b_iram, StartupRoleId::startup_role_zero_target},
  {MemoryRegionId::atsame70q21b_iram, StartupRoleId::startup_role_stack_target},
}};
}
}
}
