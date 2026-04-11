#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f401re {
enum class DmaBindingId : std::uint16_t {
  dma_binding_usart2_rx_dma1_dma1_stream5,
  dma_binding_usart2_tx_dma1_dma1_stream6,
};

struct DmaBindingDescriptor {
  DmaBindingId binding_id;
  PeripheralId peripheral_id;
  const char* peripheral_name;
  const char* signal_name;
  const char* controller_name;
  const char* request_line;
  const char* route_id;
  const char* conflict_group;
};
inline constexpr std::array<DmaBindingDescriptor, 2> kDmaBindings = {{
  {DmaBindingId::dma_binding_usart2_rx_dma1_dma1_stream5, PeripheralId::USART2, "USART2", "RX", "DMA1", "DMA1_STREAM5", "dma-route:dma1:dma1-stream5:usart2:rx", nullptr},
  {DmaBindingId::dma_binding_usart2_tx_dma1_dma1_stream6, PeripheralId::USART2, "USART2", "TX", "DMA1", "DMA1_STREAM6", "dma-route:dma1:dma1-stream6:usart2:tx", nullptr},
}};
}
}
}
}
}
