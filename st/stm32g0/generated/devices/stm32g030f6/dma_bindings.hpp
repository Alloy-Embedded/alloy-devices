#pragma once

#include <array>
#include <cstdint>
#include "../../runtime_semantics.hpp"
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

enum class DmaControllerId : std::uint16_t {
  none,
  DMA1,
};

enum class DmaRequestLineId : std::uint16_t {
  none,
  DMA1_CH2,
  DMA1_CH1,
};

enum class DmaRouteId : std::uint16_t {
  none,
  dma_route_dma1_dma1_ch2_usart2_rx,
  dma_route_dma1_dma1_ch1_usart2_tx,
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
  {DmaBindingId::dma_binding_usart2_rx_dma1_dma1_ch2, PeripheralId::USART2, SignalId::signal_RX, DmaControllerId::DMA1, DmaRequestLineId::DMA1_CH2, DmaRouteId::dma_route_dma1_dma1_ch2_usart2_rx, DmaConflictGroupId::none},
  {DmaBindingId::dma_binding_usart2_tx_dma1_dma1_ch1, PeripheralId::USART2, SignalId::signal_TX, DmaControllerId::DMA1, DmaRequestLineId::DMA1_CH1, DmaRouteId::dma_route_dma1_dma1_ch1_usart2_tx, DmaConflictGroupId::none},
}};
}
}
}
}
}
