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
  candidate_pa10_usart1_rx,
  candidate_pa11_usart1_cts,
  candidate_pa12_usart1_rts,
  candidate_pa15_spi1_nss,
  candidate_pa1_usart2_rts,
  candidate_pa2_usart2_tx,
  candidate_pa3_usart2_rx,
  candidate_pa4_spi1_nss,
  candidate_pa4_usart2_ck,
  candidate_pa5_spi1_sck,
  candidate_pa6_spi1_miso,
  candidate_pa7_spi1_mosi,
  candidate_pa8_usart1_ck,
  candidate_pa9_usart1_tx,
  candidate_pb10_spi2_sck,
  candidate_pb12_spi2_nss,
  candidate_pb13_spi2_sck,
  candidate_pb14_spi2_miso,
  candidate_pb15_spi2_mosi,
  candidate_pb3_spi1_sck,
  candidate_pb4_spi1_miso,
  candidate_pb5_spi1_mosi,
  candidate_pb6_usart1_tx,
  candidate_pb7_usart1_rx,
  candidate_pb9_spi2_nss,
  candidate_pc2_spi2_miso,
  candidate_pc3_spi2_mosi,
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

inline constexpr std::array<RouteDescriptor, 27> kRuntimeRoutes = {{
  {RouteId::candidate_pa10_usart1_rx, PinId::PA10, PeripheralId::USART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa11_usart1_cts, PinId::PA11, PeripheralId::USART1, SignalId::signal_cts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa12_usart1_rts, PinId::PA12, PeripheralId::USART1, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa15_spi1_nss, PinId::PA15, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa1_usart2_rts, PinId::PA1, PeripheralId::USART2, SignalId::signal_rts, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa2_usart2_tx, PinId::PA2, PeripheralId::USART2, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa3_usart2_rx, PinId::PA3, PeripheralId::USART2, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_spi1_nss, PinId::PA4, PeripheralId::SPI1, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa4_usart2_ck, PinId::PA4, PeripheralId::USART2, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa5_spi1_sck, PinId::PA5, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa6_spi1_miso, PinId::PA6, PeripheralId::SPI1, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa7_spi1_mosi, PinId::PA7, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa8_usart1_ck, PinId::PA8, PeripheralId::USART1, SignalId::signal_ck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pa9_usart1_tx, PinId::PA9, PeripheralId::USART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb10_spi2_sck, PinId::PB10, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb12_spi2_nss, PinId::PB12, PeripheralId::SPI2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb13_spi2_sck, PinId::PB13, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb14_spi2_miso, PinId::PB14, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb15_spi2_mosi, PinId::PB15, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb3_spi1_sck, PinId::PB3, PeripheralId::SPI1, SignalId::signal_sck, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb4_spi1_miso, PinId::PB4, PeripheralId::SPI1, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb5_spi1_mosi, PinId::PB5, PeripheralId::SPI1, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb6_usart1_tx, PinId::PB6, PeripheralId::USART1, SignalId::signal_tx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb7_usart1_rx, PinId::PB7, PeripheralId::USART1, SignalId::signal_rx, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pb9_spi2_nss, PinId::PB9, PeripheralId::SPI2, SignalId::signal_nss, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc2_spi2_miso, PinId::PC2, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_alternate_function},
  {RouteId::candidate_pc3_spi2_mosi, PinId::PC3, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_alternate_function},
}};

enum class ConnectionGroupId : std::uint16_t {
  none,
  group_spi1_lqfp64_sck_mosi_miso,
  group_spi2_lqfp64_sck_mosi_miso,
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
inline constexpr std::array<ConnectionGroupDescriptor, 5> kRuntimeConnectionGroups = {{
  {ConnectionGroupId::group_spi1_lqfp64_sck_mosi_miso, PeripheralId::SPI1, 6u},
  {ConnectionGroupId::group_spi2_lqfp64_sck_mosi_miso, PeripheralId::SPI2, 6u},
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
