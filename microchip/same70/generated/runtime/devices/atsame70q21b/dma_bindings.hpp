#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "peripheral_instances.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace runtime {
namespace devices {
namespace atsame70q21b {
enum class DmaBindingId : std::uint16_t {
  none,
  dma_binding_gpioa_rx_xdmac_perid_34,
  dma_binding_spi0_rx_xdmac_perid_2,
  dma_binding_spi0_tx_xdmac_perid_1,
  dma_binding_spi1_rx_xdmac_perid_4,
  dma_binding_spi1_tx_xdmac_perid_3,
  dma_binding_twihs0_rx_xdmac_perid_15,
  dma_binding_twihs0_tx_xdmac_perid_14,
  dma_binding_twihs1_rx_xdmac_perid_17,
  dma_binding_twihs1_tx_xdmac_perid_16,
  dma_binding_twihs2_rx_xdmac_perid_19,
  dma_binding_twihs2_tx_xdmac_perid_18,
  dma_binding_uart0_rx_xdmac_perid_21,
  dma_binding_uart0_tx_xdmac_perid_20,
  dma_binding_uart1_rx_xdmac_perid_23,
  dma_binding_uart1_tx_xdmac_perid_22,
  dma_binding_uart2_rx_xdmac_perid_25,
  dma_binding_uart2_tx_xdmac_perid_24,
  dma_binding_uart3_rx_xdmac_perid_27,
  dma_binding_uart3_tx_xdmac_perid_26,
  dma_binding_uart4_rx_xdmac_perid_29,
  dma_binding_uart4_tx_xdmac_perid_28,
  dma_binding_usart0_rx_xdmac_perid_8,
  dma_binding_usart0_tx_xdmac_perid_7,
  dma_binding_usart1_rx_xdmac_perid_10,
  dma_binding_usart1_tx_xdmac_perid_9,
  dma_binding_usart2_rx_xdmac_perid_12,
  dma_binding_usart2_tx_xdmac_perid_11,
};

enum class DmaControllerId : std::uint16_t {
  none,
  XDMAC,
};

enum class DmaRequestLineId : std::uint16_t {
  none,
  PERID_34,
  PERID_2,
  PERID_1,
  PERID_4,
  PERID_3,
  PERID_15,
  PERID_14,
  PERID_17,
  PERID_16,
  PERID_19,
  PERID_18,
  PERID_21,
  PERID_20,
  PERID_23,
  PERID_22,
  PERID_25,
  PERID_24,
  PERID_27,
  PERID_26,
  PERID_29,
  PERID_28,
  PERID_8,
  PERID_7,
  PERID_10,
  PERID_9,
  PERID_12,
  PERID_11,
};

enum class DmaRouteId : std::uint16_t {
  none,
  dma_route_xdmac_perid_34_gpioa_rx,
  dma_route_xdmac_perid_2_spi0_rx,
  dma_route_xdmac_perid_1_spi0_tx,
  dma_route_xdmac_perid_4_spi1_rx,
  dma_route_xdmac_perid_3_spi1_tx,
  dma_route_xdmac_perid_15_twihs0_rx,
  dma_route_xdmac_perid_14_twihs0_tx,
  dma_route_xdmac_perid_17_twihs1_rx,
  dma_route_xdmac_perid_16_twihs1_tx,
  dma_route_xdmac_perid_19_twihs2_rx,
  dma_route_xdmac_perid_18_twihs2_tx,
  dma_route_xdmac_perid_21_uart0_rx,
  dma_route_xdmac_perid_20_uart0_tx,
  dma_route_xdmac_perid_23_uart1_rx,
  dma_route_xdmac_perid_22_uart1_tx,
  dma_route_xdmac_perid_25_uart2_rx,
  dma_route_xdmac_perid_24_uart2_tx,
  dma_route_xdmac_perid_27_uart3_rx,
  dma_route_xdmac_perid_26_uart3_tx,
  dma_route_xdmac_perid_29_uart4_rx,
  dma_route_xdmac_perid_28_uart4_tx,
  dma_route_xdmac_perid_8_usart0_rx,
  dma_route_xdmac_perid_7_usart0_tx,
  dma_route_xdmac_perid_10_usart1_rx,
  dma_route_xdmac_perid_9_usart1_tx,
  dma_route_xdmac_perid_12_usart2_rx,
  dma_route_xdmac_perid_11_usart2_tx,
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
  std::int32_t channel_index;
  std::int32_t request_value;
  std::int32_t channel_selector;
};

template<PeripheralId Peripheral, SignalId Signal>
struct BindingTraits {
  static constexpr bool kPresent = false;
  static constexpr DmaBindingId kBindingId = DmaBindingId::none;
  static constexpr DmaControllerId kControllerId = DmaControllerId::none;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::none;
  static constexpr DmaRouteId kRouteId = DmaRouteId::none;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = -1;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::GPIOA, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_gpioa_rx_xdmac_perid_34;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_34;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_34_gpioa_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 34;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::SPI0, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_spi0_rx_xdmac_perid_2;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_2;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_2_spi0_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 2;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::SPI0, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_spi0_tx_xdmac_perid_1;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_1;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_1_spi0_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 1;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::SPI1, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_spi1_rx_xdmac_perid_4;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_4;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_4_spi1_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 4;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::SPI1, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_spi1_tx_xdmac_perid_3;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_3;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_3_spi1_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 3;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::TWIHS0, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs0_rx_xdmac_perid_15;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_15;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_15_twihs0_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 15;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::TWIHS0, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs0_tx_xdmac_perid_14;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_14;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_14_twihs0_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 14;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::TWIHS1, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs1_rx_xdmac_perid_17;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_17;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_17_twihs1_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 17;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::TWIHS1, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs1_tx_xdmac_perid_16;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_16;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_16_twihs1_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 16;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::TWIHS2, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs2_rx_xdmac_perid_19;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_19;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_19_twihs2_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 19;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::TWIHS2, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs2_tx_xdmac_perid_18;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_18;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_18_twihs2_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 18;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART0, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart0_rx_xdmac_perid_21;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_21;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_21_uart0_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 21;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART0, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart0_tx_xdmac_perid_20;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_20;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_20_uart0_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 20;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART1, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart1_rx_xdmac_perid_23;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_23;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_23_uart1_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 23;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART1, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart1_tx_xdmac_perid_22;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_22;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_22_uart1_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 22;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART2, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart2_rx_xdmac_perid_25;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_25;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_25_uart2_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 25;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART2, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart2_tx_xdmac_perid_24;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_24;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_24_uart2_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 24;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART3, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart3_rx_xdmac_perid_27;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_27;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_27_uart3_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 27;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART3, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart3_tx_xdmac_perid_26;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_26;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_26_uart3_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 26;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART4, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart4_rx_xdmac_perid_29;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_29;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_29_uart4_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 29;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::UART4, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart4_tx_xdmac_perid_28;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_28;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_28_uart4_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 28;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::USART0, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart0_rx_xdmac_perid_8;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_8;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_8_usart0_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 8;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::USART0, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart0_tx_xdmac_perid_7;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_7;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_7_usart0_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 7;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::USART1, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart1_rx_xdmac_perid_10;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_10;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_10_usart1_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 10;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::USART1, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart1_tx_xdmac_perid_9;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_9;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_9_usart1_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 9;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::USART2, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart2_rx_xdmac_perid_12;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_12;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_12_usart2_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 12;
  static constexpr int kChannelSelector = -1;
};

template<>
struct BindingTraits<PeripheralId::USART2, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart2_tx_xdmac_perid_11;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_11;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_11_usart2_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 11;
  static constexpr int kChannelSelector = -1;
};

template<DmaControllerId Id>
struct ControllerTraits {
  static constexpr bool kPresent = false;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr int kChannelCount = -1;
  static constexpr int kRequestCount = -1;
};

template<>
struct ControllerTraits<DmaControllerId::XDMAC> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::XDMAC;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr int kChannelCount = 24;
  static constexpr int kRequestCount = 52;
};

inline constexpr std::array<DmaBindingDescriptor, 27> kDmaBindings = {{
  {DmaBindingId::dma_binding_gpioa_rx_xdmac_perid_34, PeripheralId::GPIOA, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_34, DmaRouteId::dma_route_xdmac_perid_34_gpioa_rx, DmaConflictGroupId::none, -1, 34, -1},
  {DmaBindingId::dma_binding_spi0_rx_xdmac_perid_2, PeripheralId::SPI0, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_2, DmaRouteId::dma_route_xdmac_perid_2_spi0_rx, DmaConflictGroupId::none, -1, 2, -1},
  {DmaBindingId::dma_binding_spi0_tx_xdmac_perid_1, PeripheralId::SPI0, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_1, DmaRouteId::dma_route_xdmac_perid_1_spi0_tx, DmaConflictGroupId::none, -1, 1, -1},
  {DmaBindingId::dma_binding_spi1_rx_xdmac_perid_4, PeripheralId::SPI1, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_4, DmaRouteId::dma_route_xdmac_perid_4_spi1_rx, DmaConflictGroupId::none, -1, 4, -1},
  {DmaBindingId::dma_binding_spi1_tx_xdmac_perid_3, PeripheralId::SPI1, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_3, DmaRouteId::dma_route_xdmac_perid_3_spi1_tx, DmaConflictGroupId::none, -1, 3, -1},
  {DmaBindingId::dma_binding_twihs0_rx_xdmac_perid_15, PeripheralId::TWIHS0, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_15, DmaRouteId::dma_route_xdmac_perid_15_twihs0_rx, DmaConflictGroupId::none, -1, 15, -1},
  {DmaBindingId::dma_binding_twihs0_tx_xdmac_perid_14, PeripheralId::TWIHS0, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_14, DmaRouteId::dma_route_xdmac_perid_14_twihs0_tx, DmaConflictGroupId::none, -1, 14, -1},
  {DmaBindingId::dma_binding_twihs1_rx_xdmac_perid_17, PeripheralId::TWIHS1, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_17, DmaRouteId::dma_route_xdmac_perid_17_twihs1_rx, DmaConflictGroupId::none, -1, 17, -1},
  {DmaBindingId::dma_binding_twihs1_tx_xdmac_perid_16, PeripheralId::TWIHS1, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_16, DmaRouteId::dma_route_xdmac_perid_16_twihs1_tx, DmaConflictGroupId::none, -1, 16, -1},
  {DmaBindingId::dma_binding_twihs2_rx_xdmac_perid_19, PeripheralId::TWIHS2, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_19, DmaRouteId::dma_route_xdmac_perid_19_twihs2_rx, DmaConflictGroupId::none, -1, 19, -1},
  {DmaBindingId::dma_binding_twihs2_tx_xdmac_perid_18, PeripheralId::TWIHS2, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_18, DmaRouteId::dma_route_xdmac_perid_18_twihs2_tx, DmaConflictGroupId::none, -1, 18, -1},
  {DmaBindingId::dma_binding_uart0_rx_xdmac_perid_21, PeripheralId::UART0, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_21, DmaRouteId::dma_route_xdmac_perid_21_uart0_rx, DmaConflictGroupId::none, -1, 21, -1},
  {DmaBindingId::dma_binding_uart0_tx_xdmac_perid_20, PeripheralId::UART0, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_20, DmaRouteId::dma_route_xdmac_perid_20_uart0_tx, DmaConflictGroupId::none, -1, 20, -1},
  {DmaBindingId::dma_binding_uart1_rx_xdmac_perid_23, PeripheralId::UART1, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_23, DmaRouteId::dma_route_xdmac_perid_23_uart1_rx, DmaConflictGroupId::none, -1, 23, -1},
  {DmaBindingId::dma_binding_uart1_tx_xdmac_perid_22, PeripheralId::UART1, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_22, DmaRouteId::dma_route_xdmac_perid_22_uart1_tx, DmaConflictGroupId::none, -1, 22, -1},
  {DmaBindingId::dma_binding_uart2_rx_xdmac_perid_25, PeripheralId::UART2, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_25, DmaRouteId::dma_route_xdmac_perid_25_uart2_rx, DmaConflictGroupId::none, -1, 25, -1},
  {DmaBindingId::dma_binding_uart2_tx_xdmac_perid_24, PeripheralId::UART2, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_24, DmaRouteId::dma_route_xdmac_perid_24_uart2_tx, DmaConflictGroupId::none, -1, 24, -1},
  {DmaBindingId::dma_binding_uart3_rx_xdmac_perid_27, PeripheralId::UART3, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_27, DmaRouteId::dma_route_xdmac_perid_27_uart3_rx, DmaConflictGroupId::none, -1, 27, -1},
  {DmaBindingId::dma_binding_uart3_tx_xdmac_perid_26, PeripheralId::UART3, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_26, DmaRouteId::dma_route_xdmac_perid_26_uart3_tx, DmaConflictGroupId::none, -1, 26, -1},
  {DmaBindingId::dma_binding_uart4_rx_xdmac_perid_29, PeripheralId::UART4, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_29, DmaRouteId::dma_route_xdmac_perid_29_uart4_rx, DmaConflictGroupId::none, -1, 29, -1},
  {DmaBindingId::dma_binding_uart4_tx_xdmac_perid_28, PeripheralId::UART4, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_28, DmaRouteId::dma_route_xdmac_perid_28_uart4_tx, DmaConflictGroupId::none, -1, 28, -1},
  {DmaBindingId::dma_binding_usart0_rx_xdmac_perid_8, PeripheralId::USART0, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_8, DmaRouteId::dma_route_xdmac_perid_8_usart0_rx, DmaConflictGroupId::none, -1, 8, -1},
  {DmaBindingId::dma_binding_usart0_tx_xdmac_perid_7, PeripheralId::USART0, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_7, DmaRouteId::dma_route_xdmac_perid_7_usart0_tx, DmaConflictGroupId::none, -1, 7, -1},
  {DmaBindingId::dma_binding_usart1_rx_xdmac_perid_10, PeripheralId::USART1, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_10, DmaRouteId::dma_route_xdmac_perid_10_usart1_rx, DmaConflictGroupId::none, -1, 10, -1},
  {DmaBindingId::dma_binding_usart1_tx_xdmac_perid_9, PeripheralId::USART1, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_9, DmaRouteId::dma_route_xdmac_perid_9_usart1_tx, DmaConflictGroupId::none, -1, 9, -1},
  {DmaBindingId::dma_binding_usart2_rx_xdmac_perid_12, PeripheralId::USART2, SignalId::signal_RX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_12, DmaRouteId::dma_route_xdmac_perid_12_usart2_rx, DmaConflictGroupId::none, -1, 12, -1},
  {DmaBindingId::dma_binding_usart2_tx_xdmac_perid_11, PeripheralId::USART2, SignalId::signal_TX, DmaControllerId::XDMAC, DmaRequestLineId::PERID_11, DmaRouteId::dma_route_xdmac_perid_11_usart2_tx, DmaConflictGroupId::none, -1, 11, -1},
}};

inline constexpr std::array<DmaControllerId, 1> kDmaControllers = {{
  DmaControllerId::XDMAC,
}};
}
}
}
}
}
}
