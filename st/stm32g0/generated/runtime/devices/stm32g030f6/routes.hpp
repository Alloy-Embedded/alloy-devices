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
namespace stm32g030f6 {
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
  candidate_pa0_usart2_cts,
  candidate_pa0_usart2_nss,
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
  candidate_pb7_spi2_mosi,
  candidate_pb7_tim17_ch1n,
  candidate_pb7_usart1_rx,
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
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA0, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA0, PeripheralId::USART2, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_usart2_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA0, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA0, PeripheralId::USART2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa0_usart2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA0, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_usart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_usart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim14en, PinId::none, ClockGateId::gate_tim14, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim14rst, PinId::none, ClockGateId::none, ResetId::reset_tim14, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::TIM16, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim16_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim16en, PinId::none, ClockGateId::gate_tim16, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim16rst, PinId::none, ClockGateId::none, ResetId::reset_tim16, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::TIM1, SignalId::signal_bk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim1_bk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM14, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim14_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim14en, PinId::none, ClockGateId::gate_tim14, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim14rst, PinId::none, ClockGateId::none, ResetId::reset_tim14, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM17, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim17_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim17en, PinId::none, ClockGateId::gate_tim17, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim17rst, PinId::none, ClockGateId::none, ResetId::reset_tim17, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim3_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_tim1_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_de> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_de;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 4},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr1, FieldId::field_rcc_apbenr1_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::TIM17, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_tim17_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_tim17en, PinId::none, ClockGateId::gate_tim17, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim17rst, PinId::none, ClockGateId::none, ResetId::reset_tim17, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbenr2, FieldId::field_rcc_apbenr2_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32g0_64_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 0},
  }};
};

inline constexpr std::array<RouteDescriptor, 35> kRuntimeRoutes = {{
  {RouteId::candidate_pa0_spi2_sck, PinId::PA0, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa0_usart2_cts, PinId::PA0, PeripheralId::USART2, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa0_usart2_nss, PinId::PA0, PeripheralId::USART2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_spi1_sck, PinId::PA1, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_usart2_ck, PinId::PA1, PeripheralId::USART2, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_usart2_de, PinId::PA1, PeripheralId::USART2, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_usart2_rts, PinId::PA1, PeripheralId::USART2, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_spi1_mosi, PinId::PA2, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_usart2_tx, PinId::PA2, PeripheralId::USART2, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_spi2_miso, PinId::PA3, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_usart2_rx, PinId::PA3, PeripheralId::USART2, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_spi1_nss, PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_spi2_mosi, PinId::PA4, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_tim14_ch1, PinId::PA4, PeripheralId::TIM14, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa5_spi1_sck, PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_spi1_miso, PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_tim16_ch1, PinId::PA6, PeripheralId::TIM16, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_tim1_bk, PinId::PA6, PeripheralId::TIM1, SignalId::signal_bk, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_tim3_ch1, PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_spi1_mosi, PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim14_ch1, PinId::PA7, PeripheralId::TIM14, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim17_ch1, PinId::PA7, PeripheralId::TIM17, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim1_ch1n, PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim3_ch2, PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb0_spi1_nss, PinId::PB0, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb0_tim1_ch2n, PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb0_tim3_ch3, PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_spi1_sck, PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_tim1_ch2, PinId::PB3, PeripheralId::TIM1, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_usart1_ck, PinId::PB3, PeripheralId::USART1, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_usart1_de, PinId::PB3, PeripheralId::USART1, SignalId::signal_de, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_usart1_rts, PinId::PB3, PeripheralId::USART1, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_spi2_mosi, PinId::PB7, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_tim17_ch1n, PinId::PB7, PeripheralId::TIM17, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_usart1_rx, PinId::PB7, PeripheralId::USART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
}};

template<PinId Pin, PeripheralId Peripheral, SignalId Signal>
inline auto apply_route() noexcept -> void {
  static_assert(RouteTraits<Pin, Peripheral, Signal>::kPresent, "");
}

template<>
inline auto apply_route<PinId::PA0, PeripheralId::SPI2, SignalId::signal_sck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 0)) | (std::uint32_t{0x2} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x0} << 0);
}

template<>
inline auto apply_route<PinId::PA0, PeripheralId::USART2, SignalId::signal_cts>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 0)) | (std::uint32_t{0x2} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x1} << 0);
}

template<>
inline auto apply_route<PinId::PA0, PeripheralId::USART2, SignalId::signal_nss>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 0)) | (std::uint32_t{0x2} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x1} << 0);
}

template<>
inline auto apply_route<PinId::PA1, PeripheralId::SPI1, SignalId::signal_sck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 2)) | (std::uint32_t{0x2} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x0} << 4);
}

template<>
inline auto apply_route<PinId::PA1, PeripheralId::USART2, SignalId::signal_ck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 2)) | (std::uint32_t{0x2} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x1} << 4);
}

template<>
inline auto apply_route<PinId::PA1, PeripheralId::USART2, SignalId::signal_de>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 2)) | (std::uint32_t{0x2} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x1} << 4);
}

template<>
inline auto apply_route<PinId::PA1, PeripheralId::USART2, SignalId::signal_rts>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 2)) | (std::uint32_t{0x2} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x1} << 4);
}

template<>
inline auto apply_route<PinId::PA2, PeripheralId::SPI1, SignalId::signal_mosi>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 4)) | (std::uint32_t{0x2} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x0} << 8);
}

template<>
inline auto apply_route<PinId::PA2, PeripheralId::USART2, SignalId::signal_tx>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 4)) | (std::uint32_t{0x2} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x1} << 8);
}

template<>
inline auto apply_route<PinId::PA3, PeripheralId::SPI2, SignalId::signal_miso>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x0} << 12);
}

template<>
inline auto apply_route<PinId::PA3, PeripheralId::USART2, SignalId::signal_rx>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x1} << 12);
}

template<>
inline auto apply_route<PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 8)) | (std::uint32_t{0x2} << 8);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x0} << 16);
}

template<>
inline auto apply_route<PinId::PA4, PeripheralId::SPI2, SignalId::signal_mosi>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 8)) | (std::uint32_t{0x2} << 8);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x1} << 16);
}

template<>
inline auto apply_route<PinId::PA4, PeripheralId::TIM14, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 15);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 15);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 8)) | (std::uint32_t{0x2} << 8);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x4} << 16);
}

template<>
inline auto apply_route<PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 10)) | (std::uint32_t{0x2} << 10);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 20)) | (std::uint32_t{0x0} << 20);
}

template<>
inline auto apply_route<PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x0} << 24);
}

template<>
inline auto apply_route<PinId::PA6, PeripheralId::TIM16, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x5} << 24);
}

template<>
inline auto apply_route<PinId::PA6, PeripheralId::TIM1, SignalId::signal_bk>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 11);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 11);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x2} << 24);
}

template<>
inline auto apply_route<PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x1} << 24);
}

template<>
inline auto apply_route<PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x0} << 28);
}

template<>
inline auto apply_route<PinId::PA7, PeripheralId::TIM14, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 15);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 15);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x4} << 28);
}

template<>
inline auto apply_route<PinId::PA7, PeripheralId::TIM17, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x5} << 28);
}

template<>
inline auto apply_route<PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 11);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 11);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x2} << 28);
}

template<>
inline auto apply_route<PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000000u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000020u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x1} << 28);
}

template<>
inline auto apply_route<PinId::PB0, PeripheralId::SPI1, SignalId::signal_nss>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 0)) | (std::uint32_t{0x2} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x0} << 0);
}

template<>
inline auto apply_route<PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 11);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 11);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 0)) | (std::uint32_t{0x2} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x2} << 0);
}

template<>
inline auto apply_route<PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 0)) | (std::uint32_t{0x2} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x1} << 0);
}

template<>
inline auto apply_route<PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x0} << 12);
}

template<>
inline auto apply_route<PinId::PB3, PeripheralId::TIM1, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 11);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 11);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x1} << 12);
}

template<>
inline auto apply_route<PinId::PB3, PeripheralId::USART1, SignalId::signal_ck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x4} << 12);
}

template<>
inline auto apply_route<PinId::PB3, PeripheralId::USART1, SignalId::signal_de>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x4} << 12);
}

template<>
inline auto apply_route<PinId::PB3, PeripheralId::USART1, SignalId::signal_rts>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x4} << 12);
}

template<>
inline auto apply_route<PinId::PB7, PeripheralId::SPI2, SignalId::signal_mosi>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x4002102Cu) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x1} << 28);
}

template<>
inline auto apply_route<PinId::PB7, PeripheralId::TIM17, SignalId::signal_ch1n>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x2} << 28);
}

template<>
inline auto apply_route<PinId::PB7, PeripheralId::USART1, SignalId::signal_rx>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40021040u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40021030u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000400u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x50000420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x50000420u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x0} << 28);
}

enum class ConnectionGroupId : std::uint16_t {
  none,
  group_spi1_tssop20_sck_mosi_miso,
  group_spi2_tssop20_sck_mosi_miso,
  group_tim17_tssop20_all_signals,
  group_tim1_tssop20_all_signals,
  group_tim3_tssop20_all_signals,
  group_usart1_tssop20_all_signals,
  group_usart2_tssop20_tx_rx,
  group_usart2_tssop20_tx_rx_cts_rts,
};

template<PeripheralId Peripheral, SignalId... Signals>
struct ConnectionGroupTraits {
  static constexpr bool kPresent = false;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::none;
  static constexpr std::array<RouteId, 0> kRoutes = {};
};

template<>
struct ConnectionGroupTraits<PeripheralId::SPI1, SignalId::signal_sck, SignalId::signal_mosi, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_pa1_spi1_sck,
    RouteId::candidate_pa2_spi1_mosi,
    RouteId::candidate_pa5_spi1_sck,
    RouteId::candidate_pa6_spi1_miso,
    RouteId::candidate_pa7_spi1_mosi,
    RouteId::candidate_pb3_spi1_sck,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::SPI2, SignalId::signal_sck, SignalId::signal_mosi, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pa0_spi2_sck,
    RouteId::candidate_pa3_spi2_miso,
    RouteId::candidate_pa4_spi2_mosi,
    RouteId::candidate_pb7_spi2_mosi,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM17, SignalId::signal_ch1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim17_tssop20_all_signals;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pa7_tim17_ch1,
    RouteId::candidate_pb7_tim17_ch1n,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM1, SignalId::signal_bk, SignalId::signal_ch1n, SignalId::signal_ch2, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim1_tssop20_all_signals;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pa6_tim1_bk,
    RouteId::candidate_pa7_tim1_ch1n,
    RouteId::candidate_pb0_tim1_ch2n,
    RouteId::candidate_pb3_tim1_ch2,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM3, SignalId::signal_ch1, SignalId::signal_ch2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim3_tssop20_all_signals;
  static constexpr std::array<RouteId, 3> kRoutes = {{
    RouteId::candidate_pa6_tim3_ch1,
    RouteId::candidate_pa7_tim3_ch2,
    RouteId::candidate_pb0_tim3_ch3,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART1, SignalId::signal_ck, SignalId::signal_de, SignalId::signal_rts, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart1_tssop20_all_signals;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pb3_usart1_ck,
    RouteId::candidate_pb3_usart1_de,
    RouteId::candidate_pb3_usart1_rts,
    RouteId::candidate_pb7_usart1_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART2, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart2_tssop20_tx_rx;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pa2_usart2_tx,
    RouteId::candidate_pa3_usart2_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART2, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart2_tssop20_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pa0_usart2_cts,
    RouteId::candidate_pa1_usart2_rts,
    RouteId::candidate_pa2_usart2_tx,
    RouteId::candidate_pa3_usart2_rx,
  }};
};

struct ConnectionGroupDescriptor {
  ConnectionGroupId group_id;
  PeripheralId peripheral_id;
  std::uint16_t route_count;
};
inline constexpr std::array<ConnectionGroupDescriptor, 8> kRuntimeConnectionGroups = {{
  {ConnectionGroupId::group_spi1_tssop20_sck_mosi_miso, PeripheralId::SPI1, 6u},
  {ConnectionGroupId::group_spi2_tssop20_sck_mosi_miso, PeripheralId::SPI2, 4u},
  {ConnectionGroupId::group_tim17_tssop20_all_signals, PeripheralId::TIM17, 2u},
  {ConnectionGroupId::group_tim1_tssop20_all_signals, PeripheralId::TIM1, 4u},
  {ConnectionGroupId::group_tim3_tssop20_all_signals, PeripheralId::TIM3, 3u},
  {ConnectionGroupId::group_usart1_tssop20_all_signals, PeripheralId::USART1, 4u},
  {ConnectionGroupId::group_usart2_tssop20_tx_rx, PeripheralId::USART2, 2u},
  {ConnectionGroupId::group_usart2_tssop20_tx_rx_cts_rts, PeripheralId::USART2, 4u},
}};

}
}
}
}
}
}
