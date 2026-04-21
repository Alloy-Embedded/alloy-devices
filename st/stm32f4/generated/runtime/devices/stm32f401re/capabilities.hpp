#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f401re {
enum class CapabilityId : std::uint16_t {
  none,
  runtime_support_adc,
  runtime_support_dma,
  runtime_support_gpio,
  runtime_support_rtc,
  capability_spi_spi2s1_v2_2_cube_miso,
  capability_spi_spi2s1_v2_2_cube_mosi,
  capability_spi_spi2s1_v2_2_cube_nss,
  capability_spi_spi2s1_v2_2_cube_sck,
  runtime_support_spi,
  capability_instance_spi1_lqfp64_miso,
  capability_instance_spi1_lqfp64_mosi,
  capability_instance_spi1_lqfp64_nss,
  capability_instance_spi1_lqfp64_sck,
  capability_instance_spi2_lqfp64_miso,
  capability_instance_spi2_lqfp64_mosi,
  capability_instance_spi2_lqfp64_nss,
  capability_instance_spi2_lqfp64_sck,
  capability_tim_gptimer2_v2_x_cube_bkin,
  capability_tim_gptimer2_v2_x_cube_ch1,
  capability_tim_gptimer2_v2_x_cube_ch1n,
  capability_tim_gptimer2_v2_x_cube_ch2,
  capability_tim_gptimer2_v2_x_cube_ch2n,
  capability_tim_gptimer2_v2_x_cube_ch3,
  capability_tim_gptimer2_v2_x_cube_ch3n,
  capability_tim_gptimer2_v2_x_cube_ch4,
  capability_tim_gptimer2_v2_x_cube_etr,
  runtime_support_timer,
  capability_instance_tim1_lqfp64_bkin,
  capability_instance_tim1_lqfp64_ch1,
  capability_instance_tim1_lqfp64_ch1n,
  capability_instance_tim1_lqfp64_ch2,
  capability_instance_tim1_lqfp64_ch2n,
  capability_instance_tim1_lqfp64_ch3,
  capability_instance_tim1_lqfp64_ch3n,
  capability_instance_tim1_lqfp64_ch4,
  capability_instance_tim1_lqfp64_etr,
  capability_instance_tim2_lqfp64_ch1,
  capability_instance_tim2_lqfp64_ch2,
  capability_instance_tim2_lqfp64_ch3,
  capability_instance_tim2_lqfp64_ch4,
  capability_instance_tim2_lqfp64_etr,
  capability_instance_tim3_lqfp64_ch1,
  capability_instance_tim3_lqfp64_ch2,
  capability_instance_tim3_lqfp64_ch3,
  capability_instance_tim3_lqfp64_ch4,
  capability_instance_tim3_lqfp64_etr,
  capability_instance_tim4_lqfp64_ch1,
  capability_instance_tim4_lqfp64_ch2,
  capability_instance_tim4_lqfp64_ch3,
  capability_instance_tim4_lqfp64_ch4,
  capability_instance_tim5_lqfp64_ch2,
  capability_instance_tim5_lqfp64_ch3,
  capability_instance_tim5_lqfp64_ch4,
  capability_usart_sci2_v1_2_cube_ck,
  capability_usart_sci2_v1_2_cube_cts,
  capability_usart_sci2_v1_2_cube_rts,
  capability_usart_sci2_v1_2_cube_rx,
  capability_usart_sci2_v1_2_cube_tx,
  runtime_support_uart,
  capability_instance_usart1_lqfp64_ck,
  capability_instance_usart1_lqfp64_cts,
  capability_instance_usart1_lqfp64_rts,
  capability_instance_usart1_lqfp64_rx,
  capability_instance_usart1_lqfp64_tx,
  runtime_dma_USART2_DMA1_DMA1_STREAM5_RX,
  runtime_dma_USART2_DMA1_DMA1_STREAM6_TX,
  capability_instance_usart2_lqfp64_ck,
  capability_instance_usart2_lqfp64_rts,
  capability_instance_usart2_lqfp64_rx,
  capability_instance_usart2_lqfp64_tx,
  runtime_support_usb,
  runtime_support_watchdog,
};

enum class CapabilityScopeId : std::uint16_t {
  none,
  dma_binding,
  instance_overlay,
  ip_block,
  runtime_contract,
};

enum class CapabilityNameId : std::uint16_t {
  none,
  available_signal,
  dma_compatible_signal,
  runtime_supported,
  signal_role,
};

enum class CapabilityValueId : std::uint16_t {
  none,
  RX,
  TX,
  bkin,
  ch1,
  ch1n,
  ch2,
  ch2n,
  ch3,
  ch3n,
  ch4,
  ck,
  cts,
  etr,
  miso,
  mosi,
  nss,
  rts,
  rx,
  sck,
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
inline constexpr std::array<CapabilityDescriptor, 72> kCapabilities = {{
  {CapabilityId::runtime_support_adc, CapabilityScopeId::runtime_contract, PeripheralClassId::class_adc, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_dma, CapabilityScopeId::runtime_contract, PeripheralClassId::class_dma, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_gpio, CapabilityScopeId::runtime_contract, PeripheralClassId::class_gpio, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_rtc, CapabilityScopeId::runtime_contract, PeripheralClassId::class_rtc, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_spi_spi2s1_v2_2_cube_miso, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::miso, PeripheralId::none},
  {CapabilityId::capability_spi_spi2s1_v2_2_cube_mosi, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::mosi, PeripheralId::none},
  {CapabilityId::capability_spi_spi2s1_v2_2_cube_nss, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::nss, PeripheralId::none},
  {CapabilityId::capability_spi_spi2s1_v2_2_cube_sck, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::sck, PeripheralId::none},
  {CapabilityId::runtime_support_spi, CapabilityScopeId::runtime_contract, PeripheralClassId::class_spi, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_spi1_lqfp64_miso, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::miso, PeripheralId::SPI1},
  {CapabilityId::capability_instance_spi1_lqfp64_mosi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::mosi, PeripheralId::SPI1},
  {CapabilityId::capability_instance_spi1_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::SPI1},
  {CapabilityId::capability_instance_spi1_lqfp64_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::SPI1},
  {CapabilityId::capability_instance_spi2_lqfp64_miso, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::miso, PeripheralId::SPI2},
  {CapabilityId::capability_instance_spi2_lqfp64_mosi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::mosi, PeripheralId::SPI2},
  {CapabilityId::capability_instance_spi2_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::SPI2},
  {CapabilityId::capability_instance_spi2_lqfp64_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::SPI2},
  {CapabilityId::capability_tim_gptimer2_v2_x_cube_bkin, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::bkin, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v2_x_cube_ch1, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch1, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v2_x_cube_ch1n, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch1n, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v2_x_cube_ch2, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch2, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v2_x_cube_ch2n, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch2n, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v2_x_cube_ch3, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch3, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v2_x_cube_ch3n, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch3n, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v2_x_cube_ch4, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch4, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v2_x_cube_etr, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::etr, PeripheralId::none},
  {CapabilityId::runtime_support_timer, CapabilityScopeId::runtime_contract, PeripheralClassId::class_timer, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_tim1_lqfp64_bkin, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::bkin, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch1n, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1n, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch2, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch2n, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch2n, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch3, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch3n, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch3n, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch4, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch4, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_etr, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::etr, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim2_lqfp64_ch1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1, PeripheralId::TIM2},
  {CapabilityId::capability_instance_tim2_lqfp64_ch2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch2, PeripheralId::TIM2},
  {CapabilityId::capability_instance_tim2_lqfp64_ch3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch3, PeripheralId::TIM2},
  {CapabilityId::capability_instance_tim2_lqfp64_ch4, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch4, PeripheralId::TIM2},
  {CapabilityId::capability_instance_tim2_lqfp64_etr, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::etr, PeripheralId::TIM2},
  {CapabilityId::capability_instance_tim3_lqfp64_ch1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1, PeripheralId::TIM3},
  {CapabilityId::capability_instance_tim3_lqfp64_ch2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch2, PeripheralId::TIM3},
  {CapabilityId::capability_instance_tim3_lqfp64_ch3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch3, PeripheralId::TIM3},
  {CapabilityId::capability_instance_tim3_lqfp64_ch4, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch4, PeripheralId::TIM3},
  {CapabilityId::capability_instance_tim3_lqfp64_etr, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::etr, PeripheralId::TIM3},
  {CapabilityId::capability_instance_tim4_lqfp64_ch1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1, PeripheralId::TIM4},
  {CapabilityId::capability_instance_tim4_lqfp64_ch2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch2, PeripheralId::TIM4},
  {CapabilityId::capability_instance_tim4_lqfp64_ch3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch3, PeripheralId::TIM4},
  {CapabilityId::capability_instance_tim4_lqfp64_ch4, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch4, PeripheralId::TIM4},
  {CapabilityId::capability_instance_tim5_lqfp64_ch2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch2, PeripheralId::TIM5},
  {CapabilityId::capability_instance_tim5_lqfp64_ch3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch3, PeripheralId::TIM5},
  {CapabilityId::capability_instance_tim5_lqfp64_ch4, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch4, PeripheralId::TIM5},
  {CapabilityId::capability_usart_sci2_v1_2_cube_ck, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::ck, PeripheralId::none},
  {CapabilityId::capability_usart_sci2_v1_2_cube_cts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::cts, PeripheralId::none},
  {CapabilityId::capability_usart_sci2_v1_2_cube_rts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rts, PeripheralId::none},
  {CapabilityId::capability_usart_sci2_v1_2_cube_rx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rx, PeripheralId::none},
  {CapabilityId::capability_usart_sci2_v1_2_cube_tx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::tx, PeripheralId::none},
  {CapabilityId::runtime_support_uart, CapabilityScopeId::runtime_contract, PeripheralClassId::class_uart, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_usart1_lqfp64_ck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ck, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART1},
  {CapabilityId::runtime_dma_USART2_DMA1_DMA1_STREAM5_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::USART2},
  {CapabilityId::runtime_dma_USART2_DMA1_DMA1_STREAM6_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_ck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ck, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART2},
  {CapabilityId::runtime_support_usb, CapabilityScopeId::runtime_contract, PeripheralClassId::class_usb, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_watchdog, CapabilityScopeId::runtime_contract, PeripheralClassId::class_watchdog, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
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
struct CapabilityTraits<CapabilityId::runtime_support_dma> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dma;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_gpio> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_rtc> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_rtc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi2s1_v2_2_cube_miso> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::miso;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi2s1_v2_2_cube_mosi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::mosi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi2s1_v2_2_cube_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi2s1_v2_2_cube_sck> {
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
struct CapabilityTraits<CapabilityId::capability_instance_spi1_lqfp64_miso> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::miso;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi1_lqfp64_mosi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::mosi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi1_lqfp64_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi1_lqfp64_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi2_lqfp64_miso> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::miso;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi2_lqfp64_mosi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::mosi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi2_lqfp64_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi2_lqfp64_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v2_x_cube_bkin> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::bkin;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v2_x_cube_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v2_x_cube_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v2_x_cube_ch2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v2_x_cube_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v2_x_cube_ch3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v2_x_cube_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v2_x_cube_ch4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v2_x_cube_etr> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::etr;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
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
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_bkin> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::bkin;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_ch2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_ch3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_ch4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_etr> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::etr;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim2_lqfp64_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim2_lqfp64_ch2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim2_lqfp64_ch3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim2_lqfp64_ch4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim2_lqfp64_etr> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::etr;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim3_lqfp64_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim3_lqfp64_ch2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim3_lqfp64_ch3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim3_lqfp64_ch4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim3_lqfp64_etr> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::etr;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim4_lqfp64_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim4_lqfp64_ch2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim4_lqfp64_ch3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim4_lqfp64_ch4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim5_lqfp64_ch2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim5_lqfp64_ch3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim5_lqfp64_ch4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci2_v1_2_cube_ck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci2_v1_2_cube_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci2_v1_2_cube_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci2_v1_2_cube_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci2_v1_2_cube_tx> {
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
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp64_ck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp64_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp64_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp64_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp64_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART2_DMA1_DMA1_STREAM5_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART2_DMA1_DMA1_STREAM6_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp64_ck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp64_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp64_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp64_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_usb> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_usb;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_watchdog> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_watchdog;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
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
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_dma> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_dma,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_gpio> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_gpio,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_rtc> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_rtc,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_spi> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 13> kCapabilityIds = {{
    CapabilityId::capability_spi_spi2s1_v2_2_cube_miso,
    CapabilityId::capability_spi_spi2s1_v2_2_cube_mosi,
    CapabilityId::capability_spi_spi2s1_v2_2_cube_nss,
    CapabilityId::capability_spi_spi2s1_v2_2_cube_sck,
    CapabilityId::runtime_support_spi,
    CapabilityId::capability_instance_spi1_lqfp64_miso,
    CapabilityId::capability_instance_spi1_lqfp64_mosi,
    CapabilityId::capability_instance_spi1_lqfp64_nss,
    CapabilityId::capability_instance_spi1_lqfp64_sck,
    CapabilityId::capability_instance_spi2_lqfp64_miso,
    CapabilityId::capability_instance_spi2_lqfp64_mosi,
    CapabilityId::capability_instance_spi2_lqfp64_nss,
    CapabilityId::capability_instance_spi2_lqfp64_sck,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_timer> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 36> kCapabilityIds = {{
    CapabilityId::capability_tim_gptimer2_v2_x_cube_bkin,
    CapabilityId::capability_tim_gptimer2_v2_x_cube_ch1,
    CapabilityId::capability_tim_gptimer2_v2_x_cube_ch1n,
    CapabilityId::capability_tim_gptimer2_v2_x_cube_ch2,
    CapabilityId::capability_tim_gptimer2_v2_x_cube_ch2n,
    CapabilityId::capability_tim_gptimer2_v2_x_cube_ch3,
    CapabilityId::capability_tim_gptimer2_v2_x_cube_ch3n,
    CapabilityId::capability_tim_gptimer2_v2_x_cube_ch4,
    CapabilityId::capability_tim_gptimer2_v2_x_cube_etr,
    CapabilityId::runtime_support_timer,
    CapabilityId::capability_instance_tim1_lqfp64_bkin,
    CapabilityId::capability_instance_tim1_lqfp64_ch1,
    CapabilityId::capability_instance_tim1_lqfp64_ch1n,
    CapabilityId::capability_instance_tim1_lqfp64_ch2,
    CapabilityId::capability_instance_tim1_lqfp64_ch2n,
    CapabilityId::capability_instance_tim1_lqfp64_ch3,
    CapabilityId::capability_instance_tim1_lqfp64_ch3n,
    CapabilityId::capability_instance_tim1_lqfp64_ch4,
    CapabilityId::capability_instance_tim1_lqfp64_etr,
    CapabilityId::capability_instance_tim2_lqfp64_ch1,
    CapabilityId::capability_instance_tim2_lqfp64_ch2,
    CapabilityId::capability_instance_tim2_lqfp64_ch3,
    CapabilityId::capability_instance_tim2_lqfp64_ch4,
    CapabilityId::capability_instance_tim2_lqfp64_etr,
    CapabilityId::capability_instance_tim3_lqfp64_ch1,
    CapabilityId::capability_instance_tim3_lqfp64_ch2,
    CapabilityId::capability_instance_tim3_lqfp64_ch3,
    CapabilityId::capability_instance_tim3_lqfp64_ch4,
    CapabilityId::capability_instance_tim3_lqfp64_etr,
    CapabilityId::capability_instance_tim4_lqfp64_ch1,
    CapabilityId::capability_instance_tim4_lqfp64_ch2,
    CapabilityId::capability_instance_tim4_lqfp64_ch3,
    CapabilityId::capability_instance_tim4_lqfp64_ch4,
    CapabilityId::capability_instance_tim5_lqfp64_ch2,
    CapabilityId::capability_instance_tim5_lqfp64_ch3,
    CapabilityId::capability_instance_tim5_lqfp64_ch4,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_uart> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 17> kCapabilityIds = {{
    CapabilityId::capability_usart_sci2_v1_2_cube_ck,
    CapabilityId::capability_usart_sci2_v1_2_cube_cts,
    CapabilityId::capability_usart_sci2_v1_2_cube_rts,
    CapabilityId::capability_usart_sci2_v1_2_cube_rx,
    CapabilityId::capability_usart_sci2_v1_2_cube_tx,
    CapabilityId::runtime_support_uart,
    CapabilityId::capability_instance_usart1_lqfp64_ck,
    CapabilityId::capability_instance_usart1_lqfp64_cts,
    CapabilityId::capability_instance_usart1_lqfp64_rts,
    CapabilityId::capability_instance_usart1_lqfp64_rx,
    CapabilityId::capability_instance_usart1_lqfp64_tx,
    CapabilityId::runtime_dma_USART2_DMA1_DMA1_STREAM5_RX,
    CapabilityId::runtime_dma_USART2_DMA1_DMA1_STREAM6_TX,
    CapabilityId::capability_instance_usart2_lqfp64_ck,
    CapabilityId::capability_instance_usart2_lqfp64_rts,
    CapabilityId::capability_instance_usart2_lqfp64_rx,
    CapabilityId::capability_instance_usart2_lqfp64_tx,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_usb> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_usb,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_watchdog> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_watchdog,
  }};
};

template<PeripheralId Id>
struct PeripheralCapabilityTraits {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::ADC1> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::DMA1> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::DMA2> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIOA> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIOB> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIOC> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIOD> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIOE> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIOH> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::IWDG> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::OTG_FS_DEVICE> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::OTG_FS_GLOBAL> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::OTG_FS_HOST> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::OTG_FS_PWRCLK> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::RTC> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::SPI1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_spi1_lqfp64_miso,
    CapabilityId::capability_instance_spi1_lqfp64_mosi,
    CapabilityId::capability_instance_spi1_lqfp64_nss,
    CapabilityId::capability_instance_spi1_lqfp64_sck,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::SPI2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_spi2_lqfp64_miso,
    CapabilityId::capability_instance_spi2_lqfp64_mosi,
    CapabilityId::capability_instance_spi2_lqfp64_nss,
    CapabilityId::capability_instance_spi2_lqfp64_sck,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::SPI3> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::SPI4> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 9> kCapabilityIds = {{
    CapabilityId::capability_instance_tim1_lqfp64_bkin,
    CapabilityId::capability_instance_tim1_lqfp64_ch1,
    CapabilityId::capability_instance_tim1_lqfp64_ch1n,
    CapabilityId::capability_instance_tim1_lqfp64_ch2,
    CapabilityId::capability_instance_tim1_lqfp64_ch2n,
    CapabilityId::capability_instance_tim1_lqfp64_ch3,
    CapabilityId::capability_instance_tim1_lqfp64_ch3n,
    CapabilityId::capability_instance_tim1_lqfp64_ch4,
    CapabilityId::capability_instance_tim1_lqfp64_etr,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM10> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM11> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 5> kCapabilityIds = {{
    CapabilityId::capability_instance_tim2_lqfp64_ch1,
    CapabilityId::capability_instance_tim2_lqfp64_ch2,
    CapabilityId::capability_instance_tim2_lqfp64_ch3,
    CapabilityId::capability_instance_tim2_lqfp64_ch4,
    CapabilityId::capability_instance_tim2_lqfp64_etr,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM3> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 5> kCapabilityIds = {{
    CapabilityId::capability_instance_tim3_lqfp64_ch1,
    CapabilityId::capability_instance_tim3_lqfp64_ch2,
    CapabilityId::capability_instance_tim3_lqfp64_ch3,
    CapabilityId::capability_instance_tim3_lqfp64_ch4,
    CapabilityId::capability_instance_tim3_lqfp64_etr,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM4> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_tim4_lqfp64_ch1,
    CapabilityId::capability_instance_tim4_lqfp64_ch2,
    CapabilityId::capability_instance_tim4_lqfp64_ch3,
    CapabilityId::capability_instance_tim4_lqfp64_ch4,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM5> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 3> kCapabilityIds = {{
    CapabilityId::capability_instance_tim5_lqfp64_ch2,
    CapabilityId::capability_instance_tim5_lqfp64_ch3,
    CapabilityId::capability_instance_tim5_lqfp64_ch4,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM8> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM9> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 5> kCapabilityIds = {{
    CapabilityId::capability_instance_usart1_lqfp64_ck,
    CapabilityId::capability_instance_usart1_lqfp64_cts,
    CapabilityId::capability_instance_usart1_lqfp64_rts,
    CapabilityId::capability_instance_usart1_lqfp64_rx,
    CapabilityId::capability_instance_usart1_lqfp64_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 6> kCapabilityIds = {{
    CapabilityId::runtime_dma_USART2_DMA1_DMA1_STREAM5_RX,
    CapabilityId::runtime_dma_USART2_DMA1_DMA1_STREAM6_TX,
    CapabilityId::capability_instance_usart2_lqfp64_ck,
    CapabilityId::capability_instance_usart2_lqfp64_rts,
    CapabilityId::capability_instance_usart2_lqfp64_rx,
    CapabilityId::capability_instance_usart2_lqfp64_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART6> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::WWDG> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

}
}
}
}
}
}
