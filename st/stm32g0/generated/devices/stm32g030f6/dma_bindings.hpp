#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
enum class DmaBindingId : std::uint16_t {
  dma_binding_usart2_rx_dma1_dma1_ch2,
  dma_binding_usart2_tx_dma1_dma1_ch1,
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
  {DmaBindingId::dma_binding_usart2_rx_dma1_dma1_ch2, PeripheralId::USART2, "USART2", "RX", "DMA1", "DMA1_CH2", "dma-route:dma1:dma1-ch2:usart2:rx", nullptr},
  {DmaBindingId::dma_binding_usart2_tx_dma1_dma1_ch1, PeripheralId::USART2, "USART2", "TX", "DMA1", "DMA1_CH1", "dma-route:dma1:dma1-ch1:usart2:tx", nullptr},
}};
}
}
}
}
}
