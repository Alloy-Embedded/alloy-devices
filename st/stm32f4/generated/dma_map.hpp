#pragma once

#include <array>
#include "runtime_semantics.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
enum class DmaMapPeripheralId : std::uint16_t {
  none,
  USART1,
  USART2,
};

enum class DmaMapControllerId : std::uint16_t {
  none,
  DMA2,
  DMA1,
};

enum class DmaMapRequestLineId : std::uint16_t {
  none,
  DMA2_STREAM2,
  DMA2_STREAM7,
  DMA1_STREAM5,
  DMA1_STREAM6,
};

struct DmaDescriptor {
  DmaMapPeripheralId peripheral_id;
  SignalId signal_id;
  DmaMapControllerId controller_id;
  DmaMapRequestLineId request_line_id;
};
inline constexpr std::array<DmaDescriptor, 4> kDmaMap = {{
  {DmaMapPeripheralId::USART1, SignalId::signal_RX, DmaMapControllerId::DMA2, DmaMapRequestLineId::DMA2_STREAM2},
  {DmaMapPeripheralId::USART1, SignalId::signal_TX, DmaMapControllerId::DMA2, DmaMapRequestLineId::DMA2_STREAM7},
  {DmaMapPeripheralId::USART2, SignalId::signal_RX, DmaMapControllerId::DMA1, DmaMapRequestLineId::DMA1_STREAM5},
  {DmaMapPeripheralId::USART2, SignalId::signal_TX, DmaMapControllerId::DMA1, DmaMapRequestLineId::DMA1_STREAM6},
}};
}
}
}
