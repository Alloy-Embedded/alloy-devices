#pragma once

#include <cstddef>
#include <cstdint>

namespace microchip {
namespace same70 {
namespace generated {
struct MemoryDescriptor {
  const char* device;
  const char* name;
  const char* kind;
  std::uintptr_t base_address;
  std::size_t size_bytes;
  const char* access;
  const char* startup_roles;
};
inline constexpr MemoryDescriptor kMemoryMap[] = {
  {"atsame70n21b", "itcm", "sram", 0x00000000u, 131072u, "rwx", "volatile-target,copy-target,zero-target,stack-target"},
  {"atsame70n21b", "iflash", "flash", 0x00400000u, 2097152u, "rwx", "nonvolatile,copy-source,vector-source"},
  {"atsame70n21b", "irom", "rom", 0x00800000u, 16384u, "x", "nonvolatile,copy-source,vector-source"},
  {"atsame70n21b", "dtcm", "sram", 0x20000000u, 131072u, "rwx", "volatile-target,copy-target,zero-target,stack-target"},
  {"atsame70n21b", "iram", "sram", 0x20400000u, 393216u, "rwx", "volatile-target,copy-target,zero-target,stack-target"},
  {"atsame70n21b", "peripherals", "io", 0x40000000u, 536870912u, "rw", ""},
  {"atsame70n21b", "qspimem", "memory", 0x80000000u, 536870912u, "rwx", ""},
  {"atsame70n21b", "aximx", "memory", 0xA0000000u, 1048576u, "rw", ""},
  {"atsame70n21b", "system", "io", 0xE0000000u, 268435456u, "rw", ""},
  {"atsame70q21b", "itcm", "sram", 0x00000000u, 131072u, "rwx", "volatile-target,copy-target,zero-target,stack-target"},
  {"atsame70q21b", "iflash", "flash", 0x00400000u, 2097152u, "rwx", "nonvolatile,copy-source,vector-source"},
  {"atsame70q21b", "irom", "rom", 0x00800000u, 16384u, "x", "nonvolatile,copy-source,vector-source"},
  {"atsame70q21b", "dtcm", "sram", 0x20000000u, 131072u, "rwx", "volatile-target,copy-target,zero-target,stack-target"},
  {"atsame70q21b", "iram", "sram", 0x20400000u, 393216u, "rwx", "volatile-target,copy-target,zero-target,stack-target"},
  {"atsame70q21b", "peripherals", "io", 0x40000000u, 536870912u, "rw", ""},
  {"atsame70q21b", "ebi_cs0", "memory", 0x60000000u, 16777216u, "rwx", ""},
  {"atsame70q21b", "ebi_cs1", "memory", 0x61000000u, 16777216u, "rwx", ""},
  {"atsame70q21b", "ebi_cs2", "memory", 0x62000000u, 16777216u, "rwx", ""},
  {"atsame70q21b", "ebi_cs3", "memory", 0x63000000u, 16777216u, "rwx", ""},
  {"atsame70q21b", "qspimem", "memory", 0x80000000u, 536870912u, "rwx", ""},
  {"atsame70q21b", "aximx", "memory", 0xA0000000u, 1048576u, "rw", ""},
  {"atsame70q21b", "system", "io", 0xE0000000u, 268435456u, "rw", ""},
};
}
}
}
