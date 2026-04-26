#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "routes.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g030f6 {
enum class ConnectorId : std::uint16_t {
  none,
  candidate_pa0_spi2_sck,
  candidate_pa0_usart2_cts,
  candidate_pa0_usart2_nss,
  candidate_pa1_i2c1_smba,
  candidate_pa1_spi1_sck,
  candidate_pa1_usart2_ck,
  candidate_pa1_usart2_de,
  candidate_pa1_usart2_rts,
  candidate_pa2_spi1_mosi,
  candidate_pa2_usart2_tx,
  candidate_pa3_spi2_miso,
  candidate_pa3_usart2_rx,
  candidate_pa4_spi1_nss,
  candidate_pa4_spi2_mosi,
  candidate_pa4_tim14_ch1,
  candidate_pa5_spi1_sck,
  candidate_pa6_spi1_miso,
  candidate_pa6_tim16_ch1,
  candidate_pa6_tim1_bk,
  candidate_pa6_tim3_ch1,
  candidate_pa7_spi1_mosi,
  candidate_pa7_tim14_ch1,
  candidate_pa7_tim17_ch1,
  candidate_pa7_tim1_ch1n,
  candidate_pa7_tim3_ch2,
  candidate_pb0_spi1_nss,
  candidate_pb0_tim1_ch2n,
  candidate_pb0_tim3_ch3,
  candidate_pb3_spi1_sck,
  candidate_pb3_tim1_ch2,
  candidate_pb3_usart1_ck,
  candidate_pb3_usart1_de,
  candidate_pb3_usart1_rts,
  candidate_pb7_i2c1_sda,
  candidate_pb7_spi2_mosi,
  candidate_pb7_tim17_ch1n,
  candidate_pb7_usart1_rx,
};

struct ConnectorDescriptor {
  ConnectorId connector_id;
  PinId pin_id;
  PeripheralId peripheral_id;
  SignalId signal_id;
  RouteId route_id;
  RouteKindId route_kind_id;
  ConnectionGroupId group_id;
};

template<PinId Pin, PeripheralId Peripheral, SignalId Signal>
struct ConnectorTraits {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

namespace detail {
template<auto Value>
inline constexpr bool kInvalidConnector = false;
}  // namespace detail

template<PeripheralId Peripheral, SignalId Signal>
struct ConnectorSignalTraits {
  static constexpr bool kPresent = false;
  static constexpr std::array<PinId, 0> kPins = {};
  static constexpr std::array<ConnectorId, 0> kConnectors = {};
};

template<>
struct ConnectorTraits<PinId::PA0, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa0_spi2_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA0, PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa0_usart2_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_usart2_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_tssop20_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PA0, PeripheralId::USART2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa0_usart2_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_usart2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::I2C1, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_i2c1_smba;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_i2c1_smba;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c1_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_spi1_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_usart2_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_usart2_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_usart2_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_tssop20_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PA2, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa2_spi1_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA2, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa2_usart2_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_usart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_tssop20_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA3, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa3_spi2_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA3, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa3_usart2_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_usart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_tssop20_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa4_spi1_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA4, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa4_spi2_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA4, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa4_tim14_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa5_spi1_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_spi1_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_tim16_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim16_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_tim1_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim1_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_tim3_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa7_spi1_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA7, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa7_tim14_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA7, PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa7_tim17_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim17_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim17_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa7_tim1_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa7_tim3_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB0, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb0_spi1_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb0_tim1_ch2n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb0_tim3_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim3_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_spi1_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB3, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_tim1_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_tim1_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_usart1_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_usart1_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_usart1_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB7, PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_i2c1_sda;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_i2c1_sda;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c1_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB7, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_spi2_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB7, PeripheralId::TIM17, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_tim17_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_tim17_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim17_tssop20_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB7, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_usart1_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_tssop20_all_signals;
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB7,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb7_i2c1_sda,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C1 sda. Valid pins: PB7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C1, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA1,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa1_i2c1_smba,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C1, SignalId::signal_smba> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C1 smba. Valid pins: PA1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA6,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa6_spi1_miso,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 miso. Valid pins: PA6. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA2,
    PinId::PA7,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa2_spi1_mosi,
    ConnectorId::candidate_pa7_spi1_mosi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 mosi. Valid pins: PA2, PA7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA4,
    PinId::PB0,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa4_spi1_nss,
    ConnectorId::candidate_pb0_spi1_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 nss. Valid pins: PA4, PB0. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA1,
    PinId::PA5,
    PinId::PB3,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa1_spi1_sck,
    ConnectorId::candidate_pa5_spi1_sck,
    ConnectorId::candidate_pb3_spi1_sck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 sck. Valid pins: PA1, PA5, PB3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA3,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa3_spi2_miso,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 miso. Valid pins: PA3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA4,
    PinId::PB7,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa4_spi2_mosi,
    ConnectorId::candidate_pb7_spi2_mosi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 mosi. Valid pins: PA4, PB7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA0,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa0_spi2_sck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 sck. Valid pins: PA0. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA6,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa6_tim1_bk,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 bk. Valid pins: PA6. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA7,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa7_tim1_ch1n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch1n. Valid pins: PA7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB3,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb3_tim1_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch2. Valid pins: PB3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB0,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb0_tim1_ch2n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch2n. Valid pins: PB0. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA4,
    PinId::PA7,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa4_tim14_ch1,
    ConnectorId::candidate_pa7_tim14_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM14 ch1. Valid pins: PA4, PA7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA6,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa6_tim16_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM16 ch1. Valid pins: PA6. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA7,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa7_tim17_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM17 ch1. Valid pins: PA7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM17, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB7,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb7_tim17_ch1n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM17, SignalId::signal_ch1n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM17 ch1n. Valid pins: PB7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA6,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa6_tim3_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch1. Valid pins: PA6. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA7,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa7_tim3_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch2. Valid pins: PA7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB0,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb0_tim3_ch3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch3. Valid pins: PB0. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB3,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb3_usart1_ck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 ck. Valid pins: PB3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB3,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb3_usart1_de,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_de> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 de. Valid pins: PB3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB3,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb3_usart1_rts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 rts. Valid pins: PB3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB7,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb7_usart1_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 rx. Valid pins: PB7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA1,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa1_usart2_ck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 ck. Valid pins: PA1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA0,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa0_usart2_cts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 cts. Valid pins: PA0. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA1,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa1_usart2_de,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_de> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 de. Valid pins: PA1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA0,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa0_usart2_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 nss. Valid pins: PA0. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA1,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa1_usart2_rts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 rts. Valid pins: PA1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA3,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa3_usart2_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 rx. Valid pins: PA3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA2,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa2_usart2_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 tx. Valid pins: PA2. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g030f6-bootstrap.");
};

inline constexpr std::array<ConnectorDescriptor, 37> kConnectors = {{
  {ConnectorId::candidate_pa0_spi2_sck, PinId::PA0, PeripheralId::SPI2, SignalId::signal_sck, RouteId::candidate_pa0_spi2_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pa0_usart2_cts, PinId::PA0, PeripheralId::USART2, SignalId::signal_cts, RouteId::candidate_pa0_usart2_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_tssop20_tx_rx_cts_rts},
  {ConnectorId::candidate_pa0_usart2_nss, PinId::PA0, PeripheralId::USART2, SignalId::signal_nss, RouteId::candidate_pa0_usart2_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa1_i2c1_smba, PinId::PA1, PeripheralId::I2C1, SignalId::signal_smba, RouteId::candidate_pa1_i2c1_smba, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_tssop20_all_signals},
  {ConnectorId::candidate_pa1_spi1_sck, PinId::PA1, PeripheralId::SPI1, SignalId::signal_sck, RouteId::candidate_pa1_spi1_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pa1_usart2_ck, PinId::PA1, PeripheralId::USART2, SignalId::signal_ck, RouteId::candidate_pa1_usart2_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa1_usart2_de, PinId::PA1, PeripheralId::USART2, SignalId::signal_de, RouteId::candidate_pa1_usart2_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa1_usart2_rts, PinId::PA1, PeripheralId::USART2, SignalId::signal_rts, RouteId::candidate_pa1_usart2_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_tssop20_tx_rx_cts_rts},
  {ConnectorId::candidate_pa2_spi1_mosi, PinId::PA2, PeripheralId::SPI1, SignalId::signal_mosi, RouteId::candidate_pa2_spi1_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pa2_usart2_tx, PinId::PA2, PeripheralId::USART2, SignalId::signal_tx, RouteId::candidate_pa2_usart2_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_tssop20_tx_rx},
  {ConnectorId::candidate_pa3_spi2_miso, PinId::PA3, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pa3_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pa3_usart2_rx, PinId::PA3, PeripheralId::USART2, SignalId::signal_rx, RouteId::candidate_pa3_usart2_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_tssop20_tx_rx},
  {ConnectorId::candidate_pa4_spi1_nss, PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss, RouteId::candidate_pa4_spi1_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa4_spi2_mosi, PinId::PA4, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pa4_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pa4_tim14_ch1, PinId::PA4, PeripheralId::TIM14, SignalId::signal_ch1, RouteId::candidate_pa4_tim14_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa5_spi1_sck, PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck, RouteId::candidate_pa5_spi1_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pa6_spi1_miso, PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso, RouteId::candidate_pa6_spi1_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pa6_tim16_ch1, PinId::PA6, PeripheralId::TIM16, SignalId::signal_ch1, RouteId::candidate_pa6_tim16_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa6_tim1_bk, PinId::PA6, PeripheralId::TIM1, SignalId::signal_bk, RouteId::candidate_pa6_tim1_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_tssop20_all_signals},
  {ConnectorId::candidate_pa6_tim3_ch1, PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1, RouteId::candidate_pa6_tim3_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_tssop20_all_signals},
  {ConnectorId::candidate_pa7_spi1_mosi, PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi, RouteId::candidate_pa7_spi1_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pa7_tim14_ch1, PinId::PA7, PeripheralId::TIM14, SignalId::signal_ch1, RouteId::candidate_pa7_tim14_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa7_tim17_ch1, PinId::PA7, PeripheralId::TIM17, SignalId::signal_ch1, RouteId::candidate_pa7_tim17_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim17_tssop20_all_signals},
  {ConnectorId::candidate_pa7_tim1_ch1n, PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n, RouteId::candidate_pa7_tim1_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_tssop20_all_signals},
  {ConnectorId::candidate_pa7_tim3_ch2, PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2, RouteId::candidate_pa7_tim3_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_tssop20_all_signals},
  {ConnectorId::candidate_pb0_spi1_nss, PinId::PB0, PeripheralId::SPI1, SignalId::signal_nss, RouteId::candidate_pb0_spi1_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb0_tim1_ch2n, PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n, RouteId::candidate_pb0_tim1_ch2n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_tssop20_all_signals},
  {ConnectorId::candidate_pb0_tim3_ch3, PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3, RouteId::candidate_pb0_tim3_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_tssop20_all_signals},
  {ConnectorId::candidate_pb3_spi1_sck, PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck, RouteId::candidate_pb3_spi1_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pb3_tim1_ch2, PinId::PB3, PeripheralId::TIM1, SignalId::signal_ch2, RouteId::candidate_pb3_tim1_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_tssop20_all_signals},
  {ConnectorId::candidate_pb3_usart1_ck, PinId::PB3, PeripheralId::USART1, SignalId::signal_ck, RouteId::candidate_pb3_usart1_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_tssop20_all_signals},
  {ConnectorId::candidate_pb3_usart1_de, PinId::PB3, PeripheralId::USART1, SignalId::signal_de, RouteId::candidate_pb3_usart1_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_tssop20_all_signals},
  {ConnectorId::candidate_pb3_usart1_rts, PinId::PB3, PeripheralId::USART1, SignalId::signal_rts, RouteId::candidate_pb3_usart1_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_tssop20_all_signals},
  {ConnectorId::candidate_pb7_i2c1_sda, PinId::PB7, PeripheralId::I2C1, SignalId::signal_sda, RouteId::candidate_pb7_i2c1_sda, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_tssop20_all_signals},
  {ConnectorId::candidate_pb7_spi2_mosi, PinId::PB7, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pb7_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso},
  {ConnectorId::candidate_pb7_tim17_ch1n, PinId::PB7, PeripheralId::TIM17, SignalId::signal_ch1n, RouteId::candidate_pb7_tim17_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim17_tssop20_all_signals},
  {ConnectorId::candidate_pb7_usart1_rx, PinId::PB7, PeripheralId::USART1, SignalId::signal_rx, RouteId::candidate_pb7_usart1_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_tssop20_all_signals},
}};
}
}
}
}
}
}
