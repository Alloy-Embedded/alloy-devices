#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "clock_bindings.hpp"
#include "peripheral_instances.hpp"
#include "pins.hpp"
#include "register_fields.hpp"
#include "registers.hpp"

namespace espressif {
namespace esp32s3 {
namespace generated {
namespace runtime {
namespace devices {
namespace esp32s3 {
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
  candidate_gpio11_spi2_mosi,
  candidate_gpio12_spi2_sck,
  candidate_gpio13_spi2_miso,
  candidate_gpio14_spi2_cs,
  candidate_gpio17_uart2_tx,
  candidate_gpio18_uart2_rx,
  candidate_gpio43_uart0_tx,
  candidate_gpio44_uart0_rx,
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
struct RouteTraits<PinId::GPIO11, PeripheralId::SPI2, SignalId::signal_mosi> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio11_spi2_mosi;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_espressif_generic_clock_v1, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_system_perip_clk_en0, FieldId::field_system_perip_clk_en0_spi2_clk_en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_espressif_iomatrix_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO11, ClockGateId::none, ResetId::none, 63},
  }};
};

template<>
struct RouteTraits<PinId::GPIO12, PeripheralId::SPI2, SignalId::signal_sck> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio12_spi2_sck;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_espressif_generic_clock_v1, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_system_perip_clk_en0, FieldId::field_system_perip_clk_en0_spi2_clk_en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_espressif_iomatrix_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO12, ClockGateId::none, ResetId::none, 63},
  }};
};

template<>
struct RouteTraits<PinId::GPIO13, PeripheralId::SPI2, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio13_spi2_miso;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_espressif_generic_clock_v1, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_system_perip_clk_en0, FieldId::field_system_perip_clk_en0_spi2_clk_en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_espressif_iomatrix_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO13, ClockGateId::none, ResetId::none, 64},
  }};
};

template<>
struct RouteTraits<PinId::GPIO14, PeripheralId::SPI2, SignalId::signal_cs> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio14_spi2_cs;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_espressif_generic_clock_v1, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_system_perip_clk_en0, FieldId::field_system_perip_clk_en0_spi2_clk_en, PinId::none, ClockGateId::gate_spi2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_espressif_iomatrix_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO14, ClockGateId::none, ResetId::none, 68},
  }};
};

template<>
struct RouteTraits<PinId::GPIO17, PeripheralId::UART2, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio17_uart2_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_espressif_generic_clock_v1, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_system_perip_clk_en1, FieldId::field_system_perip_clk_en1_uart2_clk_en, PinId::none, ClockGateId::gate_uart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_espressif_iomatrix_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO17, ClockGateId::none, ResetId::none, 17},
  }};
};

template<>
struct RouteTraits<PinId::GPIO18, PeripheralId::UART2, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio18_uart2_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_espressif_generic_clock_v1, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_system_perip_clk_en1, FieldId::field_system_perip_clk_en1_uart2_clk_en, PinId::none, ClockGateId::gate_uart2, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_espressif_iomatrix_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO18, ClockGateId::none, ResetId::none, 13},
  }};
};

template<>
struct RouteTraits<PinId::GPIO43, PeripheralId::UART0, SignalId::signal_tx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio43_uart0_tx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_espressif_generic_clock_v1, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_system_perip_clk_en0, FieldId::field_system_perip_clk_en0_uart_clk_en, PinId::none, ClockGateId::gate_uart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_espressif_iomatrix_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO43, ClockGateId::none, ResetId::none, 6},
  }};
};

template<>
struct RouteTraits<PinId::GPIO44, PeripheralId::UART0, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr RouteId kRouteId = RouteId::candidate_gpio44_uart0_rx;
  static constexpr RouteKindId kRouteKindId = RouteKindId::route_kind_mux;
  static constexpr std::array<RouteOperation, 2> kOperations = {{
    {BackendSchemaId::schema_alloy_clock_espressif_generic_clock_v1, OperationKindId::operation_kind_set_bit, OperationSubjectKindId::operation_subject_peripheral, RegisterId::register_system_perip_clk_en0, FieldId::field_system_perip_clk_en0_uart_clk_en, PinId::none, ClockGateId::gate_uart0, ResetId::none, 1},
    {BackendSchemaId::schema_alloy_pinmux_espressif_iomatrix_v1, OperationKindId::operation_kind_write_selector, OperationSubjectKindId::operation_subject_pin, RegisterId::none, FieldId::none, PinId::GPIO44, ClockGateId::none, ResetId::none, 6},
  }};
};

inline constexpr std::array<RouteDescriptor, 8> kRuntimeRoutes = {{
  {RouteId::candidate_gpio11_spi2_mosi, PinId::GPIO11, PeripheralId::SPI2, SignalId::signal_mosi, RouteKindId::route_kind_mux},
  {RouteId::candidate_gpio12_spi2_sck, PinId::GPIO12, PeripheralId::SPI2, SignalId::signal_sck, RouteKindId::route_kind_mux},
  {RouteId::candidate_gpio13_spi2_miso, PinId::GPIO13, PeripheralId::SPI2, SignalId::signal_miso, RouteKindId::route_kind_mux},
  {RouteId::candidate_gpio14_spi2_cs, PinId::GPIO14, PeripheralId::SPI2, SignalId::signal_cs, RouteKindId::route_kind_mux},
  {RouteId::candidate_gpio17_uart2_tx, PinId::GPIO17, PeripheralId::UART2, SignalId::signal_tx, RouteKindId::route_kind_mux},
  {RouteId::candidate_gpio18_uart2_rx, PinId::GPIO18, PeripheralId::UART2, SignalId::signal_rx, RouteKindId::route_kind_mux},
  {RouteId::candidate_gpio43_uart0_tx, PinId::GPIO43, PeripheralId::UART0, SignalId::signal_tx, RouteKindId::route_kind_mux},
  {RouteId::candidate_gpio44_uart0_rx, PinId::GPIO44, PeripheralId::UART0, SignalId::signal_rx, RouteKindId::route_kind_mux},
}};

template<PinId Pin, PeripheralId Peripheral, SignalId Signal>
inline auto apply_route() noexcept -> void {
  static_assert(RouteTraits<Pin, Peripheral, Signal>::kPresent, "");
}

enum class ConnectionGroupId : std::uint16_t {
  none,
  group_spi2_qfn56_sck_mosi_miso,
  group_uart0_qfn56_tx_rx,
  group_uart2_qfn56_tx_rx,
};

template<PeripheralId Peripheral, SignalId... Signals>
struct ConnectionGroupTraits {
  static constexpr bool kPresent = false;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::none;
  static constexpr std::array<RouteId, 0> kRoutes = {};
};

template<>
struct ConnectionGroupTraits<PeripheralId::SPI2, SignalId::signal_sck, SignalId::signal_mosi, SignalId::signal_miso> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_spi2_qfn56_sck_mosi_miso;
  static constexpr std::array<RouteId, 3> kRoutes = {{
    RouteId::candidate_gpio11_spi2_mosi,
    RouteId::candidate_gpio12_spi2_sck,
    RouteId::candidate_gpio13_spi2_miso,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::UART0, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_uart0_qfn56_tx_rx;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_gpio43_uart0_tx,
    RouteId::candidate_gpio44_uart0_rx,
  }};
};

template<>
struct ConnectionGroupTraits<PeripheralId::UART2, SignalId::signal_tx, SignalId::signal_rx> {
  static constexpr bool kPresent = true;
  static constexpr ConnectionGroupId kGroupId = ConnectionGroupId::group_uart2_qfn56_tx_rx;
  static constexpr std::array<RouteId, 2> kRoutes = {{
    RouteId::candidate_gpio17_uart2_tx,
    RouteId::candidate_gpio18_uart2_rx,
  }};
};

struct ConnectionGroupDescriptor {
  ConnectionGroupId group_id;
  PeripheralId peripheral_id;
  std::uint16_t route_count;
};
inline constexpr std::array<ConnectionGroupDescriptor, 3> kRuntimeConnectionGroups = {{
  {ConnectionGroupId::group_spi2_qfn56_sck_mosi_miso, PeripheralId::SPI2, 3u},
  {ConnectionGroupId::group_uart0_qfn56_tx_rx, PeripheralId::UART0, 2u},
  {ConnectionGroupId::group_uart2_qfn56_tx_rx, PeripheralId::UART2, 2u},
}};

}
}
}
}
}
}
