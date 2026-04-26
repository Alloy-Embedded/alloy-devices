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
namespace stm32g071rb {
enum class ConnectorId : std::uint16_t {
  none,
  candidate_pa0_spi2_sck,
  candidate_pa0_tim2_ch1,
  candidate_pa0_tim2_etr,
  candidate_pa0_usart2_cts,
  candidate_pa0_usart2_nss,
  candidate_pa0_usart4_tx,
  candidate_pa10_i2c1_sda,
  candidate_pa10_spi2_mosi,
  candidate_pa10_tim17_bk,
  candidate_pa10_tim1_ch3,
  candidate_pa10_usart1_rx,
  candidate_pa15_spi1_nss,
  candidate_pa15_tim2_ch1,
  candidate_pa15_tim2_etr,
  candidate_pa15_usart2_rx,
  candidate_pa15_usart3_ck,
  candidate_pa15_usart3_de,
  candidate_pa15_usart3_rts,
  candidate_pa15_usart4_ck,
  candidate_pa15_usart4_de,
  candidate_pa15_usart4_rts,
  candidate_pa1_i2c1_smba,
  candidate_pa1_spi1_sck,
  candidate_pa1_tim15_ch1n,
  candidate_pa1_tim2_ch2,
  candidate_pa1_usart2_ck,
  candidate_pa1_usart2_de,
  candidate_pa1_usart2_rts,
  candidate_pa1_usart4_rx,
  candidate_pa2_lpuart1_tx,
  candidate_pa2_spi1_mosi,
  candidate_pa2_tim15_ch1,
  candidate_pa2_tim2_ch3,
  candidate_pa2_usart2_tx,
  candidate_pa3_lpuart1_rx,
  candidate_pa3_spi2_miso,
  candidate_pa3_tim15_ch2,
  candidate_pa3_tim2_ch4,
  candidate_pa3_usart2_rx,
  candidate_pa4_spi1_nss,
  candidate_pa4_spi2_mosi,
  candidate_pa4_tim14_ch1,
  candidate_pa5_spi1_sck,
  candidate_pa5_tim2_ch1,
  candidate_pa5_tim2_etr,
  candidate_pa5_usart3_tx,
  candidate_pa6_lpuart1_cts,
  candidate_pa6_spi1_miso,
  candidate_pa6_tim16_ch1,
  candidate_pa6_tim1_bk,
  candidate_pa6_tim3_ch1,
  candidate_pa6_usart3_cts,
  candidate_pa6_usart3_nss,
  candidate_pa7_spi1_mosi,
  candidate_pa7_tim14_ch1,
  candidate_pa7_tim17_ch1,
  candidate_pa7_tim1_ch1n,
  candidate_pa7_tim3_ch2,
  candidate_pa8_spi2_nss,
  candidate_pa8_tim1_ch1,
  candidate_pa9_i2c1_scl,
  candidate_pa9_spi2_miso,
  candidate_pa9_tim15_bk,
  candidate_pa9_tim1_ch2,
  candidate_pa9_usart1_tx,
  candidate_pb0_spi1_nss,
  candidate_pb0_tim1_ch2n,
  candidate_pb0_tim3_ch3,
  candidate_pb0_usart3_rx,
  candidate_pb10_i2c2_scl,
  candidate_pb10_lpuart1_rx,
  candidate_pb10_spi2_sck,
  candidate_pb10_tim2_ch3,
  candidate_pb10_usart3_tx,
  candidate_pb11_i2c2_sda,
  candidate_pb11_lpuart1_tx,
  candidate_pb11_spi2_mosi,
  candidate_pb11_tim2_ch4,
  candidate_pb11_usart3_rx,
  candidate_pb12_lpuart1_de,
  candidate_pb12_lpuart1_rts,
  candidate_pb12_spi2_nss,
  candidate_pb12_tim15_bk,
  candidate_pb12_tim1_bk,
  candidate_pb13_i2c2_scl,
  candidate_pb13_lpuart1_cts,
  candidate_pb13_spi2_sck,
  candidate_pb13_tim15_ch1n,
  candidate_pb13_tim1_ch1n,
  candidate_pb13_usart3_cts,
  candidate_pb13_usart3_nss,
  candidate_pb14_i2c2_sda,
  candidate_pb14_spi2_miso,
  candidate_pb14_tim15_ch1,
  candidate_pb14_tim1_ch2n,
  candidate_pb14_usart3_ck,
  candidate_pb14_usart3_de,
  candidate_pb14_usart3_rts,
  candidate_pb15_spi2_mosi,
  candidate_pb15_tim15_ch1n,
  candidate_pb15_tim15_ch2,
  candidate_pb15_tim1_ch3n,
  candidate_pb1_lpuart1_de,
  candidate_pb1_lpuart1_rts,
  candidate_pb1_tim14_ch1,
  candidate_pb1_tim1_ch3n,
  candidate_pb1_tim3_ch4,
  candidate_pb1_usart3_ck,
  candidate_pb1_usart3_de,
  candidate_pb1_usart3_rts,
  candidate_pb2_spi2_miso,
  candidate_pb2_usart3_tx,
  candidate_pb3_spi1_sck,
  candidate_pb3_tim1_ch2,
  candidate_pb3_tim2_ch2,
  candidate_pb3_usart1_ck,
  candidate_pb3_usart1_de,
  candidate_pb3_usart1_rts,
  candidate_pb4_spi1_miso,
  candidate_pb4_tim17_bk,
  candidate_pb4_tim3_ch1,
  candidate_pb4_usart1_cts,
  candidate_pb4_usart1_nss,
  candidate_pb5_i2c1_smba,
  candidate_pb5_spi1_mosi,
  candidate_pb5_tim16_bk,
  candidate_pb5_tim3_ch2,
  candidate_pb6_i2c1_scl,
  candidate_pb6_spi2_miso,
  candidate_pb6_tim16_ch1n,
  candidate_pb6_tim1_ch3,
  candidate_pb6_usart1_tx,
  candidate_pb7_i2c1_sda,
  candidate_pb7_spi2_mosi,
  candidate_pb7_tim17_ch1n,
  candidate_pb7_usart1_rx,
  candidate_pb7_usart4_cts,
  candidate_pb7_usart4_nss,
  candidate_pb8_i2c1_scl,
  candidate_pb8_spi2_sck,
  candidate_pb8_tim15_bk,
  candidate_pb8_tim16_ch1,
  candidate_pb8_usart3_tx,
  candidate_pb9_i2c1_sda,
  candidate_pb9_spi2_nss,
  candidate_pb9_tim17_ch1,
  candidate_pb9_usart3_rx,
  candidate_pc0_lpuart1_rx,
  candidate_pc10_tim1_ch3,
  candidate_pc10_usart3_tx,
  candidate_pc10_usart4_tx,
  candidate_pc11_tim1_ch4,
  candidate_pc11_usart3_rx,
  candidate_pc11_usart4_rx,
  candidate_pc12_tim14_ch1,
  candidate_pc13_tim1_bk,
  candidate_pc1_lpuart1_tx,
  candidate_pc1_tim15_ch1,
  candidate_pc2_spi2_miso,
  candidate_pc2_tim15_ch2,
  candidate_pc3_spi2_mosi,
  candidate_pc4_tim2_ch1,
  candidate_pc4_tim2_etr,
  candidate_pc4_usart1_tx,
  candidate_pc4_usart3_tx,
  candidate_pc5_tim2_ch2,
  candidate_pc5_usart1_rx,
  candidate_pc5_usart3_rx,
  candidate_pc6_tim2_ch3,
  candidate_pc6_tim3_ch1,
  candidate_pc7_tim2_ch4,
  candidate_pc7_tim3_ch2,
  candidate_pc8_tim1_ch1,
  candidate_pc8_tim3_ch3,
  candidate_pc9_tim1_ch2,
  candidate_pc9_tim3_ch4,
  candidate_pd0_spi2_nss,
  candidate_pd0_tim16_ch1,
  candidate_pd1_spi2_sck,
  candidate_pd1_tim17_ch1,
  candidate_pd2_tim1_ch1n,
  candidate_pd2_tim3_etr,
  candidate_pd2_usart3_ck,
  candidate_pd2_usart3_de,
  candidate_pd2_usart3_rts,
  candidate_pd3_spi2_miso,
  candidate_pd3_tim1_ch2n,
  candidate_pd3_usart2_cts,
  candidate_pd3_usart2_nss,
  candidate_pd4_spi2_mosi,
  candidate_pd4_tim1_ch3n,
  candidate_pd4_usart2_ck,
  candidate_pd4_usart2_de,
  candidate_pd4_usart2_rts,
  candidate_pd5_spi1_miso,
  candidate_pd5_tim1_bk,
  candidate_pd5_usart2_tx,
  candidate_pd6_spi1_mosi,
  candidate_pd6_usart2_rx,
  candidate_pd8_spi1_sck,
  candidate_pd8_usart3_tx,
  candidate_pd9_spi1_nss,
  candidate_pd9_tim1_bk2,
  candidate_pd9_usart3_rx,
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
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA0, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa0_tim2_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA0, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa0_tim2_etr;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA0, PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa0_usart2_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_usart2_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts;
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
struct ConnectorTraits<PinId::PA0, PeripheralId::USART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa0_usart4_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_usart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart4_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA10, PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa10_i2c1_sda;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_i2c1_sda;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c1_lqfp64_scl_sda;
};

template<>
struct ConnectorTraits<PinId::PA10, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa10_spi2_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA10, PeripheralId::TIM17, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa10_tim17_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_tim17_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim17_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PA15, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_usart2_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA15, PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_usart3_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart3_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA15, PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_usart3_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart3_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA15, PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_usart3_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart3_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PA15, PeripheralId::USART4, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_usart4_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart4_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA15, PeripheralId::USART4, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_usart4_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart4_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA15, PeripheralId::USART4, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa15_usart4_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart4_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart4_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::I2C1, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_i2c1_smba;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_i2c1_smba;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_spi1_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::TIM15, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_tim15_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_tim15_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
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
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PA1, PeripheralId::USART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa1_usart4_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart4_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA2, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa2_lpuart1_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_lpuart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA2, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa2_spi1_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA2, PeripheralId::TIM15, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa2_tim15_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_tim15_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PA2, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa2_usart2_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_usart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA3, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa3_lpuart1_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_lpuart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA3, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa3_spi2_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA3, PeripheralId::TIM15, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa3_tim15_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_tim15_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PA4, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa4_spi2_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
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
struct ConnectorTraits<PinId::PA5, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa5_usart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::LPUART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_lpuart1_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_lpuart1_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts;
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
struct ConnectorTraits<PinId::PA6, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_tim16_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim16_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim16_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_tim1_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim1_bk;
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
struct ConnectorTraits<PinId::PA6, PeripheralId::USART3, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_usart3_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_usart3_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PA6, PeripheralId::USART3, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa6_usart3_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_usart3_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
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
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim17_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PA8, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa8_spi2_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pa8_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
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
struct ConnectorTraits<PinId::PA9, PeripheralId::I2C1, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa9_i2c1_scl;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_i2c1_scl;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c1_lqfp64_scl_sda;
};

template<>
struct ConnectorTraits<PinId::PA9, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa9_spi2_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PA9, PeripheralId::TIM15, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pa9_tim15_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_tim15_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PB0, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb0_usart3_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
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
struct ConnectorTraits<PinId::PB10, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb10_lpuart1_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_lpuart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx;
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
struct ConnectorTraits<PinId::PB10, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb10_usart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
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
struct ConnectorTraits<PinId::PB11, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb11_lpuart1_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_lpuart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PB11, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb11_spi2_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
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
struct ConnectorTraits<PinId::PB11, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb11_usart3_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PB12, PeripheralId::LPUART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb12_lpuart1_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_lpuart1_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB12, PeripheralId::LPUART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb12_lpuart1_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_lpuart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts;
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
struct ConnectorTraits<PinId::PB12, PeripheralId::TIM15, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb12_tim15_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_tim15_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB12, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb12_tim1_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_tim1_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB13, PeripheralId::I2C2, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb13_i2c2_scl;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_i2c2_scl;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c2_lqfp64_scl_sda;
};

template<>
struct ConnectorTraits<PinId::PB13, PeripheralId::LPUART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb13_lpuart1_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_lpuart1_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts;
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
struct ConnectorTraits<PinId::PB13, PeripheralId::TIM15, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb13_tim15_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_tim15_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PB13, PeripheralId::USART3, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb13_usart3_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_usart3_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PB13, PeripheralId::USART3, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb13_usart3_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_usart3_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB14, PeripheralId::I2C2, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb14_i2c2_sda;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_i2c2_sda;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_i2c2_lqfp64_scl_sda;
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
struct ConnectorTraits<PinId::PB14, PeripheralId::TIM15, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb14_tim15_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_tim15_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PB14, PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb14_usart3_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_usart3_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB14, PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb14_usart3_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_usart3_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB14, PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb14_usart3_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_usart3_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts;
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
struct ConnectorTraits<PinId::PB15, PeripheralId::TIM15, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb15_tim15_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_tim15_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB15, PeripheralId::TIM15, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb15_tim15_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_tim15_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PB1, PeripheralId::LPUART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb1_lpuart1_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_lpuart1_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB1, PeripheralId::LPUART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb1_lpuart1_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_lpuart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PB1, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb1_tim14_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
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
struct ConnectorTraits<PinId::PB1, PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb1_usart3_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_usart3_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB1, PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb1_usart3_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_usart3_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB1, PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb1_usart3_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_usart3_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PB2, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb2_spi2_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pb2_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB2, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb2_usart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb2_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
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
struct ConnectorTraits<PinId::PB3, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_tim1_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_tim1_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_usart1_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_usart1_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb3_usart1_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts;
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
struct ConnectorTraits<PinId::PB4, PeripheralId::TIM17, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb4_tim17_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_tim17_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim17_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PB4, PeripheralId::USART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb4_usart1_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_usart1_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PB4, PeripheralId::USART1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb4_usart1_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_usart1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
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
struct ConnectorTraits<PinId::PB5, PeripheralId::TIM16, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb5_tim16_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_tim16_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim16_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PB6, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb6_spi2_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB6, PeripheralId::TIM16, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb6_tim16_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_tim16_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim16_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB6, PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb6_tim1_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_tim1_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PB7, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_spi2_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB7, PeripheralId::TIM17, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_tim17_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_tim17_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim17_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PB7, PeripheralId::USART4, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_usart4_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_usart4_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart4_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PB7, PeripheralId::USART4, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb7_usart4_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_usart4_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
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
struct ConnectorTraits<PinId::PB8, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb8_spi2_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PB8, PeripheralId::TIM15, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb8_tim15_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_tim15_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB8, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb8_tim16_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_tim16_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim16_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB8, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb8_usart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
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
struct ConnectorTraits<PinId::PB9, PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb9_tim17_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_tim17_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim17_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PB9, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pb9_usart3_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC0, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc0_lpuart1_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc0_lpuart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC10, PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc10_tim1_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pc10_tim1_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC10, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc10_usart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc10_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC10, PeripheralId::USART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc10_usart4_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc10_usart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart4_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC11, PeripheralId::TIM1, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc11_tim1_ch4;
  static constexpr RouteId kRouteId = RouteId::candidate_pc11_tim1_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC11, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc11_usart3_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc11_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC11, PeripheralId::USART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc11_usart4_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc11_usart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart4_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC12, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc12_tim14_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pc12_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PC13, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc13_tim1_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pc13_tim1_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC1, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc1_lpuart1_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc1_lpuart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC1, PeripheralId::TIM15, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc1_tim15_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pc1_tim15_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PC2, PeripheralId::TIM15, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc2_tim15_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pc2_tim15_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PC4, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc4_tim2_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pc4_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC4, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc4_tim2_etr;
  static constexpr RouteId kRouteId = RouteId::candidate_pc4_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC4, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc4_usart1_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc4_usart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC4, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc4_usart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc4_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC5, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc5_tim2_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pc5_tim2_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PC5, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc5_usart1_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc5_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC5, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc5_usart3_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pc5_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PC6, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc6_tim2_ch3;
  static constexpr RouteId kRouteId = RouteId::candidate_pc6_tim2_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PC7, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc7_tim2_ch4;
  static constexpr RouteId kRouteId = RouteId::candidate_pc7_tim2_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PC8, PeripheralId::TIM1, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc8_tim1_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pc8_tim1_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PC9, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pc9_tim1_ch2;
  static constexpr RouteId kRouteId = RouteId::candidate_pc9_tim1_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PD0, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd0_spi2_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pd0_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PD0, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd0_tim16_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pd0_tim16_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim16_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PD1, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd1_spi2_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pd1_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PD1, PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd1_tim17_ch1;
  static constexpr RouteId kRouteId = RouteId::candidate_pd1_tim17_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim17_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PD2, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd2_tim1_ch1n;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
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
struct ConnectorTraits<PinId::PD2, PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd2_usart3_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_usart3_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PD2, PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd2_usart3_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_usart3_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PD2, PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd2_usart3_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_usart3_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PD3, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd3_spi2_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PD3, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd3_tim1_ch2n;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PD3, PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd3_usart2_cts;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_usart2_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PD3, PeripheralId::USART2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd3_usart2_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_usart2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PD4, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd4_spi2_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PD4, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd4_tim1_ch3n;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_tim1_ch3n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PD4, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd4_usart2_ck;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_usart2_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PD4, PeripheralId::USART2, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd4_usart2_de;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_usart2_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PD4, PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd4_usart2_rts;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_usart2_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::PD5, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd5_spi1_miso;
  static constexpr RouteId kRouteId = RouteId::candidate_pd5_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PD5, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd5_tim1_bk;
  static constexpr RouteId kRouteId = RouteId::candidate_pd5_tim1_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PD5, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd5_usart2_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pd5_usart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PD6, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd6_spi1_mosi;
  static constexpr RouteId kRouteId = RouteId::candidate_pd6_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PD6, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd6_usart2_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pd6_usart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PD8, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd8_spi1_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_pd8_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
};

template<>
struct ConnectorTraits<PinId::PD8, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd8_usart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_pd8_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
};

template<>
struct ConnectorTraits<PinId::PD9, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd9_spi1_nss;
  static constexpr RouteId kRouteId = RouteId::candidate_pd9_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::PD9, PeripheralId::TIM1, SignalId::signal_bk2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd9_tim1_bk2;
  static constexpr RouteId kRouteId = RouteId::candidate_pd9_tim1_bk2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
};

template<>
struct ConnectorTraits<PinId::PD9, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_pd9_usart3_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_pd9_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C1, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA9,
    PinId::PB6,
    PinId::PB8,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa9_i2c1_scl,
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C1 scl. Valid pins: PA9, PB6, PB8. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA10,
    PinId::PB7,
    PinId::PB9,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa10_i2c1_sda,
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C1 sda. Valid pins: PA10, PB7, PB9. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C1, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA1,
    PinId::PB5,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa1_i2c1_smba,
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C1 smba. Valid pins: PA1, PB5. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C2, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB10,
    PinId::PB13,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb10_i2c2_scl,
    ConnectorId::candidate_pb13_i2c2_scl,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C2, SignalId::signal_scl> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C2 scl. Valid pins: PB10, PB13. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::I2C2, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB11,
    PinId::PB14,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb11_i2c2_sda,
    ConnectorId::candidate_pb14_i2c2_sda,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::I2C2, SignalId::signal_sda> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for I2C2 sda. Valid pins: PB11, PB14. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA6,
    PinId::PB13,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa6_lpuart1_cts,
    ConnectorId::candidate_pb13_lpuart1_cts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART1, SignalId::signal_cts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART1 cts. Valid pins: PA6, PB13. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB12,
    PinId::PB1,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb12_lpuart1_de,
    ConnectorId::candidate_pb1_lpuart1_de,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART1, SignalId::signal_de> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART1 de. Valid pins: PB12, PB1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PB12,
    PinId::PB1,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pb12_lpuart1_rts,
    ConnectorId::candidate_pb1_lpuart1_rts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART1, SignalId::signal_rts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART1 rts. Valid pins: PB12, PB1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA3,
    PinId::PB10,
    PinId::PC0,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa3_lpuart1_rx,
    ConnectorId::candidate_pb10_lpuart1_rx,
    ConnectorId::candidate_pc0_lpuart1_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART1 rx. Valid pins: PA3, PB10, PC0. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA2,
    PinId::PB11,
    PinId::PC1,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa2_lpuart1_tx,
    ConnectorId::candidate_pb11_lpuart1_tx,
    ConnectorId::candidate_pc1_lpuart1_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART1 tx. Valid pins: PA2, PB11, PC1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA6,
    PinId::PB4,
    PinId::PD5,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa6_spi1_miso,
    ConnectorId::candidate_pb4_spi1_miso,
    ConnectorId::candidate_pd5_spi1_miso,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 miso. Valid pins: PA6, PB4, PD5. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA2,
    PinId::PA7,
    PinId::PB5,
    PinId::PD6,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa2_spi1_mosi,
    ConnectorId::candidate_pa7_spi1_mosi,
    ConnectorId::candidate_pb5_spi1_mosi,
    ConnectorId::candidate_pd6_spi1_mosi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 mosi. Valid pins: PA2, PA7, PB5, PD6. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA15,
    PinId::PA4,
    PinId::PB0,
    PinId::PD9,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa15_spi1_nss,
    ConnectorId::candidate_pa4_spi1_nss,
    ConnectorId::candidate_pb0_spi1_nss,
    ConnectorId::candidate_pd9_spi1_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 nss. Valid pins: PA15, PA4, PB0, PD9. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA1,
    PinId::PA5,
    PinId::PB3,
    PinId::PD8,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa1_spi1_sck,
    ConnectorId::candidate_pa5_spi1_sck,
    ConnectorId::candidate_pb3_spi1_sck,
    ConnectorId::candidate_pd8_spi1_sck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI1 sck. Valid pins: PA1, PA5, PB3, PD8. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 7> kPins = {{
    PinId::PA3,
    PinId::PA9,
    PinId::PB14,
    PinId::PB2,
    PinId::PB6,
    PinId::PC2,
    PinId::PD3,
  }};
  static constexpr std::array<ConnectorId, 7> kConnectors = {{
    ConnectorId::candidate_pa3_spi2_miso,
    ConnectorId::candidate_pa9_spi2_miso,
    ConnectorId::candidate_pb14_spi2_miso,
    ConnectorId::candidate_pb2_spi2_miso,
    ConnectorId::candidate_pb6_spi2_miso,
    ConnectorId::candidate_pc2_spi2_miso,
    ConnectorId::candidate_pd3_spi2_miso,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 miso. Valid pins: PA3, PA9, PB14, PB2, PB6, PC2, PD3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 7> kPins = {{
    PinId::PA10,
    PinId::PA4,
    PinId::PB11,
    PinId::PB15,
    PinId::PB7,
    PinId::PC3,
    PinId::PD4,
  }};
  static constexpr std::array<ConnectorId, 7> kConnectors = {{
    ConnectorId::candidate_pa10_spi2_mosi,
    ConnectorId::candidate_pa4_spi2_mosi,
    ConnectorId::candidate_pb11_spi2_mosi,
    ConnectorId::candidate_pb15_spi2_mosi,
    ConnectorId::candidate_pb7_spi2_mosi,
    ConnectorId::candidate_pc3_spi2_mosi,
    ConnectorId::candidate_pd4_spi2_mosi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 mosi. Valid pins: PA10, PA4, PB11, PB15, PB7, PC3, PD4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA8,
    PinId::PB12,
    PinId::PB9,
    PinId::PD0,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa8_spi2_nss,
    ConnectorId::candidate_pb12_spi2_nss,
    ConnectorId::candidate_pb9_spi2_nss,
    ConnectorId::candidate_pd0_spi2_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 nss. Valid pins: PA8, PB12, PB9, PD0. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 5> kPins = {{
    PinId::PA0,
    PinId::PB10,
    PinId::PB13,
    PinId::PB8,
    PinId::PD1,
  }};
  static constexpr std::array<ConnectorId, 5> kConnectors = {{
    ConnectorId::candidate_pa0_spi2_sck,
    ConnectorId::candidate_pb10_spi2_sck,
    ConnectorId::candidate_pb13_spi2_sck,
    ConnectorId::candidate_pb8_spi2_sck,
    ConnectorId::candidate_pd1_spi2_sck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for SPI2 sck. Valid pins: PA0, PB10, PB13, PB8, PD1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA6,
    PinId::PB12,
    PinId::PC13,
    PinId::PD5,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa6_tim1_bk,
    ConnectorId::candidate_pb12_tim1_bk,
    ConnectorId::candidate_pc13_tim1_bk,
    ConnectorId::candidate_pd5_tim1_bk,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 bk. Valid pins: PA6, PB12, PC13, PD5. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_bk2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PD9,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pd9_tim1_bk2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_bk2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 bk2. Valid pins: PD9. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA8,
    PinId::PC8,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa8_tim1_ch1,
    ConnectorId::candidate_pc8_tim1_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch1. Valid pins: PA8, PC8. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA7,
    PinId::PB13,
    PinId::PD2,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa7_tim1_ch1n,
    ConnectorId::candidate_pb13_tim1_ch1n,
    ConnectorId::candidate_pd2_tim1_ch1n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch1n. Valid pins: PA7, PB13, PD2. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA9,
    PinId::PB3,
    PinId::PC9,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa9_tim1_ch2,
    ConnectorId::candidate_pb3_tim1_ch2,
    ConnectorId::candidate_pc9_tim1_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch2. Valid pins: PA9, PB3, PC9. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PB0,
    PinId::PB14,
    PinId::PD3,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pb0_tim1_ch2n,
    ConnectorId::candidate_pb14_tim1_ch2n,
    ConnectorId::candidate_pd3_tim1_ch2n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch2n. Valid pins: PB0, PB14, PD3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA10,
    PinId::PB6,
    PinId::PC10,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa10_tim1_ch3,
    ConnectorId::candidate_pb6_tim1_ch3,
    ConnectorId::candidate_pc10_tim1_ch3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch3. Valid pins: PA10, PB6, PC10. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PB15,
    PinId::PB1,
    PinId::PD4,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pb15_tim1_ch3n,
    ConnectorId::candidate_pb1_tim1_ch3n,
    ConnectorId::candidate_pd4_tim1_ch3n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch3n. Valid pins: PB15, PB1, PD4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM1, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PC11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pc11_tim1_ch4,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM1, SignalId::signal_ch4> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM1 ch4. Valid pins: PC11. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA4,
    PinId::PA7,
    PinId::PB1,
    PinId::PC12,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa4_tim14_ch1,
    ConnectorId::candidate_pa7_tim14_ch1,
    ConnectorId::candidate_pb1_tim14_ch1,
    ConnectorId::candidate_pc12_tim14_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM14 ch1. Valid pins: PA4, PA7, PB1, PC12. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM15, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA9,
    PinId::PB12,
    PinId::PB8,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa9_tim15_bk,
    ConnectorId::candidate_pb12_tim15_bk,
    ConnectorId::candidate_pb8_tim15_bk,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM15, SignalId::signal_bk> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM15 bk. Valid pins: PA9, PB12, PB8. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM15, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA2,
    PinId::PB14,
    PinId::PC1,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa2_tim15_ch1,
    ConnectorId::candidate_pb14_tim15_ch1,
    ConnectorId::candidate_pc1_tim15_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM15, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM15 ch1. Valid pins: PA2, PB14, PC1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM15, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA1,
    PinId::PB13,
    PinId::PB15,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa1_tim15_ch1n,
    ConnectorId::candidate_pb13_tim15_ch1n,
    ConnectorId::candidate_pb15_tim15_ch1n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM15, SignalId::signal_ch1n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM15 ch1n. Valid pins: PA1, PB13, PB15. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM15, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA3,
    PinId::PB15,
    PinId::PC2,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa3_tim15_ch2,
    ConnectorId::candidate_pb15_tim15_ch2,
    ConnectorId::candidate_pc2_tim15_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM15, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM15 ch2. Valid pins: PA3, PB15, PC2. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM16, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB5,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb5_tim16_bk,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM16, SignalId::signal_bk> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM16 bk. Valid pins: PB5. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA6,
    PinId::PB8,
    PinId::PD0,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa6_tim16_ch1,
    ConnectorId::candidate_pb8_tim16_ch1,
    ConnectorId::candidate_pd0_tim16_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM16 ch1. Valid pins: PA6, PB8, PD0. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM16, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB6,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb6_tim16_ch1n,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM16, SignalId::signal_ch1n> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM16 ch1n. Valid pins: PB6. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM17, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA10,
    PinId::PB4,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa10_tim17_bk,
    ConnectorId::candidate_pb4_tim17_bk,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM17, SignalId::signal_bk> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM17 bk. Valid pins: PA10, PB4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA7,
    PinId::PB9,
    PinId::PD1,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa7_tim17_ch1,
    ConnectorId::candidate_pb9_tim17_ch1,
    ConnectorId::candidate_pd1_tim17_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM17 ch1. Valid pins: PA7, PB9, PD1. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM17 ch1n. Valid pins: PB7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA0,
    PinId::PA15,
    PinId::PA5,
    PinId::PC4,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa0_tim2_ch1,
    ConnectorId::candidate_pa15_tim2_ch1,
    ConnectorId::candidate_pa5_tim2_ch1,
    ConnectorId::candidate_pc4_tim2_ch1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 ch1. Valid pins: PA0, PA15, PA5, PC4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA1,
    PinId::PB3,
    PinId::PC5,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa1_tim2_ch2,
    ConnectorId::candidate_pb3_tim2_ch2,
    ConnectorId::candidate_pc5_tim2_ch2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 ch2. Valid pins: PA1, PB3, PC5. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA2,
    PinId::PB10,
    PinId::PC6,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa2_tim2_ch3,
    ConnectorId::candidate_pb10_tim2_ch3,
    ConnectorId::candidate_pc6_tim2_ch3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 ch3. Valid pins: PA2, PB10, PC6. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA3,
    PinId::PB11,
    PinId::PC7,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa3_tim2_ch4,
    ConnectorId::candidate_pb11_tim2_ch4,
    ConnectorId::candidate_pc7_tim2_ch4,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 ch4. Valid pins: PA3, PB11, PC7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA0,
    PinId::PA15,
    PinId::PA5,
    PinId::PC4,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa0_tim2_etr,
    ConnectorId::candidate_pa15_tim2_etr,
    ConnectorId::candidate_pa5_tim2_etr,
    ConnectorId::candidate_pc4_tim2_etr,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM2 etr. Valid pins: PA0, PA15, PA5, PC4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch1. Valid pins: PA6, PB4, PC6. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch2. Valid pins: PA7, PB5, PC7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch3. Valid pins: PB0, PC8. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 ch4. Valid pins: PB1, PC9. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for TIM3 etr. Valid pins: PD2. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 ck. Valid pins: PB3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB4,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb4_usart1_cts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_cts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 cts. Valid pins: PB4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 de. Valid pins: PB3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB4,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb4_usart1_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 nss. Valid pins: PB4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
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
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 rts. Valid pins: PB3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA10,
    PinId::PB7,
    PinId::PC5,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa10_usart1_rx,
    ConnectorId::candidate_pb7_usart1_rx,
    ConnectorId::candidate_pc5_usart1_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 rx. Valid pins: PA10, PB7, PC5. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA9,
    PinId::PB6,
    PinId::PC4,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa9_usart1_tx,
    ConnectorId::candidate_pb6_usart1_tx,
    ConnectorId::candidate_pc4_usart1_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART1 tx. Valid pins: PA9, PB6, PC4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA1,
    PinId::PD4,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa1_usart2_ck,
    ConnectorId::candidate_pd4_usart2_ck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 ck. Valid pins: PA1, PD4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA0,
    PinId::PD3,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa0_usart2_cts,
    ConnectorId::candidate_pd3_usart2_cts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 cts. Valid pins: PA0, PD3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA1,
    PinId::PD4,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa1_usart2_de,
    ConnectorId::candidate_pd4_usart2_de,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_de> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 de. Valid pins: PA1, PD4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA0,
    PinId::PD3,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa0_usart2_nss,
    ConnectorId::candidate_pd3_usart2_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 nss. Valid pins: PA0, PD3. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA1,
    PinId::PD4,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa1_usart2_rts,
    ConnectorId::candidate_pd4_usart2_rts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 rts. Valid pins: PA1, PD4. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::PA15,
    PinId::PA3,
    PinId::PD6,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_pa15_usart2_rx,
    ConnectorId::candidate_pa3_usart2_rx,
    ConnectorId::candidate_pd6_usart2_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 rx. Valid pins: PA15, PA3, PD6. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA2,
    PinId::PD5,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa2_usart2_tx,
    ConnectorId::candidate_pd5_usart2_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART2 tx. Valid pins: PA2, PD5. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA15,
    PinId::PB14,
    PinId::PB1,
    PinId::PD2,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa15_usart3_ck,
    ConnectorId::candidate_pb14_usart3_ck,
    ConnectorId::candidate_pb1_usart3_ck,
    ConnectorId::candidate_pd2_usart3_ck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART3 ck. Valid pins: PA15, PB14, PB1, PD2. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART3, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA6,
    PinId::PB13,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa6_usart3_cts,
    ConnectorId::candidate_pb13_usart3_cts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART3, SignalId::signal_cts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART3 cts. Valid pins: PA6, PB13. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA15,
    PinId::PB14,
    PinId::PB1,
    PinId::PD2,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa15_usart3_de,
    ConnectorId::candidate_pb14_usart3_de,
    ConnectorId::candidate_pb1_usart3_de,
    ConnectorId::candidate_pd2_usart3_de,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART3 de. Valid pins: PA15, PB14, PB1, PD2. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART3, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA6,
    PinId::PB13,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa6_usart3_nss,
    ConnectorId::candidate_pb13_usart3_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART3, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART3 nss. Valid pins: PA6, PB13. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 4> kPins = {{
    PinId::PA15,
    PinId::PB14,
    PinId::PB1,
    PinId::PD2,
  }};
  static constexpr std::array<ConnectorId, 4> kConnectors = {{
    ConnectorId::candidate_pa15_usart3_rts,
    ConnectorId::candidate_pb14_usart3_rts,
    ConnectorId::candidate_pb1_usart3_rts,
    ConnectorId::candidate_pd2_usart3_rts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART3 rts. Valid pins: PA15, PB14, PB1, PD2. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 6> kPins = {{
    PinId::PB0,
    PinId::PB11,
    PinId::PB9,
    PinId::PC11,
    PinId::PC5,
    PinId::PD9,
  }};
  static constexpr std::array<ConnectorId, 6> kConnectors = {{
    ConnectorId::candidate_pb0_usart3_rx,
    ConnectorId::candidate_pb11_usart3_rx,
    ConnectorId::candidate_pb9_usart3_rx,
    ConnectorId::candidate_pc11_usart3_rx,
    ConnectorId::candidate_pc5_usart3_rx,
    ConnectorId::candidate_pd9_usart3_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART3 rx. Valid pins: PB0, PB11, PB9, PC11, PC5, PD9. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 7> kPins = {{
    PinId::PA5,
    PinId::PB10,
    PinId::PB2,
    PinId::PB8,
    PinId::PC10,
    PinId::PC4,
    PinId::PD8,
  }};
  static constexpr std::array<ConnectorId, 7> kConnectors = {{
    ConnectorId::candidate_pa5_usart3_tx,
    ConnectorId::candidate_pb10_usart3_tx,
    ConnectorId::candidate_pb2_usart3_tx,
    ConnectorId::candidate_pb8_usart3_tx,
    ConnectorId::candidate_pc10_usart3_tx,
    ConnectorId::candidate_pc4_usart3_tx,
    ConnectorId::candidate_pd8_usart3_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART3 tx. Valid pins: PA5, PB10, PB2, PB8, PC10, PC4, PD8. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART4, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA15,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa15_usart4_ck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART4, SignalId::signal_ck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART4 ck. Valid pins: PA15. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART4, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB7,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb7_usart4_cts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART4, SignalId::signal_cts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART4 cts. Valid pins: PB7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART4, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA15,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa15_usart4_de,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART4, SignalId::signal_de> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART4 de. Valid pins: PA15. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART4, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PB7,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pb7_usart4_nss,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART4, SignalId::signal_nss> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART4 nss. Valid pins: PB7. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART4, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::PA15,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_pa15_usart4_rts,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART4, SignalId::signal_rts> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART4 rts. Valid pins: PA15. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA1,
    PinId::PC11,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa1_usart4_rx,
    ConnectorId::candidate_pc11_usart4_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART4, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART4 rx. Valid pins: PA1, PC11. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::USART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::PA0,
    PinId::PC10,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_pa0_usart4_tx,
    ConnectorId::candidate_pc10_usart4_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::USART4, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for USART4 tx. Valid pins: PA0, PC10. Provenance: stm32-open-pin-data; patches=st-stm32g0-family-bootstrap-v1, st-stm32g0-stm32g071rb-bootstrap.");
};

inline constexpr std::array<ConnectorDescriptor, 204> kConnectors = {{
  {ConnectorId::candidate_pa0_spi2_sck, PinId::PA0, PeripheralId::SPI2, SignalId::signal_sck, RouteId::candidate_pa0_spi2_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa0_tim2_ch1, PinId::PA0, PeripheralId::TIM2, SignalId::signal_ch1, RouteId::candidate_pa0_tim2_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa0_tim2_etr, PinId::PA0, PeripheralId::TIM2, SignalId::signal_etr, RouteId::candidate_pa0_tim2_etr, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa0_usart2_cts, PinId::PA0, PeripheralId::USART2, SignalId::signal_cts, RouteId::candidate_pa0_usart2_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pa0_usart2_nss, PinId::PA0, PeripheralId::USART2, SignalId::signal_nss, RouteId::candidate_pa0_usart2_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa0_usart4_tx, PinId::PA0, PeripheralId::USART4, SignalId::signal_tx, RouteId::candidate_pa0_usart4_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart4_lqfp64_tx_rx},
  {ConnectorId::candidate_pa10_i2c1_sda, PinId::PA10, PeripheralId::I2C1, SignalId::signal_sda, RouteId::candidate_pa10_i2c1_sda, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pa10_spi2_mosi, PinId::PA10, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pa10_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa10_tim17_bk, PinId::PA10, PeripheralId::TIM17, SignalId::signal_bk, RouteId::candidate_pa10_tim17_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim17_lqfp64_all_signals},
  {ConnectorId::candidate_pa10_tim1_ch3, PinId::PA10, PeripheralId::TIM1, SignalId::signal_ch3, RouteId::candidate_pa10_tim1_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa10_usart1_rx, PinId::PA10, PeripheralId::USART1, SignalId::signal_rx, RouteId::candidate_pa10_usart1_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pa15_spi1_nss, PinId::PA15, PeripheralId::SPI1, SignalId::signal_nss, RouteId::candidate_pa15_spi1_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa15_tim2_ch1, PinId::PA15, PeripheralId::TIM2, SignalId::signal_ch1, RouteId::candidate_pa15_tim2_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa15_tim2_etr, PinId::PA15, PeripheralId::TIM2, SignalId::signal_etr, RouteId::candidate_pa15_tim2_etr, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa15_usart2_rx, PinId::PA15, PeripheralId::USART2, SignalId::signal_rx, RouteId::candidate_pa15_usart2_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx},
  {ConnectorId::candidate_pa15_usart3_ck, PinId::PA15, PeripheralId::USART3, SignalId::signal_ck, RouteId::candidate_pa15_usart3_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa15_usart3_de, PinId::PA15, PeripheralId::USART3, SignalId::signal_de, RouteId::candidate_pa15_usart3_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa15_usart3_rts, PinId::PA15, PeripheralId::USART3, SignalId::signal_rts, RouteId::candidate_pa15_usart3_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pa15_usart4_ck, PinId::PA15, PeripheralId::USART4, SignalId::signal_ck, RouteId::candidate_pa15_usart4_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa15_usart4_de, PinId::PA15, PeripheralId::USART4, SignalId::signal_de, RouteId::candidate_pa15_usart4_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa15_usart4_rts, PinId::PA15, PeripheralId::USART4, SignalId::signal_rts, RouteId::candidate_pa15_usart4_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart4_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pa1_i2c1_smba, PinId::PA1, PeripheralId::I2C1, SignalId::signal_smba, RouteId::candidate_pa1_i2c1_smba, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa1_spi1_sck, PinId::PA1, PeripheralId::SPI1, SignalId::signal_sck, RouteId::candidate_pa1_spi1_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa1_tim15_ch1n, PinId::PA1, PeripheralId::TIM15, SignalId::signal_ch1n, RouteId::candidate_pa1_tim15_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pa1_tim2_ch2, PinId::PA1, PeripheralId::TIM2, SignalId::signal_ch2, RouteId::candidate_pa1_tim2_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa1_usart2_ck, PinId::PA1, PeripheralId::USART2, SignalId::signal_ck, RouteId::candidate_pa1_usart2_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa1_usart2_de, PinId::PA1, PeripheralId::USART2, SignalId::signal_de, RouteId::candidate_pa1_usart2_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa1_usart2_rts, PinId::PA1, PeripheralId::USART2, SignalId::signal_rts, RouteId::candidate_pa1_usart2_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pa1_usart4_rx, PinId::PA1, PeripheralId::USART4, SignalId::signal_rx, RouteId::candidate_pa1_usart4_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart4_lqfp64_tx_rx},
  {ConnectorId::candidate_pa2_lpuart1_tx, PinId::PA2, PeripheralId::LPUART1, SignalId::signal_tx, RouteId::candidate_pa2_lpuart1_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pa2_spi1_mosi, PinId::PA2, PeripheralId::SPI1, SignalId::signal_mosi, RouteId::candidate_pa2_spi1_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa2_tim15_ch1, PinId::PA2, PeripheralId::TIM15, SignalId::signal_ch1, RouteId::candidate_pa2_tim15_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pa2_tim2_ch3, PinId::PA2, PeripheralId::TIM2, SignalId::signal_ch3, RouteId::candidate_pa2_tim2_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa2_usart2_tx, PinId::PA2, PeripheralId::USART2, SignalId::signal_tx, RouteId::candidate_pa2_usart2_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx},
  {ConnectorId::candidate_pa3_lpuart1_rx, PinId::PA3, PeripheralId::LPUART1, SignalId::signal_rx, RouteId::candidate_pa3_lpuart1_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pa3_spi2_miso, PinId::PA3, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pa3_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa3_tim15_ch2, PinId::PA3, PeripheralId::TIM15, SignalId::signal_ch2, RouteId::candidate_pa3_tim15_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pa3_tim2_ch4, PinId::PA3, PeripheralId::TIM2, SignalId::signal_ch4, RouteId::candidate_pa3_tim2_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa3_usart2_rx, PinId::PA3, PeripheralId::USART2, SignalId::signal_rx, RouteId::candidate_pa3_usart2_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx},
  {ConnectorId::candidate_pa4_spi1_nss, PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss, RouteId::candidate_pa4_spi1_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa4_spi2_mosi, PinId::PA4, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pa4_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa4_tim14_ch1, PinId::PA4, PeripheralId::TIM14, SignalId::signal_ch1, RouteId::candidate_pa4_tim14_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa5_spi1_sck, PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck, RouteId::candidate_pa5_spi1_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa5_tim2_ch1, PinId::PA5, PeripheralId::TIM2, SignalId::signal_ch1, RouteId::candidate_pa5_tim2_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa5_tim2_etr, PinId::PA5, PeripheralId::TIM2, SignalId::signal_etr, RouteId::candidate_pa5_tim2_etr, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pa5_usart3_tx, PinId::PA5, PeripheralId::USART3, SignalId::signal_tx, RouteId::candidate_pa5_usart3_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pa6_lpuart1_cts, PinId::PA6, PeripheralId::LPUART1, SignalId::signal_cts, RouteId::candidate_pa6_lpuart1_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pa6_spi1_miso, PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso, RouteId::candidate_pa6_spi1_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa6_tim16_ch1, PinId::PA6, PeripheralId::TIM16, SignalId::signal_ch1, RouteId::candidate_pa6_tim16_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim16_lqfp64_all_signals},
  {ConnectorId::candidate_pa6_tim1_bk, PinId::PA6, PeripheralId::TIM1, SignalId::signal_bk, RouteId::candidate_pa6_tim1_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa6_tim3_ch1, PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1, RouteId::candidate_pa6_tim3_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pa6_usart3_cts, PinId::PA6, PeripheralId::USART3, SignalId::signal_cts, RouteId::candidate_pa6_usart3_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pa6_usart3_nss, PinId::PA6, PeripheralId::USART3, SignalId::signal_nss, RouteId::candidate_pa6_usart3_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa7_spi1_mosi, PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi, RouteId::candidate_pa7_spi1_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa7_tim14_ch1, PinId::PA7, PeripheralId::TIM14, SignalId::signal_ch1, RouteId::candidate_pa7_tim14_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa7_tim17_ch1, PinId::PA7, PeripheralId::TIM17, SignalId::signal_ch1, RouteId::candidate_pa7_tim17_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim17_lqfp64_all_signals},
  {ConnectorId::candidate_pa7_tim1_ch1n, PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n, RouteId::candidate_pa7_tim1_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa7_tim3_ch2, PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2, RouteId::candidate_pa7_tim3_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pa8_spi2_nss, PinId::PA8, PeripheralId::SPI2, SignalId::signal_nss, RouteId::candidate_pa8_spi2_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pa8_tim1_ch1, PinId::PA8, PeripheralId::TIM1, SignalId::signal_ch1, RouteId::candidate_pa8_tim1_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa9_i2c1_scl, PinId::PA9, PeripheralId::I2C1, SignalId::signal_scl, RouteId::candidate_pa9_i2c1_scl, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pa9_spi2_miso, PinId::PA9, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pa9_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pa9_tim15_bk, PinId::PA9, PeripheralId::TIM15, SignalId::signal_bk, RouteId::candidate_pa9_tim15_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pa9_tim1_ch2, PinId::PA9, PeripheralId::TIM1, SignalId::signal_ch2, RouteId::candidate_pa9_tim1_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pa9_usart1_tx, PinId::PA9, PeripheralId::USART1, SignalId::signal_tx, RouteId::candidate_pa9_usart1_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pb0_spi1_nss, PinId::PB0, PeripheralId::SPI1, SignalId::signal_nss, RouteId::candidate_pb0_spi1_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb0_tim1_ch2n, PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n, RouteId::candidate_pb0_tim1_ch2n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb0_tim3_ch3, PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3, RouteId::candidate_pb0_tim3_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pb0_usart3_rx, PinId::PB0, PeripheralId::USART3, SignalId::signal_rx, RouteId::candidate_pb0_usart3_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pb10_i2c2_scl, PinId::PB10, PeripheralId::I2C2, SignalId::signal_scl, RouteId::candidate_pb10_i2c2_scl, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c2_lqfp64_scl_sda},
  {ConnectorId::candidate_pb10_lpuart1_rx, PinId::PB10, PeripheralId::LPUART1, SignalId::signal_rx, RouteId::candidate_pb10_lpuart1_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pb10_spi2_sck, PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck, RouteId::candidate_pb10_spi2_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb10_tim2_ch3, PinId::PB10, PeripheralId::TIM2, SignalId::signal_ch3, RouteId::candidate_pb10_tim2_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pb10_usart3_tx, PinId::PB10, PeripheralId::USART3, SignalId::signal_tx, RouteId::candidate_pb10_usart3_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pb11_i2c2_sda, PinId::PB11, PeripheralId::I2C2, SignalId::signal_sda, RouteId::candidate_pb11_i2c2_sda, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c2_lqfp64_scl_sda},
  {ConnectorId::candidate_pb11_lpuart1_tx, PinId::PB11, PeripheralId::LPUART1, SignalId::signal_tx, RouteId::candidate_pb11_lpuart1_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pb11_spi2_mosi, PinId::PB11, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pb11_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb11_tim2_ch4, PinId::PB11, PeripheralId::TIM2, SignalId::signal_ch4, RouteId::candidate_pb11_tim2_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pb11_usart3_rx, PinId::PB11, PeripheralId::USART3, SignalId::signal_rx, RouteId::candidate_pb11_usart3_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pb12_lpuart1_de, PinId::PB12, PeripheralId::LPUART1, SignalId::signal_de, RouteId::candidate_pb12_lpuart1_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb12_lpuart1_rts, PinId::PB12, PeripheralId::LPUART1, SignalId::signal_rts, RouteId::candidate_pb12_lpuart1_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pb12_spi2_nss, PinId::PB12, PeripheralId::SPI2, SignalId::signal_nss, RouteId::candidate_pb12_spi2_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb12_tim15_bk, PinId::PB12, PeripheralId::TIM15, SignalId::signal_bk, RouteId::candidate_pb12_tim15_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pb12_tim1_bk, PinId::PB12, PeripheralId::TIM1, SignalId::signal_bk, RouteId::candidate_pb12_tim1_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb13_i2c2_scl, PinId::PB13, PeripheralId::I2C2, SignalId::signal_scl, RouteId::candidate_pb13_i2c2_scl, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c2_lqfp64_scl_sda},
  {ConnectorId::candidate_pb13_lpuart1_cts, PinId::PB13, PeripheralId::LPUART1, SignalId::signal_cts, RouteId::candidate_pb13_lpuart1_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pb13_spi2_sck, PinId::PB13, PeripheralId::SPI2, SignalId::signal_sck, RouteId::candidate_pb13_spi2_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb13_tim15_ch1n, PinId::PB13, PeripheralId::TIM15, SignalId::signal_ch1n, RouteId::candidate_pb13_tim15_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pb13_tim1_ch1n, PinId::PB13, PeripheralId::TIM1, SignalId::signal_ch1n, RouteId::candidate_pb13_tim1_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb13_usart3_cts, PinId::PB13, PeripheralId::USART3, SignalId::signal_cts, RouteId::candidate_pb13_usart3_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pb13_usart3_nss, PinId::PB13, PeripheralId::USART3, SignalId::signal_nss, RouteId::candidate_pb13_usart3_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb14_i2c2_sda, PinId::PB14, PeripheralId::I2C2, SignalId::signal_sda, RouteId::candidate_pb14_i2c2_sda, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c2_lqfp64_scl_sda},
  {ConnectorId::candidate_pb14_spi2_miso, PinId::PB14, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pb14_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb14_tim15_ch1, PinId::PB14, PeripheralId::TIM15, SignalId::signal_ch1, RouteId::candidate_pb14_tim15_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pb14_tim1_ch2n, PinId::PB14, PeripheralId::TIM1, SignalId::signal_ch2n, RouteId::candidate_pb14_tim1_ch2n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb14_usart3_ck, PinId::PB14, PeripheralId::USART3, SignalId::signal_ck, RouteId::candidate_pb14_usart3_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb14_usart3_de, PinId::PB14, PeripheralId::USART3, SignalId::signal_de, RouteId::candidate_pb14_usart3_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb14_usart3_rts, PinId::PB14, PeripheralId::USART3, SignalId::signal_rts, RouteId::candidate_pb14_usart3_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pb15_spi2_mosi, PinId::PB15, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pb15_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb15_tim15_ch1n, PinId::PB15, PeripheralId::TIM15, SignalId::signal_ch1n, RouteId::candidate_pb15_tim15_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pb15_tim15_ch2, PinId::PB15, PeripheralId::TIM15, SignalId::signal_ch2, RouteId::candidate_pb15_tim15_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pb15_tim1_ch3n, PinId::PB15, PeripheralId::TIM1, SignalId::signal_ch3n, RouteId::candidate_pb15_tim1_ch3n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb1_lpuart1_de, PinId::PB1, PeripheralId::LPUART1, SignalId::signal_de, RouteId::candidate_pb1_lpuart1_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb1_lpuart1_rts, PinId::PB1, PeripheralId::LPUART1, SignalId::signal_rts, RouteId::candidate_pb1_lpuart1_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pb1_tim14_ch1, PinId::PB1, PeripheralId::TIM14, SignalId::signal_ch1, RouteId::candidate_pb1_tim14_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb1_tim1_ch3n, PinId::PB1, PeripheralId::TIM1, SignalId::signal_ch3n, RouteId::candidate_pb1_tim1_ch3n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb1_tim3_ch4, PinId::PB1, PeripheralId::TIM3, SignalId::signal_ch4, RouteId::candidate_pb1_tim3_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pb1_usart3_ck, PinId::PB1, PeripheralId::USART3, SignalId::signal_ck, RouteId::candidate_pb1_usart3_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb1_usart3_de, PinId::PB1, PeripheralId::USART3, SignalId::signal_de, RouteId::candidate_pb1_usart3_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb1_usart3_rts, PinId::PB1, PeripheralId::USART3, SignalId::signal_rts, RouteId::candidate_pb1_usart3_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pb2_spi2_miso, PinId::PB2, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pb2_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb2_usart3_tx, PinId::PB2, PeripheralId::USART3, SignalId::signal_tx, RouteId::candidate_pb2_usart3_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pb3_spi1_sck, PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck, RouteId::candidate_pb3_spi1_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb3_tim1_ch2, PinId::PB3, PeripheralId::TIM1, SignalId::signal_ch2, RouteId::candidate_pb3_tim1_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb3_tim2_ch2, PinId::PB3, PeripheralId::TIM2, SignalId::signal_ch2, RouteId::candidate_pb3_tim2_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pb3_usart1_ck, PinId::PB3, PeripheralId::USART1, SignalId::signal_ck, RouteId::candidate_pb3_usart1_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb3_usart1_de, PinId::PB3, PeripheralId::USART1, SignalId::signal_de, RouteId::candidate_pb3_usart1_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb3_usart1_rts, PinId::PB3, PeripheralId::USART1, SignalId::signal_rts, RouteId::candidate_pb3_usart1_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pb4_spi1_miso, PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso, RouteId::candidate_pb4_spi1_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb4_tim17_bk, PinId::PB4, PeripheralId::TIM17, SignalId::signal_bk, RouteId::candidate_pb4_tim17_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim17_lqfp64_all_signals},
  {ConnectorId::candidate_pb4_tim3_ch1, PinId::PB4, PeripheralId::TIM3, SignalId::signal_ch1, RouteId::candidate_pb4_tim3_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pb4_usart1_cts, PinId::PB4, PeripheralId::USART1, SignalId::signal_cts, RouteId::candidate_pb4_usart1_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pb4_usart1_nss, PinId::PB4, PeripheralId::USART1, SignalId::signal_nss, RouteId::candidate_pb4_usart1_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb5_i2c1_smba, PinId::PB5, PeripheralId::I2C1, SignalId::signal_smba, RouteId::candidate_pb5_i2c1_smba, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb5_spi1_mosi, PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi, RouteId::candidate_pb5_spi1_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb5_tim16_bk, PinId::PB5, PeripheralId::TIM16, SignalId::signal_bk, RouteId::candidate_pb5_tim16_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim16_lqfp64_all_signals},
  {ConnectorId::candidate_pb5_tim3_ch2, PinId::PB5, PeripheralId::TIM3, SignalId::signal_ch2, RouteId::candidate_pb5_tim3_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pb6_i2c1_scl, PinId::PB6, PeripheralId::I2C1, SignalId::signal_scl, RouteId::candidate_pb6_i2c1_scl, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pb6_spi2_miso, PinId::PB6, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pb6_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb6_tim16_ch1n, PinId::PB6, PeripheralId::TIM16, SignalId::signal_ch1n, RouteId::candidate_pb6_tim16_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim16_lqfp64_all_signals},
  {ConnectorId::candidate_pb6_tim1_ch3, PinId::PB6, PeripheralId::TIM1, SignalId::signal_ch3, RouteId::candidate_pb6_tim1_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pb6_usart1_tx, PinId::PB6, PeripheralId::USART1, SignalId::signal_tx, RouteId::candidate_pb6_usart1_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pb7_i2c1_sda, PinId::PB7, PeripheralId::I2C1, SignalId::signal_sda, RouteId::candidate_pb7_i2c1_sda, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pb7_spi2_mosi, PinId::PB7, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pb7_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb7_tim17_ch1n, PinId::PB7, PeripheralId::TIM17, SignalId::signal_ch1n, RouteId::candidate_pb7_tim17_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim17_lqfp64_all_signals},
  {ConnectorId::candidate_pb7_usart1_rx, PinId::PB7, PeripheralId::USART1, SignalId::signal_rx, RouteId::candidate_pb7_usart1_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pb7_usart4_cts, PinId::PB7, PeripheralId::USART4, SignalId::signal_cts, RouteId::candidate_pb7_usart4_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart4_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pb7_usart4_nss, PinId::PB7, PeripheralId::USART4, SignalId::signal_nss, RouteId::candidate_pb7_usart4_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb8_i2c1_scl, PinId::PB8, PeripheralId::I2C1, SignalId::signal_scl, RouteId::candidate_pb8_i2c1_scl, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pb8_spi2_sck, PinId::PB8, PeripheralId::SPI2, SignalId::signal_sck, RouteId::candidate_pb8_spi2_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pb8_tim15_bk, PinId::PB8, PeripheralId::TIM15, SignalId::signal_bk, RouteId::candidate_pb8_tim15_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pb8_tim16_ch1, PinId::PB8, PeripheralId::TIM16, SignalId::signal_ch1, RouteId::candidate_pb8_tim16_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim16_lqfp64_all_signals},
  {ConnectorId::candidate_pb8_usart3_tx, PinId::PB8, PeripheralId::USART3, SignalId::signal_tx, RouteId::candidate_pb8_usart3_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pb9_i2c1_sda, PinId::PB9, PeripheralId::I2C1, SignalId::signal_sda, RouteId::candidate_pb9_i2c1_sda, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_i2c1_lqfp64_scl_sda},
  {ConnectorId::candidate_pb9_spi2_nss, PinId::PB9, PeripheralId::SPI2, SignalId::signal_nss, RouteId::candidate_pb9_spi2_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pb9_tim17_ch1, PinId::PB9, PeripheralId::TIM17, SignalId::signal_ch1, RouteId::candidate_pb9_tim17_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim17_lqfp64_all_signals},
  {ConnectorId::candidate_pb9_usart3_rx, PinId::PB9, PeripheralId::USART3, SignalId::signal_rx, RouteId::candidate_pb9_usart3_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pc0_lpuart1_rx, PinId::PC0, PeripheralId::LPUART1, SignalId::signal_rx, RouteId::candidate_pc0_lpuart1_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pc10_tim1_ch3, PinId::PC10, PeripheralId::TIM1, SignalId::signal_ch3, RouteId::candidate_pc10_tim1_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pc10_usart3_tx, PinId::PC10, PeripheralId::USART3, SignalId::signal_tx, RouteId::candidate_pc10_usart3_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pc10_usart4_tx, PinId::PC10, PeripheralId::USART4, SignalId::signal_tx, RouteId::candidate_pc10_usart4_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart4_lqfp64_tx_rx},
  {ConnectorId::candidate_pc11_tim1_ch4, PinId::PC11, PeripheralId::TIM1, SignalId::signal_ch4, RouteId::candidate_pc11_tim1_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pc11_usart3_rx, PinId::PC11, PeripheralId::USART3, SignalId::signal_rx, RouteId::candidate_pc11_usart3_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pc11_usart4_rx, PinId::PC11, PeripheralId::USART4, SignalId::signal_rx, RouteId::candidate_pc11_usart4_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart4_lqfp64_tx_rx},
  {ConnectorId::candidate_pc12_tim14_ch1, PinId::PC12, PeripheralId::TIM14, SignalId::signal_ch1, RouteId::candidate_pc12_tim14_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pc13_tim1_bk, PinId::PC13, PeripheralId::TIM1, SignalId::signal_bk, RouteId::candidate_pc13_tim1_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pc1_lpuart1_tx, PinId::PC1, PeripheralId::LPUART1, SignalId::signal_tx, RouteId::candidate_pc1_lpuart1_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_lpuart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pc1_tim15_ch1, PinId::PC1, PeripheralId::TIM15, SignalId::signal_ch1, RouteId::candidate_pc1_tim15_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pc2_spi2_miso, PinId::PC2, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pc2_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pc2_tim15_ch2, PinId::PC2, PeripheralId::TIM15, SignalId::signal_ch2, RouteId::candidate_pc2_tim15_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim15_lqfp64_all_signals},
  {ConnectorId::candidate_pc3_spi2_mosi, PinId::PC3, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pc3_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pc4_tim2_ch1, PinId::PC4, PeripheralId::TIM2, SignalId::signal_ch1, RouteId::candidate_pc4_tim2_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pc4_tim2_etr, PinId::PC4, PeripheralId::TIM2, SignalId::signal_etr, RouteId::candidate_pc4_tim2_etr, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pc4_usart1_tx, PinId::PC4, PeripheralId::USART1, SignalId::signal_tx, RouteId::candidate_pc4_usart1_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pc4_usart3_tx, PinId::PC4, PeripheralId::USART3, SignalId::signal_tx, RouteId::candidate_pc4_usart3_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pc5_tim2_ch2, PinId::PC5, PeripheralId::TIM2, SignalId::signal_ch2, RouteId::candidate_pc5_tim2_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pc5_usart1_rx, PinId::PC5, PeripheralId::USART1, SignalId::signal_rx, RouteId::candidate_pc5_usart1_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart1_lqfp64_tx_rx},
  {ConnectorId::candidate_pc5_usart3_rx, PinId::PC5, PeripheralId::USART3, SignalId::signal_rx, RouteId::candidate_pc5_usart3_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pc6_tim2_ch3, PinId::PC6, PeripheralId::TIM2, SignalId::signal_ch3, RouteId::candidate_pc6_tim2_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pc6_tim3_ch1, PinId::PC6, PeripheralId::TIM3, SignalId::signal_ch1, RouteId::candidate_pc6_tim3_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pc7_tim2_ch4, PinId::PC7, PeripheralId::TIM2, SignalId::signal_ch4, RouteId::candidate_pc7_tim2_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim2_lqfp64_all_signals},
  {ConnectorId::candidate_pc7_tim3_ch2, PinId::PC7, PeripheralId::TIM3, SignalId::signal_ch2, RouteId::candidate_pc7_tim3_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pc8_tim1_ch1, PinId::PC8, PeripheralId::TIM1, SignalId::signal_ch1, RouteId::candidate_pc8_tim1_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pc8_tim3_ch3, PinId::PC8, PeripheralId::TIM3, SignalId::signal_ch3, RouteId::candidate_pc8_tim3_ch3, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pc9_tim1_ch2, PinId::PC9, PeripheralId::TIM1, SignalId::signal_ch2, RouteId::candidate_pc9_tim1_ch2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pc9_tim3_ch4, PinId::PC9, PeripheralId::TIM3, SignalId::signal_ch4, RouteId::candidate_pc9_tim3_ch4, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pd0_spi2_nss, PinId::PD0, PeripheralId::SPI2, SignalId::signal_nss, RouteId::candidate_pd0_spi2_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pd0_tim16_ch1, PinId::PD0, PeripheralId::TIM16, SignalId::signal_ch1, RouteId::candidate_pd0_tim16_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim16_lqfp64_all_signals},
  {ConnectorId::candidate_pd1_spi2_sck, PinId::PD1, PeripheralId::SPI2, SignalId::signal_sck, RouteId::candidate_pd1_spi2_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pd1_tim17_ch1, PinId::PD1, PeripheralId::TIM17, SignalId::signal_ch1, RouteId::candidate_pd1_tim17_ch1, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim17_lqfp64_all_signals},
  {ConnectorId::candidate_pd2_tim1_ch1n, PinId::PD2, PeripheralId::TIM1, SignalId::signal_ch1n, RouteId::candidate_pd2_tim1_ch1n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pd2_tim3_etr, PinId::PD2, PeripheralId::TIM3, SignalId::signal_etr, RouteId::candidate_pd2_tim3_etr, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim3_lqfp64_all_signals},
  {ConnectorId::candidate_pd2_usart3_ck, PinId::PD2, PeripheralId::USART3, SignalId::signal_ck, RouteId::candidate_pd2_usart3_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pd2_usart3_de, PinId::PD2, PeripheralId::USART3, SignalId::signal_de, RouteId::candidate_pd2_usart3_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pd2_usart3_rts, PinId::PD2, PeripheralId::USART3, SignalId::signal_rts, RouteId::candidate_pd2_usart3_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pd3_spi2_miso, PinId::PD3, PeripheralId::SPI2, SignalId::signal_miso, RouteId::candidate_pd3_spi2_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pd3_tim1_ch2n, PinId::PD3, PeripheralId::TIM1, SignalId::signal_ch2n, RouteId::candidate_pd3_tim1_ch2n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pd3_usart2_cts, PinId::PD3, PeripheralId::USART2, SignalId::signal_cts, RouteId::candidate_pd3_usart2_cts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pd3_usart2_nss, PinId::PD3, PeripheralId::USART2, SignalId::signal_nss, RouteId::candidate_pd3_usart2_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pd4_spi2_mosi, PinId::PD4, PeripheralId::SPI2, SignalId::signal_mosi, RouteId::candidate_pd4_spi2_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pd4_tim1_ch3n, PinId::PD4, PeripheralId::TIM1, SignalId::signal_ch3n, RouteId::candidate_pd4_tim1_ch3n, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pd4_usart2_ck, PinId::PD4, PeripheralId::USART2, SignalId::signal_ck, RouteId::candidate_pd4_usart2_ck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pd4_usart2_de, PinId::PD4, PeripheralId::USART2, SignalId::signal_de, RouteId::candidate_pd4_usart2_de, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pd4_usart2_rts, PinId::PD4, PeripheralId::USART2, SignalId::signal_rts, RouteId::candidate_pd4_usart2_rts, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts},
  {ConnectorId::candidate_pd5_spi1_miso, PinId::PD5, PeripheralId::SPI1, SignalId::signal_miso, RouteId::candidate_pd5_spi1_miso, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pd5_tim1_bk, PinId::PD5, PeripheralId::TIM1, SignalId::signal_bk, RouteId::candidate_pd5_tim1_bk, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pd5_usart2_tx, PinId::PD5, PeripheralId::USART2, SignalId::signal_tx, RouteId::candidate_pd5_usart2_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx},
  {ConnectorId::candidate_pd6_spi1_mosi, PinId::PD6, PeripheralId::SPI1, SignalId::signal_mosi, RouteId::candidate_pd6_spi1_mosi, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pd6_usart2_rx, PinId::PD6, PeripheralId::USART2, SignalId::signal_rx, RouteId::candidate_pd6_usart2_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart2_lqfp64_tx_rx},
  {ConnectorId::candidate_pd8_spi1_sck, PinId::PD8, PeripheralId::SPI1, SignalId::signal_sck, RouteId::candidate_pd8_spi1_sck, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso},
  {ConnectorId::candidate_pd8_usart3_tx, PinId::PD8, PeripheralId::USART3, SignalId::signal_tx, RouteId::candidate_pd8_usart3_tx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
  {ConnectorId::candidate_pd9_spi1_nss, PinId::PD9, PeripheralId::SPI1, SignalId::signal_nss, RouteId::candidate_pd9_spi1_nss, RouteKindId::route_kind_alternate_function, ConnectionGroupId::none},
  {ConnectorId::candidate_pd9_tim1_bk2, PinId::PD9, PeripheralId::TIM1, SignalId::signal_bk2, RouteId::candidate_pd9_tim1_bk2, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_tim1_lqfp64_all_signals},
  {ConnectorId::candidate_pd9_usart3_rx, PinId::PD9, PeripheralId::USART3, SignalId::signal_rx, RouteId::candidate_pd9_usart3_rx, RouteKindId::route_kind_alternate_function, ConnectionGroupId::group_usart3_lqfp64_tx_rx},
}};
}
}
}
}
}
}
