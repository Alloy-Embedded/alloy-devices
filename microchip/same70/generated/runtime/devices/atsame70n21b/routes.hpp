#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "clock_bindings.hpp"
#include "peripheral_instances.hpp"
#include "pins.hpp"
#include "register_fields.hpp"
#include "registers.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace runtime {
namespace devices {
namespace atsame70n21b {
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
  candidate_pa10_gpioa_piodc4,
  candidate_pa10_uart0_utxd0,
  candidate_pa11_gpioa_piodc5,
  candidate_pa12_gpioa_piodc6,
  candidate_pa13_gpioa_piodc7,
  candidate_pa14_gpioa_piodcen1,
  candidate_pa21_gpioa_piodcen2,
  candidate_pa21_usart1_rxd1,
  candidate_pa22_gpioa_piodcclk,
  candidate_pa23_usart1_sck1,
  candidate_pa24_usart1_rts1,
  candidate_pa25_usart1_cts1,
  candidate_pa26_usart1_dcd1,
  candidate_pa27_usart1_dtr1,
  candidate_pa28_usart1_dsr1,
  candidate_pa31_spi0_npcs1,
  candidate_pa3_gpioa_piodc0,
  candidate_pa3_twihs0_twd0,
  candidate_pa3_usart1_loncol1,
  candidate_pa4_gpioa_piodc1,
  candidate_pa4_twihs0_twck0,
  candidate_pa4_uart1_utxd1,
  candidate_pa5_gpioa_piodc2,
  candidate_pa5_uart1_urxd1,
  candidate_pa9_gpioa_piodc3,
  candidate_pa9_uart0_urxd0,
  candidate_pb0_usart0_rxd0,
  candidate_pb13_usart0_sck0,
  candidate_pb1_usart0_txd0,
  candidate_pb2_spi0_npcs0,
  candidate_pb2_usart0_cts0,
  candidate_pb3_usart0_rts0,
  candidate_pb4_twihs1_twd1,
  candidate_pb4_usart1_txd1,
  candidate_pb5_twihs1_twck1,
  candidate_pd0_usart0_dcd0,
  candidate_pd12_spi0_npcs2,
  candidate_pd15_usart2_rxd2,
  candidate_pd16_usart2_txd2,
  candidate_pd17_usart2_sck2,
  candidate_pd18_uart4_urxd4,
  candidate_pd18_usart2_rts2,
  candidate_pd19_uart4_utxd4,
  candidate_pd19_usart2_cts2,
  candidate_pd1_usart0_dtr0,
  candidate_pd20_spi0_miso,
  candidate_pd21_spi0_mosi,
  candidate_pd22_spi0_spck,
  candidate_pd25_spi0_npcs1,
  candidate_pd25_uart2_urxd2,
  candidate_pd26_uart1_utxd1,
  candidate_pd26_uart2_utxd2,
  candidate_pd27_spi0_npcs3,
  candidate_pd27_twihs2_twd2,
  candidate_pd28_twihs2_twck2,
  candidate_pd28_uart3_urxd3,
  candidate_pd2_usart0_dsr0,
  candidate_pd30_uart3_utxd3,
  candidate_pd31_uart3_utxd3,
  candidate_pd3_uart4_utxd4,
  candidate_pd3_usart0_ri0,
  candidate_pd4_usart2_dcd2,
  candidate_pd5_usart2_dtr2,
  candidate_pd6_usart2_dsr2,
  candidate_pd7_usart2_ri2,
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
struct RouteTraits<PinId::PA10, PeripheralId::GPIOA, SignalId::signal_piodc4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_gpioa_piodc4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA10, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA10, PeripheralId::UART0, SignalId::signal_utxd0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa10_uart0_utxd0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA10, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA11, PeripheralId::GPIOA, SignalId::signal_piodc5> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa11_gpioa_piodc5;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA11, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA12, PeripheralId::GPIOA, SignalId::signal_piodc6> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa12_gpioa_piodc6;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA12, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA13, PeripheralId::GPIOA, SignalId::signal_piodc7> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa13_gpioa_piodc7;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA13, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA14, PeripheralId::GPIOA, SignalId::signal_piodcen1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa14_gpioa_piodcen1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA14, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA21, PeripheralId::GPIOA, SignalId::signal_piodcen2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa21_gpioa_piodcen2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA21, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA21, PeripheralId::USART1, SignalId::signal_rxd1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa21_usart1_rxd1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA21, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA22, PeripheralId::GPIOA, SignalId::signal_piodcclk> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa22_gpioa_piodcclk;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA22, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA23, PeripheralId::USART1, SignalId::signal_sck1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa23_usart1_sck1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA23, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA24, PeripheralId::USART1, SignalId::signal_rts1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa24_usart1_rts1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA24, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA25, PeripheralId::USART1, SignalId::signal_cts1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa25_usart1_cts1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA25, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA26, PeripheralId::USART1, SignalId::signal_dcd1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa26_usart1_dcd1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA26, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA27, PeripheralId::USART1, SignalId::signal_dtr1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa27_usart1_dtr1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA27, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA28, PeripheralId::USART1, SignalId::signal_dsr1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa28_usart1_dsr1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA28, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA31, PeripheralId::SPI0, SignalId::signal_npcs1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa31_spi0_npcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_spi0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA31, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::GPIOA, SignalId::signal_piodc0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_gpioa_piodc0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::TWIHS0, SignalId::signal_twd0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_twihs0_twd0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_twihs0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA3, PeripheralId::USART1, SignalId::signal_loncol1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa3_usart1_loncol1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA3, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::GPIOA, SignalId::signal_piodc1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_gpioa_piodc1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::TWIHS0, SignalId::signal_twck0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_twihs0_twck0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_twihs0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PA4, PeripheralId::UART1, SignalId::signal_utxd1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa4_uart1_utxd1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA4, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::GPIOA, SignalId::signal_piodc2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_gpioa_piodc2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA5, PeripheralId::UART1, SignalId::signal_urxd1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa5_uart1_urxd1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA5, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PA9, PeripheralId::GPIOA, SignalId::signal_piodc3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_gpioa_piodc3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_gpioa, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA9, ClockGateId::none, ResetId::none, 101},
  }};
};

template<>
struct RouteTraits<PinId::PA9, PeripheralId::UART0, SignalId::signal_urxd0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pa9_uart0_urxd0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PA9, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB0, PeripheralId::USART0, SignalId::signal_rxd0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb0_usart0_rxd0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB0, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB13, PeripheralId::USART0, SignalId::signal_sck0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb13_usart0_sck0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB13, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB1, PeripheralId::USART0, SignalId::signal_txd0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb1_usart0_txd0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB1, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB2, PeripheralId::SPI0, SignalId::signal_npcs0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb2_spi0_npcs0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_spi0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB2, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PB2, PeripheralId::USART0, SignalId::signal_cts0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb2_usart0_cts0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB2, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB3, PeripheralId::USART0, SignalId::signal_rts0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb3_usart0_rts0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB3, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PB4, PeripheralId::TWIHS1, SignalId::signal_twd1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_twihs1_twd1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_twihs1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB4, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PB4, PeripheralId::USART1, SignalId::signal_txd1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb4_usart1_txd1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB4, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PB5, PeripheralId::TWIHS1, SignalId::signal_twck1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pb5_twihs1_twck1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_twihs1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PB5, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD0, PeripheralId::USART0, SignalId::signal_dcd0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd0_usart0_dcd0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD0, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PD12, PeripheralId::SPI0, SignalId::signal_npcs2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd12_spi0_npcs2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_spi0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD12, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD15, PeripheralId::USART2, SignalId::signal_rxd2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd15_usart2_rxd2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD15, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD16, PeripheralId::USART2, SignalId::signal_txd2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd16_usart2_txd2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD16, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD17, PeripheralId::USART2, SignalId::signal_sck2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd17_usart2_sck2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD17, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD18, PeripheralId::UART4, SignalId::signal_urxd4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd18_uart4_urxd4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD18, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD18, PeripheralId::USART2, SignalId::signal_rts2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd18_usart2_rts2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD18, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD19, PeripheralId::UART4, SignalId::signal_utxd4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd19_uart4_utxd4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD19, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD19, PeripheralId::USART2, SignalId::signal_cts2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd19_usart2_cts2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD19, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD1, PeripheralId::USART0, SignalId::signal_dtr0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd1_usart0_dtr0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD1, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PD20, PeripheralId::SPI0, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd20_spi0_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_spi0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD20, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD21, PeripheralId::SPI0, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd21_spi0_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_spi0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD21, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD22, PeripheralId::SPI0, SignalId::signal_spck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd22_spi0_spck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_spi0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD22, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD25, PeripheralId::SPI0, SignalId::signal_npcs1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd25_spi0_npcs1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_spi0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD25, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD25, PeripheralId::UART2, SignalId::signal_urxd2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd25_uart2_urxd2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD25, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD26, PeripheralId::UART1, SignalId::signal_utxd1> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd26_uart1_utxd1;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart1, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD26, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PD26, PeripheralId::UART2, SignalId::signal_utxd2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd26_uart2_utxd2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD26, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD27, PeripheralId::SPI0, SignalId::signal_npcs3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd27_spi0_npcs3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_spi0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD27, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD27, PeripheralId::TWIHS2, SignalId::signal_twd2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd27_twihs2_twd2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_twihs2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD27, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD28, PeripheralId::TWIHS2, SignalId::signal_twck2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd28_twihs2_twck2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_twihs2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD28, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD28, PeripheralId::UART3, SignalId::signal_urxd3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd28_uart3_urxd3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD28, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD2, PeripheralId::USART0, SignalId::signal_dsr0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd2_usart0_dsr0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD2, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PD30, PeripheralId::UART3, SignalId::signal_utxd3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd30_uart3_utxd3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD30, ClockGateId::none, ResetId::none, 0},
  }};
};

template<>
struct RouteTraits<PinId::PD31, PeripheralId::UART3, SignalId::signal_utxd3> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd31_uart3_utxd3;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart3, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD31, ClockGateId::none, ResetId::none, 1},
  }};
};

template<>
struct RouteTraits<PinId::PD3, PeripheralId::UART4, SignalId::signal_utxd4> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_uart4_utxd4;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_uart4, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD3, ClockGateId::none, ResetId::none, 2},
  }};
};

template<>
struct RouteTraits<PinId::PD3, PeripheralId::USART0, SignalId::signal_ri0> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd3_usart0_ri0;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD3, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PD4, PeripheralId::USART2, SignalId::signal_dcd2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd4_usart2_dcd2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD4, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PD5, PeripheralId::USART2, SignalId::signal_dtr2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd5_usart2_dtr2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD5, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PD6, PeripheralId::USART2, SignalId::signal_dsr2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd6_usart2_dsr2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD6, ClockGateId::none, ResetId::none, 3},
  }};
};

template<>
struct RouteTraits<PinId::PD7, PeripheralId::USART2, SignalId::signal_ri2> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_pd7_usart2_ri2;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_peripheral_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_microchip_pmc_p, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::none, FieldId::none, PinId::none, ClockGateId::gate_usart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_sam_pio_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::PD7, ClockGateId::none, ResetId::none, 3},
  }};
};

inline constexpr std::array<RouteDescriptor, 65> kRuntimeRoutes = {{
  {RouteId::candidate_pa10_gpioa_piodc4, PinId::PA10, PeripheralId::GPIOA, SignalId::signal_piodc4, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa10_uart0_utxd0, PinId::PA10, PeripheralId::UART0, SignalId::signal_utxd0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa11_gpioa_piodc5, PinId::PA11, PeripheralId::GPIOA, SignalId::signal_piodc5, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa12_gpioa_piodc6, PinId::PA12, PeripheralId::GPIOA, SignalId::signal_piodc6, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa13_gpioa_piodc7, PinId::PA13, PeripheralId::GPIOA, SignalId::signal_piodc7, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa14_gpioa_piodcen1, PinId::PA14, PeripheralId::GPIOA, SignalId::signal_piodcen1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa21_gpioa_piodcen2, PinId::PA21, PeripheralId::GPIOA, SignalId::signal_piodcen2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa21_usart1_rxd1, PinId::PA21, PeripheralId::USART1, SignalId::signal_rxd1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa22_gpioa_piodcclk, PinId::PA22, PeripheralId::GPIOA, SignalId::signal_piodcclk, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa23_usart1_sck1, PinId::PA23, PeripheralId::USART1, SignalId::signal_sck1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa24_usart1_rts1, PinId::PA24, PeripheralId::USART1, SignalId::signal_rts1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa25_usart1_cts1, PinId::PA25, PeripheralId::USART1, SignalId::signal_cts1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa26_usart1_dcd1, PinId::PA26, PeripheralId::USART1, SignalId::signal_dcd1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa27_usart1_dtr1, PinId::PA27, PeripheralId::USART1, SignalId::signal_dtr1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa28_usart1_dsr1, PinId::PA28, PeripheralId::USART1, SignalId::signal_dsr1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa31_spi0_npcs1, PinId::PA31, PeripheralId::SPI0, SignalId::signal_npcs1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa3_gpioa_piodc0, PinId::PA3, PeripheralId::GPIOA, SignalId::signal_piodc0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa3_twihs0_twd0, PinId::PA3, PeripheralId::TWIHS0, SignalId::signal_twd0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa3_usart1_loncol1, PinId::PA3, PeripheralId::USART1, SignalId::signal_loncol1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa4_gpioa_piodc1, PinId::PA4, PeripheralId::GPIOA, SignalId::signal_piodc1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa4_twihs0_twck0, PinId::PA4, PeripheralId::TWIHS0, SignalId::signal_twck0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa4_uart1_utxd1, PinId::PA4, PeripheralId::UART1, SignalId::signal_utxd1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa5_gpioa_piodc2, PinId::PA5, PeripheralId::GPIOA, SignalId::signal_piodc2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa5_uart1_urxd1, PinId::PA5, PeripheralId::UART1, SignalId::signal_urxd1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa9_gpioa_piodc3, PinId::PA9, PeripheralId::GPIOA, SignalId::signal_piodc3, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pa9_uart0_urxd0, PinId::PA9, PeripheralId::UART0, SignalId::signal_urxd0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pb0_usart0_rxd0, PinId::PB0, PeripheralId::USART0, SignalId::signal_rxd0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pb13_usart0_sck0, PinId::PB13, PeripheralId::USART0, SignalId::signal_sck0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pb1_usart0_txd0, PinId::PB1, PeripheralId::USART0, SignalId::signal_txd0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pb2_spi0_npcs0, PinId::PB2, PeripheralId::SPI0, SignalId::signal_npcs0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pb2_usart0_cts0, PinId::PB2, PeripheralId::USART0, SignalId::signal_cts0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pb3_usart0_rts0, PinId::PB3, PeripheralId::USART0, SignalId::signal_rts0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pb4_twihs1_twd1, PinId::PB4, PeripheralId::TWIHS1, SignalId::signal_twd1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pb4_usart1_txd1, PinId::PB4, PeripheralId::USART1, SignalId::signal_txd1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pb5_twihs1_twck1, PinId::PB5, PeripheralId::TWIHS1, SignalId::signal_twck1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd0_usart0_dcd0, PinId::PD0, PeripheralId::USART0, SignalId::signal_dcd0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd12_spi0_npcs2, PinId::PD12, PeripheralId::SPI0, SignalId::signal_npcs2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd15_usart2_rxd2, PinId::PD15, PeripheralId::USART2, SignalId::signal_rxd2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd16_usart2_txd2, PinId::PD16, PeripheralId::USART2, SignalId::signal_txd2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd17_usart2_sck2, PinId::PD17, PeripheralId::USART2, SignalId::signal_sck2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd18_uart4_urxd4, PinId::PD18, PeripheralId::UART4, SignalId::signal_urxd4, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd18_usart2_rts2, PinId::PD18, PeripheralId::USART2, SignalId::signal_rts2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd19_uart4_utxd4, PinId::PD19, PeripheralId::UART4, SignalId::signal_utxd4, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd19_usart2_cts2, PinId::PD19, PeripheralId::USART2, SignalId::signal_cts2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd1_usart0_dtr0, PinId::PD1, PeripheralId::USART0, SignalId::signal_dtr0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd20_spi0_miso, PinId::PD20, PeripheralId::SPI0, SignalId::signal_miso, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd21_spi0_mosi, PinId::PD21, PeripheralId::SPI0, SignalId::signal_mosi, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd22_spi0_spck, PinId::PD22, PeripheralId::SPI0, SignalId::signal_spck, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd25_spi0_npcs1, PinId::PD25, PeripheralId::SPI0, SignalId::signal_npcs1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd25_uart2_urxd2, PinId::PD25, PeripheralId::UART2, SignalId::signal_urxd2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd26_uart1_utxd1, PinId::PD26, PeripheralId::UART1, SignalId::signal_utxd1, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd26_uart2_utxd2, PinId::PD26, PeripheralId::UART2, SignalId::signal_utxd2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd27_spi0_npcs3, PinId::PD27, PeripheralId::SPI0, SignalId::signal_npcs3, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd27_twihs2_twd2, PinId::PD27, PeripheralId::TWIHS2, SignalId::signal_twd2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd28_twihs2_twck2, PinId::PD28, PeripheralId::TWIHS2, SignalId::signal_twck2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd28_uart3_urxd3, PinId::PD28, PeripheralId::UART3, SignalId::signal_urxd3, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd2_usart0_dsr0, PinId::PD2, PeripheralId::USART0, SignalId::signal_dsr0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd30_uart3_utxd3, PinId::PD30, PeripheralId::UART3, SignalId::signal_utxd3, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd31_uart3_utxd3, PinId::PD31, PeripheralId::UART3, SignalId::signal_utxd3, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd3_uart4_utxd4, PinId::PD3, PeripheralId::UART4, SignalId::signal_utxd4, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd3_usart0_ri0, PinId::PD3, PeripheralId::USART0, SignalId::signal_ri0, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd4_usart2_dcd2, PinId::PD4, PeripheralId::USART2, SignalId::signal_dcd2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd5_usart2_dtr2, PinId::PD5, PeripheralId::USART2, SignalId::signal_dtr2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd6_usart2_dsr2, PinId::PD6, PeripheralId::USART2, SignalId::signal_dsr2, RouteKindId::route_kind_peripheral_mux},
  {RouteId::candidate_pd7_usart2_ri2, PinId::PD7, PeripheralId::USART2, SignalId::signal_ri2, RouteKindId::route_kind_peripheral_mux},
}};

enum class ConnectionGroupId : std::uint16_t {
  none,
  group_gpioa_lqfp100_all_signals,
  group_spi0_lqfp100_sck_cs,
  group_spi0_lqfp100_sck_mosi_miso,
  group_twihs0_lqfp100_scl_sda,
  group_twihs1_lqfp100_scl_sda,
  group_twihs2_lqfp100_scl_sda,
  group_uart0_lqfp100_all_signals,
  group_uart1_lqfp100_all_signals,
  group_uart2_lqfp100_all_signals,
  group_uart3_lqfp100_all_signals,
  group_uart4_lqfp100_all_signals,
  group_usart0_lqfp100_tx_rx,
  group_usart0_lqfp100_tx_rx_cts_rts,
  group_usart1_lqfp100_tx_rx,
  group_usart1_lqfp100_tx_rx_cts_rts,
  group_usart2_lqfp100_tx_rx,
  group_usart2_lqfp100_tx_rx_cts_rts,
};

template<PeripheralId Peripheral, SignalId... Signals>
struct ConnectionGroupTraits {
  static constexpr bool kPresent = false;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::none;
  static constexpr std::array<RouteId, 0> kRoutes = {};
};

template<>
struct ConnectionGroupTraits<PeripheralId::GPIOA, SignalId::signal_piodc0, SignalId::signal_piodc1, SignalId::signal_piodc2, SignalId::signal_piodc3, SignalId::signal_piodc4, SignalId::signal_piodc5, SignalId::signal_piodc6, SignalId::signal_piodc7, SignalId::signal_piodcclk, SignalId::signal_piodcen1, SignalId::signal_piodcen2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_gpioa_lqfp100_all_signals;
  static constexpr std::array<RouteId, 11> kRoutes = {{
    RouteId::candidate_pa10_gpioa_piodc4,
    RouteId::candidate_pa11_gpioa_piodc5,
    RouteId::candidate_pa12_gpioa_piodc6,
    RouteId::candidate_pa13_gpioa_piodc7,
    RouteId::candidate_pa14_gpioa_piodcen1,
    RouteId::candidate_pa21_gpioa_piodcen2,
    RouteId::candidate_pa22_gpioa_piodcclk,
    RouteId::candidate_pa3_gpioa_piodc0,
    RouteId::candidate_pa4_gpioa_piodc1,
    RouteId::candidate_pa5_gpioa_piodc2,
    RouteId::candidate_pa9_gpioa_piodc3,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::SPI0, SignalId::signal_sck, SignalId::signal_cs> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_spi0_lqfp100_sck_cs;
  static constexpr std::array<RouteId, 6> kRoutes = {{
    RouteId::candidate_pa31_spi0_npcs1,
    RouteId::candidate_pb2_spi0_npcs0,
    RouteId::candidate_pd12_spi0_npcs2,
    RouteId::candidate_pd22_spi0_spck,
    RouteId::candidate_pd25_spi0_npcs1,
    RouteId::candidate_pd27_spi0_npcs3,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::SPI0, SignalId::signal_sck, SignalId::signal_mosi, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_spi0_lqfp100_sck_mosi_miso;
  static constexpr std::array<RouteId, 3> kRoutes = {{
    RouteId::candidate_pd20_spi0_miso,
    RouteId::candidate_pd21_spi0_mosi,
    RouteId::candidate_pd22_spi0_spck,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TWIHS0, SignalId::signal_scl, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_twihs0_lqfp100_scl_sda;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pa3_twihs0_twd0,
    RouteId::candidate_pa4_twihs0_twck0,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TWIHS1, SignalId::signal_scl, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_twihs1_lqfp100_scl_sda;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pb4_twihs1_twd1,
    RouteId::candidate_pb5_twihs1_twck1,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::TWIHS2, SignalId::signal_scl, SignalId::signal_sda> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_twihs2_lqfp100_scl_sda;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pd27_twihs2_twd2,
    RouteId::candidate_pd28_twihs2_twck2,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::UART0, SignalId::signal_urxd0, SignalId::signal_utxd0> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_uart0_lqfp100_all_signals;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pa10_uart0_utxd0,
    RouteId::candidate_pa9_uart0_urxd0,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::UART1, SignalId::signal_urxd1, SignalId::signal_utxd1> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_uart1_lqfp100_all_signals;
  static constexpr std::array<RouteId, 3> kRoutes = {{
    RouteId::candidate_pa4_uart1_utxd1,
    RouteId::candidate_pa5_uart1_urxd1,
    RouteId::candidate_pd26_uart1_utxd1,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::UART2, SignalId::signal_urxd2, SignalId::signal_utxd2> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_uart2_lqfp100_all_signals;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pd25_uart2_urxd2,
    RouteId::candidate_pd26_uart2_utxd2,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::UART3, SignalId::signal_urxd3, SignalId::signal_utxd3> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_uart3_lqfp100_all_signals;
  static constexpr std::array<RouteId, 3> kRoutes = {{
    RouteId::candidate_pd28_uart3_urxd3,
    RouteId::candidate_pd30_uart3_utxd3,
    RouteId::candidate_pd31_uart3_utxd3,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::UART4, SignalId::signal_urxd4, SignalId::signal_utxd4> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_uart4_lqfp100_all_signals;
  static constexpr std::array<RouteId, 3> kRoutes = {{
    RouteId::candidate_pd18_uart4_urxd4,
    RouteId::candidate_pd19_uart4_utxd4,
    RouteId::candidate_pd3_uart4_utxd4,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART0, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart0_lqfp100_tx_rx;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pb0_usart0_rxd0,
    RouteId::candidate_pb1_usart0_txd0,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART0, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart0_lqfp100_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pb0_usart0_rxd0,
    RouteId::candidate_pb1_usart0_txd0,
    RouteId::candidate_pb2_usart0_cts0,
    RouteId::candidate_pb3_usart0_rts0,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART1, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart1_lqfp100_tx_rx;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pa21_usart1_rxd1,
    RouteId::candidate_pb4_usart1_txd1,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART1, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart1_lqfp100_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pa21_usart1_rxd1,
    RouteId::candidate_pa24_usart1_rts1,
    RouteId::candidate_pa25_usart1_cts1,
    RouteId::candidate_pb4_usart1_txd1,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART2, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart2_lqfp100_tx_rx;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_pd15_usart2_rxd2,
    RouteId::candidate_pd16_usart2_txd2,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::USART2, SignalId::signal_tx, SignalId::signal_rx, SignalId::signal_cts, SignalId::signal_rts> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_usart2_lqfp100_tx_rx_cts_rts;
  static constexpr std::array<RouteId, 4> kRoutes = {{
    RouteId::candidate_pd15_usart2_rxd2,
    RouteId::candidate_pd16_usart2_txd2,
    RouteId::candidate_pd18_usart2_rts2,
    RouteId::candidate_pd19_usart2_cts2,
  }};
};

struct ConnectionGroupDescriptor {
  ConnectionGroupId group_id;
  PeripheralId peripheral_id;
  std::uint16_t route_count;
};
inline constexpr std::array<ConnectionGroupDescriptor, 17> kRuntimeConnectionGroups = {{
  {ConnectionGroupId::group_gpioa_lqfp100_all_signals, PeripheralId::GPIOA, 11u},
  {ConnectionGroupId::group_spi0_lqfp100_sck_cs, PeripheralId::SPI0, 6u},
  {ConnectionGroupId::group_spi0_lqfp100_sck_mosi_miso, PeripheralId::SPI0, 3u},
  {ConnectionGroupId::group_twihs0_lqfp100_scl_sda, PeripheralId::TWIHS0, 2u},
  {ConnectionGroupId::group_twihs1_lqfp100_scl_sda, PeripheralId::TWIHS1, 2u},
  {ConnectionGroupId::group_twihs2_lqfp100_scl_sda, PeripheralId::TWIHS2, 2u},
  {ConnectionGroupId::group_uart0_lqfp100_all_signals, PeripheralId::UART0, 2u},
  {ConnectionGroupId::group_uart1_lqfp100_all_signals, PeripheralId::UART1, 3u},
  {ConnectionGroupId::group_uart2_lqfp100_all_signals, PeripheralId::UART2, 2u},
  {ConnectionGroupId::group_uart3_lqfp100_all_signals, PeripheralId::UART3, 3u},
  {ConnectionGroupId::group_uart4_lqfp100_all_signals, PeripheralId::UART4, 3u},
  {ConnectionGroupId::group_usart0_lqfp100_tx_rx, PeripheralId::USART0, 2u},
  {ConnectionGroupId::group_usart0_lqfp100_tx_rx_cts_rts, PeripheralId::USART0, 4u},
  {ConnectionGroupId::group_usart1_lqfp100_tx_rx, PeripheralId::USART1, 2u},
  {ConnectionGroupId::group_usart1_lqfp100_tx_rx_cts_rts, PeripheralId::USART1, 4u},
  {ConnectionGroupId::group_usart2_lqfp100_tx_rx, PeripheralId::USART2, 2u},
  {ConnectionGroupId::group_usart2_lqfp100_tx_rx_cts_rts, PeripheralId::USART2, 4u},
}};

}
}
}
}
}
}
