#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "routes.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f405rg {
enum class ConnectorId : std::uint16_t {
  none,
  candidate_pa10_tim1_ch3,
  candidate_pa10_usart1_rx,
  candidate_pa11_tim1_ch4,
  candidate_pa11_usart1_cts,
  candidate_pa12_tim1_etr,
  candidate_pa12_usart1_rts,
  candidate_pa15_spi1_nss,
  candidate_pa15_tim2_ch1,
  candidate_pa15_tim2_etr,
  candidate_pa1_tim2_ch2,
  candidate_pa1_tim5_ch2,
  candidate_pa1_usart2_rts,
  candidate_pa2_tim2_ch3,
  candidate_pa2_tim5_ch3,
  candidate_pa2_usart2_tx,
  candidate_pa3_tim2_ch4,
  candidate_pa3_tim5_ch4,
  candidate_pa3_usart2_rx,
  candidate_pa4_spi1_nss,
  candidate_pa4_usart2_ck,
  candidate_pa5_spi1_sck,
  candidate_pa5_tim2_ch1,
  candidate_pa5_tim2_etr,
  candidate_pa6_spi1_miso,
  candidate_pa6_tim1_bkin,
  candidate_pa6_tim3_ch1,
  candidate_pa7_spi1_mosi,
  candidate_pa7_tim1_ch1n,
  candidate_pa7_tim3_ch2,
  candidate_pa8_tim1_ch1,
  candidate_pa8_usart1_ck,
  candidate_pa9_tim1_ch2,
  candidate_pa9_usart1_tx,
  candidate_pb0_tim1_ch2n,
  candidate_pb0_tim3_ch3,
  candidate_pb10_i2c2_scl,
  candidate_pb10_spi2_sck,
  candidate_pb10_tim2_ch3,
  candidate_pb11_i2c2_sda,
  candidate_pb11_tim2_ch4,
  candidate_pb12_i2c2_smba,
  candidate_pb12_spi2_nss,
  candidate_pb12_tim1_bkin,
  candidate_pb13_spi2_sck,
  candidate_pb13_tim1_ch1n,
  candidate_pb14_spi2_miso,
  candidate_pb14_tim1_ch2n,
  candidate_pb15_spi2_mosi,
  candidate_pb15_tim1_ch3n,
  candidate_pb1_tim1_ch3n,
  candidate_pb1_tim3_ch4,
  candidate_pb3_spi1_sck,
  candidate_pb3_tim2_ch2,
  candidate_pb4_spi1_miso,
  candidate_pb4_tim3_ch1,
  candidate_pb5_i2c1_smba,
  candidate_pb5_spi1_mosi,
  candidate_pb5_tim3_ch2,
  candidate_pb6_i2c1_scl,
  candidate_pb6_tim4_ch1,
  candidate_pb6_usart1_tx,
  candidate_pb7_i2c1_sda,
  candidate_pb7_tim4_ch2,
  candidate_pb7_usart1_rx,
  candidate_pb8_i2c1_scl,
  candidate_pb8_tim4_ch3,
  candidate_pb9_i2c1_sda,
  candidate_pb9_spi2_nss,
  candidate_pb9_tim4_ch4,
  candidate_pc2_spi2_miso,
  candidate_pc3_spi2_mosi,
  candidate_pc6_tim3_ch1,
  candidate_pc7_tim3_ch2,
  candidate_pc8_tim3_ch3,
  candidate_pc9_tim3_ch4,
  candidate_pd2_tim3_etr,
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
struct ConnectorTraits<PinId::PA10, PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa10_tim1_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_tim1_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA10, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa10_usart1_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA11, PeripheralId::TIM1, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa11_tim1_ch4;
  static constexpr RouteId kRouteId = RouteId::candidate_pa11_tim1_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA11, PeripheralId::USART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa11_usart1_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa11_usart1_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PA12, PeripheralId::TIM1, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa12_tim1_etr;
  static constexpr RouteId kRouteId = RouteId::candidate_pa12_tim1_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA12, PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa12_usart1_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa12_usart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PA15, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_spi1_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA15, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_tim2_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA15, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_tim2_etr;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_tim2_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_tim2_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::TIM5, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_tim5_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_tim5_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim5_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_usart2_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA2, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa2_tim2_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_tim2_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA2, PeripheralId::TIM5, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa2_tim5_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_tim5_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim5_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA2, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa2_usart2_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_usart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA3, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa3_tim2_ch4;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_tim2_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA3, PeripheralId::TIM5, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa3_tim5_ch4;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_tim5_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim5_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA3, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa3_usart2_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_usart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx;
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
struct ConnectorTraits<PinId::PA4, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa4_usart2_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_usart2_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa5_spi1_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA5, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa5_tim2_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA5, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa5_tim2_etr;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_spi1_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::TIM1, SignalId::signal_bkin> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_tim1_bkin;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim1_bkin;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_tim3_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa7_spi1_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa7_tim1_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa7_tim3_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA8, PeripheralId::TIM1, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa8_tim1_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa8_tim1_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA8, PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa8_usart1_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa8_usart1_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA9, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa9_tim1_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_tim1_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA9, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa9_usart1_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_usart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb0_tim1_ch2n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb0_tim3_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim3_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB10, PeripheralId::I2C2, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb10_i2c2_scl;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_i2c2_scl;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c2_lqfp64_scl_sda;
};

template<>
struct ConnectorTraits<PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb10_spi2_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB10, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb10_tim2_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_tim2_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB11, PeripheralId::I2C2, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb11_i2c2_sda;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_i2c2_sda;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c2_lqfp64_scl_sda;
};

template<>
struct ConnectorTraits<PinId::PB11, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb11_tim2_ch4;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_tim2_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB12, PeripheralId::I2C2, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb12_i2c2_smba;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_i2c2_smba;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB12, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb12_spi2_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB12, PeripheralId::TIM1, SignalId::signal_bkin> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb12_tim1_bkin;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_tim1_bkin;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB13, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb13_spi2_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB13, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb13_tim1_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB14, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb14_spi2_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB14, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb14_tim1_ch2n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB15, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb15_spi2_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB15, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb15_tim1_ch3n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_tim1_ch3n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB1, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb1_tim1_ch3n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_tim1_ch3n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB1, PeripheralId::TIM3, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb1_tim3_ch4;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_tim3_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_spi1_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB3, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_tim2_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_tim2_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb4_spi1_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB4, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb4_tim3_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB5, PeripheralId::I2C1, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb5_i2c1_smba;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_i2c1_smba;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb5_spi1_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB5, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb5_tim3_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB6, PeripheralId::I2C1, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb6_i2c1_scl;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_i2c1_scl;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c1_lqfp64_scl_sda;
};

template<>
struct ConnectorTraits<PinId::PB6, PeripheralId::TIM4, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb6_tim4_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_tim4_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim4_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB6, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb6_usart1_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_usart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PB7, PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_i2c1_sda;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_i2c1_sda;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c1_lqfp64_scl_sda;
};

template<>
struct ConnectorTraits<PinId::PB7, PeripheralId::TIM4, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_tim4_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_tim4_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim4_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB7, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_usart1_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PB8, PeripheralId::I2C1, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb8_i2c1_scl;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_i2c1_scl;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c1_lqfp64_scl_sda;
};

template<>
struct ConnectorTraits<PinId::PB8, PeripheralId::TIM4, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb8_tim4_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_tim4_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim4_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB9, PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb9_i2c1_sda;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_i2c1_sda;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c1_lqfp64_scl_sda;
};

template<>
struct ConnectorTraits<PinId::PB9, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb9_spi2_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB9, PeripheralId::TIM4, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb9_tim4_ch4;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_tim4_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim4_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC2, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc2_spi2_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pc2_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PC3, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc3_spi2_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pc3_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PC6, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc6_tim3_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pc6_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC7, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc7_tim3_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pc7_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC8, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc8_tim3_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pc8_tim3_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC9, PeripheralId::TIM3, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc9_tim3_ch4;
  static constexpr RouteId kRouteId = RouteId::candidate_pc9_tim3_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PD2, PeripheralId::TIM3, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd2_tim3_etr;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_tim3_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C1, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB6,
    PinId::PB8,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb6_i2c1_scl,
    ConnectorId::candidate_pb8_i2c1_scl,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C1, SignalId::signal_scl> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C1 scl. Valid pins: PB6, PB8. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB7,
    PinId::PB9,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb7_i2c1_sda,
    ConnectorId::candidate_pb9_i2c1_sda,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C1 sda. Valid pins: PB7, PB9. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C1, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB5,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb5_i2c1_smba,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C1, SignalId::signal_smba> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C1 smba. Valid pins: PB5. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C2, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB10,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb10_i2c2_scl,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C2, SignalId::signal_scl> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C2 scl. Valid pins: PB10. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C2, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb11_i2c2_sda,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C2, SignalId::signal_sda> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C2 sda. Valid pins: PB11. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C2, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB12,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb12_i2c2_smba,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C2, SignalId::signal_smba> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C2 smba. Valid pins: PB12. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA6,
    PinId::PB4,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa6_spi1_miso,
    ConnectorId::candidate_pb4_spi1_miso,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 miso. Valid pins: PA6, PB4. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA7,
    PinId::PB5,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa7_spi1_mosi,
    ConnectorId::candidate_pb5_spi1_mosi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 mosi. Valid pins: PA7, PB5. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA15,
    PinId::PA4,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa15_spi1_nss,
    ConnectorId::candidate_pa4_spi1_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 nss. Valid pins: PA15, PA4. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA5,
    PinId::PB3,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 sck. Valid pins: PA5, PB3. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB14,
    PinId::PC2,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb14_spi2_miso,
    ConnectorId::candidate_pc2_spi2_miso,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 miso. Valid pins: PB14, PC2. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB15,
    PinId::PC3,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb15_spi2_mosi,
    ConnectorId::candidate_pc3_spi2_mosi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 mosi. Valid pins: PB15, PC3. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB12,
    PinId::PB9,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb12_spi2_nss,
    ConnectorId::candidate_pb9_spi2_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 nss. Valid pins: PB12, PB9. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB10,
    PinId::PB13,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb10_spi2_sck,
    ConnectorId::candidate_pb13_spi2_sck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 sck. Valid pins: PB10, PB13. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_bkin> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA6,
    PinId::PB12,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa6_tim1_bkin,
    ConnectorId::candidate_pb12_tim1_bkin,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_bkin> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 bkin. Valid pins: PA6, PB12. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA8,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa8_tim1_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch1. Valid pins: PA8. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA7,
    PinId::PB13,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa7_tim1_ch1n,
    ConnectorId::candidate_pb13_tim1_ch1n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch1n. Valid pins: PA7, PB13. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA9,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa9_tim1_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch2. Valid pins: PA9. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB0,
    PinId::PB14,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb0_tim1_ch2n,
    ConnectorId::candidate_pb14_tim1_ch2n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch2n. Valid pins: PB0, PB14. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA10,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa10_tim1_ch3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch3. Valid pins: PA10. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB15,
    PinId::PB1,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb15_tim1_ch3n,
    ConnectorId::candidate_pb1_tim1_ch3n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch3n. Valid pins: PB15, PB1. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa11_tim1_ch4,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch4> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch4. Valid pins: PA11. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA12,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa12_tim1_etr,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_etr> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 etr. Valid pins: PA12. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA15,
    PinId::PA5,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa15_tim2_ch1,
    ConnectorId::candidate_pa5_tim2_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 ch1. Valid pins: PA15, PA5. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA1,
    PinId::PB3,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa1_tim2_ch2,
    ConnectorId::candidate_pb3_tim2_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 ch2. Valid pins: PA1, PB3. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA2,
    PinId::PB10,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa2_tim2_ch3,
    ConnectorId::candidate_pb10_tim2_ch3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 ch3. Valid pins: PA2, PB10. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA3,
    PinId::PB11,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa3_tim2_ch4,
    ConnectorId::candidate_pb11_tim2_ch4,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 ch4. Valid pins: PA3, PB11. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA15,
    PinId::PA5,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa15_tim2_etr,
    ConnectorId::candidate_pa5_tim2_etr,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 etr. Valid pins: PA15, PA5. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA6,
    PinId::PB4,
    PinId::PC6,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa6_tim3_ch1,
    ConnectorId::candidate_pb4_tim3_ch1,
    ConnectorId::candidate_pc6_tim3_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch1. Valid pins: PA6, PB4, PC6. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA7,
    PinId::PB5,
    PinId::PC7,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa7_tim3_ch2,
    ConnectorId::candidate_pb5_tim3_ch2,
    ConnectorId::candidate_pc7_tim3_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch2. Valid pins: PA7, PB5, PC7. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB0,
    PinId::PC8,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb0_tim3_ch3,
    ConnectorId::candidate_pc8_tim3_ch3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch3. Valid pins: PB0, PC8. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM3, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB1,
    PinId::PC9,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb1_tim3_ch4,
    ConnectorId::candidate_pc9_tim3_ch4,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM3, SignalId::signal_ch4> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch4. Valid pins: PB1, PC9. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM3, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PD2,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pd2_tim3_etr,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM3, SignalId::signal_etr> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 etr. Valid pins: PD2. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM4, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB6,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb6_tim4_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM4, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM4 ch1. Valid pins: PB6. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM4, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB7,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb7_tim4_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM4, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM4 ch2. Valid pins: PB7. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM4, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB8,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb8_tim4_ch3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM4, SignalId::signal_ch3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM4 ch3. Valid pins: PB8. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM4, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB9,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb9_tim4_ch4,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM4, SignalId::signal_ch4> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM4 ch4. Valid pins: PB9. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM5, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA1,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa1_tim5_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM5, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM5 ch2. Valid pins: PA1. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM5, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA2,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa2_tim5_ch3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM5, SignalId::signal_ch3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM5 ch3. Valid pins: PA2. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM5, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA3,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa3_tim5_ch4,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM5, SignalId::signal_ch4> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM5 ch4. Valid pins: PA3. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA8,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa8_usart1_ck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 ck. Valid pins: PA8. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa11_usart1_cts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_cts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 cts. Valid pins: PA11. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA12,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa12_usart1_rts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 rts. Valid pins: PA12. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA10,
    PinId::PB7,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa10_usart1_rx,
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 rx. Valid pins: PA10, PB7. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA9,
    PinId::PB6,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa9_usart1_tx,
    ConnectorId::candidate_pb6_usart1_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 tx. Valid pins: PA9, PB6. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA4,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa4_usart2_ck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 ck. Valid pins: PA4. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 rts. Valid pins: PA1. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 rx. Valid pins: PA3. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 tx. Valid pins: PA2. Provenance: stm32-open-pin-data; patches=st-stm32f4-family-bootstrap-v1, st-stm32f4-stm32f405rg-bootstrap.");
};

inline constexpr std::array<ConnectorDescriptor, 76> kConnectors = {{
  {ConnectorId::candidate_pa10_tim1_ch3, PinId::PA10, PeripheralId::TIM1, SignalId::signal_ch3, RouteId::candidate_pa10_tim1_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa10_usart1_rx, PinId::PA10, PeripheralId::USART1, SignalId::signal_rx, RouteId::candidate_pa10_usart1_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pa11_tim1_ch4, PinId::PA11, PeripheralId::TIM1, SignalId::signal_ch4, RouteId::candidate_pa11_tim1_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa11_usart1_cts, PinId::PA11, PeripheralId::USART1, SignalId::signal_cts, RouteId::candidate_pa11_usart1_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pa12_tim1_etr, PinId::PA12, PeripheralId::TIM1, SignalId::signal_etr, RouteId::candidate_pa12_tim1_etr, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa12_usart1_rts, PinId::PA12, PeripheralId::USART1, SignalId::signal_rts, RouteId::candidate_pa12_usart1_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pa15_spi1_nss, PinId::PA15, PeripheralId::SPI1, SignalId::signal_nss, RouteId::candidate_pa15_spi1_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa15_tim2_ch1, PinId::PA15, PeripheralId::TIM2, SignalId::signal_ch1, RouteId::candidate_pa15_tim2_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa15_tim2_etr, PinId::PA15, PeripheralId::TIM2, SignalId::signal_etr, RouteId::candidate_pa15_tim2_etr, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa1_tim2_ch2, PinId::PA1, PeripheralId::TIM2, SignalId::signal_ch2, RouteId::candidate_pa1_tim2_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa1_tim5_ch2, PinId::PA1, PeripheralId::TIM5, SignalId::signal_ch2, RouteId::candidate_pa1_tim5_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim5_lqfp64_all_signals},
  {ConnectorId::candidate_pa1_usart2_rts, PinId::PA1, PeripheralId::USART2, SignalId::signal_rts, RouteId::candidate_pa1_usart2_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa2_tim2_ch3, PinId::PA2, PeripheralId::TIM2, SignalId::signal_ch3, RouteId::candidate_pa2_tim2_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa2_tim5_ch3, PinId::PA2, PeripheralId::TIM5, SignalId::signal_ch3, RouteId::candidate_pa2_tim5_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim5_lqfp64_all_signals},
  {ConnectorId::candidate_pa2_usart2_tx, PinId::PA2, PeripheralId::USART2, SignalId::signal_tx, RouteId::candidate_pa2_usart2_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx},
  {ConnectorId::candidate_pa3_tim2_ch4, PinId::PA3, PeripheralId::TIM2, SignalId::signal_ch4, RouteId::candidate_pa3_tim2_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa3_tim5_ch4, PinId::PA3, PeripheralId::TIM5, SignalId::signal_ch4, RouteId::candidate_pa3_tim5_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim5_lqfp64_all_signals},
  {ConnectorId::candidate_pa3_usart2_rx, PinId::PA3, PeripheralId::USART2, SignalId::signal_rx, RouteId::candidate_pa3_usart2_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx},
  {ConnectorId::candidate_pa4_spi1_nss, PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss, RouteId::candidate_pa4_spi1_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa4_usart2_ck, PinId::PA4, PeripheralId::USART2, SignalId::signal_ck, RouteId::candidate_pa4_usart2_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa5_spi1_sck, PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck, RouteId::candidate_pa5_spi1_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa5_tim2_ch1, PinId::PA5, PeripheralId::TIM2, SignalId::signal_ch1, RouteId::candidate_pa5_tim2_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa5_tim2_etr, PinId::PA5, PeripheralId::TIM2, SignalId::signal_etr, RouteId::candidate_pa5_tim2_etr, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa6_spi1_miso, PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso, RouteId::candidate_pa6_spi1_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa6_tim1_bkin, PinId::PA6, PeripheralId::TIM1, SignalId::signal_bkin, RouteId::candidate_pa6_tim1_bkin, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa6_tim3_ch1, PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1, RouteId::candidate_pa6_tim3_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pa7_spi1_mosi, PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi, RouteId::candidate_pa7_spi1_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa7_tim1_ch1n, PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n, RouteId::candidate_pa7_tim1_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa7_tim3_ch2, PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2, RouteId::candidate_pa7_tim3_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pa8_tim1_ch1, PinId::PA8, PeripheralId::TIM1, SignalId::signal_ch1, RouteId::candidate_pa8_tim1_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa8_usart1_ck, PinId::PA8, PeripheralId::USART1, SignalId::signal_ck, RouteId::candidate_pa8_usart1_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa9_tim1_ch2, PinId::PA9, PeripheralId::TIM1, SignalId::signal_ch2, RouteId::candidate_pa9_tim1_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa9_usart1_tx, PinId::PA9, PeripheralId::USART1, SignalId::signal_tx, RouteId::candidate_pa9_usart1_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pb0_tim1_ch2n, PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n, RouteId::candidate_pb0_tim1_ch2n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb0_tim3_ch3, PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3, RouteId::candidate_pb0_tim3_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pb10_i2c2_scl, PinId::PB10, PeripheralId::I2C2, SignalId::signal_scl, RouteId::candidate_pb10_i2c2_scl, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c2_lqfp64_scl_sda},
  {ConnectorId::candidate_pb10_spi2_sck, PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck, RouteId::candidate_pb10_spi2_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb10_tim2_ch3, PinId::PB10, PeripheralId::TIM2, SignalId::signal_ch3, RouteId::candidate_pb10_tim2_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pb11_i2c2_sda, PinId::PB11, PeripheralId::I2C2, SignalId::signal_sda, RouteId::candidate_pb11_i2c2_sda, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c2_lqfp64_scl_sda},
  {ConnectorId::candidate_pb11_tim2_ch4, PinId::PB11, PeripheralId::TIM2, SignalId::signal_ch4, RouteId::candidate_pb11_tim2_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pb12_i2c2_smba, PinId::PB12, PeripheralId::I2C2, SignalId::signal_smba, RouteId::candidate_pb12_i2c2_smba, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb12_spi2_nss, PinId::PB12, PeripheralId::SPI2, SignalId::signal_nss, RouteId::candidate_pb12_spi2_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb12_tim1_bkin, PinId::PB12, PeripheralId::TIM1, SignalId::signal_bkin, RouteId::candidate_pb12_tim1_bkin, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb13_spi2_sck, PinId::PB13, PeripheralId::SPI2, SignalId::signal_sck, RouteId::candidate_pb13_spi2_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb13_tim1_ch1n, PinId::PB13, PeripheralId::TIM1, SignalId::signal_ch1n, RouteId::candidate_pb13_tim1_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb14_spi2_miso, PinId::PB14, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pb14_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb14_tim1_ch2n, PinId::PB14, PeripheralId::TIM1, SignalId::signal_ch2n, RouteId::candidate_pb14_tim1_ch2n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb15_spi2_mosi, PinId::PB15, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pb15_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb15_tim1_ch3n, PinId::PB15, PeripheralId::TIM1, SignalId::signal_ch3n, RouteId::candidate_pb15_tim1_ch3n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb1_tim1_ch3n, PinId::PB1, PeripheralId::TIM1, SignalId::signal_ch3n, RouteId::candidate_pb1_tim1_ch3n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb1_tim3_ch4, PinId::PB1, PeripheralId::TIM3, SignalId::signal_ch4, RouteId::candidate_pb1_tim3_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pb3_spi1_sck, PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck, RouteId::candidate_pb3_spi1_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb3_tim2_ch2, PinId::PB3, PeripheralId::TIM2, SignalId::signal_ch2, RouteId::candidate_pb3_tim2_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pb4_spi1_miso, PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso, RouteId::candidate_pb4_spi1_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb4_tim3_ch1, PinId::PB4, PeripheralId::TIM3, SignalId::signal_ch1, RouteId::candidate_pb4_tim3_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pb5_i2c1_smba, PinId::PB5, PeripheralId::I2C1, SignalId::signal_smba, RouteId::candidate_pb5_i2c1_smba, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb5_spi1_mosi, PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi, RouteId::candidate_pb5_spi1_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb5_tim3_ch2, PinId::PB5, PeripheralId::TIM3, SignalId::signal_ch2, RouteId::candidate_pb5_tim3_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pb6_i2c1_scl, PinId::PB6, PeripheralId::I2C1, SignalId::signal_scl, RouteId::candidate_pb6_i2c1_scl, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pb6_tim4_ch1, PinId::PB6, PeripheralId::TIM4, SignalId::signal_ch1, RouteId::candidate_pb6_tim4_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim4_lqfp64_all_signals},
  {ConnectorId::candidate_pb6_usart1_tx, PinId::PB6, PeripheralId::USART1, SignalId::signal_tx, RouteId::candidate_pb6_usart1_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pb7_i2c1_sda, PinId::PB7, PeripheralId::I2C1, SignalId::signal_sda, RouteId::candidate_pb7_i2c1_sda, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pb7_tim4_ch2, PinId::PB7, PeripheralId::TIM4, SignalId::signal_ch2, RouteId::candidate_pb7_tim4_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim4_lqfp64_all_signals},
  {ConnectorId::candidate_pb7_usart1_rx, PinId::PB7, PeripheralId::USART1, SignalId::signal_rx, RouteId::candidate_pb7_usart1_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pb8_i2c1_scl, PinId::PB8, PeripheralId::I2C1, SignalId::signal_scl, RouteId::candidate_pb8_i2c1_scl, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pb8_tim4_ch3, PinId::PB8, PeripheralId::TIM4, SignalId::signal_ch3, RouteId::candidate_pb8_tim4_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim4_lqfp64_all_signals},
  {ConnectorId::candidate_pb9_i2c1_sda, PinId::PB9, PeripheralId::I2C1, SignalId::signal_sda, RouteId::candidate_pb9_i2c1_sda, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pb9_spi2_nss, PinId::PB9, PeripheralId::SPI2, SignalId::signal_nss, RouteId::candidate_pb9_spi2_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb9_tim4_ch4, PinId::PB9, PeripheralId::TIM4, SignalId::signal_ch4, RouteId::candidate_pb9_tim4_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim4_lqfp64_all_signals},
  {ConnectorId::candidate_pc2_spi2_miso, PinId::PC2, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pc2_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pc3_spi2_mosi, PinId::PC3, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pc3_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pc6_tim3_ch1, PinId::PC6, PeripheralId::TIM3, SignalId::signal_ch1, RouteId::candidate_pc6_tim3_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pc7_tim3_ch2, PinId::PC7, PeripheralId::TIM3, SignalId::signal_ch2, RouteId::candidate_pc7_tim3_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pc8_tim3_ch3, PinId::PC8, PeripheralId::TIM3, SignalId::signal_ch3, RouteId::candidate_pc8_tim3_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pc9_tim3_ch4, PinId::PC9, PeripheralId::TIM3, SignalId::signal_ch4, RouteId::candidate_pc9_tim3_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pd2_tim3_etr, PinId::PD2, PeripheralId::TIM3, SignalId::signal_etr, RouteId::candidate_pd2_tim3_etr, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
}};
}
}
}
}
}
}
