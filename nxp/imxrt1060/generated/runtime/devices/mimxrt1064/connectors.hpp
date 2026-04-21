#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "routes.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1064 {
enum class ConnectorId : std::uint16_t {
  none,
  candidate_gpio_ad_b0_00_gpio1_io00,
  candidate_gpio_ad_b0_00_lpspi3_sck,
  candidate_gpio_ad_b0_01_gpio1_io01,
  candidate_gpio_ad_b0_01_lpspi3_sdo,
  candidate_gpio_ad_b0_02_gpio1_io02,
  candidate_gpio_ad_b0_02_lpspi3_sdi,
  candidate_gpio_ad_b0_02_lpuart6_tx,
  candidate_gpio_ad_b0_03_gpio1_io03,
  candidate_gpio_ad_b0_03_lpspi3_pcs0,
  candidate_gpio_ad_b0_03_lpuart6_rx,
  candidate_gpio_ad_b0_04_gpio1_io04,
  candidate_gpio_ad_b0_04_lpspi3_pcs1,
  candidate_gpio_ad_b0_05_gpio1_io05,
  candidate_gpio_ad_b0_05_lpspi3_pcs2,
  candidate_gpio_ad_b0_06_gpio1_io06,
  candidate_gpio_ad_b0_06_lpspi3_pcs3,
  candidate_gpio_ad_b0_07_gpio1_io07,
  candidate_gpio_ad_b0_08_gpio1_io08,
  candidate_gpio_ad_b0_09_gpio1_io09,
  candidate_gpio_ad_b0_10_gpio1_io10,
  candidate_gpio_ad_b0_11_gpio1_io11,
  candidate_gpio_ad_b0_12_gpio1_io12,
  candidate_gpio_ad_b0_12_lpuart1_tx,
  candidate_gpio_ad_b0_13_gpio1_io13,
  candidate_gpio_ad_b0_13_lpuart1_rx,
  candidate_gpio_ad_b0_14_gpio1_io14,
  candidate_gpio_ad_b0_14_lpuart1_cts_b,
  candidate_gpio_ad_b0_15_gpio1_io15,
  candidate_gpio_ad_b0_15_lpuart1_rts_b,
  candidate_gpio_ad_b1_00_gpio1_io16,
  candidate_gpio_ad_b1_00_lpuart2_cts_b,
  candidate_gpio_ad_b1_01_gpio1_io17,
  candidate_gpio_ad_b1_01_lpuart2_rts_b,
  candidate_gpio_ad_b1_02_gpio1_io18,
  candidate_gpio_ad_b1_02_lpuart2_tx,
  candidate_gpio_ad_b1_03_gpio1_io19,
  candidate_gpio_ad_b1_03_lpuart2_rx,
  candidate_gpio_ad_b1_04_gpio1_io20,
  candidate_gpio_ad_b1_04_lpuart3_cts_b,
  candidate_gpio_ad_b1_05_gpio1_io21,
  candidate_gpio_ad_b1_05_lpuart3_rts_b,
  candidate_gpio_ad_b1_06_gpio1_io22,
  candidate_gpio_ad_b1_06_lpuart3_tx,
  candidate_gpio_ad_b1_07_gpio1_io23,
  candidate_gpio_ad_b1_07_lpuart3_rx,
  candidate_gpio_ad_b1_08_gpio1_io24,
  candidate_gpio_ad_b1_09_gpio1_io25,
  candidate_gpio_ad_b1_10_gpio1_io26,
  candidate_gpio_ad_b1_10_lpuart8_tx,
  candidate_gpio_ad_b1_11_gpio1_io27,
  candidate_gpio_ad_b1_11_lpuart8_rx,
  candidate_gpio_ad_b1_12_gpio1_io28,
  candidate_gpio_ad_b1_12_lpspi3_pcs0,
  candidate_gpio_ad_b1_13_gpio1_io29,
  candidate_gpio_ad_b1_13_lpspi3_sdi,
  candidate_gpio_ad_b1_14_gpio1_io30,
  candidate_gpio_ad_b1_14_lpspi3_sdo,
  candidate_gpio_ad_b1_15_gpio1_io31,
  candidate_gpio_ad_b1_15_lpspi3_sck,
  candidate_gpio_b0_00_gpio2_io00,
  candidate_gpio_b0_00_lpspi4_pcs0,
  candidate_gpio_b0_01_gpio2_io01,
  candidate_gpio_b0_01_lpspi4_sdi,
  candidate_gpio_b0_02_gpio2_io02,
  candidate_gpio_b0_02_lpspi4_sdo,
  candidate_gpio_b0_03_gpio2_io03,
  candidate_gpio_b0_03_lpspi4_sck,
  candidate_gpio_b0_04_gpio2_io04,
  candidate_gpio_b0_05_gpio2_io05,
  candidate_gpio_b0_06_gpio2_io06,
  candidate_gpio_b0_07_gpio2_io07,
  candidate_gpio_b0_08_gpio2_io08,
  candidate_gpio_b0_08_lpuart3_tx,
  candidate_gpio_b0_09_gpio2_io09,
  candidate_gpio_b0_09_lpuart3_rx,
  candidate_gpio_b0_10_gpio2_io10,
  candidate_gpio_b0_11_gpio2_io11,
  candidate_gpio_b0_12_gpio2_io12,
  candidate_gpio_b0_13_gpio2_io13,
  candidate_gpio_b0_14_gpio2_io14,
  candidate_gpio_b0_15_gpio2_io15,
  candidate_gpio_b1_00_gpio2_io16,
  candidate_gpio_b1_00_lpuart4_tx,
  candidate_gpio_b1_01_gpio2_io17,
  candidate_gpio_b1_01_lpuart4_rx,
  candidate_gpio_b1_02_gpio2_io18,
  candidate_gpio_b1_02_lpspi4_pcs2,
  candidate_gpio_b1_03_gpio2_io19,
  candidate_gpio_b1_03_lpspi4_pcs1,
  candidate_gpio_b1_04_gpio2_io20,
  candidate_gpio_b1_04_lpspi4_pcs0,
  candidate_gpio_b1_05_gpio2_io21,
  candidate_gpio_b1_05_lpspi4_sdi,
  candidate_gpio_b1_06_gpio2_io22,
  candidate_gpio_b1_06_lpspi4_sdo,
  candidate_gpio_b1_07_gpio2_io23,
  candidate_gpio_b1_07_lpspi4_sck,
  candidate_gpio_b1_08_gpio2_io24,
  candidate_gpio_b1_09_gpio2_io25,
  candidate_gpio_b1_10_gpio2_io26,
  candidate_gpio_b1_11_gpio2_io27,
  candidate_gpio_b1_11_lpspi4_pcs3,
  candidate_gpio_b1_12_gpio2_io28,
  candidate_gpio_b1_12_lpuart5_tx,
  candidate_gpio_b1_13_gpio2_io29,
  candidate_gpio_b1_13_lpuart5_rx,
  candidate_gpio_b1_14_gpio2_io30,
  candidate_gpio_b1_15_gpio2_io31,
  candidate_gpio_emc_00_gpio4_io00,
  candidate_gpio_emc_00_lpspi2_sck,
  candidate_gpio_emc_01_gpio4_io01,
  candidate_gpio_emc_01_lpspi2_pcs0,
  candidate_gpio_emc_02_gpio4_io02,
  candidate_gpio_emc_02_lpspi2_sdo,
  candidate_gpio_emc_03_gpio4_io03,
  candidate_gpio_emc_03_lpspi2_sdi,
  candidate_gpio_emc_04_gpio4_io04,
  candidate_gpio_emc_05_gpio4_io05,
  candidate_gpio_emc_06_gpio4_io06,
  candidate_gpio_emc_07_gpio4_io07,
  candidate_gpio_emc_08_gpio4_io08,
  candidate_gpio_emc_09_gpio4_io09,
  candidate_gpio_emc_10_gpio4_io10,
  candidate_gpio_emc_11_gpio4_io11,
  candidate_gpio_emc_12_gpio4_io12,
  candidate_gpio_emc_13_gpio4_io13,
  candidate_gpio_emc_13_lpuart3_tx,
  candidate_gpio_emc_14_gpio4_io14,
  candidate_gpio_emc_14_lpspi2_pcs1,
  candidate_gpio_emc_14_lpuart3_rx,
  candidate_gpio_emc_15_gpio4_io15,
  candidate_gpio_emc_15_lpuart3_cts_b,
  candidate_gpio_emc_16_gpio4_io16,
  candidate_gpio_emc_16_lpuart3_rts_b,
  candidate_gpio_emc_17_gpio4_io17,
  candidate_gpio_emc_17_lpuart4_cts_b,
  candidate_gpio_emc_18_gpio4_io18,
  candidate_gpio_emc_18_lpuart4_rts_b,
  candidate_gpio_emc_19_gpio4_io19,
  candidate_gpio_emc_19_lpuart4_tx,
  candidate_gpio_emc_20_gpio4_io20,
  candidate_gpio_emc_20_lpuart4_rx,
  candidate_gpio_emc_21_gpio4_io21,
  candidate_gpio_emc_22_gpio4_io22,
  candidate_gpio_emc_23_gpio4_io23,
  candidate_gpio_emc_23_lpuart5_tx,
  candidate_gpio_emc_24_gpio4_io24,
  candidate_gpio_emc_24_lpuart5_rx,
  candidate_gpio_emc_25_gpio4_io25,
  candidate_gpio_emc_25_lpuart6_tx,
  candidate_gpio_emc_26_gpio4_io26,
  candidate_gpio_emc_26_lpuart6_rx,
  candidate_gpio_emc_27_gpio4_io27,
  candidate_gpio_emc_27_lpspi1_sck,
  candidate_gpio_emc_27_lpuart5_rts_b,
  candidate_gpio_emc_28_gpio4_io28,
  candidate_gpio_emc_28_lpspi1_sdo,
  candidate_gpio_emc_28_lpuart5_cts_b,
  candidate_gpio_emc_29_gpio4_io29,
  candidate_gpio_emc_29_lpspi1_sdi,
  candidate_gpio_emc_29_lpuart6_rts_b,
  candidate_gpio_emc_30_gpio4_io30,
  candidate_gpio_emc_30_lpspi1_pcs0,
  candidate_gpio_emc_30_lpuart6_cts_b,
  candidate_gpio_emc_31_gpio4_io31,
  candidate_gpio_emc_31_lpspi1_pcs1,
  candidate_gpio_emc_31_lpuart7_tx,
  candidate_gpio_emc_32_gpio3_io18,
  candidate_gpio_emc_32_lpuart7_rx,
  candidate_gpio_emc_33_gpio3_io19,
  candidate_gpio_emc_34_gpio3_io20,
  candidate_gpio_emc_35_gpio3_io21,
  candidate_gpio_emc_36_gpio3_io22,
  candidate_gpio_emc_37_gpio3_io23,
  candidate_gpio_emc_38_gpio3_io24,
  candidate_gpio_emc_38_lpuart8_tx,
  candidate_gpio_emc_39_gpio3_io25,
  candidate_gpio_emc_39_lpuart8_rx,
  candidate_gpio_emc_40_gpio3_io26,
  candidate_gpio_emc_40_lpspi1_pcs2,
  candidate_gpio_emc_41_gpio3_io27,
  candidate_gpio_emc_41_lpspi1_pcs3,
  candidate_gpio_sd_b0_00_gpio3_io12,
  candidate_gpio_sd_b0_00_lpspi1_sck,
  candidate_gpio_sd_b0_01_gpio3_io13,
  candidate_gpio_sd_b0_01_lpspi1_pcs0,
  candidate_gpio_sd_b0_02_gpio3_io14,
  candidate_gpio_sd_b0_02_lpspi1_sdo,
  candidate_gpio_sd_b0_02_lpuart8_cts_b,
  candidate_gpio_sd_b0_03_gpio3_io15,
  candidate_gpio_sd_b0_03_lpspi1_sdi,
  candidate_gpio_sd_b0_03_lpuart8_rts_b,
  candidate_gpio_sd_b0_04_gpio3_io16,
  candidate_gpio_sd_b0_04_lpuart8_tx,
  candidate_gpio_sd_b0_05_gpio3_io17,
  candidate_gpio_sd_b0_05_lpuart8_rx,
  candidate_gpio_sd_b1_00_gpio3_io00,
  candidate_gpio_sd_b1_00_lpuart4_tx,
  candidate_gpio_sd_b1_01_gpio3_io01,
  candidate_gpio_sd_b1_01_lpuart4_rx,
  candidate_gpio_sd_b1_02_gpio3_io02,
  candidate_gpio_sd_b1_03_gpio3_io03,
  candidate_gpio_sd_b1_04_gpio3_io04,
  candidate_gpio_sd_b1_05_gpio3_io05,
  candidate_gpio_sd_b1_06_gpio3_io06,
  candidate_gpio_sd_b1_06_lpspi2_pcs0,
  candidate_gpio_sd_b1_06_lpuart7_cts_b,
  candidate_gpio_sd_b1_07_gpio3_io07,
  candidate_gpio_sd_b1_07_lpspi2_sck,
  candidate_gpio_sd_b1_07_lpuart7_rts_b,
  candidate_gpio_sd_b1_08_gpio3_io08,
  candidate_gpio_sd_b1_08_lpspi2_sd0,
  candidate_gpio_sd_b1_08_lpuart7_tx,
  candidate_gpio_sd_b1_09_gpio3_io09,
  candidate_gpio_sd_b1_09_lpspi2_sdi,
  candidate_gpio_sd_b1_09_lpuart7_rx,
  candidate_gpio_sd_b1_10_gpio3_io10,
  candidate_gpio_sd_b1_10_lpspi2_pcs2,
  candidate_gpio_sd_b1_10_lpuart2_rx,
  candidate_gpio_sd_b1_11_gpio3_io11,
  candidate_gpio_sd_b1_11_lpspi2_pcs3,
  candidate_gpio_sd_b1_11_lpuart2_tx,
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
struct ConnectorTraits<PinId::GPIO_AD_B0_00, PeripheralId::GPIO1, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_00_gpio1_io00;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_00_gpio1_io00;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_00, PeripheralId::LPSPI3, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_00_lpspi3_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_00_lpspi3_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi3_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_01, PeripheralId::GPIO1, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_01_gpio1_io01;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_01_gpio1_io01;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_01, PeripheralId::LPSPI3, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_01_lpspi3_sdo;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_01_lpspi3_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_02, PeripheralId::GPIO1, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_02_gpio1_io02;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_02_gpio1_io02;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_02, PeripheralId::LPSPI3, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_02_lpspi3_sdi;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_02_lpspi3_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_02, PeripheralId::LPUART6, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_02_lpuart6_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_02_lpuart6_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart6_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_03, PeripheralId::GPIO1, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_03_gpio1_io03;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_03_gpio1_io03;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_03, PeripheralId::LPSPI3, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_03_lpspi3_pcs0;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_03_lpspi3_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi3_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_03, PeripheralId::LPUART6, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_03_lpuart6_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_03_lpuart6_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart6_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_04, PeripheralId::GPIO1, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_04_gpio1_io04;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_04_gpio1_io04;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_04, PeripheralId::LPSPI3, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_04_lpspi3_pcs1;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_04_lpspi3_pcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi3_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_05, PeripheralId::GPIO1, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_05_gpio1_io05;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_05_gpio1_io05;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_05, PeripheralId::LPSPI3, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_05_lpspi3_pcs2;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_05_lpspi3_pcs2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi3_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_06, PeripheralId::GPIO1, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_06_gpio1_io06;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_06_gpio1_io06;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_06, PeripheralId::LPSPI3, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_06_lpspi3_pcs3;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_06_lpspi3_pcs3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi3_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_07, PeripheralId::GPIO1, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_07_gpio1_io07;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_07_gpio1_io07;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_08, PeripheralId::GPIO1, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_08_gpio1_io08;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_08_gpio1_io08;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_09, PeripheralId::GPIO1, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_09_gpio1_io09;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_09_gpio1_io09;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_10, PeripheralId::GPIO1, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_10_gpio1_io10;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_10_gpio1_io10;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_11, PeripheralId::GPIO1, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_11_gpio1_io11;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_11_gpio1_io11;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_12, PeripheralId::GPIO1, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_12_gpio1_io12;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_12_gpio1_io12;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_12, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_12_lpuart1_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_12_lpuart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_13, PeripheralId::GPIO1, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_13_gpio1_io13;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_13_gpio1_io13;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_13, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_13_lpuart1_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_13_lpuart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_14, PeripheralId::GPIO1, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_14_gpio1_io14;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_14_gpio1_io14;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_14, PeripheralId::LPUART1, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_14_lpuart1_cts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_14_lpuart1_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_15, PeripheralId::GPIO1, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_15_gpio1_io15;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_15_gpio1_io15;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B0_15, PeripheralId::LPUART1, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b0_15_lpuart1_rts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_15_lpuart1_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart1_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_00, PeripheralId::GPIO1, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_00_gpio1_io16;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_00_gpio1_io16;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_00, PeripheralId::LPUART2, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_00_lpuart2_cts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_00_lpuart2_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart2_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_01, PeripheralId::GPIO1, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_01_gpio1_io17;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_01_gpio1_io17;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_01, PeripheralId::LPUART2, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_01_lpuart2_rts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_01_lpuart2_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart2_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_02, PeripheralId::GPIO1, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_02_gpio1_io18;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_02_gpio1_io18;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_02, PeripheralId::LPUART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_02_lpuart2_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_02_lpuart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart2_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_03, PeripheralId::GPIO1, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_03_gpio1_io19;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_03_gpio1_io19;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_03, PeripheralId::LPUART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_03_lpuart2_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_03_lpuart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart2_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_04, PeripheralId::GPIO1, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_04_gpio1_io20;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_04_gpio1_io20;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_04, PeripheralId::LPUART3, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_04_lpuart3_cts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_04_lpuart3_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_05, PeripheralId::GPIO1, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_05_gpio1_io21;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_05_gpio1_io21;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_05, PeripheralId::LPUART3, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_05_lpuart3_rts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_05_lpuart3_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_06, PeripheralId::GPIO1, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_06_gpio1_io22;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_06_gpio1_io22;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_06, PeripheralId::LPUART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_06_lpuart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_06_lpuart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_07, PeripheralId::GPIO1, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_07_gpio1_io23;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_07_gpio1_io23;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_07, PeripheralId::LPUART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_07_lpuart3_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_07_lpuart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_08, PeripheralId::GPIO1, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_08_gpio1_io24;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_08_gpio1_io24;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_09, PeripheralId::GPIO1, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_09_gpio1_io25;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_09_gpio1_io25;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_10, PeripheralId::GPIO1, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_10_gpio1_io26;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_10_gpio1_io26;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_10, PeripheralId::LPUART8, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_10_lpuart8_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_10_lpuart8_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_11, PeripheralId::GPIO1, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_11_gpio1_io27;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_11_gpio1_io27;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_11, PeripheralId::LPUART8, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_11_lpuart8_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_11_lpuart8_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_12, PeripheralId::GPIO1, SignalId::signal_io28> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_12_gpio1_io28;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_12_gpio1_io28;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_12, PeripheralId::LPSPI3, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_12_lpspi3_pcs0;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_12_lpspi3_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi3_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_13, PeripheralId::GPIO1, SignalId::signal_io29> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_13_gpio1_io29;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_13_gpio1_io29;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_13, PeripheralId::LPSPI3, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_13_lpspi3_sdi;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_13_lpspi3_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_14, PeripheralId::GPIO1, SignalId::signal_io30> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_14_gpio1_io30;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_14_gpio1_io30;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_14, PeripheralId::LPSPI3, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_14_lpspi3_sdo;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_14_lpspi3_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_15, PeripheralId::GPIO1, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_15_gpio1_io31;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_15_gpio1_io31;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_AD_B1_15, PeripheralId::LPSPI3, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_ad_b1_15_lpspi3_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_15_lpspi3_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi3_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_00, PeripheralId::GPIO2, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_00_gpio2_io00;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_00_gpio2_io00;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_00, PeripheralId::LPSPI4, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_00_lpspi4_pcs0;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_00_lpspi4_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi4_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_01, PeripheralId::GPIO2, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_01_gpio2_io01;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_01_gpio2_io01;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_01, PeripheralId::LPSPI4, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_01_lpspi4_sdi;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_01_lpspi4_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_02, PeripheralId::GPIO2, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_02_gpio2_io02;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_02_gpio2_io02;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_02, PeripheralId::LPSPI4, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_02_lpspi4_sdo;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_02_lpspi4_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_03, PeripheralId::GPIO2, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_03_gpio2_io03;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_03_gpio2_io03;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_03, PeripheralId::LPSPI4, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_03_lpspi4_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_03_lpspi4_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi4_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_04, PeripheralId::GPIO2, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_04_gpio2_io04;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_04_gpio2_io04;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_05, PeripheralId::GPIO2, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_05_gpio2_io05;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_05_gpio2_io05;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_06, PeripheralId::GPIO2, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_06_gpio2_io06;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_06_gpio2_io06;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_07, PeripheralId::GPIO2, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_07_gpio2_io07;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_07_gpio2_io07;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_08, PeripheralId::GPIO2, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_08_gpio2_io08;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_08_gpio2_io08;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_08, PeripheralId::LPUART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_08_lpuart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_08_lpuart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_09, PeripheralId::GPIO2, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_09_gpio2_io09;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_09_gpio2_io09;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_09, PeripheralId::LPUART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_09_lpuart3_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_09_lpuart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_10, PeripheralId::GPIO2, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_10_gpio2_io10;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_10_gpio2_io10;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_11, PeripheralId::GPIO2, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_11_gpio2_io11;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_11_gpio2_io11;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_12, PeripheralId::GPIO2, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_12_gpio2_io12;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_12_gpio2_io12;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_13, PeripheralId::GPIO2, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_13_gpio2_io13;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_13_gpio2_io13;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_14, PeripheralId::GPIO2, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_14_gpio2_io14;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_14_gpio2_io14;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B0_15, PeripheralId::GPIO2, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b0_15_gpio2_io15;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_15_gpio2_io15;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_00, PeripheralId::GPIO2, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_00_gpio2_io16;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_00_gpio2_io16;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_00, PeripheralId::LPUART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_00_lpuart4_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_00_lpuart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_01, PeripheralId::GPIO2, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_01_gpio2_io17;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_01_gpio2_io17;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_01, PeripheralId::LPUART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_01_lpuart4_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_01_lpuart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_02, PeripheralId::GPIO2, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_02_gpio2_io18;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_02_gpio2_io18;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_02, PeripheralId::LPSPI4, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_02_lpspi4_pcs2;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_02_lpspi4_pcs2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi4_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_03, PeripheralId::GPIO2, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_03_gpio2_io19;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_03_gpio2_io19;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_03, PeripheralId::LPSPI4, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_03_lpspi4_pcs1;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_03_lpspi4_pcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi4_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_04, PeripheralId::GPIO2, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_04_gpio2_io20;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_04_gpio2_io20;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_04, PeripheralId::LPSPI4, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_04_lpspi4_pcs0;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_04_lpspi4_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi4_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_05, PeripheralId::GPIO2, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_05_gpio2_io21;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_05_gpio2_io21;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_05, PeripheralId::LPSPI4, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_05_lpspi4_sdi;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_05_lpspi4_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_06, PeripheralId::GPIO2, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_06_gpio2_io22;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_06_gpio2_io22;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_06, PeripheralId::LPSPI4, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_06_lpspi4_sdo;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_06_lpspi4_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_07, PeripheralId::GPIO2, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_07_gpio2_io23;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_07_gpio2_io23;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_07, PeripheralId::LPSPI4, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_07_lpspi4_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_07_lpspi4_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi4_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_08, PeripheralId::GPIO2, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_08_gpio2_io24;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_08_gpio2_io24;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_09, PeripheralId::GPIO2, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_09_gpio2_io25;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_09_gpio2_io25;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_10, PeripheralId::GPIO2, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_10_gpio2_io26;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_10_gpio2_io26;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_11, PeripheralId::GPIO2, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_11_gpio2_io27;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_11_gpio2_io27;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_11, PeripheralId::LPSPI4, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_11_lpspi4_pcs3;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_11_lpspi4_pcs3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi4_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_12, PeripheralId::GPIO2, SignalId::signal_io28> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_12_gpio2_io28;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_12_gpio2_io28;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_12, PeripheralId::LPUART5, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_12_lpuart5_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_12_lpuart5_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart5_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_13, PeripheralId::GPIO2, SignalId::signal_io29> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_13_gpio2_io29;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_13_gpio2_io29;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_13, PeripheralId::LPUART5, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_13_lpuart5_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_13_lpuart5_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart5_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_14, PeripheralId::GPIO2, SignalId::signal_io30> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_14_gpio2_io30;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_14_gpio2_io30;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_B1_15, PeripheralId::GPIO2, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_b1_15_gpio2_io31;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_15_gpio2_io31;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_00, PeripheralId::GPIO4, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_00_gpio4_io00;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_00_gpio4_io00;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_00, PeripheralId::LPSPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_00_lpspi2_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_00_lpspi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi2_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_01, PeripheralId::GPIO4, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_01_gpio4_io01;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_01_gpio4_io01;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_01, PeripheralId::LPSPI2, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_01_lpspi2_pcs0;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_01_lpspi2_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi2_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_02, PeripheralId::GPIO4, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_02_gpio4_io02;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_02_gpio4_io02;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_02, PeripheralId::LPSPI2, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_02_lpspi2_sdo;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_02_lpspi2_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_03, PeripheralId::GPIO4, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_03_gpio4_io03;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_03_gpio4_io03;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_03, PeripheralId::LPSPI2, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_03_lpspi2_sdi;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_03_lpspi2_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_04, PeripheralId::GPIO4, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_04_gpio4_io04;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_04_gpio4_io04;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_05, PeripheralId::GPIO4, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_05_gpio4_io05;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_05_gpio4_io05;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_06, PeripheralId::GPIO4, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_06_gpio4_io06;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_06_gpio4_io06;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_07, PeripheralId::GPIO4, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_07_gpio4_io07;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_07_gpio4_io07;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_08, PeripheralId::GPIO4, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_08_gpio4_io08;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_08_gpio4_io08;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_09, PeripheralId::GPIO4, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_09_gpio4_io09;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_09_gpio4_io09;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_10, PeripheralId::GPIO4, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_10_gpio4_io10;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_10_gpio4_io10;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_11, PeripheralId::GPIO4, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_11_gpio4_io11;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_11_gpio4_io11;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_12, PeripheralId::GPIO4, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_12_gpio4_io12;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_12_gpio4_io12;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_13, PeripheralId::GPIO4, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_13_gpio4_io13;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_13_gpio4_io13;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_13, PeripheralId::LPUART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_13_lpuart3_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_13_lpuart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_14, PeripheralId::GPIO4, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_14_gpio4_io14;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_14_gpio4_io14;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_14, PeripheralId::LPSPI2, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_14_lpspi2_pcs1;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_14_lpspi2_pcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi2_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_14, PeripheralId::LPUART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_14_lpuart3_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_14_lpuart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_15, PeripheralId::GPIO4, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_15_gpio4_io15;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_15_gpio4_io15;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_15, PeripheralId::LPUART3, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_15_lpuart3_cts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_15_lpuart3_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_16, PeripheralId::GPIO4, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_16_gpio4_io16;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_16_gpio4_io16;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_16, PeripheralId::LPUART3, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_16_lpuart3_rts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_16_lpuart3_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_17, PeripheralId::GPIO4, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_17_gpio4_io17;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_17_gpio4_io17;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_17, PeripheralId::LPUART4, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_17_lpuart4_cts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_17_lpuart4_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_18, PeripheralId::GPIO4, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_18_gpio4_io18;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_18_gpio4_io18;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_18, PeripheralId::LPUART4, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_18_lpuart4_rts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_18_lpuart4_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_19, PeripheralId::GPIO4, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_19_gpio4_io19;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_19_gpio4_io19;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_19, PeripheralId::LPUART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_19_lpuart4_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_19_lpuart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_20, PeripheralId::GPIO4, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_20_gpio4_io20;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_20_gpio4_io20;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_20, PeripheralId::LPUART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_20_lpuart4_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_20_lpuart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_21, PeripheralId::GPIO4, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_21_gpio4_io21;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_21_gpio4_io21;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_22, PeripheralId::GPIO4, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_22_gpio4_io22;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_22_gpio4_io22;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_23, PeripheralId::GPIO4, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_23_gpio4_io23;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_23_gpio4_io23;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_23, PeripheralId::LPUART5, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_23_lpuart5_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_23_lpuart5_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart5_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_24, PeripheralId::GPIO4, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_24_gpio4_io24;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_24_gpio4_io24;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_24, PeripheralId::LPUART5, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_24_lpuart5_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_24_lpuart5_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart5_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_25, PeripheralId::GPIO4, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_25_gpio4_io25;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_25_gpio4_io25;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_25, PeripheralId::LPUART6, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_25_lpuart6_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_25_lpuart6_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart6_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_26, PeripheralId::GPIO4, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_26_gpio4_io26;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_26_gpio4_io26;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_26, PeripheralId::LPUART6, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_26_lpuart6_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_26_lpuart6_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart6_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_27, PeripheralId::GPIO4, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_27_gpio4_io27;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_27_gpio4_io27;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_27, PeripheralId::LPSPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_27_lpspi1_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_27_lpspi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi1_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_27, PeripheralId::LPUART5, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_27_lpuart5_rts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_27_lpuart5_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart5_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_28, PeripheralId::GPIO4, SignalId::signal_io28> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_28_gpio4_io28;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_28_gpio4_io28;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_28, PeripheralId::LPSPI1, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_28_lpspi1_sdo;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_28_lpspi1_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_28, PeripheralId::LPUART5, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_28_lpuart5_cts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_28_lpuart5_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart5_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_29, PeripheralId::GPIO4, SignalId::signal_io29> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_29_gpio4_io29;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_29_gpio4_io29;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_29, PeripheralId::LPSPI1, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_29_lpspi1_sdi;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_29_lpspi1_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_29, PeripheralId::LPUART6, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_29_lpuart6_rts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_29_lpuart6_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart6_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_30, PeripheralId::GPIO4, SignalId::signal_io30> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_30_gpio4_io30;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_30_gpio4_io30;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_30, PeripheralId::LPSPI1, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_30_lpspi1_pcs0;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_30_lpspi1_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi1_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_30, PeripheralId::LPUART6, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_30_lpuart6_cts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_30_lpuart6_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart6_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_31, PeripheralId::GPIO4, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_31_gpio4_io31;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_31_gpio4_io31;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_31, PeripheralId::LPSPI1, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_31_lpspi1_pcs1;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_31_lpspi1_pcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi1_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_31, PeripheralId::LPUART7, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_31_lpuart7_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_31_lpuart7_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart7_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_32, PeripheralId::GPIO3, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_32_gpio3_io18;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_32_gpio3_io18;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_32, PeripheralId::LPUART7, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_32_lpuart7_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_32_lpuart7_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart7_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_33, PeripheralId::GPIO3, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_33_gpio3_io19;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_33_gpio3_io19;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_34, PeripheralId::GPIO3, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_34_gpio3_io20;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_34_gpio3_io20;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_35, PeripheralId::GPIO3, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_35_gpio3_io21;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_35_gpio3_io21;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_36, PeripheralId::GPIO3, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_36_gpio3_io22;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_36_gpio3_io22;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_37, PeripheralId::GPIO3, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_37_gpio3_io23;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_37_gpio3_io23;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_38, PeripheralId::GPIO3, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_38_gpio3_io24;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_38_gpio3_io24;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_38, PeripheralId::LPUART8, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_38_lpuart8_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_38_lpuart8_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_39, PeripheralId::GPIO3, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_39_gpio3_io25;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_39_gpio3_io25;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_39, PeripheralId::LPUART8, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_39_lpuart8_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_39_lpuart8_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_40, PeripheralId::GPIO3, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_40_gpio3_io26;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_40_gpio3_io26;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_40, PeripheralId::LPSPI1, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_40_lpspi1_pcs2;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_40_lpspi1_pcs2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi1_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_41, PeripheralId::GPIO3, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_41_gpio3_io27;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_41_gpio3_io27;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_EMC_41, PeripheralId::LPSPI1, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_emc_41_lpspi1_pcs3;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_41_lpspi1_pcs3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi1_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_00, PeripheralId::GPIO3, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_00_gpio3_io12;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_00_gpio3_io12;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_00, PeripheralId::LPSPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_00_lpspi1_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_00_lpspi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi1_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_01, PeripheralId::GPIO3, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_01_gpio3_io13;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_01_gpio3_io13;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_01, PeripheralId::LPSPI1, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_01_lpspi1_pcs0;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_01_lpspi1_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi1_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_02, PeripheralId::GPIO3, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_02_gpio3_io14;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_02_gpio3_io14;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_02, PeripheralId::LPSPI1, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_02_lpspi1_sdo;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_02_lpspi1_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_02, PeripheralId::LPUART8, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_02_lpuart8_cts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_02_lpuart8_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_03, PeripheralId::GPIO3, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_03_gpio3_io15;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_03_gpio3_io15;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_03, PeripheralId::LPSPI1, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_03_lpspi1_sdi;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_03_lpspi1_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_03, PeripheralId::LPUART8, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_03_lpuart8_rts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_03_lpuart8_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_04, PeripheralId::GPIO3, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_04_gpio3_io16;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_04_gpio3_io16;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_04, PeripheralId::LPUART8, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_04_lpuart8_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_04_lpuart8_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_05, PeripheralId::GPIO3, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_05_gpio3_io17;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_05_gpio3_io17;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B0_05, PeripheralId::LPUART8, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b0_05_lpuart8_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_05_lpuart8_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_00, PeripheralId::GPIO3, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_00_gpio3_io00;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_00_gpio3_io00;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_00, PeripheralId::LPUART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_00_lpuart4_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_00_lpuart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_01, PeripheralId::GPIO3, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_01_gpio3_io01;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_01_gpio3_io01;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_01, PeripheralId::LPUART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_01_lpuart4_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_01_lpuart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_02, PeripheralId::GPIO3, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_02_gpio3_io02;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_02_gpio3_io02;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_03, PeripheralId::GPIO3, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_03_gpio3_io03;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_03_gpio3_io03;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_04, PeripheralId::GPIO3, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_04_gpio3_io04;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_04_gpio3_io04;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_05, PeripheralId::GPIO3, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_05_gpio3_io05;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_05_gpio3_io05;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_06, PeripheralId::GPIO3, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_06_gpio3_io06;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_06_gpio3_io06;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_06, PeripheralId::LPSPI2, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_06_lpspi2_pcs0;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_06_lpspi2_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi2_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_06, PeripheralId::LPUART7, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_06_lpuart7_cts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_06_lpuart7_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart7_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_07, PeripheralId::GPIO3, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_07_gpio3_io07;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_07_gpio3_io07;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_07, PeripheralId::LPSPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_07_lpspi2_sck;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_07_lpspi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi2_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_07, PeripheralId::LPUART7, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_07_lpuart7_rts_b;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_07_lpuart7_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart7_bga196_tx_rx_cts_rts;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_08, PeripheralId::GPIO3, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_08_gpio3_io08;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_08_gpio3_io08;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_08, PeripheralId::LPSPI2, SignalId::signal_sd0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_08_lpspi2_sd0;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_08_lpspi2_sd0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_08, PeripheralId::LPUART7, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_08_lpuart7_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_08_lpuart7_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart7_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_09, PeripheralId::GPIO3, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_09_gpio3_io09;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_09_gpio3_io09;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_09, PeripheralId::LPSPI2, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_09_lpspi2_sdi;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_09_lpspi2_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_09, PeripheralId::LPUART7, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_09_lpuart7_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_09_lpuart7_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart7_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_10, PeripheralId::GPIO3, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_10_gpio3_io10;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_10_gpio3_io10;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_10, PeripheralId::LPSPI2, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_10_lpspi2_pcs2;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_10_lpspi2_pcs2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi2_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_10, PeripheralId::LPUART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_10_lpuart2_rx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_10_lpuart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart2_bga196_tx_rx;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_11, PeripheralId::GPIO3, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_11_gpio3_io11;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_11_gpio3_io11;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_11, PeripheralId::LPSPI2, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_11_lpspi2_pcs3;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_11_lpspi2_pcs3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpspi2_bga196_sck_cs;
};

template<>
struct ConnectorTraits<PinId::GPIO_SD_B1_11, PeripheralId::LPUART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectorId kConnectorId = ConnectorId::candidate_gpio_sd_b1_11_lpuart2_tx;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_11_lpuart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::group_lpuart2_bga196_tx_rx;
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_00,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_00_gpio1_io00,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io00> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io00. Valid pins: GPIO_AD_B0_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_01,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_01_gpio1_io01,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io01> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io01. Valid pins: GPIO_AD_B0_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_02_gpio1_io02,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io02> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io02. Valid pins: GPIO_AD_B0_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_03,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_03_gpio1_io03,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io03> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io03. Valid pins: GPIO_AD_B0_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_04,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_04_gpio1_io04,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io04> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io04. Valid pins: GPIO_AD_B0_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_05,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_05_gpio1_io05,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io05> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io05. Valid pins: GPIO_AD_B0_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_06,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_06_gpio1_io06,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io06> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io06. Valid pins: GPIO_AD_B0_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_07,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_07_gpio1_io07,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io07> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io07. Valid pins: GPIO_AD_B0_07. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_08,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_08_gpio1_io08,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io08> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io08. Valid pins: GPIO_AD_B0_08. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_09,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_09_gpio1_io09,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io09> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io09. Valid pins: GPIO_AD_B0_09. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_10,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_10_gpio1_io10,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io10> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io10. Valid pins: GPIO_AD_B0_10. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_11_gpio1_io11,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io11> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io11. Valid pins: GPIO_AD_B0_11. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_12,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_12_gpio1_io12,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io12> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io12. Valid pins: GPIO_AD_B0_12. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_13,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_13_gpio1_io13,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io13> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io13. Valid pins: GPIO_AD_B0_13. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_14,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_14_gpio1_io14,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io14> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io14. Valid pins: GPIO_AD_B0_14. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_15,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_15_gpio1_io15,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io15> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io15. Valid pins: GPIO_AD_B0_15. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_00,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_00_gpio1_io16,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io16> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io16. Valid pins: GPIO_AD_B1_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_01,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_01_gpio1_io17,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io17> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io17. Valid pins: GPIO_AD_B1_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_02_gpio1_io18,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io18> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io18. Valid pins: GPIO_AD_B1_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_03,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_03_gpio1_io19,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io19> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io19. Valid pins: GPIO_AD_B1_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_04,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_04_gpio1_io20,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io20> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io20. Valid pins: GPIO_AD_B1_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_05,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_05_gpio1_io21,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io21> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io21. Valid pins: GPIO_AD_B1_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_06,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_06_gpio1_io22,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io22> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io22. Valid pins: GPIO_AD_B1_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_07,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_07_gpio1_io23,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io23> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io23. Valid pins: GPIO_AD_B1_07. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_08,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_08_gpio1_io24,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io24> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io24. Valid pins: GPIO_AD_B1_08. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_09,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_09_gpio1_io25,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io25> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io25. Valid pins: GPIO_AD_B1_09. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_10,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_10_gpio1_io26,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io26> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io26. Valid pins: GPIO_AD_B1_10. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_11_gpio1_io27,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io27> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io27. Valid pins: GPIO_AD_B1_11. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io28> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_12,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_12_gpio1_io28,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io28> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io28. Valid pins: GPIO_AD_B1_12. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io29> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_13,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_13_gpio1_io29,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io29> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io29. Valid pins: GPIO_AD_B1_13. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io30> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_14,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_14_gpio1_io30,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io30> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io30. Valid pins: GPIO_AD_B1_14. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO1, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_15,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_15_gpio1_io31,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO1, SignalId::signal_io31> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO1 io31. Valid pins: GPIO_AD_B1_15. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_00,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_00_gpio2_io00,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io00> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io00. Valid pins: GPIO_B0_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_01,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_01_gpio2_io01,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io01> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io01. Valid pins: GPIO_B0_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_02_gpio2_io02,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io02> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io02. Valid pins: GPIO_B0_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_03,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_03_gpio2_io03,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io03> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io03. Valid pins: GPIO_B0_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_04,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_04_gpio2_io04,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io04> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io04. Valid pins: GPIO_B0_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_05,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_05_gpio2_io05,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io05> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io05. Valid pins: GPIO_B0_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_06,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_06_gpio2_io06,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io06> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io06. Valid pins: GPIO_B0_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_07,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_07_gpio2_io07,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io07> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io07. Valid pins: GPIO_B0_07. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_08,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_08_gpio2_io08,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io08> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io08. Valid pins: GPIO_B0_08. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_09,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_09_gpio2_io09,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io09> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io09. Valid pins: GPIO_B0_09. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_10,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_10_gpio2_io10,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io10> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io10. Valid pins: GPIO_B0_10. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_11_gpio2_io11,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io11> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io11. Valid pins: GPIO_B0_11. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_12,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_12_gpio2_io12,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io12> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io12. Valid pins: GPIO_B0_12. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_13,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_13_gpio2_io13,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io13> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io13. Valid pins: GPIO_B0_13. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_14,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_14_gpio2_io14,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io14> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io14. Valid pins: GPIO_B0_14. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B0_15,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b0_15_gpio2_io15,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io15> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io15. Valid pins: GPIO_B0_15. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_00,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_00_gpio2_io16,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io16> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io16. Valid pins: GPIO_B1_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_01,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_01_gpio2_io17,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io17> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io17. Valid pins: GPIO_B1_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_02_gpio2_io18,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io18> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io18. Valid pins: GPIO_B1_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_03,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_03_gpio2_io19,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io19> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io19. Valid pins: GPIO_B1_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_04,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_04_gpio2_io20,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io20> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io20. Valid pins: GPIO_B1_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_05,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_05_gpio2_io21,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io21> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io21. Valid pins: GPIO_B1_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_06,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_06_gpio2_io22,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io22> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io22. Valid pins: GPIO_B1_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_07,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_07_gpio2_io23,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io23> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io23. Valid pins: GPIO_B1_07. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_08,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_08_gpio2_io24,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io24> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io24. Valid pins: GPIO_B1_08. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_09,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_09_gpio2_io25,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io25> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io25. Valid pins: GPIO_B1_09. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_10,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_10_gpio2_io26,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io26> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io26. Valid pins: GPIO_B1_10. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_11_gpio2_io27,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io27> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io27. Valid pins: GPIO_B1_11. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io28> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_12,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_12_gpio2_io28,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io28> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io28. Valid pins: GPIO_B1_12. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io29> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_13,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_13_gpio2_io29,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io29> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io29. Valid pins: GPIO_B1_13. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io30> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_14,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_14_gpio2_io30,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io30> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io30. Valid pins: GPIO_B1_14. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO2, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_15,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_15_gpio2_io31,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO2, SignalId::signal_io31> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO2 io31. Valid pins: GPIO_B1_15. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_00,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_00_gpio3_io00,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io00> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io00. Valid pins: GPIO_SD_B1_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_01,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_01_gpio3_io01,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io01> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io01. Valid pins: GPIO_SD_B1_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_02_gpio3_io02,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io02> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io02. Valid pins: GPIO_SD_B1_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_03,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_03_gpio3_io03,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io03> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io03. Valid pins: GPIO_SD_B1_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_04,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_04_gpio3_io04,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io04> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io04. Valid pins: GPIO_SD_B1_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_05,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_05_gpio3_io05,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io05> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io05. Valid pins: GPIO_SD_B1_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_06,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_06_gpio3_io06,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io06> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io06. Valid pins: GPIO_SD_B1_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_07,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_07_gpio3_io07,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io07> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io07. Valid pins: GPIO_SD_B1_07. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_08,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_08_gpio3_io08,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io08> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io08. Valid pins: GPIO_SD_B1_08. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_09,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_09_gpio3_io09,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io09> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io09. Valid pins: GPIO_SD_B1_09. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_10,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_10_gpio3_io10,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io10> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io10. Valid pins: GPIO_SD_B1_10. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_11_gpio3_io11,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io11> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io11. Valid pins: GPIO_SD_B1_11. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B0_00,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b0_00_gpio3_io12,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io12> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io12. Valid pins: GPIO_SD_B0_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B0_01,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b0_01_gpio3_io13,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io13> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io13. Valid pins: GPIO_SD_B0_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B0_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b0_02_gpio3_io14,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io14> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io14. Valid pins: GPIO_SD_B0_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B0_03,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b0_03_gpio3_io15,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io15> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io15. Valid pins: GPIO_SD_B0_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B0_04,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b0_04_gpio3_io16,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io16> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io16. Valid pins: GPIO_SD_B0_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B0_05,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b0_05_gpio3_io17,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io17> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io17. Valid pins: GPIO_SD_B0_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_32,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_32_gpio3_io18,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io18> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io18. Valid pins: GPIO_EMC_32. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_33,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_33_gpio3_io19,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io19> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io19. Valid pins: GPIO_EMC_33. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_34,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_34_gpio3_io20,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io20> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io20. Valid pins: GPIO_EMC_34. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_35,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_35_gpio3_io21,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io21> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io21. Valid pins: GPIO_EMC_35. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_36,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_36_gpio3_io22,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io22> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io22. Valid pins: GPIO_EMC_36. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_37,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_37_gpio3_io23,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io23> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io23. Valid pins: GPIO_EMC_37. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_38,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_38_gpio3_io24,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io24> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io24. Valid pins: GPIO_EMC_38. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_39,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_39_gpio3_io25,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io25> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io25. Valid pins: GPIO_EMC_39. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_40,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_40_gpio3_io26,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io26> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io26. Valid pins: GPIO_EMC_40. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO3, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_41,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_41_gpio3_io27,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO3, SignalId::signal_io27> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO3 io27. Valid pins: GPIO_EMC_41. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_00,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_00_gpio4_io00,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io00> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io00. Valid pins: GPIO_EMC_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_01,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_01_gpio4_io01,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io01> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io01. Valid pins: GPIO_EMC_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_02_gpio4_io02,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io02> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io02. Valid pins: GPIO_EMC_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_03,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_03_gpio4_io03,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io03> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io03. Valid pins: GPIO_EMC_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_04,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_04_gpio4_io04,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io04> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io04. Valid pins: GPIO_EMC_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_05,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_05_gpio4_io05,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io05> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io05. Valid pins: GPIO_EMC_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_06,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_06_gpio4_io06,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io06> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io06. Valid pins: GPIO_EMC_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_07,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_07_gpio4_io07,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io07> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io07. Valid pins: GPIO_EMC_07. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_08,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_08_gpio4_io08,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io08> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io08. Valid pins: GPIO_EMC_08. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_09,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_09_gpio4_io09,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io09> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io09. Valid pins: GPIO_EMC_09. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_10,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_10_gpio4_io10,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io10> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io10. Valid pins: GPIO_EMC_10. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_11_gpio4_io11,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io11> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io11. Valid pins: GPIO_EMC_11. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_12,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_12_gpio4_io12,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io12> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io12. Valid pins: GPIO_EMC_12. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_13,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_13_gpio4_io13,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io13> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io13. Valid pins: GPIO_EMC_13. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_14,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_14_gpio4_io14,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io14> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io14. Valid pins: GPIO_EMC_14. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_15,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_15_gpio4_io15,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io15> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io15. Valid pins: GPIO_EMC_15. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_16,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_16_gpio4_io16,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io16> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io16. Valid pins: GPIO_EMC_16. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_17,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_17_gpio4_io17,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io17> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io17. Valid pins: GPIO_EMC_17. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_18,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_18_gpio4_io18,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io18> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io18. Valid pins: GPIO_EMC_18. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_19,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_19_gpio4_io19,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io19> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io19. Valid pins: GPIO_EMC_19. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_20,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_20_gpio4_io20,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io20> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io20. Valid pins: GPIO_EMC_20. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_21,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_21_gpio4_io21,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io21> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io21. Valid pins: GPIO_EMC_21. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_22,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_22_gpio4_io22,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io22> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io22. Valid pins: GPIO_EMC_22. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_23,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_23_gpio4_io23,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io23> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io23. Valid pins: GPIO_EMC_23. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_24,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_24_gpio4_io24,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io24> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io24. Valid pins: GPIO_EMC_24. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_25,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_25_gpio4_io25,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io25> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io25. Valid pins: GPIO_EMC_25. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_26,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_26_gpio4_io26,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io26> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io26. Valid pins: GPIO_EMC_26. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_27,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_27_gpio4_io27,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io27> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io27. Valid pins: GPIO_EMC_27. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io28> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_28,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_28_gpio4_io28,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io28> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io28. Valid pins: GPIO_EMC_28. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io29> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_29,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_29_gpio4_io29,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io29> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io29. Valid pins: GPIO_EMC_29. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io30> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_30,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_30_gpio4_io30,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io30> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io30. Valid pins: GPIO_EMC_30. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::GPIO4, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_31,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_31_gpio4_io31,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::GPIO4, SignalId::signal_io31> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for GPIO4 io31. Valid pins: GPIO_EMC_31. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI1, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_EMC_30,
    PinId::GPIO_SD_B0_01,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_emc_30_lpspi1_pcs0,
    ConnectorId::candidate_gpio_sd_b0_01_lpspi1_pcs0,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI1, SignalId::signal_pcs0> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI1 pcs0. Valid pins: GPIO_EMC_30, GPIO_SD_B0_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI1, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_31,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_31_lpspi1_pcs1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI1, SignalId::signal_pcs1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI1 pcs1. Valid pins: GPIO_EMC_31. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI1, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_40,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_40_lpspi1_pcs2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI1, SignalId::signal_pcs2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI1 pcs2. Valid pins: GPIO_EMC_40. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI1, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_41,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_41_lpspi1_pcs3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI1, SignalId::signal_pcs3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI1 pcs3. Valid pins: GPIO_EMC_41. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_EMC_27,
    PinId::GPIO_SD_B0_00,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_emc_27_lpspi1_sck,
    ConnectorId::candidate_gpio_sd_b0_00_lpspi1_sck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI1 sck. Valid pins: GPIO_EMC_27, GPIO_SD_B0_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI1, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_EMC_29,
    PinId::GPIO_SD_B0_03,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_emc_29_lpspi1_sdi,
    ConnectorId::candidate_gpio_sd_b0_03_lpspi1_sdi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI1, SignalId::signal_sdi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI1 sdi. Valid pins: GPIO_EMC_29, GPIO_SD_B0_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI1, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_EMC_28,
    PinId::GPIO_SD_B0_02,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_emc_28_lpspi1_sdo,
    ConnectorId::candidate_gpio_sd_b0_02_lpspi1_sdo,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI1, SignalId::signal_sdo> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI1 sdo. Valid pins: GPIO_EMC_28, GPIO_SD_B0_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI2, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_EMC_01,
    PinId::GPIO_SD_B1_06,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_emc_01_lpspi2_pcs0,
    ConnectorId::candidate_gpio_sd_b1_06_lpspi2_pcs0,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI2, SignalId::signal_pcs0> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI2 pcs0. Valid pins: GPIO_EMC_01, GPIO_SD_B1_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI2, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_14,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_14_lpspi2_pcs1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI2, SignalId::signal_pcs1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI2 pcs1. Valid pins: GPIO_EMC_14. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI2, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_10,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_10_lpspi2_pcs2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI2, SignalId::signal_pcs2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI2 pcs2. Valid pins: GPIO_SD_B1_10. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI2, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_11_lpspi2_pcs3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI2, SignalId::signal_pcs3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI2 pcs3. Valid pins: GPIO_SD_B1_11. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_EMC_00,
    PinId::GPIO_SD_B1_07,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_emc_00_lpspi2_sck,
    ConnectorId::candidate_gpio_sd_b1_07_lpspi2_sck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI2 sck. Valid pins: GPIO_EMC_00, GPIO_SD_B1_07. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI2, SignalId::signal_sd0> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_08,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_08_lpspi2_sd0,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI2, SignalId::signal_sd0> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI2 sd0. Valid pins: GPIO_SD_B1_08. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI2, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_EMC_03,
    PinId::GPIO_SD_B1_09,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_emc_03_lpspi2_sdi,
    ConnectorId::candidate_gpio_sd_b1_09_lpspi2_sdi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI2, SignalId::signal_sdi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI2 sdi. Valid pins: GPIO_EMC_03, GPIO_SD_B1_09. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI2, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_02_lpspi2_sdo,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI2, SignalId::signal_sdo> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI2 sdo. Valid pins: GPIO_EMC_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI3, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B0_03,
    PinId::GPIO_AD_B1_12,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_03_lpspi3_pcs0,
    ConnectorId::candidate_gpio_ad_b1_12_lpspi3_pcs0,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI3, SignalId::signal_pcs0> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI3 pcs0. Valid pins: GPIO_AD_B0_03, GPIO_AD_B1_12. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI3, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_04,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_04_lpspi3_pcs1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI3, SignalId::signal_pcs1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI3 pcs1. Valid pins: GPIO_AD_B0_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI3, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_05,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_05_lpspi3_pcs2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI3, SignalId::signal_pcs2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI3 pcs2. Valid pins: GPIO_AD_B0_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI3, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_06,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_06_lpspi3_pcs3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI3, SignalId::signal_pcs3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI3 pcs3. Valid pins: GPIO_AD_B0_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI3, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B0_00,
    PinId::GPIO_AD_B1_15,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_00_lpspi3_sck,
    ConnectorId::candidate_gpio_ad_b1_15_lpspi3_sck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI3, SignalId::signal_sck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI3 sck. Valid pins: GPIO_AD_B0_00, GPIO_AD_B1_15. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI3, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B0_02,
    PinId::GPIO_AD_B1_13,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_02_lpspi3_sdi,
    ConnectorId::candidate_gpio_ad_b1_13_lpspi3_sdi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI3, SignalId::signal_sdi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI3 sdi. Valid pins: GPIO_AD_B0_02, GPIO_AD_B1_13. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI3, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B0_01,
    PinId::GPIO_AD_B1_14,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_01_lpspi3_sdo,
    ConnectorId::candidate_gpio_ad_b1_14_lpspi3_sdo,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI3, SignalId::signal_sdo> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI3 sdo. Valid pins: GPIO_AD_B0_01, GPIO_AD_B1_14. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI4, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_B0_00,
    PinId::GPIO_B1_04,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_b0_00_lpspi4_pcs0,
    ConnectorId::candidate_gpio_b1_04_lpspi4_pcs0,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI4, SignalId::signal_pcs0> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI4 pcs0. Valid pins: GPIO_B0_00, GPIO_B1_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI4, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_03,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_03_lpspi4_pcs1,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI4, SignalId::signal_pcs1> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI4 pcs1. Valid pins: GPIO_B1_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI4, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_02_lpspi4_pcs2,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI4, SignalId::signal_pcs2> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI4 pcs2. Valid pins: GPIO_B1_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI4, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_B1_11,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_b1_11_lpspi4_pcs3,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI4, SignalId::signal_pcs3> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI4 pcs3. Valid pins: GPIO_B1_11. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI4, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_B0_03,
    PinId::GPIO_B1_07,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_b0_03_lpspi4_sck,
    ConnectorId::candidate_gpio_b1_07_lpspi4_sck,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI4, SignalId::signal_sck> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI4 sck. Valid pins: GPIO_B0_03, GPIO_B1_07. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI4, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_B0_01,
    PinId::GPIO_B1_05,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_b0_01_lpspi4_sdi,
    ConnectorId::candidate_gpio_b1_05_lpspi4_sdi,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI4, SignalId::signal_sdi> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI4 sdi. Valid pins: GPIO_B0_01, GPIO_B1_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPSPI4, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_B0_02,
    PinId::GPIO_B1_06,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_b0_02_lpspi4_sdo,
    ConnectorId::candidate_gpio_b1_06_lpspi4_sdo,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPSPI4, SignalId::signal_sdo> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPSPI4 sdo. Valid pins: GPIO_B0_02, GPIO_B1_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART1, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_14,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_14_lpuart1_cts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART1, SignalId::signal_cts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART1 cts_b. Valid pins: GPIO_AD_B0_14. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART1, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_15,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_15_lpuart1_rts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART1, SignalId::signal_rts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART1 rts_b. Valid pins: GPIO_AD_B0_15. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_13,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_13_lpuart1_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART1 rx. Valid pins: GPIO_AD_B0_13. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B0_12,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_12_lpuart1_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART1 tx. Valid pins: GPIO_AD_B0_12. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART2, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_00,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_00_lpuart2_cts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART2, SignalId::signal_cts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART2 cts_b. Valid pins: GPIO_AD_B1_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART2, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_AD_B1_01,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_01_lpuart2_rts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART2, SignalId::signal_rts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART2 rts_b. Valid pins: GPIO_AD_B1_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B1_03,
    PinId::GPIO_SD_B1_10,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_03_lpuart2_rx,
    ConnectorId::candidate_gpio_sd_b1_10_lpuart2_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART2, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART2 rx. Valid pins: GPIO_AD_B1_03, GPIO_SD_B1_10. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B1_02,
    PinId::GPIO_SD_B1_11,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_02_lpuart2_tx,
    ConnectorId::candidate_gpio_sd_b1_11_lpuart2_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART2, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART2 tx. Valid pins: GPIO_AD_B1_02, GPIO_SD_B1_11. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART3, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B1_04,
    PinId::GPIO_EMC_15,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_04_lpuart3_cts_b,
    ConnectorId::candidate_gpio_emc_15_lpuart3_cts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART3, SignalId::signal_cts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART3 cts_b. Valid pins: GPIO_AD_B1_04, GPIO_EMC_15. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART3, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B1_05,
    PinId::GPIO_EMC_16,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_05_lpuart3_rts_b,
    ConnectorId::candidate_gpio_emc_16_lpuart3_rts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART3, SignalId::signal_rts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART3 rts_b. Valid pins: GPIO_AD_B1_05, GPIO_EMC_16. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::GPIO_AD_B1_07,
    PinId::GPIO_B0_09,
    PinId::GPIO_EMC_14,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_07_lpuart3_rx,
    ConnectorId::candidate_gpio_b0_09_lpuart3_rx,
    ConnectorId::candidate_gpio_emc_14_lpuart3_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART3, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART3 rx. Valid pins: GPIO_AD_B1_07, GPIO_B0_09, GPIO_EMC_14. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::GPIO_AD_B1_06,
    PinId::GPIO_B0_08,
    PinId::GPIO_EMC_13,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_06_lpuart3_tx,
    ConnectorId::candidate_gpio_b0_08_lpuart3_tx,
    ConnectorId::candidate_gpio_emc_13_lpuart3_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART3, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART3 tx. Valid pins: GPIO_AD_B1_06, GPIO_B0_08, GPIO_EMC_13. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART4, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_17,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_17_lpuart4_cts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART4, SignalId::signal_cts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART4 cts_b. Valid pins: GPIO_EMC_17. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART4, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_18,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_18_lpuart4_rts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART4, SignalId::signal_rts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART4 rts_b. Valid pins: GPIO_EMC_18. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::GPIO_B1_01,
    PinId::GPIO_EMC_20,
    PinId::GPIO_SD_B1_01,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_gpio_b1_01_lpuart4_rx,
    ConnectorId::candidate_gpio_emc_20_lpuart4_rx,
    ConnectorId::candidate_gpio_sd_b1_01_lpuart4_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART4, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART4 rx. Valid pins: GPIO_B1_01, GPIO_EMC_20, GPIO_SD_B1_01. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::GPIO_B1_00,
    PinId::GPIO_EMC_19,
    PinId::GPIO_SD_B1_00,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_gpio_b1_00_lpuart4_tx,
    ConnectorId::candidate_gpio_emc_19_lpuart4_tx,
    ConnectorId::candidate_gpio_sd_b1_00_lpuart4_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART4, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART4 tx. Valid pins: GPIO_B1_00, GPIO_EMC_19, GPIO_SD_B1_00. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART5, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_28,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_28_lpuart5_cts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART5, SignalId::signal_cts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART5 cts_b. Valid pins: GPIO_EMC_28. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART5, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_27,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_27_lpuart5_rts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART5, SignalId::signal_rts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART5 rts_b. Valid pins: GPIO_EMC_27. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART5, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_B1_13,
    PinId::GPIO_EMC_24,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_b1_13_lpuart5_rx,
    ConnectorId::candidate_gpio_emc_24_lpuart5_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART5, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART5 rx. Valid pins: GPIO_B1_13, GPIO_EMC_24. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART5, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_B1_12,
    PinId::GPIO_EMC_23,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_b1_12_lpuart5_tx,
    ConnectorId::candidate_gpio_emc_23_lpuart5_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART5, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART5 tx. Valid pins: GPIO_B1_12, GPIO_EMC_23. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART6, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_30,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_30_lpuart6_cts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART6, SignalId::signal_cts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART6 cts_b. Valid pins: GPIO_EMC_30. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART6, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_EMC_29,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_emc_29_lpuart6_rts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART6, SignalId::signal_rts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART6 rts_b. Valid pins: GPIO_EMC_29. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART6, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B0_03,
    PinId::GPIO_EMC_26,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_03_lpuart6_rx,
    ConnectorId::candidate_gpio_emc_26_lpuart6_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART6, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART6 rx. Valid pins: GPIO_AD_B0_03, GPIO_EMC_26. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART6, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_AD_B0_02,
    PinId::GPIO_EMC_25,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b0_02_lpuart6_tx,
    ConnectorId::candidate_gpio_emc_25_lpuart6_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART6, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART6 tx. Valid pins: GPIO_AD_B0_02, GPIO_EMC_25. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART7, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_06,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_06_lpuart7_cts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART7, SignalId::signal_cts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART7 cts_b. Valid pins: GPIO_SD_B1_06. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART7, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B1_07,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b1_07_lpuart7_rts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART7, SignalId::signal_rts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART7 rts_b. Valid pins: GPIO_SD_B1_07. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART7, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_EMC_32,
    PinId::GPIO_SD_B1_09,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_emc_32_lpuart7_rx,
    ConnectorId::candidate_gpio_sd_b1_09_lpuart7_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART7, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART7 rx. Valid pins: GPIO_EMC_32, GPIO_SD_B1_09. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART7, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 2> kPins = {{
    PinId::GPIO_EMC_31,
    PinId::GPIO_SD_B1_08,
  }};
  static constexpr std::array<ConnectorId, 2> kConnectors = {{
    ConnectorId::candidate_gpio_emc_31_lpuart7_tx,
    ConnectorId::candidate_gpio_sd_b1_08_lpuart7_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART7, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART7 tx. Valid pins: GPIO_EMC_31, GPIO_SD_B1_08. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART8, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B0_02,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b0_02_lpuart8_cts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART8, SignalId::signal_cts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART8 cts_b. Valid pins: GPIO_SD_B0_02. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART8, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 1> kPins = {{
    PinId::GPIO_SD_B0_03,
  }};
  static constexpr std::array<ConnectorId, 1> kConnectors = {{
    ConnectorId::candidate_gpio_sd_b0_03_lpuart8_rts_b,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART8, SignalId::signal_rts_b> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART8 rts_b. Valid pins: GPIO_SD_B0_03. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART8, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::GPIO_AD_B1_11,
    PinId::GPIO_EMC_39,
    PinId::GPIO_SD_B0_05,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_11_lpuart8_rx,
    ConnectorId::candidate_gpio_emc_39_lpuart8_rx,
    ConnectorId::candidate_gpio_sd_b0_05_lpuart8_rx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART8, SignalId::signal_rx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART8 rx. Valid pins: GPIO_AD_B1_11, GPIO_EMC_39, GPIO_SD_B0_05. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

template<>
struct ConnectorSignalTraits<PeripheralId::LPUART8, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr std::array<PinId, 3> kPins = {{
    PinId::GPIO_AD_B1_10,
    PinId::GPIO_EMC_38,
    PinId::GPIO_SD_B0_04,
  }};
  static constexpr std::array<ConnectorId, 3> kConnectors = {{
    ConnectorId::candidate_gpio_ad_b1_10_lpuart8_tx,
    ConnectorId::candidate_gpio_emc_38_lpuart8_tx,
    ConnectorId::candidate_gpio_sd_b0_04_lpuart8_tx,
  }};
};

template<PinId Pin>
struct ConnectorTraits<Pin, PeripheralId::LPUART8, SignalId::signal_tx> {
  static constexpr bool kPresent = false;
  static constexpr ConnectorId kConnectorId = ConnectorId::none;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr ConnectionGroupId kConnectionGroupId = ConnectionGroupId::none;
  static_assert(detail::kInvalidConnector<Pin>, "Invalid connector for LPUART8 tx. Valid pins: GPIO_AD_B1_10, GPIO_EMC_38, GPIO_SD_B0_04. Provenance: nxp-mcux-sdk; patches=nxp-imxrt1060-family-bootstrap-v1, nxp-imxrt1060-mimxrt1064-bootstrap.");
};

inline constexpr std::array<ConnectorDescriptor, 222> kConnectors = {{
  {ConnectorId::candidate_gpio_ad_b0_00_gpio1_io00, PinId::GPIO_AD_B0_00, PeripheralId::GPIO1, SignalId::signal_io00, RouteId::candidate_gpio_ad_b0_00_gpio1_io00, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_00_lpspi3_sck, PinId::GPIO_AD_B0_00, PeripheralId::LPSPI3, SignalId::signal_sck, RouteId::candidate_gpio_ad_b0_00_lpspi3_sck, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi3_bga196_sck_cs},
  {ConnectorId::candidate_gpio_ad_b0_01_gpio1_io01, PinId::GPIO_AD_B0_01, PeripheralId::GPIO1, SignalId::signal_io01, RouteId::candidate_gpio_ad_b0_01_gpio1_io01, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_01_lpspi3_sdo, PinId::GPIO_AD_B0_01, PeripheralId::LPSPI3, SignalId::signal_sdo, RouteId::candidate_gpio_ad_b0_01_lpspi3_sdo, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_ad_b0_02_gpio1_io02, PinId::GPIO_AD_B0_02, PeripheralId::GPIO1, SignalId::signal_io02, RouteId::candidate_gpio_ad_b0_02_gpio1_io02, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_02_lpspi3_sdi, PinId::GPIO_AD_B0_02, PeripheralId::LPSPI3, SignalId::signal_sdi, RouteId::candidate_gpio_ad_b0_02_lpspi3_sdi, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_ad_b0_02_lpuart6_tx, PinId::GPIO_AD_B0_02, PeripheralId::LPUART6, SignalId::signal_tx, RouteId::candidate_gpio_ad_b0_02_lpuart6_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart6_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b0_03_gpio1_io03, PinId::GPIO_AD_B0_03, PeripheralId::GPIO1, SignalId::signal_io03, RouteId::candidate_gpio_ad_b0_03_gpio1_io03, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_03_lpspi3_pcs0, PinId::GPIO_AD_B0_03, PeripheralId::LPSPI3, SignalId::signal_pcs0, RouteId::candidate_gpio_ad_b0_03_lpspi3_pcs0, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi3_bga196_sck_cs},
  {ConnectorId::candidate_gpio_ad_b0_03_lpuart6_rx, PinId::GPIO_AD_B0_03, PeripheralId::LPUART6, SignalId::signal_rx, RouteId::candidate_gpio_ad_b0_03_lpuart6_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart6_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b0_04_gpio1_io04, PinId::GPIO_AD_B0_04, PeripheralId::GPIO1, SignalId::signal_io04, RouteId::candidate_gpio_ad_b0_04_gpio1_io04, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_04_lpspi3_pcs1, PinId::GPIO_AD_B0_04, PeripheralId::LPSPI3, SignalId::signal_pcs1, RouteId::candidate_gpio_ad_b0_04_lpspi3_pcs1, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi3_bga196_sck_cs},
  {ConnectorId::candidate_gpio_ad_b0_05_gpio1_io05, PinId::GPIO_AD_B0_05, PeripheralId::GPIO1, SignalId::signal_io05, RouteId::candidate_gpio_ad_b0_05_gpio1_io05, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_05_lpspi3_pcs2, PinId::GPIO_AD_B0_05, PeripheralId::LPSPI3, SignalId::signal_pcs2, RouteId::candidate_gpio_ad_b0_05_lpspi3_pcs2, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi3_bga196_sck_cs},
  {ConnectorId::candidate_gpio_ad_b0_06_gpio1_io06, PinId::GPIO_AD_B0_06, PeripheralId::GPIO1, SignalId::signal_io06, RouteId::candidate_gpio_ad_b0_06_gpio1_io06, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_06_lpspi3_pcs3, PinId::GPIO_AD_B0_06, PeripheralId::LPSPI3, SignalId::signal_pcs3, RouteId::candidate_gpio_ad_b0_06_lpspi3_pcs3, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi3_bga196_sck_cs},
  {ConnectorId::candidate_gpio_ad_b0_07_gpio1_io07, PinId::GPIO_AD_B0_07, PeripheralId::GPIO1, SignalId::signal_io07, RouteId::candidate_gpio_ad_b0_07_gpio1_io07, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_08_gpio1_io08, PinId::GPIO_AD_B0_08, PeripheralId::GPIO1, SignalId::signal_io08, RouteId::candidate_gpio_ad_b0_08_gpio1_io08, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_09_gpio1_io09, PinId::GPIO_AD_B0_09, PeripheralId::GPIO1, SignalId::signal_io09, RouteId::candidate_gpio_ad_b0_09_gpio1_io09, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_10_gpio1_io10, PinId::GPIO_AD_B0_10, PeripheralId::GPIO1, SignalId::signal_io10, RouteId::candidate_gpio_ad_b0_10_gpio1_io10, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_11_gpio1_io11, PinId::GPIO_AD_B0_11, PeripheralId::GPIO1, SignalId::signal_io11, RouteId::candidate_gpio_ad_b0_11_gpio1_io11, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_12_gpio1_io12, PinId::GPIO_AD_B0_12, PeripheralId::GPIO1, SignalId::signal_io12, RouteId::candidate_gpio_ad_b0_12_gpio1_io12, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_12_lpuart1_tx, PinId::GPIO_AD_B0_12, PeripheralId::LPUART1, SignalId::signal_tx, RouteId::candidate_gpio_ad_b0_12_lpuart1_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart1_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b0_13_gpio1_io13, PinId::GPIO_AD_B0_13, PeripheralId::GPIO1, SignalId::signal_io13, RouteId::candidate_gpio_ad_b0_13_gpio1_io13, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_13_lpuart1_rx, PinId::GPIO_AD_B0_13, PeripheralId::LPUART1, SignalId::signal_rx, RouteId::candidate_gpio_ad_b0_13_lpuart1_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart1_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b0_14_gpio1_io14, PinId::GPIO_AD_B0_14, PeripheralId::GPIO1, SignalId::signal_io14, RouteId::candidate_gpio_ad_b0_14_gpio1_io14, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_14_lpuart1_cts_b, PinId::GPIO_AD_B0_14, PeripheralId::LPUART1, SignalId::signal_cts_b, RouteId::candidate_gpio_ad_b0_14_lpuart1_cts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart1_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_ad_b0_15_gpio1_io15, PinId::GPIO_AD_B0_15, PeripheralId::GPIO1, SignalId::signal_io15, RouteId::candidate_gpio_ad_b0_15_gpio1_io15, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b0_15_lpuart1_rts_b, PinId::GPIO_AD_B0_15, PeripheralId::LPUART1, SignalId::signal_rts_b, RouteId::candidate_gpio_ad_b0_15_lpuart1_rts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart1_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_ad_b1_00_gpio1_io16, PinId::GPIO_AD_B1_00, PeripheralId::GPIO1, SignalId::signal_io16, RouteId::candidate_gpio_ad_b1_00_gpio1_io16, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_00_lpuart2_cts_b, PinId::GPIO_AD_B1_00, PeripheralId::LPUART2, SignalId::signal_cts_b, RouteId::candidate_gpio_ad_b1_00_lpuart2_cts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart2_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_ad_b1_01_gpio1_io17, PinId::GPIO_AD_B1_01, PeripheralId::GPIO1, SignalId::signal_io17, RouteId::candidate_gpio_ad_b1_01_gpio1_io17, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_01_lpuart2_rts_b, PinId::GPIO_AD_B1_01, PeripheralId::LPUART2, SignalId::signal_rts_b, RouteId::candidate_gpio_ad_b1_01_lpuart2_rts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart2_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_ad_b1_02_gpio1_io18, PinId::GPIO_AD_B1_02, PeripheralId::GPIO1, SignalId::signal_io18, RouteId::candidate_gpio_ad_b1_02_gpio1_io18, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_02_lpuart2_tx, PinId::GPIO_AD_B1_02, PeripheralId::LPUART2, SignalId::signal_tx, RouteId::candidate_gpio_ad_b1_02_lpuart2_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart2_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b1_03_gpio1_io19, PinId::GPIO_AD_B1_03, PeripheralId::GPIO1, SignalId::signal_io19, RouteId::candidate_gpio_ad_b1_03_gpio1_io19, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_03_lpuart2_rx, PinId::GPIO_AD_B1_03, PeripheralId::LPUART2, SignalId::signal_rx, RouteId::candidate_gpio_ad_b1_03_lpuart2_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart2_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b1_04_gpio1_io20, PinId::GPIO_AD_B1_04, PeripheralId::GPIO1, SignalId::signal_io20, RouteId::candidate_gpio_ad_b1_04_gpio1_io20, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_04_lpuart3_cts_b, PinId::GPIO_AD_B1_04, PeripheralId::LPUART3, SignalId::signal_cts_b, RouteId::candidate_gpio_ad_b1_04_lpuart3_cts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_ad_b1_05_gpio1_io21, PinId::GPIO_AD_B1_05, PeripheralId::GPIO1, SignalId::signal_io21, RouteId::candidate_gpio_ad_b1_05_gpio1_io21, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_05_lpuart3_rts_b, PinId::GPIO_AD_B1_05, PeripheralId::LPUART3, SignalId::signal_rts_b, RouteId::candidate_gpio_ad_b1_05_lpuart3_rts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_ad_b1_06_gpio1_io22, PinId::GPIO_AD_B1_06, PeripheralId::GPIO1, SignalId::signal_io22, RouteId::candidate_gpio_ad_b1_06_gpio1_io22, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_06_lpuart3_tx, PinId::GPIO_AD_B1_06, PeripheralId::LPUART3, SignalId::signal_tx, RouteId::candidate_gpio_ad_b1_06_lpuart3_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b1_07_gpio1_io23, PinId::GPIO_AD_B1_07, PeripheralId::GPIO1, SignalId::signal_io23, RouteId::candidate_gpio_ad_b1_07_gpio1_io23, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_07_lpuart3_rx, PinId::GPIO_AD_B1_07, PeripheralId::LPUART3, SignalId::signal_rx, RouteId::candidate_gpio_ad_b1_07_lpuart3_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b1_08_gpio1_io24, PinId::GPIO_AD_B1_08, PeripheralId::GPIO1, SignalId::signal_io24, RouteId::candidate_gpio_ad_b1_08_gpio1_io24, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_09_gpio1_io25, PinId::GPIO_AD_B1_09, PeripheralId::GPIO1, SignalId::signal_io25, RouteId::candidate_gpio_ad_b1_09_gpio1_io25, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_10_gpio1_io26, PinId::GPIO_AD_B1_10, PeripheralId::GPIO1, SignalId::signal_io26, RouteId::candidate_gpio_ad_b1_10_gpio1_io26, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_10_lpuart8_tx, PinId::GPIO_AD_B1_10, PeripheralId::LPUART8, SignalId::signal_tx, RouteId::candidate_gpio_ad_b1_10_lpuart8_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart8_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b1_11_gpio1_io27, PinId::GPIO_AD_B1_11, PeripheralId::GPIO1, SignalId::signal_io27, RouteId::candidate_gpio_ad_b1_11_gpio1_io27, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_11_lpuart8_rx, PinId::GPIO_AD_B1_11, PeripheralId::LPUART8, SignalId::signal_rx, RouteId::candidate_gpio_ad_b1_11_lpuart8_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart8_bga196_tx_rx},
  {ConnectorId::candidate_gpio_ad_b1_12_gpio1_io28, PinId::GPIO_AD_B1_12, PeripheralId::GPIO1, SignalId::signal_io28, RouteId::candidate_gpio_ad_b1_12_gpio1_io28, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_12_lpspi3_pcs0, PinId::GPIO_AD_B1_12, PeripheralId::LPSPI3, SignalId::signal_pcs0, RouteId::candidate_gpio_ad_b1_12_lpspi3_pcs0, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi3_bga196_sck_cs},
  {ConnectorId::candidate_gpio_ad_b1_13_gpio1_io29, PinId::GPIO_AD_B1_13, PeripheralId::GPIO1, SignalId::signal_io29, RouteId::candidate_gpio_ad_b1_13_gpio1_io29, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_13_lpspi3_sdi, PinId::GPIO_AD_B1_13, PeripheralId::LPSPI3, SignalId::signal_sdi, RouteId::candidate_gpio_ad_b1_13_lpspi3_sdi, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_ad_b1_14_gpio1_io30, PinId::GPIO_AD_B1_14, PeripheralId::GPIO1, SignalId::signal_io30, RouteId::candidate_gpio_ad_b1_14_gpio1_io30, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_14_lpspi3_sdo, PinId::GPIO_AD_B1_14, PeripheralId::LPSPI3, SignalId::signal_sdo, RouteId::candidate_gpio_ad_b1_14_lpspi3_sdo, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_ad_b1_15_gpio1_io31, PinId::GPIO_AD_B1_15, PeripheralId::GPIO1, SignalId::signal_io31, RouteId::candidate_gpio_ad_b1_15_gpio1_io31, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio1_bga196_all_signals},
  {ConnectorId::candidate_gpio_ad_b1_15_lpspi3_sck, PinId::GPIO_AD_B1_15, PeripheralId::LPSPI3, SignalId::signal_sck, RouteId::candidate_gpio_ad_b1_15_lpspi3_sck, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi3_bga196_sck_cs},
  {ConnectorId::candidate_gpio_b0_00_gpio2_io00, PinId::GPIO_B0_00, PeripheralId::GPIO2, SignalId::signal_io00, RouteId::candidate_gpio_b0_00_gpio2_io00, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_00_lpspi4_pcs0, PinId::GPIO_B0_00, PeripheralId::LPSPI4, SignalId::signal_pcs0, RouteId::candidate_gpio_b0_00_lpspi4_pcs0, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi4_bga196_sck_cs},
  {ConnectorId::candidate_gpio_b0_01_gpio2_io01, PinId::GPIO_B0_01, PeripheralId::GPIO2, SignalId::signal_io01, RouteId::candidate_gpio_b0_01_gpio2_io01, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_01_lpspi4_sdi, PinId::GPIO_B0_01, PeripheralId::LPSPI4, SignalId::signal_sdi, RouteId::candidate_gpio_b0_01_lpspi4_sdi, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_b0_02_gpio2_io02, PinId::GPIO_B0_02, PeripheralId::GPIO2, SignalId::signal_io02, RouteId::candidate_gpio_b0_02_gpio2_io02, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_02_lpspi4_sdo, PinId::GPIO_B0_02, PeripheralId::LPSPI4, SignalId::signal_sdo, RouteId::candidate_gpio_b0_02_lpspi4_sdo, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_b0_03_gpio2_io03, PinId::GPIO_B0_03, PeripheralId::GPIO2, SignalId::signal_io03, RouteId::candidate_gpio_b0_03_gpio2_io03, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_03_lpspi4_sck, PinId::GPIO_B0_03, PeripheralId::LPSPI4, SignalId::signal_sck, RouteId::candidate_gpio_b0_03_lpspi4_sck, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi4_bga196_sck_cs},
  {ConnectorId::candidate_gpio_b0_04_gpio2_io04, PinId::GPIO_B0_04, PeripheralId::GPIO2, SignalId::signal_io04, RouteId::candidate_gpio_b0_04_gpio2_io04, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_05_gpio2_io05, PinId::GPIO_B0_05, PeripheralId::GPIO2, SignalId::signal_io05, RouteId::candidate_gpio_b0_05_gpio2_io05, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_06_gpio2_io06, PinId::GPIO_B0_06, PeripheralId::GPIO2, SignalId::signal_io06, RouteId::candidate_gpio_b0_06_gpio2_io06, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_07_gpio2_io07, PinId::GPIO_B0_07, PeripheralId::GPIO2, SignalId::signal_io07, RouteId::candidate_gpio_b0_07_gpio2_io07, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_08_gpio2_io08, PinId::GPIO_B0_08, PeripheralId::GPIO2, SignalId::signal_io08, RouteId::candidate_gpio_b0_08_gpio2_io08, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_08_lpuart3_tx, PinId::GPIO_B0_08, PeripheralId::LPUART3, SignalId::signal_tx, RouteId::candidate_gpio_b0_08_lpuart3_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx},
  {ConnectorId::candidate_gpio_b0_09_gpio2_io09, PinId::GPIO_B0_09, PeripheralId::GPIO2, SignalId::signal_io09, RouteId::candidate_gpio_b0_09_gpio2_io09, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_09_lpuart3_rx, PinId::GPIO_B0_09, PeripheralId::LPUART3, SignalId::signal_rx, RouteId::candidate_gpio_b0_09_lpuart3_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx},
  {ConnectorId::candidate_gpio_b0_10_gpio2_io10, PinId::GPIO_B0_10, PeripheralId::GPIO2, SignalId::signal_io10, RouteId::candidate_gpio_b0_10_gpio2_io10, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_11_gpio2_io11, PinId::GPIO_B0_11, PeripheralId::GPIO2, SignalId::signal_io11, RouteId::candidate_gpio_b0_11_gpio2_io11, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_12_gpio2_io12, PinId::GPIO_B0_12, PeripheralId::GPIO2, SignalId::signal_io12, RouteId::candidate_gpio_b0_12_gpio2_io12, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_13_gpio2_io13, PinId::GPIO_B0_13, PeripheralId::GPIO2, SignalId::signal_io13, RouteId::candidate_gpio_b0_13_gpio2_io13, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_14_gpio2_io14, PinId::GPIO_B0_14, PeripheralId::GPIO2, SignalId::signal_io14, RouteId::candidate_gpio_b0_14_gpio2_io14, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b0_15_gpio2_io15, PinId::GPIO_B0_15, PeripheralId::GPIO2, SignalId::signal_io15, RouteId::candidate_gpio_b0_15_gpio2_io15, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_00_gpio2_io16, PinId::GPIO_B1_00, PeripheralId::GPIO2, SignalId::signal_io16, RouteId::candidate_gpio_b1_00_gpio2_io16, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_00_lpuart4_tx, PinId::GPIO_B1_00, PeripheralId::LPUART4, SignalId::signal_tx, RouteId::candidate_gpio_b1_00_lpuart4_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart4_bga196_tx_rx},
  {ConnectorId::candidate_gpio_b1_01_gpio2_io17, PinId::GPIO_B1_01, PeripheralId::GPIO2, SignalId::signal_io17, RouteId::candidate_gpio_b1_01_gpio2_io17, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_01_lpuart4_rx, PinId::GPIO_B1_01, PeripheralId::LPUART4, SignalId::signal_rx, RouteId::candidate_gpio_b1_01_lpuart4_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart4_bga196_tx_rx},
  {ConnectorId::candidate_gpio_b1_02_gpio2_io18, PinId::GPIO_B1_02, PeripheralId::GPIO2, SignalId::signal_io18, RouteId::candidate_gpio_b1_02_gpio2_io18, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_02_lpspi4_pcs2, PinId::GPIO_B1_02, PeripheralId::LPSPI4, SignalId::signal_pcs2, RouteId::candidate_gpio_b1_02_lpspi4_pcs2, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi4_bga196_sck_cs},
  {ConnectorId::candidate_gpio_b1_03_gpio2_io19, PinId::GPIO_B1_03, PeripheralId::GPIO2, SignalId::signal_io19, RouteId::candidate_gpio_b1_03_gpio2_io19, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_03_lpspi4_pcs1, PinId::GPIO_B1_03, PeripheralId::LPSPI4, SignalId::signal_pcs1, RouteId::candidate_gpio_b1_03_lpspi4_pcs1, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi4_bga196_sck_cs},
  {ConnectorId::candidate_gpio_b1_04_gpio2_io20, PinId::GPIO_B1_04, PeripheralId::GPIO2, SignalId::signal_io20, RouteId::candidate_gpio_b1_04_gpio2_io20, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_04_lpspi4_pcs0, PinId::GPIO_B1_04, PeripheralId::LPSPI4, SignalId::signal_pcs0, RouteId::candidate_gpio_b1_04_lpspi4_pcs0, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi4_bga196_sck_cs},
  {ConnectorId::candidate_gpio_b1_05_gpio2_io21, PinId::GPIO_B1_05, PeripheralId::GPIO2, SignalId::signal_io21, RouteId::candidate_gpio_b1_05_gpio2_io21, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_05_lpspi4_sdi, PinId::GPIO_B1_05, PeripheralId::LPSPI4, SignalId::signal_sdi, RouteId::candidate_gpio_b1_05_lpspi4_sdi, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_b1_06_gpio2_io22, PinId::GPIO_B1_06, PeripheralId::GPIO2, SignalId::signal_io22, RouteId::candidate_gpio_b1_06_gpio2_io22, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_06_lpspi4_sdo, PinId::GPIO_B1_06, PeripheralId::LPSPI4, SignalId::signal_sdo, RouteId::candidate_gpio_b1_06_lpspi4_sdo, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_b1_07_gpio2_io23, PinId::GPIO_B1_07, PeripheralId::GPIO2, SignalId::signal_io23, RouteId::candidate_gpio_b1_07_gpio2_io23, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_07_lpspi4_sck, PinId::GPIO_B1_07, PeripheralId::LPSPI4, SignalId::signal_sck, RouteId::candidate_gpio_b1_07_lpspi4_sck, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi4_bga196_sck_cs},
  {ConnectorId::candidate_gpio_b1_08_gpio2_io24, PinId::GPIO_B1_08, PeripheralId::GPIO2, SignalId::signal_io24, RouteId::candidate_gpio_b1_08_gpio2_io24, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_09_gpio2_io25, PinId::GPIO_B1_09, PeripheralId::GPIO2, SignalId::signal_io25, RouteId::candidate_gpio_b1_09_gpio2_io25, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_10_gpio2_io26, PinId::GPIO_B1_10, PeripheralId::GPIO2, SignalId::signal_io26, RouteId::candidate_gpio_b1_10_gpio2_io26, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_11_gpio2_io27, PinId::GPIO_B1_11, PeripheralId::GPIO2, SignalId::signal_io27, RouteId::candidate_gpio_b1_11_gpio2_io27, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_11_lpspi4_pcs3, PinId::GPIO_B1_11, PeripheralId::LPSPI4, SignalId::signal_pcs3, RouteId::candidate_gpio_b1_11_lpspi4_pcs3, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi4_bga196_sck_cs},
  {ConnectorId::candidate_gpio_b1_12_gpio2_io28, PinId::GPIO_B1_12, PeripheralId::GPIO2, SignalId::signal_io28, RouteId::candidate_gpio_b1_12_gpio2_io28, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_12_lpuart5_tx, PinId::GPIO_B1_12, PeripheralId::LPUART5, SignalId::signal_tx, RouteId::candidate_gpio_b1_12_lpuart5_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart5_bga196_tx_rx},
  {ConnectorId::candidate_gpio_b1_13_gpio2_io29, PinId::GPIO_B1_13, PeripheralId::GPIO2, SignalId::signal_io29, RouteId::candidate_gpio_b1_13_gpio2_io29, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_13_lpuart5_rx, PinId::GPIO_B1_13, PeripheralId::LPUART5, SignalId::signal_rx, RouteId::candidate_gpio_b1_13_lpuart5_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart5_bga196_tx_rx},
  {ConnectorId::candidate_gpio_b1_14_gpio2_io30, PinId::GPIO_B1_14, PeripheralId::GPIO2, SignalId::signal_io30, RouteId::candidate_gpio_b1_14_gpio2_io30, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_b1_15_gpio2_io31, PinId::GPIO_B1_15, PeripheralId::GPIO2, SignalId::signal_io31, RouteId::candidate_gpio_b1_15_gpio2_io31, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio2_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_00_gpio4_io00, PinId::GPIO_EMC_00, PeripheralId::GPIO4, SignalId::signal_io00, RouteId::candidate_gpio_emc_00_gpio4_io00, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_00_lpspi2_sck, PinId::GPIO_EMC_00, PeripheralId::LPSPI2, SignalId::signal_sck, RouteId::candidate_gpio_emc_00_lpspi2_sck, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi2_bga196_sck_cs},
  {ConnectorId::candidate_gpio_emc_01_gpio4_io01, PinId::GPIO_EMC_01, PeripheralId::GPIO4, SignalId::signal_io01, RouteId::candidate_gpio_emc_01_gpio4_io01, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_01_lpspi2_pcs0, PinId::GPIO_EMC_01, PeripheralId::LPSPI2, SignalId::signal_pcs0, RouteId::candidate_gpio_emc_01_lpspi2_pcs0, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi2_bga196_sck_cs},
  {ConnectorId::candidate_gpio_emc_02_gpio4_io02, PinId::GPIO_EMC_02, PeripheralId::GPIO4, SignalId::signal_io02, RouteId::candidate_gpio_emc_02_gpio4_io02, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_02_lpspi2_sdo, PinId::GPIO_EMC_02, PeripheralId::LPSPI2, SignalId::signal_sdo, RouteId::candidate_gpio_emc_02_lpspi2_sdo, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_emc_03_gpio4_io03, PinId::GPIO_EMC_03, PeripheralId::GPIO4, SignalId::signal_io03, RouteId::candidate_gpio_emc_03_gpio4_io03, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_03_lpspi2_sdi, PinId::GPIO_EMC_03, PeripheralId::LPSPI2, SignalId::signal_sdi, RouteId::candidate_gpio_emc_03_lpspi2_sdi, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_emc_04_gpio4_io04, PinId::GPIO_EMC_04, PeripheralId::GPIO4, SignalId::signal_io04, RouteId::candidate_gpio_emc_04_gpio4_io04, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_05_gpio4_io05, PinId::GPIO_EMC_05, PeripheralId::GPIO4, SignalId::signal_io05, RouteId::candidate_gpio_emc_05_gpio4_io05, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_06_gpio4_io06, PinId::GPIO_EMC_06, PeripheralId::GPIO4, SignalId::signal_io06, RouteId::candidate_gpio_emc_06_gpio4_io06, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_07_gpio4_io07, PinId::GPIO_EMC_07, PeripheralId::GPIO4, SignalId::signal_io07, RouteId::candidate_gpio_emc_07_gpio4_io07, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_08_gpio4_io08, PinId::GPIO_EMC_08, PeripheralId::GPIO4, SignalId::signal_io08, RouteId::candidate_gpio_emc_08_gpio4_io08, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_09_gpio4_io09, PinId::GPIO_EMC_09, PeripheralId::GPIO4, SignalId::signal_io09, RouteId::candidate_gpio_emc_09_gpio4_io09, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_10_gpio4_io10, PinId::GPIO_EMC_10, PeripheralId::GPIO4, SignalId::signal_io10, RouteId::candidate_gpio_emc_10_gpio4_io10, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_11_gpio4_io11, PinId::GPIO_EMC_11, PeripheralId::GPIO4, SignalId::signal_io11, RouteId::candidate_gpio_emc_11_gpio4_io11, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_12_gpio4_io12, PinId::GPIO_EMC_12, PeripheralId::GPIO4, SignalId::signal_io12, RouteId::candidate_gpio_emc_12_gpio4_io12, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_13_gpio4_io13, PinId::GPIO_EMC_13, PeripheralId::GPIO4, SignalId::signal_io13, RouteId::candidate_gpio_emc_13_gpio4_io13, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_13_lpuart3_tx, PinId::GPIO_EMC_13, PeripheralId::LPUART3, SignalId::signal_tx, RouteId::candidate_gpio_emc_13_lpuart3_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_14_gpio4_io14, PinId::GPIO_EMC_14, PeripheralId::GPIO4, SignalId::signal_io14, RouteId::candidate_gpio_emc_14_gpio4_io14, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_14_lpspi2_pcs1, PinId::GPIO_EMC_14, PeripheralId::LPSPI2, SignalId::signal_pcs1, RouteId::candidate_gpio_emc_14_lpspi2_pcs1, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi2_bga196_sck_cs},
  {ConnectorId::candidate_gpio_emc_14_lpuart3_rx, PinId::GPIO_EMC_14, PeripheralId::LPUART3, SignalId::signal_rx, RouteId::candidate_gpio_emc_14_lpuart3_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_15_gpio4_io15, PinId::GPIO_EMC_15, PeripheralId::GPIO4, SignalId::signal_io15, RouteId::candidate_gpio_emc_15_gpio4_io15, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_15_lpuart3_cts_b, PinId::GPIO_EMC_15, PeripheralId::LPUART3, SignalId::signal_cts_b, RouteId::candidate_gpio_emc_15_lpuart3_cts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_emc_16_gpio4_io16, PinId::GPIO_EMC_16, PeripheralId::GPIO4, SignalId::signal_io16, RouteId::candidate_gpio_emc_16_gpio4_io16, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_16_lpuart3_rts_b, PinId::GPIO_EMC_16, PeripheralId::LPUART3, SignalId::signal_rts_b, RouteId::candidate_gpio_emc_16_lpuart3_rts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_emc_17_gpio4_io17, PinId::GPIO_EMC_17, PeripheralId::GPIO4, SignalId::signal_io17, RouteId::candidate_gpio_emc_17_gpio4_io17, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_17_lpuart4_cts_b, PinId::GPIO_EMC_17, PeripheralId::LPUART4, SignalId::signal_cts_b, RouteId::candidate_gpio_emc_17_lpuart4_cts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart4_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_emc_18_gpio4_io18, PinId::GPIO_EMC_18, PeripheralId::GPIO4, SignalId::signal_io18, RouteId::candidate_gpio_emc_18_gpio4_io18, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_18_lpuart4_rts_b, PinId::GPIO_EMC_18, PeripheralId::LPUART4, SignalId::signal_rts_b, RouteId::candidate_gpio_emc_18_lpuart4_rts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart4_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_emc_19_gpio4_io19, PinId::GPIO_EMC_19, PeripheralId::GPIO4, SignalId::signal_io19, RouteId::candidate_gpio_emc_19_gpio4_io19, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_19_lpuart4_tx, PinId::GPIO_EMC_19, PeripheralId::LPUART4, SignalId::signal_tx, RouteId::candidate_gpio_emc_19_lpuart4_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart4_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_20_gpio4_io20, PinId::GPIO_EMC_20, PeripheralId::GPIO4, SignalId::signal_io20, RouteId::candidate_gpio_emc_20_gpio4_io20, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_20_lpuart4_rx, PinId::GPIO_EMC_20, PeripheralId::LPUART4, SignalId::signal_rx, RouteId::candidate_gpio_emc_20_lpuart4_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart4_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_21_gpio4_io21, PinId::GPIO_EMC_21, PeripheralId::GPIO4, SignalId::signal_io21, RouteId::candidate_gpio_emc_21_gpio4_io21, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_22_gpio4_io22, PinId::GPIO_EMC_22, PeripheralId::GPIO4, SignalId::signal_io22, RouteId::candidate_gpio_emc_22_gpio4_io22, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_23_gpio4_io23, PinId::GPIO_EMC_23, PeripheralId::GPIO4, SignalId::signal_io23, RouteId::candidate_gpio_emc_23_gpio4_io23, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_23_lpuart5_tx, PinId::GPIO_EMC_23, PeripheralId::LPUART5, SignalId::signal_tx, RouteId::candidate_gpio_emc_23_lpuart5_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart5_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_24_gpio4_io24, PinId::GPIO_EMC_24, PeripheralId::GPIO4, SignalId::signal_io24, RouteId::candidate_gpio_emc_24_gpio4_io24, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_24_lpuart5_rx, PinId::GPIO_EMC_24, PeripheralId::LPUART5, SignalId::signal_rx, RouteId::candidate_gpio_emc_24_lpuart5_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart5_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_25_gpio4_io25, PinId::GPIO_EMC_25, PeripheralId::GPIO4, SignalId::signal_io25, RouteId::candidate_gpio_emc_25_gpio4_io25, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_25_lpuart6_tx, PinId::GPIO_EMC_25, PeripheralId::LPUART6, SignalId::signal_tx, RouteId::candidate_gpio_emc_25_lpuart6_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart6_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_26_gpio4_io26, PinId::GPIO_EMC_26, PeripheralId::GPIO4, SignalId::signal_io26, RouteId::candidate_gpio_emc_26_gpio4_io26, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_26_lpuart6_rx, PinId::GPIO_EMC_26, PeripheralId::LPUART6, SignalId::signal_rx, RouteId::candidate_gpio_emc_26_lpuart6_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart6_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_27_gpio4_io27, PinId::GPIO_EMC_27, PeripheralId::GPIO4, SignalId::signal_io27, RouteId::candidate_gpio_emc_27_gpio4_io27, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_27_lpspi1_sck, PinId::GPIO_EMC_27, PeripheralId::LPSPI1, SignalId::signal_sck, RouteId::candidate_gpio_emc_27_lpspi1_sck, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi1_bga196_sck_cs},
  {ConnectorId::candidate_gpio_emc_27_lpuart5_rts_b, PinId::GPIO_EMC_27, PeripheralId::LPUART5, SignalId::signal_rts_b, RouteId::candidate_gpio_emc_27_lpuart5_rts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart5_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_emc_28_gpio4_io28, PinId::GPIO_EMC_28, PeripheralId::GPIO4, SignalId::signal_io28, RouteId::candidate_gpio_emc_28_gpio4_io28, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_28_lpspi1_sdo, PinId::GPIO_EMC_28, PeripheralId::LPSPI1, SignalId::signal_sdo, RouteId::candidate_gpio_emc_28_lpspi1_sdo, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_emc_28_lpuart5_cts_b, PinId::GPIO_EMC_28, PeripheralId::LPUART5, SignalId::signal_cts_b, RouteId::candidate_gpio_emc_28_lpuart5_cts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart5_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_emc_29_gpio4_io29, PinId::GPIO_EMC_29, PeripheralId::GPIO4, SignalId::signal_io29, RouteId::candidate_gpio_emc_29_gpio4_io29, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_29_lpspi1_sdi, PinId::GPIO_EMC_29, PeripheralId::LPSPI1, SignalId::signal_sdi, RouteId::candidate_gpio_emc_29_lpspi1_sdi, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_emc_29_lpuart6_rts_b, PinId::GPIO_EMC_29, PeripheralId::LPUART6, SignalId::signal_rts_b, RouteId::candidate_gpio_emc_29_lpuart6_rts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart6_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_emc_30_gpio4_io30, PinId::GPIO_EMC_30, PeripheralId::GPIO4, SignalId::signal_io30, RouteId::candidate_gpio_emc_30_gpio4_io30, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_30_lpspi1_pcs0, PinId::GPIO_EMC_30, PeripheralId::LPSPI1, SignalId::signal_pcs0, RouteId::candidate_gpio_emc_30_lpspi1_pcs0, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi1_bga196_sck_cs},
  {ConnectorId::candidate_gpio_emc_30_lpuart6_cts_b, PinId::GPIO_EMC_30, PeripheralId::LPUART6, SignalId::signal_cts_b, RouteId::candidate_gpio_emc_30_lpuart6_cts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart6_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_emc_31_gpio4_io31, PinId::GPIO_EMC_31, PeripheralId::GPIO4, SignalId::signal_io31, RouteId::candidate_gpio_emc_31_gpio4_io31, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio4_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_31_lpspi1_pcs1, PinId::GPIO_EMC_31, PeripheralId::LPSPI1, SignalId::signal_pcs1, RouteId::candidate_gpio_emc_31_lpspi1_pcs1, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi1_bga196_sck_cs},
  {ConnectorId::candidate_gpio_emc_31_lpuart7_tx, PinId::GPIO_EMC_31, PeripheralId::LPUART7, SignalId::signal_tx, RouteId::candidate_gpio_emc_31_lpuart7_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart7_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_32_gpio3_io18, PinId::GPIO_EMC_32, PeripheralId::GPIO3, SignalId::signal_io18, RouteId::candidate_gpio_emc_32_gpio3_io18, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_32_lpuart7_rx, PinId::GPIO_EMC_32, PeripheralId::LPUART7, SignalId::signal_rx, RouteId::candidate_gpio_emc_32_lpuart7_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart7_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_33_gpio3_io19, PinId::GPIO_EMC_33, PeripheralId::GPIO3, SignalId::signal_io19, RouteId::candidate_gpio_emc_33_gpio3_io19, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_34_gpio3_io20, PinId::GPIO_EMC_34, PeripheralId::GPIO3, SignalId::signal_io20, RouteId::candidate_gpio_emc_34_gpio3_io20, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_35_gpio3_io21, PinId::GPIO_EMC_35, PeripheralId::GPIO3, SignalId::signal_io21, RouteId::candidate_gpio_emc_35_gpio3_io21, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_36_gpio3_io22, PinId::GPIO_EMC_36, PeripheralId::GPIO3, SignalId::signal_io22, RouteId::candidate_gpio_emc_36_gpio3_io22, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_37_gpio3_io23, PinId::GPIO_EMC_37, PeripheralId::GPIO3, SignalId::signal_io23, RouteId::candidate_gpio_emc_37_gpio3_io23, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_38_gpio3_io24, PinId::GPIO_EMC_38, PeripheralId::GPIO3, SignalId::signal_io24, RouteId::candidate_gpio_emc_38_gpio3_io24, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_38_lpuart8_tx, PinId::GPIO_EMC_38, PeripheralId::LPUART8, SignalId::signal_tx, RouteId::candidate_gpio_emc_38_lpuart8_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart8_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_39_gpio3_io25, PinId::GPIO_EMC_39, PeripheralId::GPIO3, SignalId::signal_io25, RouteId::candidate_gpio_emc_39_gpio3_io25, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_39_lpuart8_rx, PinId::GPIO_EMC_39, PeripheralId::LPUART8, SignalId::signal_rx, RouteId::candidate_gpio_emc_39_lpuart8_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart8_bga196_tx_rx},
  {ConnectorId::candidate_gpio_emc_40_gpio3_io26, PinId::GPIO_EMC_40, PeripheralId::GPIO3, SignalId::signal_io26, RouteId::candidate_gpio_emc_40_gpio3_io26, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_40_lpspi1_pcs2, PinId::GPIO_EMC_40, PeripheralId::LPSPI1, SignalId::signal_pcs2, RouteId::candidate_gpio_emc_40_lpspi1_pcs2, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi1_bga196_sck_cs},
  {ConnectorId::candidate_gpio_emc_41_gpio3_io27, PinId::GPIO_EMC_41, PeripheralId::GPIO3, SignalId::signal_io27, RouteId::candidate_gpio_emc_41_gpio3_io27, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_emc_41_lpspi1_pcs3, PinId::GPIO_EMC_41, PeripheralId::LPSPI1, SignalId::signal_pcs3, RouteId::candidate_gpio_emc_41_lpspi1_pcs3, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi1_bga196_sck_cs},
  {ConnectorId::candidate_gpio_sd_b0_00_gpio3_io12, PinId::GPIO_SD_B0_00, PeripheralId::GPIO3, SignalId::signal_io12, RouteId::candidate_gpio_sd_b0_00_gpio3_io12, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b0_00_lpspi1_sck, PinId::GPIO_SD_B0_00, PeripheralId::LPSPI1, SignalId::signal_sck, RouteId::candidate_gpio_sd_b0_00_lpspi1_sck, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi1_bga196_sck_cs},
  {ConnectorId::candidate_gpio_sd_b0_01_gpio3_io13, PinId::GPIO_SD_B0_01, PeripheralId::GPIO3, SignalId::signal_io13, RouteId::candidate_gpio_sd_b0_01_gpio3_io13, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b0_01_lpspi1_pcs0, PinId::GPIO_SD_B0_01, PeripheralId::LPSPI1, SignalId::signal_pcs0, RouteId::candidate_gpio_sd_b0_01_lpspi1_pcs0, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi1_bga196_sck_cs},
  {ConnectorId::candidate_gpio_sd_b0_02_gpio3_io14, PinId::GPIO_SD_B0_02, PeripheralId::GPIO3, SignalId::signal_io14, RouteId::candidate_gpio_sd_b0_02_gpio3_io14, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b0_02_lpspi1_sdo, PinId::GPIO_SD_B0_02, PeripheralId::LPSPI1, SignalId::signal_sdo, RouteId::candidate_gpio_sd_b0_02_lpspi1_sdo, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_sd_b0_02_lpuart8_cts_b, PinId::GPIO_SD_B0_02, PeripheralId::LPUART8, SignalId::signal_cts_b, RouteId::candidate_gpio_sd_b0_02_lpuart8_cts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart8_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_sd_b0_03_gpio3_io15, PinId::GPIO_SD_B0_03, PeripheralId::GPIO3, SignalId::signal_io15, RouteId::candidate_gpio_sd_b0_03_gpio3_io15, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b0_03_lpspi1_sdi, PinId::GPIO_SD_B0_03, PeripheralId::LPSPI1, SignalId::signal_sdi, RouteId::candidate_gpio_sd_b0_03_lpspi1_sdi, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_sd_b0_03_lpuart8_rts_b, PinId::GPIO_SD_B0_03, PeripheralId::LPUART8, SignalId::signal_rts_b, RouteId::candidate_gpio_sd_b0_03_lpuart8_rts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart8_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_sd_b0_04_gpio3_io16, PinId::GPIO_SD_B0_04, PeripheralId::GPIO3, SignalId::signal_io16, RouteId::candidate_gpio_sd_b0_04_gpio3_io16, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b0_04_lpuart8_tx, PinId::GPIO_SD_B0_04, PeripheralId::LPUART8, SignalId::signal_tx, RouteId::candidate_gpio_sd_b0_04_lpuart8_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart8_bga196_tx_rx},
  {ConnectorId::candidate_gpio_sd_b0_05_gpio3_io17, PinId::GPIO_SD_B0_05, PeripheralId::GPIO3, SignalId::signal_io17, RouteId::candidate_gpio_sd_b0_05_gpio3_io17, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b0_05_lpuart8_rx, PinId::GPIO_SD_B0_05, PeripheralId::LPUART8, SignalId::signal_rx, RouteId::candidate_gpio_sd_b0_05_lpuart8_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart8_bga196_tx_rx},
  {ConnectorId::candidate_gpio_sd_b1_00_gpio3_io00, PinId::GPIO_SD_B1_00, PeripheralId::GPIO3, SignalId::signal_io00, RouteId::candidate_gpio_sd_b1_00_gpio3_io00, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_00_lpuart4_tx, PinId::GPIO_SD_B1_00, PeripheralId::LPUART4, SignalId::signal_tx, RouteId::candidate_gpio_sd_b1_00_lpuart4_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart4_bga196_tx_rx},
  {ConnectorId::candidate_gpio_sd_b1_01_gpio3_io01, PinId::GPIO_SD_B1_01, PeripheralId::GPIO3, SignalId::signal_io01, RouteId::candidate_gpio_sd_b1_01_gpio3_io01, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_01_lpuart4_rx, PinId::GPIO_SD_B1_01, PeripheralId::LPUART4, SignalId::signal_rx, RouteId::candidate_gpio_sd_b1_01_lpuart4_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart4_bga196_tx_rx},
  {ConnectorId::candidate_gpio_sd_b1_02_gpio3_io02, PinId::GPIO_SD_B1_02, PeripheralId::GPIO3, SignalId::signal_io02, RouteId::candidate_gpio_sd_b1_02_gpio3_io02, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_03_gpio3_io03, PinId::GPIO_SD_B1_03, PeripheralId::GPIO3, SignalId::signal_io03, RouteId::candidate_gpio_sd_b1_03_gpio3_io03, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_04_gpio3_io04, PinId::GPIO_SD_B1_04, PeripheralId::GPIO3, SignalId::signal_io04, RouteId::candidate_gpio_sd_b1_04_gpio3_io04, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_05_gpio3_io05, PinId::GPIO_SD_B1_05, PeripheralId::GPIO3, SignalId::signal_io05, RouteId::candidate_gpio_sd_b1_05_gpio3_io05, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_06_gpio3_io06, PinId::GPIO_SD_B1_06, PeripheralId::GPIO3, SignalId::signal_io06, RouteId::candidate_gpio_sd_b1_06_gpio3_io06, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_06_lpspi2_pcs0, PinId::GPIO_SD_B1_06, PeripheralId::LPSPI2, SignalId::signal_pcs0, RouteId::candidate_gpio_sd_b1_06_lpspi2_pcs0, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi2_bga196_sck_cs},
  {ConnectorId::candidate_gpio_sd_b1_06_lpuart7_cts_b, PinId::GPIO_SD_B1_06, PeripheralId::LPUART7, SignalId::signal_cts_b, RouteId::candidate_gpio_sd_b1_06_lpuart7_cts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart7_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_sd_b1_07_gpio3_io07, PinId::GPIO_SD_B1_07, PeripheralId::GPIO3, SignalId::signal_io07, RouteId::candidate_gpio_sd_b1_07_gpio3_io07, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_07_lpspi2_sck, PinId::GPIO_SD_B1_07, PeripheralId::LPSPI2, SignalId::signal_sck, RouteId::candidate_gpio_sd_b1_07_lpspi2_sck, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi2_bga196_sck_cs},
  {ConnectorId::candidate_gpio_sd_b1_07_lpuart7_rts_b, PinId::GPIO_SD_B1_07, PeripheralId::LPUART7, SignalId::signal_rts_b, RouteId::candidate_gpio_sd_b1_07_lpuart7_rts_b, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart7_bga196_tx_rx_cts_rts},
  {ConnectorId::candidate_gpio_sd_b1_08_gpio3_io08, PinId::GPIO_SD_B1_08, PeripheralId::GPIO3, SignalId::signal_io08, RouteId::candidate_gpio_sd_b1_08_gpio3_io08, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_08_lpspi2_sd0, PinId::GPIO_SD_B1_08, PeripheralId::LPSPI2, SignalId::signal_sd0, RouteId::candidate_gpio_sd_b1_08_lpspi2_sd0, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_sd_b1_08_lpuart7_tx, PinId::GPIO_SD_B1_08, PeripheralId::LPUART7, SignalId::signal_tx, RouteId::candidate_gpio_sd_b1_08_lpuart7_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart7_bga196_tx_rx},
  {ConnectorId::candidate_gpio_sd_b1_09_gpio3_io09, PinId::GPIO_SD_B1_09, PeripheralId::GPIO3, SignalId::signal_io09, RouteId::candidate_gpio_sd_b1_09_gpio3_io09, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_09_lpspi2_sdi, PinId::GPIO_SD_B1_09, PeripheralId::LPSPI2, SignalId::signal_sdi, RouteId::candidate_gpio_sd_b1_09_lpspi2_sdi, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::none},
  {ConnectorId::candidate_gpio_sd_b1_09_lpuart7_rx, PinId::GPIO_SD_B1_09, PeripheralId::LPUART7, SignalId::signal_rx, RouteId::candidate_gpio_sd_b1_09_lpuart7_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart7_bga196_tx_rx},
  {ConnectorId::candidate_gpio_sd_b1_10_gpio3_io10, PinId::GPIO_SD_B1_10, PeripheralId::GPIO3, SignalId::signal_io10, RouteId::candidate_gpio_sd_b1_10_gpio3_io10, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_10_lpspi2_pcs2, PinId::GPIO_SD_B1_10, PeripheralId::LPSPI2, SignalId::signal_pcs2, RouteId::candidate_gpio_sd_b1_10_lpspi2_pcs2, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi2_bga196_sck_cs},
  {ConnectorId::candidate_gpio_sd_b1_10_lpuart2_rx, PinId::GPIO_SD_B1_10, PeripheralId::LPUART2, SignalId::signal_rx, RouteId::candidate_gpio_sd_b1_10_lpuart2_rx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart2_bga196_tx_rx},
  {ConnectorId::candidate_gpio_sd_b1_11_gpio3_io11, PinId::GPIO_SD_B1_11, PeripheralId::GPIO3, SignalId::signal_io11, RouteId::candidate_gpio_sd_b1_11_gpio3_io11, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_gpio3_bga196_all_signals},
  {ConnectorId::candidate_gpio_sd_b1_11_lpspi2_pcs3, PinId::GPIO_SD_B1_11, PeripheralId::LPSPI2, SignalId::signal_pcs3, RouteId::candidate_gpio_sd_b1_11_lpspi2_pcs3, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpspi2_bga196_sck_cs},
  {ConnectorId::candidate_gpio_sd_b1_11_lpuart2_tx, PinId::GPIO_SD_B1_11, PeripheralId::LPUART2, SignalId::signal_tx, RouteId::candidate_gpio_sd_b1_11_lpuart2_tx, RouteKindId::route_kind_iomuxc_mux, ConnectionGroupId::group_lpuart2_bga196_tx_rx},
}};
}
}
}
}
}
}
