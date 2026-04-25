#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "clock_bindings.hpp"
#include "peripheral_instances.hpp"
#include "pins.hpp"
#include "register_fields.hpp"
#include "registers.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g071rb {
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
  candidate_pa0_spi2_sck,
  candidate_pa0_tim2_ch1,
  candidate_pa0_tim2_etr,
  candidate_pa0_usart2_cts,
  candidate_pa0_usart2_nss,
  candidate_pa0_usart4_tx,
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
  candidate_pa9_spi2_miso,
  candidate_pa9_tim15_bk,
  candidate_pa9_tim1_ch2,
  candidate_pa9_usart1_tx,
  candidate_pb0_spi1_nss,
  candidate_pb0_tim1_ch2n,
  candidate_pb0_tim3_ch3,
  candidate_pb0_usart3_rx,
  candidate_pb10_lpuart1_rx,
  candidate_pb10_spi2_sck,
  candidate_pb10_tim2_ch3,
  candidate_pb10_usart3_tx,
  candidate_pb11_lpuart1_tx,
  candidate_pb11_spi2_mosi,
  candidate_pb11_tim2_ch4,
  candidate_pb11_usart3_rx,
  candidate_pb12_lpuart1_de,
  candidate_pb12_lpuart1_rts,
  candidate_pb12_spi2_nss,
  candidate_pb12_tim15_bk,
  candidate_pb12_tim1_bk,
  candidate_pb13_lpuart1_cts,
  candidate_pb13_spi2_sck,
  candidate_pb13_tim15_ch1n,
  candidate_pb13_tim1_ch1n,
  candidate_pb13_usart3_cts,
  candidate_pb13_usart3_nss,
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
  candidate_pb5_spi1_mosi,
  candidate_pb5_tim16_bk,
  candidate_pb5_tim3_ch2,
  candidate_pb6_spi2_miso,
  candidate_pb6_tim16_ch1n,
  candidate_pb6_tim1_ch3,
  candidate_pb6_usart1_tx,
  candidate_pb7_spi2_mosi,
  candidate_pb7_tim17_ch1n,
  candidate_pb7_usart1_rx,
  candidate_pb7_usart4_cts,
  candidate_pb7_usart4_nss,
  candidate_pb8_spi2_sck,
  candidate_pb8_tim15_bk,
  candidate_pb8_tim16_ch1,
  candidate_pb8_usart3_tx,
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
struct RouteTraits<PinId::PA0, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA0, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA0, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA0, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA0, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA0, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA0, PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_usart2_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA0, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA0, PeripheralId::USART2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_usart2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA0, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA0, PeripheralId::USART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_usart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart4en, PinId::none, ClockGateId::gate_usart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, PinId::none, ClockGateId::none, ResetId::reset_usart4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA0, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA10, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA10, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA10, PeripheralId::TIM17, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_tim17_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim17en, PinId::none, ClockGateId::gate_tim17, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim17rst, PinId::none, ClockGateId::none, ResetId::reset_tim17, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA10, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA10, PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_tim1_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA10, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA10, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA10, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart3_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart3_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart3_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::USART4, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart4_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart4en, PinId::none, ClockGateId::gate_usart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, PinId::none, ClockGateId::none, ResetId::reset_usart4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::USART4, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart4_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart4en, PinId::none, ClockGateId::gate_usart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, PinId::none, ClockGateId::none, ResetId::reset_usart4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::USART4, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_usart4_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart4en, PinId::none, ClockGateId::gate_usart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, PinId::none, ClockGateId::none, ResetId::reset_usart4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::TIM15, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_tim15_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_tim2_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::USART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart4en, PinId::none, ClockGateId::gate_usart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, PinId::none, ClockGateId::none, ResetId::reset_usart4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_lpuart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 6},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::TIM15, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_tim15_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_tim2_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_usart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_lpuart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 6},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::TIM15, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_tim15_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_tim2_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_usart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim14en, PinId::none, ClockGateId::gate_tim14, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim14rst, PinId::none, ClockGateId::none, ResetId::reset_tim14, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::LPUART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_lpuart1_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 6},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim16_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim16en, PinId::none, ClockGateId::gate_tim16, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim16rst, PinId::none, ClockGateId::none, ResetId::reset_tim16, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim1_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::USART3, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_usart3_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::USART3, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_usart3_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim14en, PinId::none, ClockGateId::gate_tim14, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim14rst, PinId::none, ClockGateId::none, ResetId::reset_tim14, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim17_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim17en, PinId::none, ClockGateId::gate_tim17, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim17rst, PinId::none, ClockGateId::none, ResetId::reset_tim17, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA8, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa8_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA8, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA8, PeripheralId::TIM1, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa8_tim1_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA8, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA9, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA9, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA9, PeripheralId::TIM15, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_tim15_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA9, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA9, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_tim1_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA9, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA9, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_usart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA9, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim3_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB10, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_lpuart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB10, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB10, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB10, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_tim2_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB10, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB10, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB10, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB11, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_lpuart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB11, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB11, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB11, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB11, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_tim2_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB11, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB11, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB11, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB12, PeripheralId::LPUART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_lpuart1_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB12, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB12, PeripheralId::LPUART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_lpuart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB12, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB12, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB12, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB12, PeripheralId::TIM15, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_tim15_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB12, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB12, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_tim1_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB12, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB13, PeripheralId::LPUART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_lpuart1_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB13, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB13, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB13, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB13, PeripheralId::TIM15, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_tim15_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB13, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB13, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB13, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB13, PeripheralId::USART3, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_usart3_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB13, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB13, PeripheralId::USART3, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_usart3_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB13, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB14, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB14, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB14, PeripheralId::TIM15, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_tim15_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB14, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB14, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB14, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB14, PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_usart3_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB14, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB14, PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_usart3_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB14, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB14, PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_usart3_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB14, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB15, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB15, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB15, PeripheralId::TIM15, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_tim15_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB15, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB15, PeripheralId::TIM15, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_tim15_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB15, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_tim1_ch3n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB15, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::LPUART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_lpuart1_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 6},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::LPUART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_lpuart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 6},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim14en, PinId::none, ClockGateId::gate_tim14, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim14rst, PinId::none, ClockGateId::none, ResetId::reset_tim14, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_tim1_ch3n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::TIM3, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_tim3_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_usart3_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_usart3_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_usart3_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB2, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb2_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB2, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB2, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb2_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB2, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_tim1_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_tim2_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB4, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB4, PeripheralId::TIM17, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_tim17_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim17en, PinId::none, ClockGateId::gate_tim17, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim17rst, PinId::none, ClockGateId::none, ResetId::reset_tim17, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB4, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB4, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB4, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB4, PeripheralId::USART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_usart1_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB4, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB4, PeripheralId::USART1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_usart1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB4, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB5, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB5, PeripheralId::TIM16, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_tim16_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim16en, PinId::none, ClockGateId::gate_tim16, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim16rst, PinId::none, ClockGateId::none, ResetId::reset_tim16, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB5, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB5, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB5, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB6, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB6, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB6, PeripheralId::TIM16, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_tim16_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim16en, PinId::none, ClockGateId::gate_tim16, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim16rst, PinId::none, ClockGateId::none, ResetId::reset_tim16, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB6, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB6, PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_tim1_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB6, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB6, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_usart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB6, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::TIM17, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_tim17_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim17en, PinId::none, ClockGateId::gate_tim17, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim17rst, PinId::none, ClockGateId::none, ResetId::reset_tim17, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::USART4, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_usart4_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart4en, PinId::none, ClockGateId::gate_usart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, PinId::none, ClockGateId::none, ResetId::reset_usart4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::USART4, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_usart4_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart4en, PinId::none, ClockGateId::gate_usart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, PinId::none, ClockGateId::none, ResetId::reset_usart4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB8, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB8, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB8, PeripheralId::TIM15, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_tim15_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB8, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB8, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_tim16_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim16en, PinId::none, ClockGateId::gate_tim16, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim16rst, PinId::none, ClockGateId::none, ResetId::reset_tim16, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB8, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB8, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB8, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB9, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB9, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB9, PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_tim17_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim17en, PinId::none, ClockGateId::gate_tim17, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim17rst, PinId::none, ClockGateId::none, ResetId::reset_tim17, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB9, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB9, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB9, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PC0, PeripheralId::LPUART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc0_lpuart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC0, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC10, PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc10_tim1_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC10, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC10, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc10_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC10, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PC10, PeripheralId::USART4, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc10_usart4_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart4en, PinId::none, ClockGateId::gate_usart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, PinId::none, ClockGateId::none, ResetId::reset_usart4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC10, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC11, PeripheralId::TIM1, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc11_tim1_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC11, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC11, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc11_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC11, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PC11, PeripheralId::USART4, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc11_usart4_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart4en, PinId::none, ClockGateId::gate_usart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, PinId::none, ClockGateId::none, ResetId::reset_usart4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC11, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC12, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc12_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim14en, PinId::none, ClockGateId::gate_tim14, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim14rst, PinId::none, ClockGateId::none, ResetId::reset_tim14, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC12, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC13, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc13_tim1_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC13, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC1, PeripheralId::LPUART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc1_lpuart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_lpuart1en, PinId::none, ClockGateId::gate_lpuart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, PinId::none, ClockGateId::none, ResetId::reset_lpuart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC1, PeripheralId::TIM15, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc1_tim15_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC1, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC2, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc2_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC2, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC2, PeripheralId::TIM15, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc2_tim15_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim15en, PinId::none, ClockGateId::gate_tim15, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, PinId::none, ClockGateId::none, ResetId::reset_tim15, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC2, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC3, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc3_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC3, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC4, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc4_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC4, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC4, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc4_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC4, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC4, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc4_usart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC4, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC4, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc4_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC4, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PC5, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc5_tim2_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC5, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC5, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc5_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC5, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC5, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc5_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC5, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PC6, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc6_tim2_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC6, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC6, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc6_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC6, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC7, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc7_tim2_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC7, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC7, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc7_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC7, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC8, PeripheralId::TIM1, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc8_tim1_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC8, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC8, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc8_tim3_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC8, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PC9, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc9_tim1_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC9, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC9, PeripheralId::TIM3, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc9_tim3_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC9, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD0, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd0_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD0, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD0, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd0_tim16_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim16en, PinId::none, ClockGateId::gate_tim16, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim16rst, PinId::none, ClockGateId::none, ResetId::reset_tim16, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD0, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD1, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd1_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD1, PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd1_tim17_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim17en, PinId::none, ClockGateId::gate_tim17, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim17rst, PinId::none, ClockGateId::none, ResetId::reset_tim17, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD1, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD2, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD2, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD2, PeripheralId::TIM3, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_tim3_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD2, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD2, PeripheralId::USART3, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_usart3_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD2, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD2, PeripheralId::USART3, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_usart3_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD2, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD2, PeripheralId::USART3, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_usart3_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD2, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD3, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD3, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD3, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD3, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD3, PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_usart2_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD3, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD3, PeripheralId::USART2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_usart2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD3, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD4, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD4, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD4, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_tim1_ch3n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD4, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD4, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_usart2_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD4, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD4, PeripheralId::USART2, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_usart2_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD4, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD4, PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_usart2_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD4, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD5, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd5_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD5, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD5, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd5_tim1_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD5, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD5, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd5_usart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD5, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD6, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd6_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD6, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD6, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd6_usart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD6, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD8, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd8_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD8, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD8, PeripheralId::USART3, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd8_usart3_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD8, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD9, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd9_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD9, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD9, PeripheralId::TIM1, SignalId::signal_bk2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd9_tim1_bk2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD9, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD9, PeripheralId::USART3, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd9_usart3_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart3en, PinId::none, ClockGateId::gate_usart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g05_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, PinId::none, ClockGateId::none, ResetId::reset_usart3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD9, ClockGateId::none, ResetId::none, 0},
  }};
};

inline constexpr std::array<RouteDescriptor, 192> kRuntimeRoutes = {{
  {RouteId::candidate_pa0_spi2_sck, PinId::PA0, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa0_tim2_ch1, PinId::PA0, PeripheralId::TIM2, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa0_tim2_etr, PinId::PA0, PeripheralId::TIM2, SignalId::signal_etr, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa0_usart2_cts, PinId::PA0, PeripheralId::USART2, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa0_usart2_nss, PinId::PA0, PeripheralId::USART2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa0_usart4_tx, PinId::PA0, PeripheralId::USART4, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa10_spi2_mosi, PinId::PA10, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa10_tim17_bk, PinId::PA10, PeripheralId::TIM17, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa10_tim1_ch3, PinId::PA10, PeripheralId::TIM1, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa10_usart1_rx, PinId::PA10, PeripheralId::USART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_spi1_nss, PinId::PA15, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_tim2_ch1, PinId::PA15, PeripheralId::TIM2, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_tim2_etr, PinId::PA15, PeripheralId::TIM2, SignalId::signal_etr, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_usart2_rx, PinId::PA15, PeripheralId::USART2, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_usart3_ck, PinId::PA15, PeripheralId::USART3, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_usart3_de, PinId::PA15, PeripheralId::USART3, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_usart3_rts, PinId::PA15, PeripheralId::USART3, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_usart4_ck, PinId::PA15, PeripheralId::USART4, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_usart4_de, PinId::PA15, PeripheralId::USART4, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_usart4_rts, PinId::PA15, PeripheralId::USART4, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_spi1_sck, PinId::PA1, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_tim15_ch1n, PinId::PA1, PeripheralId::TIM15, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_tim2_ch2, PinId::PA1, PeripheralId::TIM2, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_usart2_ck, PinId::PA1, PeripheralId::USART2, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_usart2_de, PinId::PA1, PeripheralId::USART2, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_usart2_rts, PinId::PA1, PeripheralId::USART2, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_usart4_rx, PinId::PA1, PeripheralId::USART4, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_lpuart1_tx, PinId::PA2, PeripheralId::LPUART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_spi1_mosi, PinId::PA2, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_tim15_ch1, PinId::PA2, PeripheralId::TIM15, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_tim2_ch3, PinId::PA2, PeripheralId::TIM2, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_usart2_tx, PinId::PA2, PeripheralId::USART2, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_lpuart1_rx, PinId::PA3, PeripheralId::LPUART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_spi2_miso, PinId::PA3, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_tim15_ch2, PinId::PA3, PeripheralId::TIM15, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_tim2_ch4, PinId::PA3, PeripheralId::TIM2, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_usart2_rx, PinId::PA3, PeripheralId::USART2, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_spi1_nss, PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_spi2_mosi, PinId::PA4, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_tim14_ch1, PinId::PA4, PeripheralId::TIM14, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa5_spi1_sck, PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa5_tim2_ch1, PinId::PA5, PeripheralId::TIM2, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa5_tim2_etr, PinId::PA5, PeripheralId::TIM2, SignalId::signal_etr, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa5_usart3_tx, PinId::PA5, PeripheralId::USART3, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_lpuart1_cts, PinId::PA6, PeripheralId::LPUART1, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_spi1_miso, PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_tim16_ch1, PinId::PA6, PeripheralId::TIM16, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_tim1_bk, PinId::PA6, PeripheralId::TIM1, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_tim3_ch1, PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_usart3_cts, PinId::PA6, PeripheralId::USART3, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_usart3_nss, PinId::PA6, PeripheralId::USART3, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_spi1_mosi, PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim14_ch1, PinId::PA7, PeripheralId::TIM14, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim17_ch1, PinId::PA7, PeripheralId::TIM17, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim1_ch1n, PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim3_ch2, PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa8_spi2_nss, PinId::PA8, PeripheralId::SPI2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa8_tim1_ch1, PinId::PA8, PeripheralId::TIM1, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa9_spi2_miso, PinId::PA9, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa9_tim15_bk, PinId::PA9, PeripheralId::TIM15, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa9_tim1_ch2, PinId::PA9, PeripheralId::TIM1, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa9_usart1_tx, PinId::PA9, PeripheralId::USART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb0_spi1_nss, PinId::PB0, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb0_tim1_ch2n, PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb0_tim3_ch3, PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb0_usart3_rx, PinId::PB0, PeripheralId::USART3, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb10_lpuart1_rx, PinId::PB10, PeripheralId::LPUART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb10_spi2_sck, PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb10_tim2_ch3, PinId::PB10, PeripheralId::TIM2, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb10_usart3_tx, PinId::PB10, PeripheralId::USART3, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb11_lpuart1_tx, PinId::PB11, PeripheralId::LPUART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb11_spi2_mosi, PinId::PB11, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb11_tim2_ch4, PinId::PB11, PeripheralId::TIM2, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb11_usart3_rx, PinId::PB11, PeripheralId::USART3, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb12_lpuart1_de, PinId::PB12, PeripheralId::LPUART1, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb12_lpuart1_rts, PinId::PB12, PeripheralId::LPUART1, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb12_spi2_nss, PinId::PB12, PeripheralId::SPI2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb12_tim15_bk, PinId::PB12, PeripheralId::TIM15, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb12_tim1_bk, PinId::PB12, PeripheralId::TIM1, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb13_lpuart1_cts, PinId::PB13, PeripheralId::LPUART1, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb13_spi2_sck, PinId::PB13, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb13_tim15_ch1n, PinId::PB13, PeripheralId::TIM15, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb13_tim1_ch1n, PinId::PB13, PeripheralId::TIM1, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb13_usart3_cts, PinId::PB13, PeripheralId::USART3, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb13_usart3_nss, PinId::PB13, PeripheralId::USART3, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb14_spi2_miso, PinId::PB14, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb14_tim15_ch1, PinId::PB14, PeripheralId::TIM15, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb14_tim1_ch2n, PinId::PB14, PeripheralId::TIM1, SignalId::signal_ch2n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb14_usart3_ck, PinId::PB14, PeripheralId::USART3, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb14_usart3_de, PinId::PB14, PeripheralId::USART3, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb14_usart3_rts, PinId::PB14, PeripheralId::USART3, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb15_spi2_mosi, PinId::PB15, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb15_tim15_ch1n, PinId::PB15, PeripheralId::TIM15, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb15_tim15_ch2, PinId::PB15, PeripheralId::TIM15, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb15_tim1_ch3n, PinId::PB15, PeripheralId::TIM1, SignalId::signal_ch3n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_lpuart1_de, PinId::PB1, PeripheralId::LPUART1, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_lpuart1_rts, PinId::PB1, PeripheralId::LPUART1, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_tim14_ch1, PinId::PB1, PeripheralId::TIM14, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_tim1_ch3n, PinId::PB1, PeripheralId::TIM1, SignalId::signal_ch3n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_tim3_ch4, PinId::PB1, PeripheralId::TIM3, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_usart3_ck, PinId::PB1, PeripheralId::USART3, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_usart3_de, PinId::PB1, PeripheralId::USART3, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_usart3_rts, PinId::PB1, PeripheralId::USART3, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb2_spi2_miso, PinId::PB2, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb2_usart3_tx, PinId::PB2, PeripheralId::USART3, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_spi1_sck, PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_tim1_ch2, PinId::PB3, PeripheralId::TIM1, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_tim2_ch2, PinId::PB3, PeripheralId::TIM2, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_usart1_ck, PinId::PB3, PeripheralId::USART1, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_usart1_de, PinId::PB3, PeripheralId::USART1, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_usart1_rts, PinId::PB3, PeripheralId::USART1, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_spi1_miso, PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_tim17_bk, PinId::PB4, PeripheralId::TIM17, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_tim3_ch1, PinId::PB4, PeripheralId::TIM3, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_usart1_cts, PinId::PB4, PeripheralId::USART1, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_usart1_nss, PinId::PB4, PeripheralId::USART1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb5_spi1_mosi, PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb5_tim16_bk, PinId::PB5, PeripheralId::TIM16, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb5_tim3_ch2, PinId::PB5, PeripheralId::TIM3, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_spi2_miso, PinId::PB6, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_tim16_ch1n, PinId::PB6, PeripheralId::TIM16, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_tim1_ch3, PinId::PB6, PeripheralId::TIM1, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_usart1_tx, PinId::PB6, PeripheralId::USART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_spi2_mosi, PinId::PB7, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_tim17_ch1n, PinId::PB7, PeripheralId::TIM17, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_usart1_rx, PinId::PB7, PeripheralId::USART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_usart4_cts, PinId::PB7, PeripheralId::USART4, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_usart4_nss, PinId::PB7, PeripheralId::USART4, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb8_spi2_sck, PinId::PB8, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb8_tim15_bk, PinId::PB8, PeripheralId::TIM15, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb8_tim16_ch1, PinId::PB8, PeripheralId::TIM16, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb8_usart3_tx, PinId::PB8, PeripheralId::USART3, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb9_spi2_nss, PinId::PB9, PeripheralId::SPI2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb9_tim17_ch1, PinId::PB9, PeripheralId::TIM17, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb9_usart3_rx, PinId::PB9, PeripheralId::USART3, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc0_lpuart1_rx, PinId::PC0, PeripheralId::LPUART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc10_tim1_ch3, PinId::PC10, PeripheralId::TIM1, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc10_usart3_tx, PinId::PC10, PeripheralId::USART3, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc10_usart4_tx, PinId::PC10, PeripheralId::USART4, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc11_tim1_ch4, PinId::PC11, PeripheralId::TIM1, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc11_usart3_rx, PinId::PC11, PeripheralId::USART3, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc11_usart4_rx, PinId::PC11, PeripheralId::USART4, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc12_tim14_ch1, PinId::PC12, PeripheralId::TIM14, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc13_tim1_bk, PinId::PC13, PeripheralId::TIM1, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc1_lpuart1_tx, PinId::PC1, PeripheralId::LPUART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc1_tim15_ch1, PinId::PC1, PeripheralId::TIM15, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc2_spi2_miso, PinId::PC2, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc2_tim15_ch2, PinId::PC2, PeripheralId::TIM15, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc3_spi2_mosi, PinId::PC3, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc4_tim2_ch1, PinId::PC4, PeripheralId::TIM2, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc4_tim2_etr, PinId::PC4, PeripheralId::TIM2, SignalId::signal_etr, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc4_usart1_tx, PinId::PC4, PeripheralId::USART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc4_usart3_tx, PinId::PC4, PeripheralId::USART3, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc5_tim2_ch2, PinId::PC5, PeripheralId::TIM2, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc5_usart1_rx, PinId::PC5, PeripheralId::USART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc5_usart3_rx, PinId::PC5, PeripheralId::USART3, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc6_tim2_ch3, PinId::PC6, PeripheralId::TIM2, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc6_tim3_ch1, PinId::PC6, PeripheralId::TIM3, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc7_tim2_ch4, PinId::PC7, PeripheralId::TIM2, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc7_tim3_ch2, PinId::PC7, PeripheralId::TIM3, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc8_tim1_ch1, PinId::PC8, PeripheralId::TIM1, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc8_tim3_ch3, PinId::PC8, PeripheralId::TIM3, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc9_tim1_ch2, PinId::PC9, PeripheralId::TIM1, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc9_tim3_ch4, PinId::PC9, PeripheralId::TIM3, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd0_spi2_nss, PinId::PD0, PeripheralId::SPI2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd0_tim16_ch1, PinId::PD0, PeripheralId::TIM16, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd1_spi2_sck, PinId::PD1, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd1_tim17_ch1, PinId::PD1, PeripheralId::TIM17, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd2_tim1_ch1n, PinId::PD2, PeripheralId::TIM1, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd2_tim3_etr, PinId::PD2, PeripheralId::TIM3, SignalId::signal_etr, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd2_usart3_ck, PinId::PD2, PeripheralId::USART3, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd2_usart3_de, PinId::PD2, PeripheralId::USART3, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd2_usart3_rts, PinId::PD2, PeripheralId::USART3, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd3_spi2_miso, PinId::PD3, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd3_tim1_ch2n, PinId::PD3, PeripheralId::TIM1, SignalId::signal_ch2n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd3_usart2_cts, PinId::PD3, PeripheralId::USART2, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd3_usart2_nss, PinId::PD3, PeripheralId::USART2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd4_spi2_mosi, PinId::PD4, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd4_tim1_ch3n, PinId::PD4, PeripheralId::TIM1, SignalId::signal_ch3n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd4_usart2_ck, PinId::PD4, PeripheralId::USART2, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd4_usart2_de, PinId::PD4, PeripheralId::USART2, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd4_usart2_rts, PinId::PD4, PeripheralId::USART2, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd5_spi1_miso, PinId::PD5, PeripheralId::SPI1, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd5_tim1_bk, PinId::PD5, PeripheralId::TIM1, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd5_usart2_tx, PinId::PD5, PeripheralId::USART2, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd6_spi1_mosi, PinId::PD6, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd6_usart2_rx, PinId::PD6, PeripheralId::USART2, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd8_spi1_sck, PinId::PD8, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd8_usart3_tx, PinId::PD8, PeripheralId::USART3, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd9_spi1_nss, PinId::PD9, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd9_tim1_bk2, PinId::PD9, PeripheralId::TIM1, SignalId::signal_bk2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd9_usart3_rx, PinId::PD9, PeripheralId::USART3, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
}};

template<PinId Pin, PeripheralId Peripheral, SignalId Signal>
inline auto apply_route() noexcept -> void {
  static_assert(RouteTraits<Pin, Peripheral, Signal>::kPresent, "");
}

enum class ConnectionGroupId : std::uint16_t {
  none,
  group_lpuart1_lqfp64_tx_rx,
  group_lpuart1_lqfp64_tx_rx_cts_rts,
  group_spi1_lqfp64_sck_mosi_miso,
  group_spi2_lqfp64_sck_mosi_miso,
  group_tim15_lqfp64_all_signals,
  group_tim16_lqfp64_all_signals,
  group_tim17_lqfp64_all_signals,
  group_tim1_lqfp64_all_signals,
  group_tim2_lqfp64_all_signals,
  group_tim3_lqfp64_all_signals,
  group_usart1_lqfp64_tx_rx,
  group_usart1_lqfp64_tx_rx_cts_rts,
  group_usart2_lqfp64_tx_rx,
  group_usart2_lqfp64_tx_rx_cts_rts,
  group_usart3_lqfp64_tx_rx,
  group_usart3_lqfp64_tx_rx_cts_rts,
  group_usart4_lqfp64_tx_rx,
  group_usart4_lqfp64_tx_rx_cts_rts,
};

template<PeripheralId Peripheral, SignalId... Signals>
struct ConnectionGroupTraits {
  static constexpr bool kPresent = false;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::none;
  static constexpr std::array<RouteId, 0> kRoutes = {};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART1, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_pa2_lpuart1_tx,
    RouteId::candidate_pa3_lpuart1_rx,
    RouteId::candidate_pb10_lpuart1_rx,
    RouteId::candidate_pb11_lpuart1_tx,
    RouteId::candidate_pc0_lpuart1_rx,
    RouteId::candidate_pc1_lpuart1_tx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::LPUART1, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 10> kRoutes = {{
    RouteId::candidate_pa2_lpuart1_tx,
    RouteId::candidate_pa3_lpuart1_rx,
    RouteId::candidate_pa6_lpuart1_cts,
    RouteId::candidate_pb10_lpuart1_rx,
    RouteId::candidate_pb11_lpuart1_tx,
    RouteId::candidate_pb12_lpuart1_rts,
    RouteId::candidate_pb13_lpuart1_cts,
    RouteId::candidate_pb1_lpuart1_rts,
    RouteId::candidate_pc0_lpuart1_rx,
    RouteId::candidate_pc1_lpuart1_tx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::SPI1, SignalId::signal_sck, SignalId::signal_mosi, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
  static constexpr std::array<RouteId, 11> kRoutes = {{
    RouteId::candidate_pa1_spi1_sck,
    RouteId::candidate_pa2_spi1_mosi,
    RouteId::candidate_pa5_spi1_sck,
    RouteId::candidate_pa6_spi1_miso,
    RouteId::candidate_pa7_spi1_mosi,
    RouteId::candidate_pb3_spi1_sck,
    RouteId::candidate_pb4_spi1_miso,
    RouteId::candidate_pb5_spi1_mosi,
    RouteId::candidate_pd5_spi1_miso,
    RouteId::candidate_pd6_spi1_mosi,
    RouteId::candidate_pd8_spi1_sck,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::SPI2, SignalId::signal_sck, SignalId::signal_mosi, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
  static constexpr std::array<RouteId, 19> kRoutes = {{
    RouteId::candidate_pa0_spi2_sck,
    RouteId::candidate_pa10_spi2_mosi,
    RouteId::candidate_pa3_spi2_miso,
    RouteId::candidate_pa4_spi2_mosi,
    RouteId::candidate_pa9_spi2_miso,
    RouteId::candidate_pb10_spi2_sck,
    RouteId::candidate_pb11_spi2_mosi,
    RouteId::candidate_pb13_spi2_sck,
    RouteId::candidate_pb14_spi2_miso,
    RouteId::candidate_pb15_spi2_mosi,
    RouteId::candidate_pb2_spi2_miso,
    RouteId::candidate_pb6_spi2_miso,
    RouteId::candidate_pb7_spi2_mosi,
    RouteId::candidate_pb8_spi2_sck,
    RouteId::candidate_pc2_spi2_miso,
    RouteId::candidate_pc3_spi2_mosi,
    RouteId::candidate_pd1_spi2_sck,
    RouteId::candidate_pd3_spi2_miso,
    RouteId::candidate_pd4_spi2_mosi,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM15, SignalId::signal_bk, SignalId::signal_ch1, SignalId::signal_ch1n, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim15_lqfp64_all_signals;
  static constexpr std::array<RouteId, 12> kRoutes = {{
    RouteId::candidate_pa1_tim15_ch1n,
    RouteId::candidate_pa2_tim15_ch1,
    RouteId::candidate_pa3_tim15_ch2,
    RouteId::candidate_pa9_tim15_bk,
    RouteId::candidate_pb12_tim15_bk,
    RouteId::candidate_pb13_tim15_ch1n,
    RouteId::candidate_pb14_tim15_ch1,
    RouteId::candidate_pb15_tim15_ch1n,
    RouteId::candidate_pb15_tim15_ch2,
    RouteId::candidate_pb8_tim15_bk,
    RouteId::candidate_pc1_tim15_ch1,
    RouteId::candidate_pc2_tim15_ch2,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM16, SignalId::signal_bk, SignalId::signal_ch1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim16_lqfp64_all_signals;
  static constexpr std::array<RouteId, 5> kRoutes = {{
    RouteId::candidate_pa6_tim16_ch1,
    RouteId::candidate_pb5_tim16_bk,
    RouteId::candidate_pb6_tim16_ch1n,
    RouteId::candidate_pb8_tim16_ch1,
    RouteId::candidate_pd0_tim16_ch1,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM17, SignalId::signal_bk, SignalId::signal_ch1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim17_lqfp64_all_signals;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_pa10_tim17_bk,
    RouteId::candidate_pa7_tim17_ch1,
    RouteId::candidate_pb4_tim17_bk,
    RouteId::candidate_pb7_tim17_ch1n,
    RouteId::candidate_pb9_tim17_ch1,
    RouteId::candidate_pd1_tim17_ch1,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM1, SignalId::signal_bk, SignalId::signal_bk2, SignalId::signal_ch1, SignalId::signal_ch1n, SignalId::signal_ch2, SignalId::signal_ch2n, SignalId::signal_ch3, SignalId::signal_ch3n, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
  static constexpr std::array<RouteId, 23> kRoutes = {{
    RouteId::candidate_pa10_tim1_ch3,
    RouteId::candidate_pa6_tim1_bk,
    RouteId::candidate_pa7_tim1_ch1n,
    RouteId::candidate_pa8_tim1_ch1,
    RouteId::candidate_pa9_tim1_ch2,
    RouteId::candidate_pb0_tim1_ch2n,
    RouteId::candidate_pb12_tim1_bk,
    RouteId::candidate_pb13_tim1_ch1n,
    RouteId::candidate_pb14_tim1_ch2n,
    RouteId::candidate_pb15_tim1_ch3n,
    RouteId::candidate_pb1_tim1_ch3n,
    RouteId::candidate_pb3_tim1_ch2,
    RouteId::candidate_pb6_tim1_ch3,
    RouteId::candidate_pc10_tim1_ch3,
    RouteId::candidate_pc11_tim1_ch4,
    RouteId::candidate_pc13_tim1_bk,
    RouteId::candidate_pc8_tim1_ch1,
    RouteId::candidate_pc9_tim1_ch2,
    RouteId::candidate_pd2_tim1_ch1n,
    RouteId::candidate_pd3_tim1_ch2n,
    RouteId::candidate_pd4_tim1_ch3n,
    RouteId::candidate_pd5_tim1_bk,
    RouteId::candidate_pd9_tim1_bk2,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM2, SignalId::signal_ch1, SignalId::signal_ch2, SignalId::signal_ch3, SignalId::signal_ch4, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
  static constexpr std::array<RouteId, 17> kRoutes = {{
    RouteId::candidate_pa0_tim2_ch1,
    RouteId::candidate_pa0_tim2_etr,
    RouteId::candidate_pa15_tim2_ch1,
    RouteId::candidate_pa15_tim2_etr,
    RouteId::candidate_pa1_tim2_ch2,
    RouteId::candidate_pa2_tim2_ch3,
    RouteId::candidate_pa3_tim2_ch4,
    RouteId::candidate_pa5_tim2_ch1,
    RouteId::candidate_pa5_tim2_etr,
    RouteId::candidate_pb10_tim2_ch3,
    RouteId::candidate_pb11_tim2_ch4,
    RouteId::candidate_pb3_tim2_ch2,
    RouteId::candidate_pc4_tim2_ch1,
    RouteId::candidate_pc4_tim2_etr,
    RouteId::candidate_pc5_tim2_ch2,
    RouteId::candidate_pc6_tim2_ch3,
    RouteId::candidate_pc7_tim2_ch4,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM3, SignalId::signal_ch1, SignalId::signal_ch2, SignalId::signal_ch3, SignalId::signal_ch4, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim3_lqfp64_all_signals;
  static constexpr std::array<RouteId, 11> kRoutes = {{
    RouteId::candidate_pa6_tim3_ch1,
    RouteId::candidate_pa7_tim3_ch2,
    RouteId::candidate_pb0_tim3_ch3,
    RouteId::candidate_pb1_tim3_ch4,
    RouteId::candidate_pb4_tim3_ch1,
    RouteId::candidate_pb5_tim3_ch2,
    RouteId::candidate_pc6_tim3_ch1,
    RouteId::candidate_pc7_tim3_ch2,
    RouteId::candidate_pc8_tim3_ch3,
    RouteId::candidate_pc9_tim3_ch4,
    RouteId::candidate_pd2_tim3_etr,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART1, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_pa10_usart1_rx,
    RouteId::candidate_pa9_usart1_tx,
    RouteId::candidate_pb6_usart1_tx,
    RouteId::candidate_pb7_usart1_rx,
    RouteId::candidate_pc4_usart1_tx,
    RouteId::candidate_pc5_usart1_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART1, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 8> kRoutes = {{
    RouteId::candidate_pa10_usart1_rx,
    RouteId::candidate_pa9_usart1_tx,
    RouteId::candidate_pb3_usart1_rts,
    RouteId::candidate_pb4_usart1_cts,
    RouteId::candidate_pb6_usart1_tx,
    RouteId::candidate_pb7_usart1_rx,
    RouteId::candidate_pc4_usart1_tx,
    RouteId::candidate_pc5_usart1_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART2, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx;
  static constexpr std::array<RouteId, 5> kRoutes = {{
    RouteId::candidate_pa15_usart2_rx,
    RouteId::candidate_pa2_usart2_tx,
    RouteId::candidate_pa3_usart2_rx,
    RouteId::candidate_pd5_usart2_tx,
    RouteId::candidate_pd6_usart2_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART2, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 9> kRoutes = {{
    RouteId::candidate_pa0_usart2_cts,
    RouteId::candidate_pa15_usart2_rx,
    RouteId::candidate_pa1_usart2_rts,
    RouteId::candidate_pa2_usart2_tx,
    RouteId::candidate_pa3_usart2_rx,
    RouteId::candidate_pd3_usart2_cts,
    RouteId::candidate_pd4_usart2_rts,
    RouteId::candidate_pd5_usart2_tx,
    RouteId::candidate_pd6_usart2_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART3, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx;
  static constexpr std::array<RouteId, 13> kRoutes = {{
    RouteId::candidate_pa5_usart3_tx,
    RouteId::candidate_pb0_usart3_rx,
    RouteId::candidate_pb10_usart3_tx,
    RouteId::candidate_pb11_usart3_rx,
    RouteId::candidate_pb2_usart3_tx,
    RouteId::candidate_pb8_usart3_tx,
    RouteId::candidate_pb9_usart3_rx,
    RouteId::candidate_pc10_usart3_tx,
    RouteId::candidate_pc11_usart3_rx,
    RouteId::candidate_pc4_usart3_tx,
    RouteId::candidate_pc5_usart3_rx,
    RouteId::candidate_pd8_usart3_tx,
    RouteId::candidate_pd9_usart3_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART3, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 19> kRoutes = {{
    RouteId::candidate_pa15_usart3_rts,
    RouteId::candidate_pa5_usart3_tx,
    RouteId::candidate_pa6_usart3_cts,
    RouteId::candidate_pb0_usart3_rx,
    RouteId::candidate_pb10_usart3_tx,
    RouteId::candidate_pb11_usart3_rx,
    RouteId::candidate_pb13_usart3_cts,
    RouteId::candidate_pb14_usart3_rts,
    RouteId::candidate_pb1_usart3_rts,
    RouteId::candidate_pb2_usart3_tx,
    RouteId::candidate_pb8_usart3_tx,
    RouteId::candidate_pb9_usart3_rx,
    RouteId::candidate_pc10_usart3_tx,
    RouteId::candidate_pc11_usart3_rx,
    RouteId::candidate_pc4_usart3_tx,
    RouteId::candidate_pc5_usart3_rx,
    RouteId::candidate_pd2_usart3_rts,
    RouteId::candidate_pd8_usart3_tx,
    RouteId::candidate_pd9_usart3_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART4, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart4_lqfp64_tx_rx;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pa0_usart4_tx,
    RouteId::candidate_pa1_usart4_rx,
    RouteId::candidate_pc10_usart4_tx,
    RouteId::candidate_pc11_usart4_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART4, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart4_lqfp64_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_pa0_usart4_tx,
    RouteId::candidate_pa15_usart4_rts,
    RouteId::candidate_pa1_usart4_rx,
    RouteId::candidate_pb7_usart4_cts,
    RouteId::candidate_pc10_usart4_tx,
    RouteId::candidate_pc11_usart4_rx,
  }};
};

struct ConnectionGroupDescriptor {
  ConnectionGroupId group_id;
  PeripheralId peripheral_id;
  std::uint16_t route_count;
};
inline constexpr std::array<ConnectionGroupDescriptor, 18> kRuntimeConnectionGroups = {{
  {ConnectionGroupId::group_lpuart1_lqfp64_tx_rx, PeripheralId::LPUART1, 6u},
  {ConnectionGroupId::group_lpuart1_lqfp64_tx_rx_cts_rts, PeripheralId::LPUART1, 10u},
  {ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso, PeripheralId::SPI1, 11u},
  {ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso, PeripheralId::SPI2, 19u},
  {ConnectionGroupId::group_tim15_lqfp64_all_signals, PeripheralId::TIM15, 12u},
  {ConnectionGroupId::group_tim16_lqfp64_all_signals, PeripheralId::TIM16, 5u},
  {ConnectionGroupId::group_tim17_lqfp64_all_signals, PeripheralId::TIM17, 6u},
  {ConnectionGroupId::group_tim1_lqfp64_all_signals, PeripheralId::TIM1, 23u},
  {ConnectionGroupId::group_tim2_lqfp64_all_signals, PeripheralId::TIM2, 17u},
  {ConnectionGroupId::group_tim3_lqfp64_all_signals, PeripheralId::TIM3, 11u},
  {ConnectionGroupId::group_usart1_lqfp64_tx_rx, PeripheralId::USART1, 6u},
  {ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts, PeripheralId::USART1, 8u},
  {ConnectionGroupId::group_usart2_lqfp64_tx_rx, PeripheralId::USART2, 5u},
  {ConnectionGroupId::group_usart2_lqfp64_tx_rx_cts_rts, PeripheralId::USART2, 9u},
  {ConnectionGroupId::group_usart3_lqfp64_tx_rx, PeripheralId::USART3, 13u},
  {ConnectionGroupId::group_usart3_lqfp64_tx_rx_cts_rts, PeripheralId::USART3, 19u},
  {ConnectionGroupId::group_usart4_lqfp64_tx_rx, PeripheralId::USART4, 4u},
  {ConnectionGroupId::group_usart4_lqfp64_tx_rx_cts_rts, PeripheralId::USART4, 6u},
}};

}
}
}
}
}
}
