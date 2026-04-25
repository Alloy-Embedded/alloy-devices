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
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f405rg {
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
  candidate_pb10_spi2_sck,
  candidate_pb10_tim2_ch3,
  candidate_pb11_tim2_ch4,
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
  candidate_pb5_spi1_mosi,
  candidate_pb5_tim3_ch2,
  candidate_pb6_tim4_ch1,
  candidate_pb6_usart1_tx,
  candidate_pb7_tim4_ch2,
  candidate_pb7_usart1_rx,
  candidate_pb8_tim4_ch3,
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
struct RouteTraits<PinId::PA10, PeripheralId::TIM1, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_tim1_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA10, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA10, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA10, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PA11, PeripheralId::TIM1, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa11_tim1_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA11, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA11, PeripheralId::USART1, SignalId::signal_cts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa11_usart1_cts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA11, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PA12, PeripheralId::TIM1, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa12_tim1_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA12, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA12, PeripheralId::USART1, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa12_usart1_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA12, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA15, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa15_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA15, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_tim2_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::TIM5, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_tim5_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim5en, PinId::none, ClockGateId::gate_tim5, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim5rst, PinId::none, ClockGateId::none, ResetId::reset_tim5, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA1, PeripheralId::USART2, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa1_usart2_rts;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA1, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_tim2_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::TIM5, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_tim5_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim5en, PinId::none, ClockGateId::gate_tim5, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim5rst, PinId::none, ClockGateId::none, ResetId::reset_tim5, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA2, PeripheralId::USART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa2_usart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA2, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_tim2_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::TIM5, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_tim5_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim5en, PinId::none, ClockGateId::gate_tim5, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim5rst, PinId::none, ClockGateId::none, ResetId::reset_tim5, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::USART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_usart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_spi1_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::USART2, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_usart2_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_usart2en, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_usart2rst, PinId::none, ClockGateId::none, ResetId::reset_usart2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::TIM2, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_tim2_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::TIM2, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_tim2_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::TIM1, SignalId::signal_bkin> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim1_bkin;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa6_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA6, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa7_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA7, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA8, PeripheralId::TIM1, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa8_tim1_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA8, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA8, PeripheralId::USART1, SignalId::signal_ck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa8_usart1_ck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA8, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PA9, PeripheralId::TIM1, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_tim1_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA9, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA9, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_usart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA9, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_tim3_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB10, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB10, PeripheralId::TIM2, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_tim2_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB10, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB11, PeripheralId::TIM2, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb11_tim2_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB11, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB12, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB12, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB12, PeripheralId::TIM1, SignalId::signal_bkin> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_tim1_bkin;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB12, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB13, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB13, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB13, PeripheralId::TIM1, SignalId::signal_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_tim1_ch1n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB13, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB14, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB14, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB14, PeripheralId::TIM1, SignalId::signal_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb14_tim1_ch2n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB14, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB15, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB15, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB15, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb15_tim1_ch3n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB15, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::TIM1, SignalId::signal_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_tim1_ch3n;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_tim1en, PinId::none, ClockGateId::gate_tim1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, PinId::none, ClockGateId::none, ResetId::reset_tim1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::TIM3, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_tim3_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_spi1_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::TIM2, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_tim2_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim2en, PinId::none, ClockGateId::gate_tim2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, PinId::none, ClockGateId::none, ResetId::reset_tim2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_spi1_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB4, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB4, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB4, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_spi1_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_spi1en, PinId::none, ClockGateId::gate_spi1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_spi1rst, PinId::none, ClockGateId::none, ResetId::reset_spi1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB5, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB5, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB5, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB6, PeripheralId::TIM4, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_tim4_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim4en, PinId::none, ClockGateId::gate_tim4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim4rst, PinId::none, ClockGateId::none, ResetId::reset_tim4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB6, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB6, PeripheralId::USART1, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_usart1_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB6, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::TIM4, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_tim4_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim4en, PinId::none, ClockGateId::gate_tim4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim4rst, PinId::none, ClockGateId::none, ResetId::reset_tim4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB7, PeripheralId::USART1, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_usart1_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2enr, FieldId::field_rcc_apb2enr_usart1en, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_usart1rst, PinId::none, ClockGateId::none, ResetId::reset_usart1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 7},
  }};
};

template<>
struct RouteTraits<PinId::PB8, PeripheralId::TIM4, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_tim4_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim4en, PinId::none, ClockGateId::gate_tim4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim4rst, PinId::none, ClockGateId::none, ResetId::reset_tim4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB8, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB9, PeripheralId::SPI2, SignalId::signal_nss> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_spi2_nss;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB9, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PB9, PeripheralId::TIM4, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_tim4_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim4en, PinId::none, ClockGateId::gate_tim4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim4rst, PinId::none, ClockGateId::none, ResetId::reset_tim4, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB9, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC2, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc2_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC2, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PC3, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc3_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_spi2en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_spi2rst, PinId::none, ClockGateId::none, ResetId::reset_spi2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC3, ClockGateId::none, ResetId::none, 5},
  }};
};

template<>
struct RouteTraits<PinId::PC6, PeripheralId::TIM3, SignalId::signal_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc6_tim3_ch1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC6, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC7, PeripheralId::TIM3, SignalId::signal_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc7_tim3_ch2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC7, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC8, PeripheralId::TIM3, SignalId::signal_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc8_tim3_ch3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC8, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PC9, PeripheralId::TIM3, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pc9_tim3_ch4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PC9, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD2, PeripheralId::TIM3, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_tim3_etr;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_tim3en, PinId::none, ClockGateId::gate_tim3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, PinId::none, ClockGateId::none, ResetId::reset_tim3, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD2, ClockGateId::none, ResetId::none, 2},
  }};
};

inline constexpr std::array<RouteDescriptor, 68> kRuntimeRoutes = {{
  {RouteId::candidate_pa10_tim1_ch3, PinId::PA10, PeripheralId::TIM1, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa10_usart1_rx, PinId::PA10, PeripheralId::USART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa11_tim1_ch4, PinId::PA11, PeripheralId::TIM1, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa11_usart1_cts, PinId::PA11, PeripheralId::USART1, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa12_tim1_etr, PinId::PA12, PeripheralId::TIM1, SignalId::signal_etr, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa12_usart1_rts, PinId::PA12, PeripheralId::USART1, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_spi1_nss, PinId::PA15, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_tim2_ch1, PinId::PA15, PeripheralId::TIM2, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_tim2_etr, PinId::PA15, PeripheralId::TIM2, SignalId::signal_etr, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_tim2_ch2, PinId::PA1, PeripheralId::TIM2, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_tim5_ch2, PinId::PA1, PeripheralId::TIM5, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_usart2_rts, PinId::PA1, PeripheralId::USART2, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_tim2_ch3, PinId::PA2, PeripheralId::TIM2, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_tim5_ch3, PinId::PA2, PeripheralId::TIM5, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_usart2_tx, PinId::PA2, PeripheralId::USART2, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_tim2_ch4, PinId::PA3, PeripheralId::TIM2, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_tim5_ch4, PinId::PA3, PeripheralId::TIM5, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_usart2_rx, PinId::PA3, PeripheralId::USART2, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_spi1_nss, PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_usart2_ck, PinId::PA4, PeripheralId::USART2, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa5_spi1_sck, PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa5_tim2_ch1, PinId::PA5, PeripheralId::TIM2, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa5_tim2_etr, PinId::PA5, PeripheralId::TIM2, SignalId::signal_etr, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_spi1_miso, PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_tim1_bkin, PinId::PA6, PeripheralId::TIM1, SignalId::signal_bkin, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_tim3_ch1, PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_spi1_mosi, PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim1_ch1n, PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_tim3_ch2, PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa8_tim1_ch1, PinId::PA8, PeripheralId::TIM1, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa8_usart1_ck, PinId::PA8, PeripheralId::USART1, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa9_tim1_ch2, PinId::PA9, PeripheralId::TIM1, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa9_usart1_tx, PinId::PA9, PeripheralId::USART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb0_tim1_ch2n, PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb0_tim3_ch3, PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb10_spi2_sck, PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb10_tim2_ch3, PinId::PB10, PeripheralId::TIM2, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb11_tim2_ch4, PinId::PB11, PeripheralId::TIM2, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb12_spi2_nss, PinId::PB12, PeripheralId::SPI2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb12_tim1_bkin, PinId::PB12, PeripheralId::TIM1, SignalId::signal_bkin, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb13_spi2_sck, PinId::PB13, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb13_tim1_ch1n, PinId::PB13, PeripheralId::TIM1, SignalId::signal_ch1n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb14_spi2_miso, PinId::PB14, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb14_tim1_ch2n, PinId::PB14, PeripheralId::TIM1, SignalId::signal_ch2n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb15_spi2_mosi, PinId::PB15, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb15_tim1_ch3n, PinId::PB15, PeripheralId::TIM1, SignalId::signal_ch3n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_tim1_ch3n, PinId::PB1, PeripheralId::TIM1, SignalId::signal_ch3n, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb1_tim3_ch4, PinId::PB1, PeripheralId::TIM3, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_spi1_sck, PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_tim2_ch2, PinId::PB3, PeripheralId::TIM2, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_spi1_miso, PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_tim3_ch1, PinId::PB4, PeripheralId::TIM3, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb5_spi1_mosi, PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb5_tim3_ch2, PinId::PB5, PeripheralId::TIM3, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_tim4_ch1, PinId::PB6, PeripheralId::TIM4, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_usart1_tx, PinId::PB6, PeripheralId::USART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_tim4_ch2, PinId::PB7, PeripheralId::TIM4, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_usart1_rx, PinId::PB7, PeripheralId::USART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb8_tim4_ch3, PinId::PB8, PeripheralId::TIM4, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb9_spi2_nss, PinId::PB9, PeripheralId::SPI2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb9_tim4_ch4, PinId::PB9, PeripheralId::TIM4, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc2_spi2_miso, PinId::PC2, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc3_spi2_mosi, PinId::PC3, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc6_tim3_ch1, PinId::PC6, PeripheralId::TIM3, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc7_tim3_ch2, PinId::PC7, PeripheralId::TIM3, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc8_tim3_ch3, PinId::PC8, PeripheralId::TIM3, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc9_tim3_ch4, PinId::PC9, PeripheralId::TIM3, SignalId::signal_ch4, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pd2_tim3_etr, PinId::PD2, PeripheralId::TIM3, SignalId::signal_etr, RouteKindId::route_kind_alternate_function},
}};

template<PinId Pin, PeripheralId Peripheral, SignalId Signal>
inline auto apply_route() noexcept -> void {
  static_assert(RouteTraits<Pin, Peripheral, Signal>::kPresent, "");
}

enum class ConnectionGroupId : std::uint16_t {
  none,
  group_spi1_lqfp64_sck_mosi_miso,
  group_spi2_lqfp64_sck_mosi_miso,
  group_tim1_lqfp64_all_signals,
  group_tim2_lqfp64_all_signals,
  group_tim3_lqfp64_all_signals,
  group_tim4_lqfp64_all_signals,
  group_tim5_lqfp64_all_signals,
  group_usart1_lqfp64_tx_rx,
  group_usart1_lqfp64_tx_rx_cts_rts,
  group_usart2_lqfp64_tx_rx,
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
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_pa5_spi1_sck,
    RouteId::candidate_pa6_spi1_miso,
    RouteId::candidate_pa7_spi1_mosi,
    RouteId::candidate_pb3_spi1_sck,
    RouteId::candidate_pb4_spi1_miso,
    RouteId::candidate_pb5_spi1_mosi,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::SPI2, SignalId::signal_sck, SignalId::signal_mosi, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_pb10_spi2_sck,
    RouteId::candidate_pb13_spi2_sck,
    RouteId::candidate_pb14_spi2_miso,
    RouteId::candidate_pb15_spi2_mosi,
    RouteId::candidate_pc2_spi2_miso,
    RouteId::candidate_pc3_spi2_mosi,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM1, SignalId::signal_bkin, SignalId::signal_ch1, SignalId::signal_ch1n, SignalId::signal_ch2, SignalId::signal_ch2n, SignalId::signal_ch3, SignalId::signal_ch3n, SignalId::signal_ch4, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim1_lqfp64_all_signals;
  static constexpr std::array<RouteId, 13> kRoutes = {{
    RouteId::candidate_pa10_tim1_ch3,
    RouteId::candidate_pa11_tim1_ch4,
    RouteId::candidate_pa12_tim1_etr,
    RouteId::candidate_pa6_tim1_bkin,
    RouteId::candidate_pa7_tim1_ch1n,
    RouteId::candidate_pa8_tim1_ch1,
    RouteId::candidate_pa9_tim1_ch2,
    RouteId::candidate_pb0_tim1_ch2n,
    RouteId::candidate_pb12_tim1_bkin,
    RouteId::candidate_pb13_tim1_ch1n,
    RouteId::candidate_pb14_tim1_ch2n,
    RouteId::candidate_pb15_tim1_ch3n,
    RouteId::candidate_pb1_tim1_ch3n,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM2, SignalId::signal_ch1, SignalId::signal_ch2, SignalId::signal_ch3, SignalId::signal_ch4, SignalId::signal_etr> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim2_lqfp64_all_signals;
  static constexpr std::array<RouteId, 10> kRoutes = {{
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
struct ConnectionGroupTraits<PeripheralId::TIM4, SignalId::signal_ch1, SignalId::signal_ch2, SignalId::signal_ch3, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim4_lqfp64_all_signals;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pb6_tim4_ch1,
    RouteId::candidate_pb7_tim4_ch2,
    RouteId::candidate_pb8_tim4_ch3,
    RouteId::candidate_pb9_tim4_ch4,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TIM5, SignalId::signal_ch2, SignalId::signal_ch3, SignalId::signal_ch4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_tim5_lqfp64_all_signals;
  static constexpr std::array<RouteId, 3> kRoutes = {{
    RouteId::candidate_pa1_tim5_ch2,
    RouteId::candidate_pa2_tim5_ch3,
    RouteId::candidate_pa3_tim5_ch4,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART1, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pa10_usart1_rx,
    RouteId::candidate_pa9_usart1_tx,
    RouteId::candidate_pb6_usart1_tx,
    RouteId::candidate_pb7_usart1_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART1, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_pa10_usart1_rx,
    RouteId::candidate_pa11_usart1_cts,
    RouteId::candidate_pa12_usart1_rts,
    RouteId::candidate_pa9_usart1_tx,
    RouteId::candidate_pb6_usart1_tx,
    RouteId::candidate_pb7_usart1_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART2, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart2_lqfp64_tx_rx;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pa2_usart2_tx,
    RouteId::candidate_pa3_usart2_rx,
  }};
};

struct ConnectionGroupDescriptor {
  ConnectionGroupId group_id;
  PeripheralId peripheral_id;
  std::uint16_t route_count;
};
inline constexpr std::array<ConnectionGroupDescriptor, 10> kRuntimeConnectionGroups = {{
  {ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso, PeripheralId::SPI1, 6u},
  {ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso, PeripheralId::SPI2, 6u},
  {ConnectionGroupId::group_tim1_lqfp64_all_signals, PeripheralId::TIM1, 13u},
  {ConnectionGroupId::group_tim2_lqfp64_all_signals, PeripheralId::TIM2, 10u},
  {ConnectionGroupId::group_tim3_lqfp64_all_signals, PeripheralId::TIM3, 11u},
  {ConnectionGroupId::group_tim4_lqfp64_all_signals, PeripheralId::TIM4, 4u},
  {ConnectionGroupId::group_tim5_lqfp64_all_signals, PeripheralId::TIM5, 3u},
  {ConnectionGroupId::group_usart1_lqfp64_tx_rx, PeripheralId::USART1, 4u},
  {ConnectionGroupId::group_usart1_lqfp64_tx_rx_cts_rts, PeripheralId::USART1, 6u},
  {ConnectionGroupId::group_usart2_lqfp64_tx_rx, PeripheralId::USART2, 2u},
}};

}
}
}
}
}
}
