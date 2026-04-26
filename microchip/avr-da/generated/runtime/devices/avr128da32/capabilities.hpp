#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace microchip {
namespace avr_da {
namespace generated {
namespace runtime {
namespace devices {
namespace avr128da32 {
enum class CapabilityId : std::uint16_t {
  none,
  runtime_support_adc,
  capability_twi_avr_da_twi_v1_scl,
  capability_twi_avr_da_twi_v1_sda,
  runtime_support_i2c,
  capability_instance_twi0_tqfp32_scl,
  capability_instance_twi0_tqfp32_sda,
  capability_spi_avr_da_spi_v1_cs,
  capability_spi_avr_da_spi_v1_miso,
  capability_spi_avr_da_spi_v1_mosi,
  capability_spi_avr_da_spi_v1_sck,
  runtime_support_spi,
  capability_instance_spi0_tqfp32_cs,
  capability_instance_spi0_tqfp32_miso,
  capability_instance_spi0_tqfp32_mosi,
  capability_instance_spi0_tqfp32_sck,
  runtime_support_timer,
  capability_usart_avr_da_usart_v1_rx,
  capability_usart_avr_da_usart_v1_tx,
  runtime_support_uart,
  capability_instance_usart0_tqfp32_rx,
  capability_instance_usart0_tqfp32_tx,
  capability_instance_usart1_tqfp32_rx,
  capability_instance_usart1_tqfp32_tx,
};

enum class CapabilityScopeId : std::uint16_t {
  none,
  instance_overlay,
  ip_block,
  runtime_contract,
};

enum class CapabilityNameId : std::uint16_t {
  none,
  available_signal,
  runtime_supported,
  signal_role,
};

enum class CapabilityValueId : std::uint16_t {
  none,
  cs,
  miso,
  mosi,
  rx,
  sck,
  scl,
  sda,
  true_value,
  tx,
};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityNameId name_id;
  CapabilityValueId value_id;
  PeripheralId peripheral_id;
};
inline constexpr std::array<CapabilityDescriptor, 23> kCapabilities = {{
  {CapabilityId::runtime_support_adc, CapabilityScopeId::runtime_contract, PeripheralClassId::class_adc, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_twi_avr_da_twi_v1_scl, CapabilityScopeId::ip_block, PeripheralClassId::class_i2c, CapabilityNameId::signal_role, CapabilityValueId::scl, PeripheralId::none},
  {CapabilityId::capability_twi_avr_da_twi_v1_sda, CapabilityScopeId::ip_block, PeripheralClassId::class_i2c, CapabilityNameId::signal_role, CapabilityValueId::sda, PeripheralId::none},
  {CapabilityId::runtime_support_i2c, CapabilityScopeId::runtime_contract, PeripheralClassId::class_i2c, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_twi0_tqfp32_scl, CapabilityScopeId::instance_overlay, PeripheralClassId::class_i2c, CapabilityNameId::available_signal, CapabilityValueId::scl, PeripheralId::TWI0},
  {CapabilityId::capability_instance_twi0_tqfp32_sda, CapabilityScopeId::instance_overlay, PeripheralClassId::class_i2c, CapabilityNameId::available_signal, CapabilityValueId::sda, PeripheralId::TWI0},
  {CapabilityId::capability_spi_avr_da_spi_v1_cs, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::cs, PeripheralId::none},
  {CapabilityId::capability_spi_avr_da_spi_v1_miso, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::miso, PeripheralId::none},
  {CapabilityId::capability_spi_avr_da_spi_v1_mosi, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::mosi, PeripheralId::none},
  {CapabilityId::capability_spi_avr_da_spi_v1_sck, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::sck, PeripheralId::none},
  {CapabilityId::runtime_support_spi, CapabilityScopeId::runtime_contract, PeripheralClassId::class_spi, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_spi0_tqfp32_cs, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::cs, PeripheralId::SPI0},
  {CapabilityId::capability_instance_spi0_tqfp32_miso, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::miso, PeripheralId::SPI0},
  {CapabilityId::capability_instance_spi0_tqfp32_mosi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::mosi, PeripheralId::SPI0},
  {CapabilityId::capability_instance_spi0_tqfp32_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::SPI0},
  {CapabilityId::runtime_support_timer, CapabilityScopeId::runtime_contract, PeripheralClassId::class_timer, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_usart_avr_da_usart_v1_rx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rx, PeripheralId::none},
  {CapabilityId::capability_usart_avr_da_usart_v1_tx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::tx, PeripheralId::none},
  {CapabilityId::runtime_support_uart, CapabilityScopeId::runtime_contract, PeripheralClassId::class_uart, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_usart0_tqfp32_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_tqfp32_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart1_tqfp32_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_tqfp32_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART1},
}};

template<CapabilityId Id>
struct CapabilityTraits {
  static constexpr bool kPresent = false;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::none;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::none;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::none;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::none;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_adc> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_twi_avr_da_twi_v1_scl> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::scl;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_twi_avr_da_twi_v1_sda> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sda;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_i2c> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_twi0_tqfp32_scl> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::scl;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_twi0_tqfp32_sda> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sda;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_avr_da_spi_v1_cs> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cs;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_avr_da_spi_v1_miso> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::miso;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_avr_da_spi_v1_mosi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::mosi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_avr_da_spi_v1_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_spi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi0_tqfp32_cs> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cs;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi0_tqfp32_miso> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::miso;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi0_tqfp32_mosi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::mosi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi0_tqfp32_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_timer> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_avr_da_usart_v1_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_avr_da_usart_v1_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_uart> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_tqfp32_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_tqfp32_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_tqfp32_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_tqfp32_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<PeripheralClassId Id>
struct PeripheralClassCapabilityTraits {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_adc> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_adc,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_i2c> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 5> kCapabilityIds = {{
    CapabilityId::capability_twi_avr_da_twi_v1_scl,
    CapabilityId::capability_twi_avr_da_twi_v1_sda,
    CapabilityId::runtime_support_i2c,
    CapabilityId::capability_instance_twi0_tqfp32_scl,
    CapabilityId::capability_instance_twi0_tqfp32_sda,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_spi> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 9> kCapabilityIds = {{
    CapabilityId::capability_spi_avr_da_spi_v1_cs,
    CapabilityId::capability_spi_avr_da_spi_v1_miso,
    CapabilityId::capability_spi_avr_da_spi_v1_mosi,
    CapabilityId::capability_spi_avr_da_spi_v1_sck,
    CapabilityId::runtime_support_spi,
    CapabilityId::capability_instance_spi0_tqfp32_cs,
    CapabilityId::capability_instance_spi0_tqfp32_miso,
    CapabilityId::capability_instance_spi0_tqfp32_mosi,
    CapabilityId::capability_instance_spi0_tqfp32_sck,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_timer> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_timer,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_uart> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 7> kCapabilityIds = {{
    CapabilityId::capability_usart_avr_da_usart_v1_rx,
    CapabilityId::capability_usart_avr_da_usart_v1_tx,
    CapabilityId::runtime_support_uart,
    CapabilityId::capability_instance_usart0_tqfp32_rx,
    CapabilityId::capability_instance_usart0_tqfp32_tx,
    CapabilityId::capability_instance_usart1_tqfp32_rx,
    CapabilityId::capability_instance_usart1_tqfp32_tx,
  }};
};

template<PeripheralId Id>
struct PeripheralCapabilityTraits {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::ADC0> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::SPI0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_spi0_tqfp32_cs,
    CapabilityId::capability_instance_spi0_tqfp32_miso,
    CapabilityId::capability_instance_spi0_tqfp32_mosi,
    CapabilityId::capability_instance_spi0_tqfp32_sck,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TCA0> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TWI0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 2> kCapabilityIds = {{
    CapabilityId::capability_instance_twi0_tqfp32_scl,
    CapabilityId::capability_instance_twi0_tqfp32_sda,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 2> kCapabilityIds = {{
    CapabilityId::capability_instance_usart0_tqfp32_rx,
    CapabilityId::capability_instance_usart0_tqfp32_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 2> kCapabilityIds = {{
    CapabilityId::capability_instance_usart1_tqfp32_rx,
    CapabilityId::capability_instance_usart1_tqfp32_tx,
  }};
};

}
}
}
}
}
}
