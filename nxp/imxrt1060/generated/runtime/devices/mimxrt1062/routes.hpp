#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "clock_bindings.hpp"
#include "peripheral_instances.hpp"
#include "pins.hpp"
#include "register_fields.hpp"
#include "registers.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1062 {
struct RouteOperation {
  BackendSchemaId schema_id;
  OperationKindId kind_id;
  OperationSubjectKindId subject_kind_id;
  RegisterId register_id;
  FieldId field_id;
  PinId pin_id;
  ClockGateId clock_gate_id;
  ResetId reset_id;
  int value_int;
};

enum class RouteId : std::uint16_t {
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

struct RouteDescriptor {
  RouteId route_id;
  PinId pin_id;
  PeripheralId peripheral_id;
  SignalId signal_id;
  RouteKindId route_kind_id;
};

template<PinId Pin, PeripheralId Peripheral, SignalId Signal>
struct RouteTraits {
  static constexpr bool kPresent = false;
  static constexpr RouteId kRouteId = RouteId::none;
  static constexpr RouteKindId kRouteKindId = RouteKindId::none;
  static constexpr std::array<RouteOperation, 0> kOperations = {};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_00, PeripheralId::GPIO1, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_00_gpio1_io00;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_00, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_00, PeripheralId::LPSPI3, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_00_lpspi3_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_00, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_01, PeripheralId::GPIO1, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_01_gpio1_io01;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_01, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_01, PeripheralId::LPSPI3, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_01_lpspi3_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_01, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_02, PeripheralId::GPIO1, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_02_gpio1_io02;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_02, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_02, PeripheralId::LPSPI3, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_02_lpspi3_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_02, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_02, PeripheralId::LPUART6, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_02_lpuart6_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg3, PinId::none, ClockGateId::gate_lpuart6, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_02, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_03, PeripheralId::GPIO1, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_03_gpio1_io03;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_03, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_03, PeripheralId::LPSPI3, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_03_lpspi3_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_03, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_03, PeripheralId::LPUART6, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_03_lpuart6_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg3, PinId::none, ClockGateId::gate_lpuart6, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_03, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_04, PeripheralId::GPIO1, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_04_gpio1_io04;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_04, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_04, PeripheralId::LPSPI3, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_04_lpspi3_pcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_04, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_05, PeripheralId::GPIO1, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_05_gpio1_io05;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_05, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_05, PeripheralId::LPSPI3, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_05_lpspi3_pcs2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_05, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_06, PeripheralId::GPIO1, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_06_gpio1_io06;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_06, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_06, PeripheralId::LPSPI3, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_06_lpspi3_pcs3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_06, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_07, PeripheralId::GPIO1, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_07_gpio1_io07;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_07, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_08, PeripheralId::GPIO1, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_08_gpio1_io08;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_08, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_09, PeripheralId::GPIO1, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_09_gpio1_io09;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_09, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_10, PeripheralId::GPIO1, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_10_gpio1_io10;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_10, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_11, PeripheralId::GPIO1, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_11_gpio1_io11;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_11, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_12, PeripheralId::GPIO1, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_12_gpio1_io12;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_12, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_12, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_12_lpuart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg12, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_12, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_13, PeripheralId::GPIO1, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_13_gpio1_io13;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_13, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_13, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_13_lpuart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg12, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_13, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_14, PeripheralId::GPIO1, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_14_gpio1_io14;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_14, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_14, PeripheralId::LPUART1, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_14_lpuart1_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg12, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_14, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_15, PeripheralId::GPIO1, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_15_gpio1_io15;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B0_15, PeripheralId::LPUART1, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b0_15_lpuart1_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg12, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B0_15, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_00, PeripheralId::GPIO1, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_00_gpio1_io16;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_00, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_00, PeripheralId::LPUART2, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_00_lpuart2_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg14, PinId::none, ClockGateId::gate_lpuart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_00, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_01, PeripheralId::GPIO1, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_01_gpio1_io17;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_01, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_01, PeripheralId::LPUART2, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_01_lpuart2_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg14, PinId::none, ClockGateId::gate_lpuart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_01, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_02, PeripheralId::GPIO1, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_02_gpio1_io18;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_02, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_02, PeripheralId::LPUART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_02_lpuart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg14, PinId::none, ClockGateId::gate_lpuart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_02, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_03, PeripheralId::GPIO1, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_03_gpio1_io19;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_03, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_03, PeripheralId::LPUART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_03_lpuart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg14, PinId::none, ClockGateId::gate_lpuart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_03, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_04, PeripheralId::GPIO1, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_04_gpio1_io20;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_04, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_04, PeripheralId::LPUART3, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_04_lpuart3_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_04, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_05, PeripheralId::GPIO1, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_05_gpio1_io21;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_05, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_05, PeripheralId::LPUART3, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_05_lpuart3_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_05, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_06, PeripheralId::GPIO1, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_06_gpio1_io22;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_06, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_06, PeripheralId::LPUART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_06_lpuart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_06, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_07, PeripheralId::GPIO1, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_07_gpio1_io23;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_07, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_07, PeripheralId::LPUART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_07_lpuart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_07, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_08, PeripheralId::GPIO1, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_08_gpio1_io24;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_08, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_09, PeripheralId::GPIO1, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_09_gpio1_io25;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_09, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_10, PeripheralId::GPIO1, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_10_gpio1_io26;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_10, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_10, PeripheralId::LPUART8, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_10_lpuart8_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr6, FieldId::field_ccm_ccgr6_cg7, PinId::none, ClockGateId::gate_lpuart8, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_10, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_11, PeripheralId::GPIO1, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_11_gpio1_io27;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_11, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_11, PeripheralId::LPUART8, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_11_lpuart8_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr6, FieldId::field_ccm_ccgr6_cg7, PinId::none, ClockGateId::gate_lpuart8, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_11, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_12, PeripheralId::GPIO1, SignalId::signal_io28> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_12_gpio1_io28;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_12, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_12, PeripheralId::LPSPI3, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_12_lpspi3_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_12, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_13, PeripheralId::GPIO1, SignalId::signal_io29> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_13_gpio1_io29;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_13, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_13, PeripheralId::LPSPI3, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_13_lpspi3_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_13, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_14, PeripheralId::GPIO1, SignalId::signal_io30> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_14_gpio1_io30;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_14, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_14, PeripheralId::LPSPI3, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_14_lpspi3_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_14, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_15, PeripheralId::GPIO1, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_15_gpio1_io31;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg13, PinId::none, ClockGateId::gate_gpio1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_AD_B1_15, PeripheralId::LPSPI3, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_ad_b1_15_lpspi3_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg2, PinId::none, ClockGateId::gate_lpspi3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_AD_B1_15, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_00, PeripheralId::GPIO2, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_00_gpio2_io00;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_00, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_00, PeripheralId::LPSPI4, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_00_lpspi4_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_00, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_01, PeripheralId::GPIO2, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_01_gpio2_io01;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_01, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_01, PeripheralId::LPSPI4, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_01_lpspi4_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_01, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_02, PeripheralId::GPIO2, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_02_gpio2_io02;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_02, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_02, PeripheralId::LPSPI4, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_02_lpspi4_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_02, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_03, PeripheralId::GPIO2, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_03_gpio2_io03;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_03, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_03, PeripheralId::LPSPI4, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_03_lpspi4_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_03, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_04, PeripheralId::GPIO2, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_04_gpio2_io04;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_04, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_05, PeripheralId::GPIO2, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_05_gpio2_io05;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_05, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_06, PeripheralId::GPIO2, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_06_gpio2_io06;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_06, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_07, PeripheralId::GPIO2, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_07_gpio2_io07;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_07, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_08, PeripheralId::GPIO2, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_08_gpio2_io08;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_08, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_08, PeripheralId::LPUART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_08_lpuart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_08, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_09, PeripheralId::GPIO2, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_09_gpio2_io09;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_09, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_09, PeripheralId::LPUART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_09_lpuart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_09, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_10, PeripheralId::GPIO2, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_10_gpio2_io10;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_10, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_11, PeripheralId::GPIO2, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_11_gpio2_io11;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_11, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_12, PeripheralId::GPIO2, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_12_gpio2_io12;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_12, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_13, PeripheralId::GPIO2, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_13_gpio2_io13;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_13, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_14, PeripheralId::GPIO2, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_14_gpio2_io14;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_14, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B0_15, PeripheralId::GPIO2, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b0_15_gpio2_io15;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B0_15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_00, PeripheralId::GPIO2, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_00_gpio2_io16;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_00, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_00, PeripheralId::LPUART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_00_lpuart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg12, PinId::none, ClockGateId::gate_lpuart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_00, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_01, PeripheralId::GPIO2, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_01_gpio2_io17;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_01, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_01, PeripheralId::LPUART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_01_lpuart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg12, PinId::none, ClockGateId::gate_lpuart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_01, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_02, PeripheralId::GPIO2, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_02_gpio2_io18;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_02, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_02, PeripheralId::LPSPI4, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_02_lpspi4_pcs2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_02, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_03, PeripheralId::GPIO2, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_03_gpio2_io19;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_03, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_03, PeripheralId::LPSPI4, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_03_lpspi4_pcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_03, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_04, PeripheralId::GPIO2, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_04_gpio2_io20;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_04, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_04, PeripheralId::LPSPI4, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_04_lpspi4_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_04, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_05, PeripheralId::GPIO2, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_05_gpio2_io21;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_05, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_05, PeripheralId::LPSPI4, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_05_lpspi4_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_05, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_06, PeripheralId::GPIO2, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_06_gpio2_io22;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_06, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_06, PeripheralId::LPSPI4, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_06_lpspi4_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_06, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_07, PeripheralId::GPIO2, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_07_gpio2_io23;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_07, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_07, PeripheralId::LPSPI4, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_07_lpspi4_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_07, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_08, PeripheralId::GPIO2, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_08_gpio2_io24;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_08, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_09, PeripheralId::GPIO2, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_09_gpio2_io25;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_09, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_10, PeripheralId::GPIO2, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_10_gpio2_io26;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_10, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_11, PeripheralId::GPIO2, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_11_gpio2_io27;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_11, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_11, PeripheralId::LPSPI4, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_11_lpspi4_pcs3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg3, PinId::none, ClockGateId::gate_lpspi4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_11, ClockGateId::none, ResetId::none, 6},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_12, PeripheralId::GPIO2, SignalId::signal_io28> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_12_gpio2_io28;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_12, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_12, PeripheralId::LPUART5, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_12_lpuart5_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg1, PinId::none, ClockGateId::gate_lpuart5, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_12, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_13, PeripheralId::GPIO2, SignalId::signal_io29> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_13_gpio2_io29;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_13, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_13, PeripheralId::LPUART5, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_13_lpuart5_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg1, PinId::none, ClockGateId::gate_lpuart5, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_13, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_14, PeripheralId::GPIO2, SignalId::signal_io30> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_14_gpio2_io30;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_14, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_B1_15, PeripheralId::GPIO2, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_b1_15_gpio2_io31;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg15, PinId::none, ClockGateId::gate_gpio2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_B1_15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_00, PeripheralId::GPIO4, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_00_gpio4_io00;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_00, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_00, PeripheralId::LPSPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_00_lpspi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_00, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_01, PeripheralId::GPIO4, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_01_gpio4_io01;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_01, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_01, PeripheralId::LPSPI2, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_01_lpspi2_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_01, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_02, PeripheralId::GPIO4, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_02_gpio4_io02;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_02, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_02, PeripheralId::LPSPI2, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_02_lpspi2_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_02, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_03, PeripheralId::GPIO4, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_03_gpio4_io03;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_03, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_03, PeripheralId::LPSPI2, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_03_lpspi2_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_03, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_04, PeripheralId::GPIO4, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_04_gpio4_io04;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_04, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_05, PeripheralId::GPIO4, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_05_gpio4_io05;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_05, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_06, PeripheralId::GPIO4, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_06_gpio4_io06;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_06, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_07, PeripheralId::GPIO4, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_07_gpio4_io07;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_07, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_08, PeripheralId::GPIO4, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_08_gpio4_io08;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_08, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_09, PeripheralId::GPIO4, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_09_gpio4_io09;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_09, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_10, PeripheralId::GPIO4, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_10_gpio4_io10;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_10, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_11, PeripheralId::GPIO4, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_11_gpio4_io11;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_11, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_12, PeripheralId::GPIO4, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_12_gpio4_io12;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_12, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_13, PeripheralId::GPIO4, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_13_gpio4_io13;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_13, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_13, PeripheralId::LPUART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_13_lpuart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_13, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_14, PeripheralId::GPIO4, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_14_gpio4_io14;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_14, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_14, PeripheralId::LPSPI2, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_14_lpspi2_pcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_14, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_14, PeripheralId::LPUART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_14_lpuart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_14, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_15, PeripheralId::GPIO4, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_15_gpio4_io15;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_15, PeripheralId::LPUART3, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_15_lpuart3_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_15, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_16, PeripheralId::GPIO4, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_16_gpio4_io16;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_16, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_16, PeripheralId::LPUART3, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_16_lpuart3_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg6, PinId::none, ClockGateId::gate_lpuart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_16, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_17, PeripheralId::GPIO4, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_17_gpio4_io17;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_17, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_17, PeripheralId::LPUART4, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_17_lpuart4_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg12, PinId::none, ClockGateId::gate_lpuart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_17, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_18, PeripheralId::GPIO4, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_18_gpio4_io18;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_18, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_18, PeripheralId::LPUART4, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_18_lpuart4_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg12, PinId::none, ClockGateId::gate_lpuart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_18, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_19, PeripheralId::GPIO4, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_19_gpio4_io19;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_19, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_19, PeripheralId::LPUART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_19_lpuart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg12, PinId::none, ClockGateId::gate_lpuart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_19, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_20, PeripheralId::GPIO4, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_20_gpio4_io20;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_20, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_20, PeripheralId::LPUART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_20_lpuart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg12, PinId::none, ClockGateId::gate_lpuart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_20, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_21, PeripheralId::GPIO4, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_21_gpio4_io21;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_21, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_22, PeripheralId::GPIO4, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_22_gpio4_io22;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_22, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_23, PeripheralId::GPIO4, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_23_gpio4_io23;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_23, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_23, PeripheralId::LPUART5, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_23_lpuart5_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg1, PinId::none, ClockGateId::gate_lpuart5, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_23, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_24, PeripheralId::GPIO4, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_24_gpio4_io24;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_24, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_24, PeripheralId::LPUART5, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_24_lpuart5_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg1, PinId::none, ClockGateId::gate_lpuart5, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_24, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_25, PeripheralId::GPIO4, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_25_gpio4_io25;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_25, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_25, PeripheralId::LPUART6, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_25_lpuart6_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg3, PinId::none, ClockGateId::gate_lpuart6, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_25, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_26, PeripheralId::GPIO4, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_26_gpio4_io26;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_26, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_26, PeripheralId::LPUART6, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_26_lpuart6_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg3, PinId::none, ClockGateId::gate_lpuart6, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_26, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_27, PeripheralId::GPIO4, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_27_gpio4_io27;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_27, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_27, PeripheralId::LPSPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_27_lpspi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_27, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_27, PeripheralId::LPUART5, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_27_lpuart5_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg1, PinId::none, ClockGateId::gate_lpuart5, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_27, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_28, PeripheralId::GPIO4, SignalId::signal_io28> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_28_gpio4_io28;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_28, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_28, PeripheralId::LPSPI1, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_28_lpspi1_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_28, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_28, PeripheralId::LPUART5, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_28_lpuart5_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg1, PinId::none, ClockGateId::gate_lpuart5, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_28, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_29, PeripheralId::GPIO4, SignalId::signal_io29> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_29_gpio4_io29;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_29, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_29, PeripheralId::LPSPI1, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_29_lpspi1_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_29, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_29, PeripheralId::LPUART6, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_29_lpuart6_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg3, PinId::none, ClockGateId::gate_lpuart6, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_29, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_30, PeripheralId::GPIO4, SignalId::signal_io30> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_30_gpio4_io30;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_30, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_30, PeripheralId::LPSPI1, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_30_lpspi1_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_30, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_30, PeripheralId::LPUART6, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_30_lpuart6_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg3, PinId::none, ClockGateId::gate_lpuart6, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_30, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_31, PeripheralId::GPIO4, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_31_gpio4_io31;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr3, FieldId::field_ccm_ccgr3_cg13, PinId::none, ClockGateId::gate_gpio4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_31, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_31, PeripheralId::LPSPI1, SignalId::signal_pcs1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_31_lpspi1_pcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_31, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_31, PeripheralId::LPUART7, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_31_lpuart7_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg13, PinId::none, ClockGateId::gate_lpuart7, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_31, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_32, PeripheralId::GPIO3, SignalId::signal_io18> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_32_gpio3_io18;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_32, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_32, PeripheralId::LPUART7, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_32_lpuart7_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg13, PinId::none, ClockGateId::gate_lpuart7, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_32, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_33, PeripheralId::GPIO3, SignalId::signal_io19> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_33_gpio3_io19;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_33, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_34, PeripheralId::GPIO3, SignalId::signal_io20> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_34_gpio3_io20;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_34, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_35, PeripheralId::GPIO3, SignalId::signal_io21> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_35_gpio3_io21;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_35, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_36, PeripheralId::GPIO3, SignalId::signal_io22> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_36_gpio3_io22;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_36, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_37, PeripheralId::GPIO3, SignalId::signal_io23> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_37_gpio3_io23;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_37, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_38, PeripheralId::GPIO3, SignalId::signal_io24> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_38_gpio3_io24;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_38, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_38, PeripheralId::LPUART8, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_38_lpuart8_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr6, FieldId::field_ccm_ccgr6_cg7, PinId::none, ClockGateId::gate_lpuart8, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_38, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_39, PeripheralId::GPIO3, SignalId::signal_io25> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_39_gpio3_io25;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_39, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_39, PeripheralId::LPUART8, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_39_lpuart8_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr6, FieldId::field_ccm_ccgr6_cg7, PinId::none, ClockGateId::gate_lpuart8, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_39, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_40, PeripheralId::GPIO3, SignalId::signal_io26> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_40_gpio3_io26;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_40, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_40, PeripheralId::LPSPI1, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_40_lpspi1_pcs2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_40, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_41, PeripheralId::GPIO3, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_41_gpio3_io27;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_41, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_EMC_41, PeripheralId::LPSPI1, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_emc_41_lpspi1_pcs3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_EMC_41, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_00, PeripheralId::GPIO3, SignalId::signal_io12> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_00_gpio3_io12;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_00, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_00, PeripheralId::LPSPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_00_lpspi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_00, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_01, PeripheralId::GPIO3, SignalId::signal_io13> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_01_gpio3_io13;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_01, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_01, PeripheralId::LPSPI1, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_01_lpspi1_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_01, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_02, PeripheralId::GPIO3, SignalId::signal_io14> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_02_gpio3_io14;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_02, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_02, PeripheralId::LPSPI1, SignalId::signal_sdo> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_02_lpspi1_sdo;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_02, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_02, PeripheralId::LPUART8, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_02_lpuart8_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr6, FieldId::field_ccm_ccgr6_cg7, PinId::none, ClockGateId::gate_lpuart8, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_02, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_03, PeripheralId::GPIO3, SignalId::signal_io15> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_03_gpio3_io15;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_03, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_03, PeripheralId::LPSPI1, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_03_lpspi1_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg0, PinId::none, ClockGateId::gate_lpspi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_03, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_03, PeripheralId::LPUART8, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_03_lpuart8_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr6, FieldId::field_ccm_ccgr6_cg7, PinId::none, ClockGateId::gate_lpuart8, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_03, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_04, PeripheralId::GPIO3, SignalId::signal_io16> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_04_gpio3_io16;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_04, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_04, PeripheralId::LPUART8, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_04_lpuart8_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr6, FieldId::field_ccm_ccgr6_cg7, PinId::none, ClockGateId::gate_lpuart8, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_04, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_05, PeripheralId::GPIO3, SignalId::signal_io17> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_05_gpio3_io17;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_05, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B0_05, PeripheralId::LPUART8, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b0_05_lpuart8_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr6, FieldId::field_ccm_ccgr6_cg7, PinId::none, ClockGateId::gate_lpuart8, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B0_05, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_00, PeripheralId::GPIO3, SignalId::signal_io00> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_00_gpio3_io00;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_00, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_00, PeripheralId::LPUART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_00_lpuart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg12, PinId::none, ClockGateId::gate_lpuart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_00, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_01, PeripheralId::GPIO3, SignalId::signal_io01> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_01_gpio3_io01;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_01, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_01, PeripheralId::LPUART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_01_lpuart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg12, PinId::none, ClockGateId::gate_lpuart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_01, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_02, PeripheralId::GPIO3, SignalId::signal_io02> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_02_gpio3_io02;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_02, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_03, PeripheralId::GPIO3, SignalId::signal_io03> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_03_gpio3_io03;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_03, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_04, PeripheralId::GPIO3, SignalId::signal_io04> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_04_gpio3_io04;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_04, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_05, PeripheralId::GPIO3, SignalId::signal_io05> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_05_gpio3_io05;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_05, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_06, PeripheralId::GPIO3, SignalId::signal_io06> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_06_gpio3_io06;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_06, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_06, PeripheralId::LPSPI2, SignalId::signal_pcs0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_06_lpspi2_pcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_06, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_06, PeripheralId::LPUART7, SignalId::signal_cts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_06_lpuart7_cts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg13, PinId::none, ClockGateId::gate_lpuart7, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_06, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_07, PeripheralId::GPIO3, SignalId::signal_io07> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_07_gpio3_io07;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_07, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_07, PeripheralId::LPSPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_07_lpspi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_07, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_07, PeripheralId::LPUART7, SignalId::signal_rts_b> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_07_lpuart7_rts_b;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg13, PinId::none, ClockGateId::gate_lpuart7, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_07, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_08, PeripheralId::GPIO3, SignalId::signal_io08> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_08_gpio3_io08;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_08, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_08, PeripheralId::LPSPI2, SignalId::signal_sd0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_08_lpspi2_sd0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_08, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_08, PeripheralId::LPUART7, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_08_lpuart7_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg13, PinId::none, ClockGateId::gate_lpuart7, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_08, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_09, PeripheralId::GPIO3, SignalId::signal_io09> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_09_gpio3_io09;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_09, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_09, PeripheralId::LPSPI2, SignalId::signal_sdi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_09_lpspi2_sdi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_09, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_09, PeripheralId::LPUART7, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_09_lpuart7_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr5, FieldId::field_ccm_ccgr5_cg13, PinId::none, ClockGateId::gate_lpuart7, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_09, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_10, PeripheralId::GPIO3, SignalId::signal_io10> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_10_gpio3_io10;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_10, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_10, PeripheralId::LPSPI2, SignalId::signal_pcs2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_10_lpspi2_pcs2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_10, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_10, PeripheralId::LPUART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_10_lpuart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg14, PinId::none, ClockGateId::gate_lpuart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_10, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_11, PeripheralId::GPIO3, SignalId::signal_io11> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_11_gpio3_io11;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr2, FieldId::field_ccm_ccgr2_cg13, PinId::none, ClockGateId::gate_gpio3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_11, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_11, PeripheralId::LPSPI2, SignalId::signal_pcs3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_11_lpspi2_pcs3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr1, FieldId::field_ccm_ccgr1_cg1, PinId::none, ClockGateId::gate_lpspi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_11, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::GPIO_SD_B1_11, PeripheralId::LPUART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio_sd_b1_11_lpuart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_iomuxc_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_nxp_ccm, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_ccm_ccgr0, FieldId::field_ccm_ccgr0_cg14, PinId::none, ClockGateId::gate_lpuart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_imxrt_iomuxc_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO_SD_B1_11, ClockGateId::none, ResetId::none, 2},
  }};
};

inline constexpr std::array<RouteDescriptor, 222> kRuntimeRoutes = {{
  {RouteId::candidate_gpio_ad_b0_00_gpio1_io00, PinId::GPIO_AD_B0_00, PeripheralId::GPIO1, SignalId::signal_io00, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_00_lpspi3_sck, PinId::GPIO_AD_B0_00, PeripheralId::LPSPI3, SignalId::signal_sck, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_01_gpio1_io01, PinId::GPIO_AD_B0_01, PeripheralId::GPIO1, SignalId::signal_io01, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_01_lpspi3_sdo, PinId::GPIO_AD_B0_01, PeripheralId::LPSPI3, SignalId::signal_sdo, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_02_gpio1_io02, PinId::GPIO_AD_B0_02, PeripheralId::GPIO1, SignalId::signal_io02, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_02_lpspi3_sdi, PinId::GPIO_AD_B0_02, PeripheralId::LPSPI3, SignalId::signal_sdi, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_02_lpuart6_tx, PinId::GPIO_AD_B0_02, PeripheralId::LPUART6, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_03_gpio1_io03, PinId::GPIO_AD_B0_03, PeripheralId::GPIO1, SignalId::signal_io03, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_03_lpspi3_pcs0, PinId::GPIO_AD_B0_03, PeripheralId::LPSPI3, SignalId::signal_pcs0, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_03_lpuart6_rx, PinId::GPIO_AD_B0_03, PeripheralId::LPUART6, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_04_gpio1_io04, PinId::GPIO_AD_B0_04, PeripheralId::GPIO1, SignalId::signal_io04, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_04_lpspi3_pcs1, PinId::GPIO_AD_B0_04, PeripheralId::LPSPI3, SignalId::signal_pcs1, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_05_gpio1_io05, PinId::GPIO_AD_B0_05, PeripheralId::GPIO1, SignalId::signal_io05, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_05_lpspi3_pcs2, PinId::GPIO_AD_B0_05, PeripheralId::LPSPI3, SignalId::signal_pcs2, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_06_gpio1_io06, PinId::GPIO_AD_B0_06, PeripheralId::GPIO1, SignalId::signal_io06, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_06_lpspi3_pcs3, PinId::GPIO_AD_B0_06, PeripheralId::LPSPI3, SignalId::signal_pcs3, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_07_gpio1_io07, PinId::GPIO_AD_B0_07, PeripheralId::GPIO1, SignalId::signal_io07, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_08_gpio1_io08, PinId::GPIO_AD_B0_08, PeripheralId::GPIO1, SignalId::signal_io08, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_09_gpio1_io09, PinId::GPIO_AD_B0_09, PeripheralId::GPIO1, SignalId::signal_io09, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_10_gpio1_io10, PinId::GPIO_AD_B0_10, PeripheralId::GPIO1, SignalId::signal_io10, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_11_gpio1_io11, PinId::GPIO_AD_B0_11, PeripheralId::GPIO1, SignalId::signal_io11, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_12_gpio1_io12, PinId::GPIO_AD_B0_12, PeripheralId::GPIO1, SignalId::signal_io12, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_12_lpuart1_tx, PinId::GPIO_AD_B0_12, PeripheralId::LPUART1, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_13_gpio1_io13, PinId::GPIO_AD_B0_13, PeripheralId::GPIO1, SignalId::signal_io13, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_13_lpuart1_rx, PinId::GPIO_AD_B0_13, PeripheralId::LPUART1, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_14_gpio1_io14, PinId::GPIO_AD_B0_14, PeripheralId::GPIO1, SignalId::signal_io14, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_14_lpuart1_cts_b, PinId::GPIO_AD_B0_14, PeripheralId::LPUART1, SignalId::signal_cts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_15_gpio1_io15, PinId::GPIO_AD_B0_15, PeripheralId::GPIO1, SignalId::signal_io15, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b0_15_lpuart1_rts_b, PinId::GPIO_AD_B0_15, PeripheralId::LPUART1, SignalId::signal_rts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_00_gpio1_io16, PinId::GPIO_AD_B1_00, PeripheralId::GPIO1, SignalId::signal_io16, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_00_lpuart2_cts_b, PinId::GPIO_AD_B1_00, PeripheralId::LPUART2, SignalId::signal_cts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_01_gpio1_io17, PinId::GPIO_AD_B1_01, PeripheralId::GPIO1, SignalId::signal_io17, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_01_lpuart2_rts_b, PinId::GPIO_AD_B1_01, PeripheralId::LPUART2, SignalId::signal_rts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_02_gpio1_io18, PinId::GPIO_AD_B1_02, PeripheralId::GPIO1, SignalId::signal_io18, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_02_lpuart2_tx, PinId::GPIO_AD_B1_02, PeripheralId::LPUART2, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_03_gpio1_io19, PinId::GPIO_AD_B1_03, PeripheralId::GPIO1, SignalId::signal_io19, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_03_lpuart2_rx, PinId::GPIO_AD_B1_03, PeripheralId::LPUART2, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_04_gpio1_io20, PinId::GPIO_AD_B1_04, PeripheralId::GPIO1, SignalId::signal_io20, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_04_lpuart3_cts_b, PinId::GPIO_AD_B1_04, PeripheralId::LPUART3, SignalId::signal_cts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_05_gpio1_io21, PinId::GPIO_AD_B1_05, PeripheralId::GPIO1, SignalId::signal_io21, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_05_lpuart3_rts_b, PinId::GPIO_AD_B1_05, PeripheralId::LPUART3, SignalId::signal_rts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_06_gpio1_io22, PinId::GPIO_AD_B1_06, PeripheralId::GPIO1, SignalId::signal_io22, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_06_lpuart3_tx, PinId::GPIO_AD_B1_06, PeripheralId::LPUART3, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_07_gpio1_io23, PinId::GPIO_AD_B1_07, PeripheralId::GPIO1, SignalId::signal_io23, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_07_lpuart3_rx, PinId::GPIO_AD_B1_07, PeripheralId::LPUART3, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_08_gpio1_io24, PinId::GPIO_AD_B1_08, PeripheralId::GPIO1, SignalId::signal_io24, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_09_gpio1_io25, PinId::GPIO_AD_B1_09, PeripheralId::GPIO1, SignalId::signal_io25, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_10_gpio1_io26, PinId::GPIO_AD_B1_10, PeripheralId::GPIO1, SignalId::signal_io26, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_10_lpuart8_tx, PinId::GPIO_AD_B1_10, PeripheralId::LPUART8, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_11_gpio1_io27, PinId::GPIO_AD_B1_11, PeripheralId::GPIO1, SignalId::signal_io27, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_11_lpuart8_rx, PinId::GPIO_AD_B1_11, PeripheralId::LPUART8, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_12_gpio1_io28, PinId::GPIO_AD_B1_12, PeripheralId::GPIO1, SignalId::signal_io28, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_12_lpspi3_pcs0, PinId::GPIO_AD_B1_12, PeripheralId::LPSPI3, SignalId::signal_pcs0, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_13_gpio1_io29, PinId::GPIO_AD_B1_13, PeripheralId::GPIO1, SignalId::signal_io29, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_13_lpspi3_sdi, PinId::GPIO_AD_B1_13, PeripheralId::LPSPI3, SignalId::signal_sdi, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_14_gpio1_io30, PinId::GPIO_AD_B1_14, PeripheralId::GPIO1, SignalId::signal_io30, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_14_lpspi3_sdo, PinId::GPIO_AD_B1_14, PeripheralId::LPSPI3, SignalId::signal_sdo, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_15_gpio1_io31, PinId::GPIO_AD_B1_15, PeripheralId::GPIO1, SignalId::signal_io31, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_ad_b1_15_lpspi3_sck, PinId::GPIO_AD_B1_15, PeripheralId::LPSPI3, SignalId::signal_sck, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_00_gpio2_io00, PinId::GPIO_B0_00, PeripheralId::GPIO2, SignalId::signal_io00, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_00_lpspi4_pcs0, PinId::GPIO_B0_00, PeripheralId::LPSPI4, SignalId::signal_pcs0, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_01_gpio2_io01, PinId::GPIO_B0_01, PeripheralId::GPIO2, SignalId::signal_io01, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_01_lpspi4_sdi, PinId::GPIO_B0_01, PeripheralId::LPSPI4, SignalId::signal_sdi, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_02_gpio2_io02, PinId::GPIO_B0_02, PeripheralId::GPIO2, SignalId::signal_io02, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_02_lpspi4_sdo, PinId::GPIO_B0_02, PeripheralId::LPSPI4, SignalId::signal_sdo, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_03_gpio2_io03, PinId::GPIO_B0_03, PeripheralId::GPIO2, SignalId::signal_io03, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_03_lpspi4_sck, PinId::GPIO_B0_03, PeripheralId::LPSPI4, SignalId::signal_sck, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_04_gpio2_io04, PinId::GPIO_B0_04, PeripheralId::GPIO2, SignalId::signal_io04, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_05_gpio2_io05, PinId::GPIO_B0_05, PeripheralId::GPIO2, SignalId::signal_io05, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_06_gpio2_io06, PinId::GPIO_B0_06, PeripheralId::GPIO2, SignalId::signal_io06, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_07_gpio2_io07, PinId::GPIO_B0_07, PeripheralId::GPIO2, SignalId::signal_io07, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_08_gpio2_io08, PinId::GPIO_B0_08, PeripheralId::GPIO2, SignalId::signal_io08, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_08_lpuart3_tx, PinId::GPIO_B0_08, PeripheralId::LPUART3, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_09_gpio2_io09, PinId::GPIO_B0_09, PeripheralId::GPIO2, SignalId::signal_io09, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_09_lpuart3_rx, PinId::GPIO_B0_09, PeripheralId::LPUART3, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_10_gpio2_io10, PinId::GPIO_B0_10, PeripheralId::GPIO2, SignalId::signal_io10, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_11_gpio2_io11, PinId::GPIO_B0_11, PeripheralId::GPIO2, SignalId::signal_io11, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_12_gpio2_io12, PinId::GPIO_B0_12, PeripheralId::GPIO2, SignalId::signal_io12, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_13_gpio2_io13, PinId::GPIO_B0_13, PeripheralId::GPIO2, SignalId::signal_io13, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_14_gpio2_io14, PinId::GPIO_B0_14, PeripheralId::GPIO2, SignalId::signal_io14, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b0_15_gpio2_io15, PinId::GPIO_B0_15, PeripheralId::GPIO2, SignalId::signal_io15, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_00_gpio2_io16, PinId::GPIO_B1_00, PeripheralId::GPIO2, SignalId::signal_io16, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_00_lpuart4_tx, PinId::GPIO_B1_00, PeripheralId::LPUART4, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_01_gpio2_io17, PinId::GPIO_B1_01, PeripheralId::GPIO2, SignalId::signal_io17, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_01_lpuart4_rx, PinId::GPIO_B1_01, PeripheralId::LPUART4, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_02_gpio2_io18, PinId::GPIO_B1_02, PeripheralId::GPIO2, SignalId::signal_io18, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_02_lpspi4_pcs2, PinId::GPIO_B1_02, PeripheralId::LPSPI4, SignalId::signal_pcs2, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_03_gpio2_io19, PinId::GPIO_B1_03, PeripheralId::GPIO2, SignalId::signal_io19, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_03_lpspi4_pcs1, PinId::GPIO_B1_03, PeripheralId::LPSPI4, SignalId::signal_pcs1, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_04_gpio2_io20, PinId::GPIO_B1_04, PeripheralId::GPIO2, SignalId::signal_io20, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_04_lpspi4_pcs0, PinId::GPIO_B1_04, PeripheralId::LPSPI4, SignalId::signal_pcs0, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_05_gpio2_io21, PinId::GPIO_B1_05, PeripheralId::GPIO2, SignalId::signal_io21, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_05_lpspi4_sdi, PinId::GPIO_B1_05, PeripheralId::LPSPI4, SignalId::signal_sdi, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_06_gpio2_io22, PinId::GPIO_B1_06, PeripheralId::GPIO2, SignalId::signal_io22, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_06_lpspi4_sdo, PinId::GPIO_B1_06, PeripheralId::LPSPI4, SignalId::signal_sdo, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_07_gpio2_io23, PinId::GPIO_B1_07, PeripheralId::GPIO2, SignalId::signal_io23, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_07_lpspi4_sck, PinId::GPIO_B1_07, PeripheralId::LPSPI4, SignalId::signal_sck, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_08_gpio2_io24, PinId::GPIO_B1_08, PeripheralId::GPIO2, SignalId::signal_io24, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_09_gpio2_io25, PinId::GPIO_B1_09, PeripheralId::GPIO2, SignalId::signal_io25, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_10_gpio2_io26, PinId::GPIO_B1_10, PeripheralId::GPIO2, SignalId::signal_io26, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_11_gpio2_io27, PinId::GPIO_B1_11, PeripheralId::GPIO2, SignalId::signal_io27, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_11_lpspi4_pcs3, PinId::GPIO_B1_11, PeripheralId::LPSPI4, SignalId::signal_pcs3, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_12_gpio2_io28, PinId::GPIO_B1_12, PeripheralId::GPIO2, SignalId::signal_io28, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_12_lpuart5_tx, PinId::GPIO_B1_12, PeripheralId::LPUART5, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_13_gpio2_io29, PinId::GPIO_B1_13, PeripheralId::GPIO2, SignalId::signal_io29, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_13_lpuart5_rx, PinId::GPIO_B1_13, PeripheralId::LPUART5, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_14_gpio2_io30, PinId::GPIO_B1_14, PeripheralId::GPIO2, SignalId::signal_io30, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_b1_15_gpio2_io31, PinId::GPIO_B1_15, PeripheralId::GPIO2, SignalId::signal_io31, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_00_gpio4_io00, PinId::GPIO_EMC_00, PeripheralId::GPIO4, SignalId::signal_io00, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_00_lpspi2_sck, PinId::GPIO_EMC_00, PeripheralId::LPSPI2, SignalId::signal_sck, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_01_gpio4_io01, PinId::GPIO_EMC_01, PeripheralId::GPIO4, SignalId::signal_io01, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_01_lpspi2_pcs0, PinId::GPIO_EMC_01, PeripheralId::LPSPI2, SignalId::signal_pcs0, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_02_gpio4_io02, PinId::GPIO_EMC_02, PeripheralId::GPIO4, SignalId::signal_io02, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_02_lpspi2_sdo, PinId::GPIO_EMC_02, PeripheralId::LPSPI2, SignalId::signal_sdo, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_03_gpio4_io03, PinId::GPIO_EMC_03, PeripheralId::GPIO4, SignalId::signal_io03, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_03_lpspi2_sdi, PinId::GPIO_EMC_03, PeripheralId::LPSPI2, SignalId::signal_sdi, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_04_gpio4_io04, PinId::GPIO_EMC_04, PeripheralId::GPIO4, SignalId::signal_io04, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_05_gpio4_io05, PinId::GPIO_EMC_05, PeripheralId::GPIO4, SignalId::signal_io05, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_06_gpio4_io06, PinId::GPIO_EMC_06, PeripheralId::GPIO4, SignalId::signal_io06, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_07_gpio4_io07, PinId::GPIO_EMC_07, PeripheralId::GPIO4, SignalId::signal_io07, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_08_gpio4_io08, PinId::GPIO_EMC_08, PeripheralId::GPIO4, SignalId::signal_io08, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_09_gpio4_io09, PinId::GPIO_EMC_09, PeripheralId::GPIO4, SignalId::signal_io09, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_10_gpio4_io10, PinId::GPIO_EMC_10, PeripheralId::GPIO4, SignalId::signal_io10, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_11_gpio4_io11, PinId::GPIO_EMC_11, PeripheralId::GPIO4, SignalId::signal_io11, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_12_gpio4_io12, PinId::GPIO_EMC_12, PeripheralId::GPIO4, SignalId::signal_io12, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_13_gpio4_io13, PinId::GPIO_EMC_13, PeripheralId::GPIO4, SignalId::signal_io13, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_13_lpuart3_tx, PinId::GPIO_EMC_13, PeripheralId::LPUART3, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_14_gpio4_io14, PinId::GPIO_EMC_14, PeripheralId::GPIO4, SignalId::signal_io14, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_14_lpspi2_pcs1, PinId::GPIO_EMC_14, PeripheralId::LPSPI2, SignalId::signal_pcs1, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_14_lpuart3_rx, PinId::GPIO_EMC_14, PeripheralId::LPUART3, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_15_gpio4_io15, PinId::GPIO_EMC_15, PeripheralId::GPIO4, SignalId::signal_io15, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_15_lpuart3_cts_b, PinId::GPIO_EMC_15, PeripheralId::LPUART3, SignalId::signal_cts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_16_gpio4_io16, PinId::GPIO_EMC_16, PeripheralId::GPIO4, SignalId::signal_io16, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_16_lpuart3_rts_b, PinId::GPIO_EMC_16, PeripheralId::LPUART3, SignalId::signal_rts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_17_gpio4_io17, PinId::GPIO_EMC_17, PeripheralId::GPIO4, SignalId::signal_io17, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_17_lpuart4_cts_b, PinId::GPIO_EMC_17, PeripheralId::LPUART4, SignalId::signal_cts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_18_gpio4_io18, PinId::GPIO_EMC_18, PeripheralId::GPIO4, SignalId::signal_io18, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_18_lpuart4_rts_b, PinId::GPIO_EMC_18, PeripheralId::LPUART4, SignalId::signal_rts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_19_gpio4_io19, PinId::GPIO_EMC_19, PeripheralId::GPIO4, SignalId::signal_io19, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_19_lpuart4_tx, PinId::GPIO_EMC_19, PeripheralId::LPUART4, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_20_gpio4_io20, PinId::GPIO_EMC_20, PeripheralId::GPIO4, SignalId::signal_io20, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_20_lpuart4_rx, PinId::GPIO_EMC_20, PeripheralId::LPUART4, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_21_gpio4_io21, PinId::GPIO_EMC_21, PeripheralId::GPIO4, SignalId::signal_io21, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_22_gpio4_io22, PinId::GPIO_EMC_22, PeripheralId::GPIO4, SignalId::signal_io22, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_23_gpio4_io23, PinId::GPIO_EMC_23, PeripheralId::GPIO4, SignalId::signal_io23, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_23_lpuart5_tx, PinId::GPIO_EMC_23, PeripheralId::LPUART5, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_24_gpio4_io24, PinId::GPIO_EMC_24, PeripheralId::GPIO4, SignalId::signal_io24, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_24_lpuart5_rx, PinId::GPIO_EMC_24, PeripheralId::LPUART5, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_25_gpio4_io25, PinId::GPIO_EMC_25, PeripheralId::GPIO4, SignalId::signal_io25, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_25_lpuart6_tx, PinId::GPIO_EMC_25, PeripheralId::LPUART6, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_26_gpio4_io26, PinId::GPIO_EMC_26, PeripheralId::GPIO4, SignalId::signal_io26, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_26_lpuart6_rx, PinId::GPIO_EMC_26, PeripheralId::LPUART6, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_27_gpio4_io27, PinId::GPIO_EMC_27, PeripheralId::GPIO4, SignalId::signal_io27, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_27_lpspi1_sck, PinId::GPIO_EMC_27, PeripheralId::LPSPI1, SignalId::signal_sck, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_27_lpuart5_rts_b, PinId::GPIO_EMC_27, PeripheralId::LPUART5, SignalId::signal_rts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_28_gpio4_io28, PinId::GPIO_EMC_28, PeripheralId::GPIO4, SignalId::signal_io28, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_28_lpspi1_sdo, PinId::GPIO_EMC_28, PeripheralId::LPSPI1, SignalId::signal_sdo, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_28_lpuart5_cts_b, PinId::GPIO_EMC_28, PeripheralId::LPUART5, SignalId::signal_cts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_29_gpio4_io29, PinId::GPIO_EMC_29, PeripheralId::GPIO4, SignalId::signal_io29, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_29_lpspi1_sdi, PinId::GPIO_EMC_29, PeripheralId::LPSPI1, SignalId::signal_sdi, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_29_lpuart6_rts_b, PinId::GPIO_EMC_29, PeripheralId::LPUART6, SignalId::signal_rts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_30_gpio4_io30, PinId::GPIO_EMC_30, PeripheralId::GPIO4, SignalId::signal_io30, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_30_lpspi1_pcs0, PinId::GPIO_EMC_30, PeripheralId::LPSPI1, SignalId::signal_pcs0, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_30_lpuart6_cts_b, PinId::GPIO_EMC_30, PeripheralId::LPUART6, SignalId::signal_cts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_31_gpio4_io31, PinId::GPIO_EMC_31, PeripheralId::GPIO4, SignalId::signal_io31, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_31_lpspi1_pcs1, PinId::GPIO_EMC_31, PeripheralId::LPSPI1, SignalId::signal_pcs1, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_31_lpuart7_tx, PinId::GPIO_EMC_31, PeripheralId::LPUART7, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_32_gpio3_io18, PinId::GPIO_EMC_32, PeripheralId::GPIO3, SignalId::signal_io18, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_32_lpuart7_rx, PinId::GPIO_EMC_32, PeripheralId::LPUART7, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_33_gpio3_io19, PinId::GPIO_EMC_33, PeripheralId::GPIO3, SignalId::signal_io19, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_34_gpio3_io20, PinId::GPIO_EMC_34, PeripheralId::GPIO3, SignalId::signal_io20, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_35_gpio3_io21, PinId::GPIO_EMC_35, PeripheralId::GPIO3, SignalId::signal_io21, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_36_gpio3_io22, PinId::GPIO_EMC_36, PeripheralId::GPIO3, SignalId::signal_io22, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_37_gpio3_io23, PinId::GPIO_EMC_37, PeripheralId::GPIO3, SignalId::signal_io23, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_38_gpio3_io24, PinId::GPIO_EMC_38, PeripheralId::GPIO3, SignalId::signal_io24, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_38_lpuart8_tx, PinId::GPIO_EMC_38, PeripheralId::LPUART8, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_39_gpio3_io25, PinId::GPIO_EMC_39, PeripheralId::GPIO3, SignalId::signal_io25, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_39_lpuart8_rx, PinId::GPIO_EMC_39, PeripheralId::LPUART8, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_40_gpio3_io26, PinId::GPIO_EMC_40, PeripheralId::GPIO3, SignalId::signal_io26, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_40_lpspi1_pcs2, PinId::GPIO_EMC_40, PeripheralId::LPSPI1, SignalId::signal_pcs2, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_41_gpio3_io27, PinId::GPIO_EMC_41, PeripheralId::GPIO3, SignalId::signal_io27, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_emc_41_lpspi1_pcs3, PinId::GPIO_EMC_41, PeripheralId::LPSPI1, SignalId::signal_pcs3, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_00_gpio3_io12, PinId::GPIO_SD_B0_00, PeripheralId::GPIO3, SignalId::signal_io12, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_00_lpspi1_sck, PinId::GPIO_SD_B0_00, PeripheralId::LPSPI1, SignalId::signal_sck, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_01_gpio3_io13, PinId::GPIO_SD_B0_01, PeripheralId::GPIO3, SignalId::signal_io13, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_01_lpspi1_pcs0, PinId::GPIO_SD_B0_01, PeripheralId::LPSPI1, SignalId::signal_pcs0, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_02_gpio3_io14, PinId::GPIO_SD_B0_02, PeripheralId::GPIO3, SignalId::signal_io14, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_02_lpspi1_sdo, PinId::GPIO_SD_B0_02, PeripheralId::LPSPI1, SignalId::signal_sdo, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_02_lpuart8_cts_b, PinId::GPIO_SD_B0_02, PeripheralId::LPUART8, SignalId::signal_cts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_03_gpio3_io15, PinId::GPIO_SD_B0_03, PeripheralId::GPIO3, SignalId::signal_io15, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_03_lpspi1_sdi, PinId::GPIO_SD_B0_03, PeripheralId::LPSPI1, SignalId::signal_sdi, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_03_lpuart8_rts_b, PinId::GPIO_SD_B0_03, PeripheralId::LPUART8, SignalId::signal_rts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_04_gpio3_io16, PinId::GPIO_SD_B0_04, PeripheralId::GPIO3, SignalId::signal_io16, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_04_lpuart8_tx, PinId::GPIO_SD_B0_04, PeripheralId::LPUART8, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_05_gpio3_io17, PinId::GPIO_SD_B0_05, PeripheralId::GPIO3, SignalId::signal_io17, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b0_05_lpuart8_rx, PinId::GPIO_SD_B0_05, PeripheralId::LPUART8, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_00_gpio3_io00, PinId::GPIO_SD_B1_00, PeripheralId::GPIO3, SignalId::signal_io00, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_00_lpuart4_tx, PinId::GPIO_SD_B1_00, PeripheralId::LPUART4, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_01_gpio3_io01, PinId::GPIO_SD_B1_01, PeripheralId::GPIO3, SignalId::signal_io01, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_01_lpuart4_rx, PinId::GPIO_SD_B1_01, PeripheralId::LPUART4, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_02_gpio3_io02, PinId::GPIO_SD_B1_02, PeripheralId::GPIO3, SignalId::signal_io02, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_03_gpio3_io03, PinId::GPIO_SD_B1_03, PeripheralId::GPIO3, SignalId::signal_io03, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_04_gpio3_io04, PinId::GPIO_SD_B1_04, PeripheralId::GPIO3, SignalId::signal_io04, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_05_gpio3_io05, PinId::GPIO_SD_B1_05, PeripheralId::GPIO3, SignalId::signal_io05, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_06_gpio3_io06, PinId::GPIO_SD_B1_06, PeripheralId::GPIO3, SignalId::signal_io06, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_06_lpspi2_pcs0, PinId::GPIO_SD_B1_06, PeripheralId::LPSPI2, SignalId::signal_pcs0, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_06_lpuart7_cts_b, PinId::GPIO_SD_B1_06, PeripheralId::LPUART7, SignalId::signal_cts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_07_gpio3_io07, PinId::GPIO_SD_B1_07, PeripheralId::GPIO3, SignalId::signal_io07, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_07_lpspi2_sck, PinId::GPIO_SD_B1_07, PeripheralId::LPSPI2, SignalId::signal_sck, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_07_lpuart7_rts_b, PinId::GPIO_SD_B1_07, PeripheralId::LPUART7, SignalId::signal_rts_b, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_08_gpio3_io08, PinId::GPIO_SD_B1_08, PeripheralId::GPIO3, SignalId::signal_io08, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_08_lpspi2_sd0, PinId::GPIO_SD_B1_08, PeripheralId::LPSPI2, SignalId::signal_sd0, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_08_lpuart7_tx, PinId::GPIO_SD_B1_08, PeripheralId::LPUART7, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_09_gpio3_io09, PinId::GPIO_SD_B1_09, PeripheralId::GPIO3, SignalId::signal_io09, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_09_lpspi2_sdi, PinId::GPIO_SD_B1_09, PeripheralId::LPSPI2, SignalId::signal_sdi, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_09_lpuart7_rx, PinId::GPIO_SD_B1_09, PeripheralId::LPUART7, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_10_gpio3_io10, PinId::GPIO_SD_B1_10, PeripheralId::GPIO3, SignalId::signal_io10, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_10_lpspi2_pcs2, PinId::GPIO_SD_B1_10, PeripheralId::LPSPI2, SignalId::signal_pcs2, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_10_lpuart2_rx, PinId::GPIO_SD_B1_10, PeripheralId::LPUART2, SignalId::signal_rx, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_11_gpio3_io11, PinId::GPIO_SD_B1_11, PeripheralId::GPIO3, SignalId::signal_io11, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_11_lpspi2_pcs3, PinId::GPIO_SD_B1_11, PeripheralId::LPSPI2, SignalId::signal_pcs3, RouteKindId::route_kind_iomuxc_mux},
  {RouteId::candidate_gpio_sd_b1_11_lpuart2_tx, PinId::GPIO_SD_B1_11, PeripheralId::LPUART2, SignalId::signal_tx, RouteKindId::route_kind_iomuxc_mux},
}};

template<PinId Pin, PeripheralId Peripheral, SignalId Signal>
inline auto apply_route() noexcept -> void {
  static_assert(RouteTraits<Pin, Peripheral, Signal>::kPresent, "");
}

enum class ConnectionGroupId : std::uint16_t {
  none,
  group_gpio1_bga196_all_signals,
  group_gpio2_bga196_all_signals,
  group_gpio3_bga196_all_signals,
  group_gpio4_bga196_all_signals,
  group_lpspi1_bga196_sck_cs,
  group_lpspi2_bga196_sck_cs,
  group_lpspi3_bga196_sck_cs,
  group_lpspi4_bga196_sck_cs,
  group_lpuart1_bga196_tx_rx,
  group_lpuart1_bga196_tx_rx_cts_rts,
  group_lpuart2_bga196_tx_rx,
  group_lpuart2_bga196_tx_rx_cts_rts,
  group_lpuart3_bga196_tx_rx,
  group_lpuart3_bga196_tx_rx_cts_rts,
  group_lpuart4_bga196_tx_rx,
  group_lpuart4_bga196_tx_rx_cts_rts,
  group_lpuart5_bga196_tx_rx,
  group_lpuart5_bga196_tx_rx_cts_rts,
  group_lpuart6_bga196_tx_rx,
  group_lpuart6_bga196_tx_rx_cts_rts,
  group_lpuart7_bga196_tx_rx,
  group_lpuart7_bga196_tx_rx_cts_rts,
  group_lpuart8_bga196_tx_rx,
  group_lpuart8_bga196_tx_rx_cts_rts,
};

template<PeripheralId Peripheral, SignalId... Signals>
struct ConnectionGroupTraits {
  static constexpr bool kPresent = false;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::none;
  static constexpr std::array<RouteId, 0> kRoutes = {};
};

template<>
struct ConnectionGroupTraits<PeripheralId::GPIO1, SignalId::signal_io00, SignalId::signal_io01, SignalId::signal_io02, SignalId::signal_io03, SignalId::signal_io04, SignalId::signal_io05, SignalId::signal_io06, SignalId::signal_io07, SignalId::signal_io08, SignalId::signal_io09, SignalId::signal_io10, SignalId::signal_io11, SignalId::signal_io12, SignalId::signal_io13, SignalId::signal_io14, SignalId::signal_io15, SignalId::signal_io16, SignalId::signal_io17, SignalId::signal_io18, SignalId::signal_io19, SignalId::signal_io20, SignalId::signal_io21, SignalId::signal_io22, SignalId::signal_io23, SignalId::signal_io24, SignalId::signal_io25, SignalId::signal_io26, SignalId::signal_io27, SignalId::signal_io28, SignalId::signal_io29, SignalId::signal_io30, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_gpio1_bga196_all_signals;
  static constexpr std::array<RouteId, 32> kRoutes = {{
    RouteId::candidate_gpio_ad_b0_00_gpio1_io00,
    RouteId::candidate_gpio_ad_b0_01_gpio1_io01,
    RouteId::candidate_gpio_ad_b0_02_gpio1_io02,
    RouteId::candidate_gpio_ad_b0_03_gpio1_io03,
    RouteId::candidate_gpio_ad_b0_04_gpio1_io04,
    RouteId::candidate_gpio_ad_b0_05_gpio1_io05,
    RouteId::candidate_gpio_ad_b0_06_gpio1_io06,
    RouteId::candidate_gpio_ad_b0_07_gpio1_io07,
    RouteId::candidate_gpio_ad_b0_08_gpio1_io08,
    RouteId::candidate_gpio_ad_b0_09_gpio1_io09,
    RouteId::candidate_gpio_ad_b0_10_gpio1_io10,
    RouteId::candidate_gpio_ad_b0_11_gpio1_io11,
    RouteId::candidate_gpio_ad_b0_12_gpio1_io12,
    RouteId::candidate_gpio_ad_b0_13_gpio1_io13,
    RouteId::candidate_gpio_ad_b0_14_gpio1_io14,
    RouteId::candidate_gpio_ad_b0_15_gpio1_io15,
    RouteId::candidate_gpio_ad_b1_00_gpio1_io16,
    RouteId::candidate_gpio_ad_b1_01_gpio1_io17,
    RouteId::candidate_gpio_ad_b1_02_gpio1_io18,
    RouteId::candidate_gpio_ad_b1_03_gpio1_io19,
    RouteId::candidate_gpio_ad_b1_04_gpio1_io20,
    RouteId::candidate_gpio_ad_b1_05_gpio1_io21,
    RouteId::candidate_gpio_ad_b1_06_gpio1_io22,
    RouteId::candidate_gpio_ad_b1_07_gpio1_io23,
    RouteId::candidate_gpio_ad_b1_08_gpio1_io24,
    RouteId::candidate_gpio_ad_b1_09_gpio1_io25,
    RouteId::candidate_gpio_ad_b1_10_gpio1_io26,
    RouteId::candidate_gpio_ad_b1_11_gpio1_io27,
    RouteId::candidate_gpio_ad_b1_12_gpio1_io28,
    RouteId::candidate_gpio_ad_b1_13_gpio1_io29,
    RouteId::candidate_gpio_ad_b1_14_gpio1_io30,
    RouteId::candidate_gpio_ad_b1_15_gpio1_io31,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::GPIO2, SignalId::signal_io00, SignalId::signal_io01, SignalId::signal_io02, SignalId::signal_io03, SignalId::signal_io04, SignalId::signal_io05, SignalId::signal_io06, SignalId::signal_io07, SignalId::signal_io08, SignalId::signal_io09, SignalId::signal_io10, SignalId::signal_io11, SignalId::signal_io12, SignalId::signal_io13, SignalId::signal_io14, SignalId::signal_io15, SignalId::signal_io16, SignalId::signal_io17, SignalId::signal_io18, SignalId::signal_io19, SignalId::signal_io20, SignalId::signal_io21, SignalId::signal_io22, SignalId::signal_io23, SignalId::signal_io24, SignalId::signal_io25, SignalId::signal_io26, SignalId::signal_io27, SignalId::signal_io28, SignalId::signal_io29, SignalId::signal_io30, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_gpio2_bga196_all_signals;
  static constexpr std::array<RouteId, 32> kRoutes = {{
    RouteId::candidate_gpio_b0_00_gpio2_io00,
    RouteId::candidate_gpio_b0_01_gpio2_io01,
    RouteId::candidate_gpio_b0_02_gpio2_io02,
    RouteId::candidate_gpio_b0_03_gpio2_io03,
    RouteId::candidate_gpio_b0_04_gpio2_io04,
    RouteId::candidate_gpio_b0_05_gpio2_io05,
    RouteId::candidate_gpio_b0_06_gpio2_io06,
    RouteId::candidate_gpio_b0_07_gpio2_io07,
    RouteId::candidate_gpio_b0_08_gpio2_io08,
    RouteId::candidate_gpio_b0_09_gpio2_io09,
    RouteId::candidate_gpio_b0_10_gpio2_io10,
    RouteId::candidate_gpio_b0_11_gpio2_io11,
    RouteId::candidate_gpio_b0_12_gpio2_io12,
    RouteId::candidate_gpio_b0_13_gpio2_io13,
    RouteId::candidate_gpio_b0_14_gpio2_io14,
    RouteId::candidate_gpio_b0_15_gpio2_io15,
    RouteId::candidate_gpio_b1_00_gpio2_io16,
    RouteId::candidate_gpio_b1_01_gpio2_io17,
    RouteId::candidate_gpio_b1_02_gpio2_io18,
    RouteId::candidate_gpio_b1_03_gpio2_io19,
    RouteId::candidate_gpio_b1_04_gpio2_io20,
    RouteId::candidate_gpio_b1_05_gpio2_io21,
    RouteId::candidate_gpio_b1_06_gpio2_io22,
    RouteId::candidate_gpio_b1_07_gpio2_io23,
    RouteId::candidate_gpio_b1_08_gpio2_io24,
    RouteId::candidate_gpio_b1_09_gpio2_io25,
    RouteId::candidate_gpio_b1_10_gpio2_io26,
    RouteId::candidate_gpio_b1_11_gpio2_io27,
    RouteId::candidate_gpio_b1_12_gpio2_io28,
    RouteId::candidate_gpio_b1_13_gpio2_io29,
    RouteId::candidate_gpio_b1_14_gpio2_io30,
    RouteId::candidate_gpio_b1_15_gpio2_io31,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::GPIO3, SignalId::signal_io00, SignalId::signal_io01, SignalId::signal_io02, SignalId::signal_io03, SignalId::signal_io04, SignalId::signal_io05, SignalId::signal_io06, SignalId::signal_io07, SignalId::signal_io08, SignalId::signal_io09, SignalId::signal_io10, SignalId::signal_io11, SignalId::signal_io12, SignalId::signal_io13, SignalId::signal_io14, SignalId::signal_io15, SignalId::signal_io16, SignalId::signal_io17, SignalId::signal_io18, SignalId::signal_io19, SignalId::signal_io20, SignalId::signal_io21, SignalId::signal_io22, SignalId::signal_io23, SignalId::signal_io24, SignalId::signal_io25, SignalId::signal_io26, SignalId::signal_io27> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_gpio3_bga196_all_signals;
  static constexpr std::array<RouteId, 28> kRoutes = {{
    RouteId::candidate_gpio_emc_32_gpio3_io18,
    RouteId::candidate_gpio_emc_33_gpio3_io19,
    RouteId::candidate_gpio_emc_34_gpio3_io20,
    RouteId::candidate_gpio_emc_35_gpio3_io21,
    RouteId::candidate_gpio_emc_36_gpio3_io22,
    RouteId::candidate_gpio_emc_37_gpio3_io23,
    RouteId::candidate_gpio_emc_38_gpio3_io24,
    RouteId::candidate_gpio_emc_39_gpio3_io25,
    RouteId::candidate_gpio_emc_40_gpio3_io26,
    RouteId::candidate_gpio_emc_41_gpio3_io27,
    RouteId::candidate_gpio_sd_b0_00_gpio3_io12,
    RouteId::candidate_gpio_sd_b0_01_gpio3_io13,
    RouteId::candidate_gpio_sd_b0_02_gpio3_io14,
    RouteId::candidate_gpio_sd_b0_03_gpio3_io15,
    RouteId::candidate_gpio_sd_b0_04_gpio3_io16,
    RouteId::candidate_gpio_sd_b0_05_gpio3_io17,
    RouteId::candidate_gpio_sd_b1_00_gpio3_io00,
    RouteId::candidate_gpio_sd_b1_01_gpio3_io01,
    RouteId::candidate_gpio_sd_b1_02_gpio3_io02,
    RouteId::candidate_gpio_sd_b1_03_gpio3_io03,
    RouteId::candidate_gpio_sd_b1_04_gpio3_io04,
    RouteId::candidate_gpio_sd_b1_05_gpio3_io05,
    RouteId::candidate_gpio_sd_b1_06_gpio3_io06,
    RouteId::candidate_gpio_sd_b1_07_gpio3_io07,
    RouteId::candidate_gpio_sd_b1_08_gpio3_io08,
    RouteId::candidate_gpio_sd_b1_09_gpio3_io09,
    RouteId::candidate_gpio_sd_b1_10_gpio3_io10,
    RouteId::candidate_gpio_sd_b1_11_gpio3_io11,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::GPIO4, SignalId::signal_io00, SignalId::signal_io01, SignalId::signal_io02, SignalId::signal_io03, SignalId::signal_io04, SignalId::signal_io05, SignalId::signal_io06, SignalId::signal_io07, SignalId::signal_io08, SignalId::signal_io09, SignalId::signal_io10, SignalId::signal_io11, SignalId::signal_io12, SignalId::signal_io13, SignalId::signal_io14, SignalId::signal_io15, SignalId::signal_io16, SignalId::signal_io17, SignalId::signal_io18, SignalId::signal_io19, SignalId::signal_io20, SignalId::signal_io21, SignalId::signal_io22, SignalId::signal_io23, SignalId::signal_io24, SignalId::signal_io25, SignalId::signal_io26, SignalId::signal_io27, SignalId::signal_io28, SignalId::signal_io29, SignalId::signal_io30, SignalId::signal_io31> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_gpio4_bga196_all_signals;
  static constexpr std::array<RouteId, 32> kRoutes = {{
    RouteId::candidate_gpio_emc_00_gpio4_io00,
    RouteId::candidate_gpio_emc_01_gpio4_io01,
    RouteId::candidate_gpio_emc_02_gpio4_io02,
    RouteId::candidate_gpio_emc_03_gpio4_io03,
    RouteId::candidate_gpio_emc_04_gpio4_io04,
    RouteId::candidate_gpio_emc_05_gpio4_io05,
    RouteId::candidate_gpio_emc_06_gpio4_io06,
    RouteId::candidate_gpio_emc_07_gpio4_io07,
    RouteId::candidate_gpio_emc_08_gpio4_io08,
    RouteId::candidate_gpio_emc_09_gpio4_io09,
    RouteId::candidate_gpio_emc_10_gpio4_io10,
    RouteId::candidate_gpio_emc_11_gpio4_io11,
    RouteId::candidate_gpio_emc_12_gpio4_io12,
    RouteId::candidate_gpio_emc_13_gpio4_io13,
    RouteId::candidate_gpio_emc_14_gpio4_io14,
    RouteId::candidate_gpio_emc_15_gpio4_io15,
    RouteId::candidate_gpio_emc_16_gpio4_io16,
    RouteId::candidate_gpio_emc_17_gpio4_io17,
    RouteId::candidate_gpio_emc_18_gpio4_io18,
    RouteId::candidate_gpio_emc_19_gpio4_io19,
    RouteId::candidate_gpio_emc_20_gpio4_io20,
    RouteId::candidate_gpio_emc_21_gpio4_io21,
    RouteId::candidate_gpio_emc_22_gpio4_io22,
    RouteId::candidate_gpio_emc_23_gpio4_io23,
    RouteId::candidate_gpio_emc_24_gpio4_io24,
    RouteId::candidate_gpio_emc_25_gpio4_io25,
    RouteId::candidate_gpio_emc_26_gpio4_io26,
    RouteId::candidate_gpio_emc_27_gpio4_io27,
    RouteId::candidate_gpio_emc_28_gpio4_io28,
    RouteId::candidate_gpio_emc_29_gpio4_io29,
    RouteId::candidate_gpio_emc_30_gpio4_io30,
    RouteId::candidate_gpio_emc_31_gpio4_io31,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPSPI1, SignalId::signal_sck, SignalId::signal_cs> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpspi1_bga196_sck_cs;
  static constexpr std::array<RouteId, 7> kRoutes = {{
    RouteId::candidate_gpio_emc_27_lpspi1_sck,
    RouteId::candidate_gpio_emc_30_lpspi1_pcs0,
    RouteId::candidate_gpio_emc_31_lpspi1_pcs1,
    RouteId::candidate_gpio_emc_40_lpspi1_pcs2,
    RouteId::candidate_gpio_emc_41_lpspi1_pcs3,
    RouteId::candidate_gpio_sd_b0_00_lpspi1_sck,
    RouteId::candidate_gpio_sd_b0_01_lpspi1_pcs0,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPSPI2, SignalId::signal_sck, SignalId::signal_cs> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpspi2_bga196_sck_cs;
  static constexpr std::array<RouteId, 7> kRoutes = {{
    RouteId::candidate_gpio_emc_00_lpspi2_sck,
    RouteId::candidate_gpio_emc_01_lpspi2_pcs0,
    RouteId::candidate_gpio_emc_14_lpspi2_pcs1,
    RouteId::candidate_gpio_sd_b1_06_lpspi2_pcs0,
    RouteId::candidate_gpio_sd_b1_07_lpspi2_sck,
    RouteId::candidate_gpio_sd_b1_10_lpspi2_pcs2,
    RouteId::candidate_gpio_sd_b1_11_lpspi2_pcs3,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPSPI3, SignalId::signal_sck, SignalId::signal_cs> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpspi3_bga196_sck_cs;
  static constexpr std::array<RouteId, 7> kRoutes = {{
    RouteId::candidate_gpio_ad_b0_00_lpspi3_sck,
    RouteId::candidate_gpio_ad_b0_03_lpspi3_pcs0,
    RouteId::candidate_gpio_ad_b0_04_lpspi3_pcs1,
    RouteId::candidate_gpio_ad_b0_05_lpspi3_pcs2,
    RouteId::candidate_gpio_ad_b0_06_lpspi3_pcs3,
    RouteId::candidate_gpio_ad_b1_12_lpspi3_pcs0,
    RouteId::candidate_gpio_ad_b1_15_lpspi3_sck,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPSPI4, SignalId::signal_sck, SignalId::signal_cs> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpspi4_bga196_sck_cs;
  static constexpr std::array<RouteId, 7> kRoutes = {{
    RouteId::candidate_gpio_b0_00_lpspi4_pcs0,
    RouteId::candidate_gpio_b0_03_lpspi4_sck,
    RouteId::candidate_gpio_b1_02_lpspi4_pcs2,
    RouteId::candidate_gpio_b1_03_lpspi4_pcs1,
    RouteId::candidate_gpio_b1_04_lpspi4_pcs0,
    RouteId::candidate_gpio_b1_07_lpspi4_sck,
    RouteId::candidate_gpio_b1_11_lpspi4_pcs3,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART1, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart1_bga196_tx_rx;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_gpio_ad_b0_12_lpuart1_tx,
    RouteId::candidate_gpio_ad_b0_13_lpuart1_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART1, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart1_bga196_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_gpio_ad_b0_12_lpuart1_tx,
    RouteId::candidate_gpio_ad_b0_13_lpuart1_rx,
    RouteId::candidate_gpio_ad_b0_14_lpuart1_cts_b,
    RouteId::candidate_gpio_ad_b0_15_lpuart1_rts_b,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART2, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart2_bga196_tx_rx;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_gpio_ad_b1_02_lpuart2_tx,
    RouteId::candidate_gpio_ad_b1_03_lpuart2_rx,
    RouteId::candidate_gpio_sd_b1_10_lpuart2_rx,
    RouteId::candidate_gpio_sd_b1_11_lpuart2_tx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART2, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart2_bga196_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_gpio_ad_b1_00_lpuart2_cts_b,
    RouteId::candidate_gpio_ad_b1_01_lpuart2_rts_b,
    RouteId::candidate_gpio_ad_b1_02_lpuart2_tx,
    RouteId::candidate_gpio_ad_b1_03_lpuart2_rx,
    RouteId::candidate_gpio_sd_b1_10_lpuart2_rx,
    RouteId::candidate_gpio_sd_b1_11_lpuart2_tx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART3, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_gpio_ad_b1_06_lpuart3_tx,
    RouteId::candidate_gpio_ad_b1_07_lpuart3_rx,
    RouteId::candidate_gpio_b0_08_lpuart3_tx,
    RouteId::candidate_gpio_b0_09_lpuart3_rx,
    RouteId::candidate_gpio_emc_13_lpuart3_tx,
    RouteId::candidate_gpio_emc_14_lpuart3_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART3, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 10> kRoutes = {{
    RouteId::candidate_gpio_ad_b1_04_lpuart3_cts_b,
    RouteId::candidate_gpio_ad_b1_05_lpuart3_rts_b,
    RouteId::candidate_gpio_ad_b1_06_lpuart3_tx,
    RouteId::candidate_gpio_ad_b1_07_lpuart3_rx,
    RouteId::candidate_gpio_b0_08_lpuart3_tx,
    RouteId::candidate_gpio_b0_09_lpuart3_rx,
    RouteId::candidate_gpio_emc_13_lpuart3_tx,
    RouteId::candidate_gpio_emc_14_lpuart3_rx,
    RouteId::candidate_gpio_emc_15_lpuart3_cts_b,
    RouteId::candidate_gpio_emc_16_lpuart3_rts_b,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART4, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_gpio_b1_00_lpuart4_tx,
    RouteId::candidate_gpio_b1_01_lpuart4_rx,
    RouteId::candidate_gpio_emc_19_lpuart4_tx,
    RouteId::candidate_gpio_emc_20_lpuart4_rx,
    RouteId::candidate_gpio_sd_b1_00_lpuart4_tx,
    RouteId::candidate_gpio_sd_b1_01_lpuart4_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART4, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart4_bga196_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 8> kRoutes = {{
    RouteId::candidate_gpio_b1_00_lpuart4_tx,
    RouteId::candidate_gpio_b1_01_lpuart4_rx,
    RouteId::candidate_gpio_emc_17_lpuart4_cts_b,
    RouteId::candidate_gpio_emc_18_lpuart4_rts_b,
    RouteId::candidate_gpio_emc_19_lpuart4_tx,
    RouteId::candidate_gpio_emc_20_lpuart4_rx,
    RouteId::candidate_gpio_sd_b1_00_lpuart4_tx,
    RouteId::candidate_gpio_sd_b1_01_lpuart4_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART5, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart5_bga196_tx_rx;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_gpio_b1_12_lpuart5_tx,
    RouteId::candidate_gpio_b1_13_lpuart5_rx,
    RouteId::candidate_gpio_emc_23_lpuart5_tx,
    RouteId::candidate_gpio_emc_24_lpuart5_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART5, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart5_bga196_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_gpio_b1_12_lpuart5_tx,
    RouteId::candidate_gpio_b1_13_lpuart5_rx,
    RouteId::candidate_gpio_emc_23_lpuart5_tx,
    RouteId::candidate_gpio_emc_24_lpuart5_rx,
    RouteId::candidate_gpio_emc_27_lpuart5_rts_b,
    RouteId::candidate_gpio_emc_28_lpuart5_cts_b,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART6, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart6_bga196_tx_rx;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_gpio_ad_b0_02_lpuart6_tx,
    RouteId::candidate_gpio_ad_b0_03_lpuart6_rx,
    RouteId::candidate_gpio_emc_25_lpuart6_tx,
    RouteId::candidate_gpio_emc_26_lpuart6_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART6, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart6_bga196_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_gpio_ad_b0_02_lpuart6_tx,
    RouteId::candidate_gpio_ad_b0_03_lpuart6_rx,
    RouteId::candidate_gpio_emc_25_lpuart6_tx,
    RouteId::candidate_gpio_emc_26_lpuart6_rx,
    RouteId::candidate_gpio_emc_29_lpuart6_rts_b,
    RouteId::candidate_gpio_emc_30_lpuart6_cts_b,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART7, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart7_bga196_tx_rx;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_gpio_emc_31_lpuart7_tx,
    RouteId::candidate_gpio_emc_32_lpuart7_rx,
    RouteId::candidate_gpio_sd_b1_08_lpuart7_tx,
    RouteId::candidate_gpio_sd_b1_09_lpuart7_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART7, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart7_bga196_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_gpio_emc_31_lpuart7_tx,
    RouteId::candidate_gpio_emc_32_lpuart7_rx,
    RouteId::candidate_gpio_sd_b1_06_lpuart7_cts_b,
    RouteId::candidate_gpio_sd_b1_07_lpuart7_rts_b,
    RouteId::candidate_gpio_sd_b1_08_lpuart7_tx,
    RouteId::candidate_gpio_sd_b1_09_lpuart7_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART8, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_gpio_ad_b1_10_lpuart8_tx,
    RouteId::candidate_gpio_ad_b1_11_lpuart8_rx,
    RouteId::candidate_gpio_emc_38_lpuart8_tx,
    RouteId::candidate_gpio_emc_39_lpuart8_rx,
    RouteId::candidate_gpio_sd_b0_04_lpuart8_tx,
    RouteId::candidate_gpio_sd_b0_05_lpuart8_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART8, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart8_bga196_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 8> kRoutes = {{
    RouteId::candidate_gpio_ad_b1_10_lpuart8_tx,
    RouteId::candidate_gpio_ad_b1_11_lpuart8_rx,
    RouteId::candidate_gpio_emc_38_lpuart8_tx,
    RouteId::candidate_gpio_emc_39_lpuart8_rx,
    RouteId::candidate_gpio_sd_b0_02_lpuart8_cts_b,
    RouteId::candidate_gpio_sd_b0_03_lpuart8_rts_b,
    RouteId::candidate_gpio_sd_b0_04_lpuart8_tx,
    RouteId::candidate_gpio_sd_b0_05_lpuart8_rx,
  }};
};

struct ConnectionGroupDescriptor {
  ConnectionGroupId group_id;
  PeripheralId peripheral_id;
  std::uint16_t route_count;
};
inline constexpr std::array<ConnectionGroupDescriptor, 24> kRuntimeConnectionGroups = {{
  {ConnectionGroupId::group_gpio1_bga196_all_signals, PeripheralId::GPIO1, 32u},
  {ConnectionGroupId::group_gpio2_bga196_all_signals, PeripheralId::GPIO2, 32u},
  {ConnectionGroupId::group_gpio3_bga196_all_signals, PeripheralId::GPIO3, 28u},
  {ConnectionGroupId::group_gpio4_bga196_all_signals, PeripheralId::GPIO4, 32u},
  {ConnectionGroupId::group_lpspi1_bga196_sck_cs, PeripheralId::LPSPI1, 7u},
  {ConnectionGroupId::group_lpspi2_bga196_sck_cs, PeripheralId::LPSPI2, 7u},
  {ConnectionGroupId::group_lpspi3_bga196_sck_cs, PeripheralId::LPSPI3, 7u},
  {ConnectionGroupId::group_lpspi4_bga196_sck_cs, PeripheralId::LPSPI4, 7u},
  {ConnectionGroupId::group_lpuart1_bga196_tx_rx, PeripheralId::LPUART1, 2u},
  {ConnectionGroupId::group_lpuart1_bga196_tx_rx_cts_rts, PeripheralId::LPUART1, 4u},
  {ConnectionGroupId::group_lpuart2_bga196_tx_rx, PeripheralId::LPUART2, 4u},
  {ConnectionGroupId::group_lpuart2_bga196_tx_rx_cts_rts, PeripheralId::LPUART2, 6u},
  {ConnectionGroupId::group_lpuart3_bga196_tx_rx, PeripheralId::LPUART3, 6u},
  {ConnectionGroupId::group_lpuart3_bga196_tx_rx_cts_rts, PeripheralId::LPUART3, 10u},
  {ConnectionGroupId::group_lpuart4_bga196_tx_rx, PeripheralId::LPUART4, 6u},
  {ConnectionGroupId::group_lpuart4_bga196_tx_rx_cts_rts, PeripheralId::LPUART4, 8u},
  {ConnectionGroupId::group_lpuart5_bga196_tx_rx, PeripheralId::LPUART5, 4u},
  {ConnectionGroupId::group_lpuart5_bga196_tx_rx_cts_rts, PeripheralId::LPUART5, 6u},
  {ConnectionGroupId::group_lpuart6_bga196_tx_rx, PeripheralId::LPUART6, 4u},
  {ConnectionGroupId::group_lpuart6_bga196_tx_rx_cts_rts, PeripheralId::LPUART6, 6u},
  {ConnectionGroupId::group_lpuart7_bga196_tx_rx, PeripheralId::LPUART7, 4u},
  {ConnectionGroupId::group_lpuart7_bga196_tx_rx_cts_rts, PeripheralId::LPUART7, 6u},
  {ConnectionGroupId::group_lpuart8_bga196_tx_rx, PeripheralId::LPUART8, 6u},
  {ConnectionGroupId::group_lpuart8_bga196_tx_rx_cts_rts, PeripheralId::LPUART8, 8u},
}};

}
}
}
}
}
}
