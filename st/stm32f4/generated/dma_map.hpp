#pragma once

#include <array>

namespace st {
namespace stm32f4 {
namespace generated {
struct DmaDescriptor {
  const char* peripheral;
  const char* signal;
  const char* controller;
  const char* request_line;
};
inline constexpr std::array<DmaDescriptor, 4> kDmaMap = {{
  {"USART1", "RX", "DMA2", "DMA2_STREAM2"},
  {"USART1", "TX", "DMA2", "DMA2_STREAM7"},
  {"USART2", "RX", "DMA1", "DMA1_STREAM5"},
  {"USART2", "TX", "DMA1", "DMA1_STREAM6"},
}};
}
}
}
