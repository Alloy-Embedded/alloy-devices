#pragma once

#include <array>
#include <cstdint>
#include "../../runtime_semantics.hpp"
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

enum class DmaControllerId : std::uint16_t {
  none,
  DMA2,
};

enum class DmaRequestLineId : std::uint16_t {
  none,
  DMA2_STREAM2,
  DMA2_STREAM7,
};

enum class DmaRouteId : std::uint16_t {
  none,
  dma_route_dma2_dma2_stream2_usart1_rx,
  dma_route_dma2_dma2_stream7_usart1_tx,
};

enum class DmaConflictGroupId : std::uint16_t {
  none,
};

struct DmaBindingDescriptor {
  DmaBindingId binding_id;
  PeripheralId peripheral_id;
  SignalId signal_id;
  DmaControllerId controller_id;
  DmaRequestLineId request_line_id;
  DmaRouteId route_id;
  DmaConflictGroupId conflict_group_id;
};
inline constexpr std::array<DmaBindingDescriptor, 2> kDmaBindings = {{
  {DmaBindingId::dma_binding_usart1_rx_dma2_dma2_stream2, PeripheralId::USART1, SignalId::signal_RX, DmaControllerId::DMA2, DmaRequestLineId::DMA2_STREAM2, DmaRouteId::dma_route_dma2_dma2_stream2_usart1_rx, DmaConflictGroupId::none},
  {DmaBindingId::dma_binding_usart1_tx_dma2_dma2_stream7, PeripheralId::USART1, SignalId::signal_TX, DmaControllerId::DMA2, DmaRequestLineId::DMA2_STREAM7, DmaRouteId::dma_route_dma2_dma2_stream7_usart1_tx, DmaConflictGroupId::none},
}};
}
}
}
}
}
