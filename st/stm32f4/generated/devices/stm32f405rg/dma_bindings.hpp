#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f405rg {
enum class DmaBindingId : std::uint16_t {
  dma_binding_usart1_rx_dma2_dma2_stream2,
  dma_binding_usart1_tx_dma2_dma2_stream7,
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
  {DmaBindingId::dma_binding_usart1_rx_dma2_dma2_stream2, PeripheralId::USART1, "USART1", "RX", "DMA2", "DMA2_STREAM2", "dma-route:dma2:dma2-stream2:usart1:rx", nullptr},
  {DmaBindingId::dma_binding_usart1_tx_dma2_dma2_stream7, PeripheralId::USART1, "USART1", "TX", "DMA2", "DMA2_STREAM7", "dma-route:dma2:dma2-stream7:usart1:tx", nullptr},
}};
}
}
}
}
}
