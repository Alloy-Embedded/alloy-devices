#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"
#include "../dma_bindings.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace runtime {
namespace devices {
namespace atsame70q21b {
namespace driver_semantics {
template<PeripheralId Peripheral, SignalId Signal>
struct DmaSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr DmaBindingId kBindingId = DmaBindingId::none;
  static constexpr DmaControllerId kControllerId = DmaControllerId::none;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::none;
  static constexpr DmaRouteId kRouteId = DmaRouteId::none;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::none;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::none;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = -1;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = kInvalidIndexedFieldRef;
};

template<>
struct DmaSemanticTraits<PeripheralId::GPIOA, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_gpioa_rx_xdmac_perid_34;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_34;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_34_gpioa_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 34;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::SPI0, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_spi0_rx_xdmac_perid_2;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_2;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_2_spi0_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 2;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::SPI0, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_spi0_tx_xdmac_perid_1;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_1;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_1_spi0_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 1;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::SPI1, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_spi1_rx_xdmac_perid_4;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_4;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_4_spi1_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 4;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::SPI1, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_spi1_tx_xdmac_perid_3;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_3;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_3_spi1_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 3;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::TWIHS0, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs0_rx_xdmac_perid_15;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_15;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_15_twihs0_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 15;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::TWIHS0, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs0_tx_xdmac_perid_14;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_14;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_14_twihs0_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 14;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::TWIHS1, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs1_rx_xdmac_perid_17;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_17;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_17_twihs1_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 17;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::TWIHS1, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs1_tx_xdmac_perid_16;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_16;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_16_twihs1_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 16;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::TWIHS2, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs2_rx_xdmac_perid_19;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_19;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_19_twihs2_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 19;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::TWIHS2, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_twihs2_tx_xdmac_perid_18;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_18;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_18_twihs2_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 18;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART0, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart0_rx_xdmac_perid_21;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_21;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_21_uart0_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 21;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART0, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart0_tx_xdmac_perid_20;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_20;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_20_uart0_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 20;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART1, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart1_rx_xdmac_perid_23;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_23;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_23_uart1_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 23;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART1, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart1_tx_xdmac_perid_22;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_22;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_22_uart1_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 22;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART2, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart2_rx_xdmac_perid_25;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_25;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_25_uart2_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 25;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART2, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart2_tx_xdmac_perid_24;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_24;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_24_uart2_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 24;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART3, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart3_rx_xdmac_perid_27;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_27;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_27_uart3_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 27;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART3, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart3_tx_xdmac_perid_26;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_26;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_26_uart3_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 26;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART4, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart4_rx_xdmac_perid_29;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_29;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_29_uart4_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 29;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::UART4, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_uart4_tx_xdmac_perid_28;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_28;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_28_uart4_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 28;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::USART0, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart0_rx_xdmac_perid_8;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_8;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_8_usart0_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 8;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::USART0, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart0_tx_xdmac_perid_7;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_7;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_7_usart0_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 7;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::USART1, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart1_rx_xdmac_perid_10;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_10;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_10_usart1_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 10;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::USART1, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart1_tx_xdmac_perid_9;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_9;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_9_usart1_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 9;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::USART2, SignalId::signal_RX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart2_rx_xdmac_perid_12;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_12;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_12_usart2_rx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 12;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

template<>
struct DmaSemanticTraits<PeripheralId::USART2, SignalId::signal_TX> {
  static constexpr bool kPresent = true;
  static constexpr DmaBindingId kBindingId = DmaBindingId::dma_binding_usart2_tx_xdmac_perid_11;
  static constexpr DmaControllerId kControllerId = DmaControllerId::XDMAC;
  static constexpr DmaRequestLineId kRequestLineId = DmaRequestLineId::PERID_11;
  static constexpr DmaRouteId kRouteId = DmaRouteId::dma_route_xdmac_perid_11_usart2_tx;
  static constexpr DmaConflictGroupId kConflictGroupId = DmaConflictGroupId::none;
  static constexpr PeripheralId kControllerPeripheralId = PeripheralId::XDMAC;
  static constexpr PeripheralId kRouterPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kControllerSchemaId = BackendSchemaId::schema_alloy_dma_microchip_xdmac_k;
  static constexpr BackendSchemaId kRouterSchemaId = BackendSchemaId::none;
  static constexpr int kChannelIndex = -1;
  static constexpr int kRequestValue = 11;
  static constexpr int kChannelSelector = -1;
  static constexpr RuntimeIndexedFieldRef kRouteSelectorField = RuntimeIndexedFieldRef{0x40078000u, 120u, 64u, 24u, 7u, true};
};

inline constexpr std::array<PeripheralId, 27> kDmaSemanticPeripherals = {{
  PeripheralId::GPIOA,
  PeripheralId::SPI0,
  PeripheralId::SPI0,
  PeripheralId::SPI1,
  PeripheralId::SPI1,
  PeripheralId::TWIHS0,
  PeripheralId::TWIHS0,
  PeripheralId::TWIHS1,
  PeripheralId::TWIHS1,
  PeripheralId::TWIHS2,
  PeripheralId::TWIHS2,
  PeripheralId::UART0,
  PeripheralId::UART0,
  PeripheralId::UART1,
  PeripheralId::UART1,
  PeripheralId::UART2,
  PeripheralId::UART2,
  PeripheralId::UART3,
  PeripheralId::UART3,
  PeripheralId::UART4,
  PeripheralId::UART4,
  PeripheralId::USART0,
  PeripheralId::USART0,
  PeripheralId::USART1,
  PeripheralId::USART1,
  PeripheralId::USART2,
  PeripheralId::USART2,
}};
}
}
}
}
}
}
}
