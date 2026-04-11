#pragma once

#include <cstddef>
#include <cstdint>

namespace st {
namespace stm32f4 {
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
  {"stm32f401re", "flash", "flash", 0x08000000u, 524288u, "rx", "nonvolatile,copy-source,vector-source"},
  {"stm32f401re", "sram", "sram", 0x20000000u, 98304u, "rwx", "volatile-target,copy-target,zero-target,stack-target"},
  {"stm32f405rg", "flash", "flash", 0x08000000u, 1048576u, "rx", "nonvolatile,copy-source,vector-source"},
  {"stm32f405rg", "sram", "sram", 0x20000000u, 196608u, "rwx", "volatile-target,copy-target,zero-target,stack-target"},
};
}
}
}
