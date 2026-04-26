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
namespace stm32f401re {
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
  candidate_pb10_i2c2_scl,
  candidate_pb10_spi2_sck,
  candidate_pb10_tim2_ch3,
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
  candidate_pb3_i2c2_sda,
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
struct RouteTraits<PinId::PB10, PeripheralId::I2C2, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb10_i2c2_scl;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_i2c2en, PinId::none, ClockGateId::gate_i2c2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c2rst, PinId::none, ClockGateId::none, ResetId::reset_i2c2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB10, ClockGateId::none, ResetId::none, 4},
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
struct RouteTraits<PinId::PB12, PeripheralId::I2C2, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb12_i2c2_smba;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_i2c2en, PinId::none, ClockGateId::gate_i2c2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c2rst, PinId::none, ClockGateId::none, ResetId::reset_i2c2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB12, ClockGateId::none, ResetId::none, 4},
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
struct RouteTraits<PinId::PB3, PeripheralId::I2C2, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_i2c2_sda;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_i2c2en, PinId::none, ClockGateId::gate_i2c2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c2rst, PinId::none, ClockGateId::none, ResetId::reset_i2c2, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 9},
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
struct RouteTraits<PinId::PB5, PeripheralId::I2C1, SignalId::signal_smba> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_i2c1_smba;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_i2c1en, PinId::none, ClockGateId::gate_i2c1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c1rst, PinId::none, ClockGateId::none, ResetId::reset_i2c1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB5, ClockGateId::none, ResetId::none, 4},
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
struct RouteTraits<PinId::PB6, PeripheralId::I2C1, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb6_i2c1_scl;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_i2c1en, PinId::none, ClockGateId::gate_i2c1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c1rst, PinId::none, ClockGateId::none, ResetId::reset_i2c1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB6, ClockGateId::none, ResetId::none, 4},
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
struct RouteTraits<PinId::PB7, PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb7_i2c1_sda;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_i2c1en, PinId::none, ClockGateId::gate_i2c1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c1rst, PinId::none, ClockGateId::none, ResetId::reset_i2c1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB7, ClockGateId::none, ResetId::none, 4},
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
struct RouteTraits<PinId::PB8, PeripheralId::I2C1, SignalId::signal_scl> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb8_i2c1_scl;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_i2c1en, PinId::none, ClockGateId::gate_i2c1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c1rst, PinId::none, ClockGateId::none, ResetId::reset_i2c1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB8, ClockGateId::none, ResetId::none, 4},
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
struct RouteTraits<PinId::PB9, PeripheralId::I2C1, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb9_i2c1_sda;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_alternate_function;
  static constexpr std::array<RouteOperation, 3> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1enr, FieldId::field_rcc_apb1enr_i2c1en, PinId::none, ClockGateId::gate_i2c1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_clock_st_stm32f417_rcc_v1_0, OperationKindId::operation_kind_clear_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c1rst, PinId::none, ClockGateId::none, ResetId::reset_i2c1, 0},
    {BackendSchemaId::schema_alloy_pinmux_stm32_af_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB9, ClockGateId::none, ResetId::none, 4},
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

inline constexpr std::array<RouteDescriptor, 75> kRuntimeRoutes = {{
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
  {RouteId::candidate_pb10_i2c2_scl, PinId::PB10, PeripheralId::I2C2, SignalId::signal_scl, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb10_spi2_sck, PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb10_tim2_ch3, PinId::PB10, PeripheralId::TIM2, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb12_i2c2_smba, PinId::PB12, PeripheralId::I2C2, SignalId::signal_smba, RouteKindId::route_kind_alternate_function},
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
  {RouteId::candidate_pb3_i2c2_sda, PinId::PB3, PeripheralId::I2C2, SignalId::signal_sda, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_spi1_sck, PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_tim2_ch2, PinId::PB3, PeripheralId::TIM2, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_spi1_miso, PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_tim3_ch1, PinId::PB4, PeripheralId::TIM3, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb5_i2c1_smba, PinId::PB5, PeripheralId::I2C1, SignalId::signal_smba, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb5_spi1_mosi, PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb5_tim3_ch2, PinId::PB5, PeripheralId::TIM3, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_i2c1_scl, PinId::PB6, PeripheralId::I2C1, SignalId::signal_scl, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_tim4_ch1, PinId::PB6, PeripheralId::TIM4, SignalId::signal_ch1, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_usart1_tx, PinId::PB6, PeripheralId::USART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_i2c1_sda, PinId::PB7, PeripheralId::I2C1, SignalId::signal_sda, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_tim4_ch2, PinId::PB7, PeripheralId::TIM4, SignalId::signal_ch2, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_usart1_rx, PinId::PB7, PeripheralId::USART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb8_i2c1_scl, PinId::PB8, PeripheralId::I2C1, SignalId::signal_scl, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb8_tim4_ch3, PinId::PB8, PeripheralId::TIM4, SignalId::signal_ch3, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb9_i2c1_sda, PinId::PB9, PeripheralId::I2C1, SignalId::signal_sda, RouteKindId::route_kind_alternate_function},
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

template<>
inline auto apply_route<PinId::PA10, PeripheralId::TIM1, SignalId::signal_ch3>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 20)) | (std::uint32_t{0x2} << 20);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x1} << 8);
}

template<>
inline auto apply_route<PinId::PA10, PeripheralId::USART1, SignalId::signal_rx>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 20)) | (std::uint32_t{0x2} << 20);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x7} << 8);
}

template<>
inline auto apply_route<PinId::PA11, PeripheralId::TIM1, SignalId::signal_ch4>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 22)) | (std::uint32_t{0x2} << 22);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x1} << 12);
}

template<>
inline auto apply_route<PinId::PA11, PeripheralId::USART1, SignalId::signal_cts>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 22)) | (std::uint32_t{0x2} << 22);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x7} << 12);
}

template<>
inline auto apply_route<PinId::PA12, PeripheralId::TIM1, SignalId::signal_etr>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 24)) | (std::uint32_t{0x2} << 24);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x1} << 16);
}

template<>
inline auto apply_route<PinId::PA12, PeripheralId::USART1, SignalId::signal_rts>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 24)) | (std::uint32_t{0x2} << 24);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x7} << 16);
}

template<>
inline auto apply_route<PinId::PA15, PeripheralId::SPI1, SignalId::signal_nss>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 30)) | (std::uint32_t{0x2} << 30);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x5} << 28);
}

template<>
inline auto apply_route<PinId::PA15, PeripheralId::TIM2, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 30)) | (std::uint32_t{0x2} << 30);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x1} << 28);
}

template<>
inline auto apply_route<PinId::PA15, PeripheralId::TIM2, SignalId::signal_etr>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 30)) | (std::uint32_t{0x2} << 30);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x1} << 28);
}

template<>
inline auto apply_route<PinId::PA1, PeripheralId::TIM2, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 2)) | (std::uint32_t{0x2} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x1} << 4);
}

template<>
inline auto apply_route<PinId::PA1, PeripheralId::TIM5, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 3);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 3);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 2)) | (std::uint32_t{0x2} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x2} << 4);
}

template<>
inline auto apply_route<PinId::PA1, PeripheralId::USART2, SignalId::signal_rts>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 2)) | (std::uint32_t{0x2} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x7} << 4);
}

template<>
inline auto apply_route<PinId::PA2, PeripheralId::TIM2, SignalId::signal_ch3>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 4)) | (std::uint32_t{0x2} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x1} << 8);
}

template<>
inline auto apply_route<PinId::PA2, PeripheralId::TIM5, SignalId::signal_ch3>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 3);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 3);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 4)) | (std::uint32_t{0x2} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x2} << 8);
}

template<>
inline auto apply_route<PinId::PA2, PeripheralId::USART2, SignalId::signal_tx>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 4)) | (std::uint32_t{0x2} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x7} << 8);
}

template<>
inline auto apply_route<PinId::PA3, PeripheralId::TIM2, SignalId::signal_ch4>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x1} << 12);
}

template<>
inline auto apply_route<PinId::PA3, PeripheralId::TIM5, SignalId::signal_ch4>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 3);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 3);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x2} << 12);
}

template<>
inline auto apply_route<PinId::PA3, PeripheralId::USART2, SignalId::signal_rx>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x7} << 12);
}

template<>
inline auto apply_route<PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 8)) | (std::uint32_t{0x2} << 8);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x5} << 16);
}

template<>
inline auto apply_route<PinId::PA4, PeripheralId::USART2, SignalId::signal_ck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 17);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 8)) | (std::uint32_t{0x2} << 8);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x7} << 16);
}

template<>
inline auto apply_route<PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 10)) | (std::uint32_t{0x2} << 10);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 20)) | (std::uint32_t{0x5} << 20);
}

template<>
inline auto apply_route<PinId::PA5, PeripheralId::TIM2, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 10)) | (std::uint32_t{0x2} << 10);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 20)) | (std::uint32_t{0x1} << 20);
}

template<>
inline auto apply_route<PinId::PA5, PeripheralId::TIM2, SignalId::signal_etr>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 10)) | (std::uint32_t{0x2} << 10);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 20)) | (std::uint32_t{0x1} << 20);
}

template<>
inline auto apply_route<PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x5} << 24);
}

template<>
inline auto apply_route<PinId::PA6, PeripheralId::TIM1, SignalId::signal_bkin>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x1} << 24);
}

template<>
inline auto apply_route<PinId::PA6, PeripheralId::TIM3, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x2} << 24);
}

template<>
inline auto apply_route<PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x5} << 28);
}

template<>
inline auto apply_route<PinId::PA7, PeripheralId::TIM1, SignalId::signal_ch1n>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x1} << 28);
}

template<>
inline auto apply_route<PinId::PA7, PeripheralId::TIM3, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020020u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020020u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x2} << 28);
}

template<>
inline auto apply_route<PinId::PA8, PeripheralId::TIM1, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 16)) | (std::uint32_t{0x2} << 16);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x1} << 0);
}

template<>
inline auto apply_route<PinId::PA8, PeripheralId::USART1, SignalId::signal_ck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 16)) | (std::uint32_t{0x2} << 16);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x7} << 0);
}

template<>
inline auto apply_route<PinId::PA9, PeripheralId::TIM1, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 18)) | (std::uint32_t{0x2} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x1} << 4);
}

template<>
inline auto apply_route<PinId::PA9, PeripheralId::USART1, SignalId::signal_tx>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020000u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020000u) & ~(std::uint32_t{0x3} << 18)) | (std::uint32_t{0x2} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020024u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020024u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x7} << 4);
}

template<>
inline auto apply_route<PinId::PB0, PeripheralId::TIM1, SignalId::signal_ch2n>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 0)) | (std::uint32_t{0x2} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x1} << 0);
}

template<>
inline auto apply_route<PinId::PB0, PeripheralId::TIM3, SignalId::signal_ch3>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 0)) | (std::uint32_t{0x2} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x2} << 0);
}

template<>
inline auto apply_route<PinId::PB10, PeripheralId::I2C2, SignalId::signal_scl>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 22);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 22);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 20)) | (std::uint32_t{0x2} << 20);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x4} << 8);
}

template<>
inline auto apply_route<PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 20)) | (std::uint32_t{0x2} << 20);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x5} << 8);
}

template<>
inline auto apply_route<PinId::PB10, PeripheralId::TIM2, SignalId::signal_ch3>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 20)) | (std::uint32_t{0x2} << 20);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x1} << 8);
}

template<>
inline auto apply_route<PinId::PB12, PeripheralId::I2C2, SignalId::signal_smba>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 22);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 22);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 24)) | (std::uint32_t{0x2} << 24);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x4} << 16);
}

template<>
inline auto apply_route<PinId::PB12, PeripheralId::SPI2, SignalId::signal_nss>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 24)) | (std::uint32_t{0x2} << 24);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x5} << 16);
}

template<>
inline auto apply_route<PinId::PB12, PeripheralId::TIM1, SignalId::signal_bkin>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 24)) | (std::uint32_t{0x2} << 24);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x1} << 16);
}

template<>
inline auto apply_route<PinId::PB13, PeripheralId::SPI2, SignalId::signal_sck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 26)) | (std::uint32_t{0x2} << 26);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 20)) | (std::uint32_t{0x5} << 20);
}

template<>
inline auto apply_route<PinId::PB13, PeripheralId::TIM1, SignalId::signal_ch1n>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 26)) | (std::uint32_t{0x2} << 26);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 20)) | (std::uint32_t{0x1} << 20);
}

template<>
inline auto apply_route<PinId::PB14, PeripheralId::SPI2, SignalId::signal_miso>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 28)) | (std::uint32_t{0x2} << 28);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x5} << 24);
}

template<>
inline auto apply_route<PinId::PB14, PeripheralId::TIM1, SignalId::signal_ch2n>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 28)) | (std::uint32_t{0x2} << 28);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x1} << 24);
}

template<>
inline auto apply_route<PinId::PB15, PeripheralId::SPI2, SignalId::signal_mosi>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 30)) | (std::uint32_t{0x2} << 30);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x5} << 28);
}

template<>
inline auto apply_route<PinId::PB15, PeripheralId::TIM1, SignalId::signal_ch3n>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 30)) | (std::uint32_t{0x2} << 30);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x1} << 28);
}

template<>
inline auto apply_route<PinId::PB1, PeripheralId::TIM1, SignalId::signal_ch3n>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 2)) | (std::uint32_t{0x2} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x1} << 4);
}

template<>
inline auto apply_route<PinId::PB1, PeripheralId::TIM3, SignalId::signal_ch4>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 2)) | (std::uint32_t{0x2} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x2} << 4);
}

template<>
inline auto apply_route<PinId::PB3, PeripheralId::I2C2, SignalId::signal_sda>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 22);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 22);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x9} << 12);
}

template<>
inline auto apply_route<PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x5} << 12);
}

template<>
inline auto apply_route<PinId::PB3, PeripheralId::TIM2, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 0);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x1} << 12);
}

template<>
inline auto apply_route<PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 8)) | (std::uint32_t{0x2} << 8);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x5} << 16);
}

template<>
inline auto apply_route<PinId::PB4, PeripheralId::TIM3, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 8)) | (std::uint32_t{0x2} << 8);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 16)) | (std::uint32_t{0x2} << 16);
}

template<>
inline auto apply_route<PinId::PB5, PeripheralId::I2C1, SignalId::signal_smba>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 10)) | (std::uint32_t{0x2} << 10);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 20)) | (std::uint32_t{0x4} << 20);
}

template<>
inline auto apply_route<PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 10)) | (std::uint32_t{0x2} << 10);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 20)) | (std::uint32_t{0x5} << 20);
}

template<>
inline auto apply_route<PinId::PB5, PeripheralId::TIM3, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 10)) | (std::uint32_t{0x2} << 10);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 20)) | (std::uint32_t{0x2} << 20);
}

template<>
inline auto apply_route<PinId::PB6, PeripheralId::I2C1, SignalId::signal_scl>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x4} << 24);
}

template<>
inline auto apply_route<PinId::PB6, PeripheralId::TIM4, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x2} << 24);
}

template<>
inline auto apply_route<PinId::PB6, PeripheralId::USART1, SignalId::signal_tx>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x7} << 24);
}

template<>
inline auto apply_route<PinId::PB7, PeripheralId::I2C1, SignalId::signal_sda>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x4} << 28);
}

template<>
inline auto apply_route<PinId::PB7, PeripheralId::TIM4, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x2} << 28);
}

template<>
inline auto apply_route<PinId::PB7, PeripheralId::USART1, SignalId::signal_rx>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023844u) |=(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023824u) &= ~(std::uint32_t{1} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020420u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020420u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x7} << 28);
}

template<>
inline auto apply_route<PinId::PB8, PeripheralId::I2C1, SignalId::signal_scl>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 16)) | (std::uint32_t{0x2} << 16);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x4} << 0);
}

template<>
inline auto apply_route<PinId::PB8, PeripheralId::TIM4, SignalId::signal_ch3>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 16)) | (std::uint32_t{0x2} << 16);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x2} << 0);
}

template<>
inline auto apply_route<PinId::PB9, PeripheralId::I2C1, SignalId::signal_sda>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 21);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 18)) | (std::uint32_t{0x2} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x4} << 4);
}

template<>
inline auto apply_route<PinId::PB9, PeripheralId::SPI2, SignalId::signal_nss>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 18)) | (std::uint32_t{0x2} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x5} << 4);
}

template<>
inline auto apply_route<PinId::PB9, PeripheralId::TIM4, SignalId::signal_ch4>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 2);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020400u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020400u) & ~(std::uint32_t{0x3} << 18)) | (std::uint32_t{0x2} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020424u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020424u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x2} << 4);
}

template<>
inline auto apply_route<PinId::PC2, PeripheralId::SPI2, SignalId::signal_miso>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020800u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020800u) & ~(std::uint32_t{0x3} << 4)) | (std::uint32_t{0x2} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020820u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020820u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x5} << 8);
}

template<>
inline auto apply_route<PinId::PC3, PeripheralId::SPI2, SignalId::signal_mosi>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020800u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020800u) & ~(std::uint32_t{0x3} << 6)) | (std::uint32_t{0x2} << 6);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020820u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020820u) & ~(std::uint32_t{0xF} << 12)) | (std::uint32_t{0x5} << 12);
}

template<>
inline auto apply_route<PinId::PC6, PeripheralId::TIM3, SignalId::signal_ch1>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020800u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020800u) & ~(std::uint32_t{0x3} << 12)) | (std::uint32_t{0x2} << 12);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020820u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020820u) & ~(std::uint32_t{0xF} << 24)) | (std::uint32_t{0x2} << 24);
}

template<>
inline auto apply_route<PinId::PC7, PeripheralId::TIM3, SignalId::signal_ch2>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020800u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020800u) & ~(std::uint32_t{0x3} << 14)) | (std::uint32_t{0x2} << 14);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020820u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020820u) & ~(std::uint32_t{0xF} << 28)) | (std::uint32_t{0x2} << 28);
}

template<>
inline auto apply_route<PinId::PC8, PeripheralId::TIM3, SignalId::signal_ch3>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020800u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020800u) & ~(std::uint32_t{0x3} << 16)) | (std::uint32_t{0x2} << 16);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020824u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020824u) & ~(std::uint32_t{0xF} << 0)) | (std::uint32_t{0x2} << 0);
}

template<>
inline auto apply_route<PinId::PC9, PeripheralId::TIM3, SignalId::signal_ch4>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020800u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020800u) & ~(std::uint32_t{0x3} << 18)) | (std::uint32_t{0x2} << 18);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020824u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020824u) & ~(std::uint32_t{0xF} << 4)) | (std::uint32_t{0x2} << 4);
}

template<>
inline auto apply_route<PinId::PD2, PeripheralId::TIM3, SignalId::signal_etr>() noexcept -> void {
  *reinterpret_cast<volatile std::uint32_t*>(0x40023840u) |=(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40023820u) &= ~(std::uint32_t{1} << 1);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020C00u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020C00u) & ~(std::uint32_t{0x3} << 4)) | (std::uint32_t{0x2} << 4);
  *reinterpret_cast<volatile std::uint32_t*>(0x40020C20u) = 
      (*reinterpret_cast<volatile std::uint32_t*>(0x40020C20u) & ~(std::uint32_t{0xF} << 8)) | (std::uint32_t{0x2} << 8);
}

enum class ConnectionGroupId : std::uint16_t {
  none,
  group_i2c1_lqfp64_scl_sda,
  group_i2c2_lqfp64_scl_sda,
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
struct ConnectionGroupTraits<PeripheralId::I2C1, SignalId::signal_scl, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_i2c1_lqfp64_scl_sda;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pb6_i2c1_scl,
    RouteId::candidate_pb7_i2c1_sda,
    RouteId::candidate_pb8_i2c1_scl,
    RouteId::candidate_pb9_i2c1_sda,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::I2C2, SignalId::signal_scl, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_i2c2_lqfp64_scl_sda;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pb10_i2c2_scl,
    RouteId::candidate_pb3_i2c2_sda,
  }};
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
  static constexpr std::array<RouteId, 9> kRoutes = {{
    RouteId::candidate_pa15_tim2_ch1,
    RouteId::candidate_pa15_tim2_etr,
    RouteId::candidate_pa1_tim2_ch2,
    RouteId::candidate_pa2_tim2_ch3,
    RouteId::candidate_pa3_tim2_ch4,
    RouteId::candidate_pa5_tim2_ch1,
    RouteId::candidate_pa5_tim2_etr,
    RouteId::candidate_pb10_tim2_ch3,
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
inline constexpr std::array<ConnectionGroupDescriptor, 12> kRuntimeConnectionGroups = {{
  {ConnectionGroupId::group_i2c1_lqfp64_scl_sda, PeripheralId::I2C1, 4u},
  {ConnectionGroupId::group_i2c2_lqfp64_scl_sda, PeripheralId::I2C2, 2u},
  {ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso, PeripheralId::SPI1, 6u},
  {ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso, PeripheralId::SPI2, 6u},
  {ConnectionGroupId::group_tim1_lqfp64_all_signals, PeripheralId::TIM1, 13u},
  {ConnectionGroupId::group_tim2_lqfp64_all_signals, PeripheralId::TIM2, 9u},
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
