#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g0b1re {
enum class CapabilityId : std::uint16_t {
  none,
  runtime_support_adc,
  runtime_support_dac,
  runtime_support_dma,
  runtime_support_dma_router,
  runtime_support_gpio,
  capability_spi_spi2s1_v3_5_cube_miso,
  capability_spi_spi2s1_v3_5_cube_mosi,
  capability_spi_spi2s1_v3_5_cube_nss,
  capability_spi_spi2s1_v3_5_cube_sck,
  runtime_support_spi,
  capability_instance_spi1_lqfp64_miso,
  capability_instance_spi1_lqfp64_mosi,
  capability_instance_spi1_lqfp64_nss,
  capability_instance_spi1_lqfp64_sck,
  capability_instance_spi2_lqfp64_miso,
  capability_instance_spi2_lqfp64_mosi,
  capability_instance_spi2_lqfp64_nss,
  capability_instance_spi2_lqfp64_sck,
  capability_instance_spi3_lqfp64_miso,
  capability_instance_spi3_lqfp64_mosi,
  capability_instance_spi3_lqfp64_nss,
  capability_instance_spi3_lqfp64_sck,
  capability_tim_gptimer2_v3_x_cube_bk,
  capability_tim_gptimer2_v3_x_cube_bk2,
  capability_tim_gptimer2_v3_x_cube_ch1,
  capability_tim_gptimer2_v3_x_cube_ch1n,
  capability_tim_gptimer2_v3_x_cube_ch2,
  capability_tim_gptimer2_v3_x_cube_ch2n,
  capability_tim_gptimer2_v3_x_cube_ch3,
  capability_tim_gptimer2_v3_x_cube_ch3n,
  capability_tim_gptimer2_v3_x_cube_ch4,
  capability_tim_gptimer2_v3_x_cube_etr,
  runtime_support_timer,
  capability_instance_tim1_lqfp64_bk,
  capability_instance_tim1_lqfp64_bk2,
  capability_instance_tim1_lqfp64_ch1,
  capability_instance_tim1_lqfp64_ch1n,
  capability_instance_tim1_lqfp64_ch2,
  capability_instance_tim1_lqfp64_ch2n,
  capability_instance_tim1_lqfp64_ch3,
  capability_instance_tim1_lqfp64_ch3n,
  capability_instance_tim1_lqfp64_ch4,
  capability_instance_tim14_lqfp64_ch1,
  capability_instance_tim15_lqfp64_bk,
  capability_instance_tim15_lqfp64_ch1,
  capability_instance_tim15_lqfp64_ch1n,
  capability_instance_tim15_lqfp64_ch2,
  capability_instance_tim16_lqfp64_bk,
  capability_instance_tim16_lqfp64_ch1,
  capability_instance_tim16_lqfp64_ch1n,
  capability_instance_tim17_lqfp64_bk,
  capability_instance_tim17_lqfp64_ch1,
  capability_instance_tim17_lqfp64_ch1n,
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
  capability_usart_sci3_v2_1_cube_ck,
  capability_lpuart_sci3_v1_4_cube_cts,
  capability_usart_sci3_v2_1_cube_cts,
  capability_lpuart_sci3_v1_4_cube_de,
  capability_usart_sci3_v2_1_cube_de,
  capability_usart_sci3_v2_1_cube_nss,
  capability_lpuart_sci3_v1_4_cube_rts,
  capability_usart_sci3_v2_1_cube_rts,
  capability_lpuart_sci3_v1_4_cube_rx,
  capability_usart_sci3_v2_1_cube_rx,
  capability_lpuart_sci3_v1_4_cube_tx,
  capability_usart_sci3_v2_1_cube_tx,
  runtime_support_uart,
  capability_instance_lpuart1_lqfp64_cts,
  capability_instance_lpuart1_lqfp64_de,
  capability_instance_lpuart1_lqfp64_rts,
  capability_instance_lpuart1_lqfp64_rx,
  capability_instance_lpuart1_lqfp64_tx,
  capability_instance_lpuart2_lqfp64_cts,
  capability_instance_lpuart2_lqfp64_de,
  capability_instance_lpuart2_lqfp64_rts,
  capability_instance_lpuart2_lqfp64_rx,
  capability_instance_lpuart2_lqfp64_tx,
  runtime_dma_USART1_DMA1_DMA1_CH1_RX,
  runtime_dma_USART1_DMA1_DMA1_CH2_TX,
  capability_instance_usart1_lqfp64_ck,
  capability_instance_usart1_lqfp64_cts,
  capability_instance_usart1_lqfp64_de,
  capability_instance_usart1_lqfp64_nss,
  capability_instance_usart1_lqfp64_rts,
  capability_instance_usart1_lqfp64_rx,
  capability_instance_usart1_lqfp64_tx,
  capability_instance_usart2_lqfp64_ck,
  capability_instance_usart2_lqfp64_cts,
  capability_instance_usart2_lqfp64_de,
  capability_instance_usart2_lqfp64_nss,
  capability_instance_usart2_lqfp64_rts,
  capability_instance_usart2_lqfp64_rx,
  capability_instance_usart2_lqfp64_tx,
  capability_instance_usart3_lqfp64_ck,
  capability_instance_usart3_lqfp64_cts,
  capability_instance_usart3_lqfp64_de,
  capability_instance_usart3_lqfp64_nss,
  capability_instance_usart3_lqfp64_rts,
  capability_instance_usart3_lqfp64_rx,
  capability_instance_usart3_lqfp64_tx,
  capability_instance_usart4_lqfp64_ck,
  capability_instance_usart4_lqfp64_cts,
  capability_instance_usart4_lqfp64_de,
  capability_instance_usart4_lqfp64_nss,
  capability_instance_usart4_lqfp64_rts,
  capability_instance_usart4_lqfp64_rx,
  capability_instance_usart4_lqfp64_tx,
  capability_instance_usart5_lqfp64_ck,
  capability_instance_usart5_lqfp64_cts,
  capability_instance_usart5_lqfp64_de,
  capability_instance_usart5_lqfp64_nss,
  capability_instance_usart5_lqfp64_rts,
  capability_instance_usart5_lqfp64_rx,
  capability_instance_usart5_lqfp64_tx,
  capability_instance_usart6_lqfp64_ck,
  capability_instance_usart6_lqfp64_cts,
  capability_instance_usart6_lqfp64_de,
  capability_instance_usart6_lqfp64_nss,
  capability_instance_usart6_lqfp64_rts,
  capability_instance_usart6_lqfp64_rx,
  capability_instance_usart6_lqfp64_tx,
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
  bk,
  bk2,
  ch1,
  ch1n,
  ch2,
  ch2n,
  ch3,
  ch3n,
  ch4,
  ck,
  cts,
  de,
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
inline constexpr std::array<CapabilityDescriptor, 134> kCapabilities = {{
  {CapabilityId::runtime_support_adc, CapabilityScopeId::runtime_contract, PeripheralClassId::class_adc, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_dac, CapabilityScopeId::runtime_contract, PeripheralClassId::class_dac, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_dma, CapabilityScopeId::runtime_contract, PeripheralClassId::class_dma, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_dma_router, CapabilityScopeId::runtime_contract, PeripheralClassId::class_dma_router, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_gpio, CapabilityScopeId::runtime_contract, PeripheralClassId::class_gpio, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_spi_spi2s1_v3_5_cube_miso, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::miso, PeripheralId::none},
  {CapabilityId::capability_spi_spi2s1_v3_5_cube_mosi, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::mosi, PeripheralId::none},
  {CapabilityId::capability_spi_spi2s1_v3_5_cube_nss, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::nss, PeripheralId::none},
  {CapabilityId::capability_spi_spi2s1_v3_5_cube_sck, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::sck, PeripheralId::none},
  {CapabilityId::runtime_support_spi, CapabilityScopeId::runtime_contract, PeripheralClassId::class_spi, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_spi1_lqfp64_miso, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::miso, PeripheralId::SPI1},
  {CapabilityId::capability_instance_spi1_lqfp64_mosi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::mosi, PeripheralId::SPI1},
  {CapabilityId::capability_instance_spi1_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::SPI1},
  {CapabilityId::capability_instance_spi1_lqfp64_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::SPI1},
  {CapabilityId::capability_instance_spi2_lqfp64_miso, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::miso, PeripheralId::SPI2},
  {CapabilityId::capability_instance_spi2_lqfp64_mosi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::mosi, PeripheralId::SPI2},
  {CapabilityId::capability_instance_spi2_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::SPI2},
  {CapabilityId::capability_instance_spi2_lqfp64_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::SPI2},
  {CapabilityId::capability_instance_spi3_lqfp64_miso, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::miso, PeripheralId::SPI3},
  {CapabilityId::capability_instance_spi3_lqfp64_mosi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::mosi, PeripheralId::SPI3},
  {CapabilityId::capability_instance_spi3_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::SPI3},
  {CapabilityId::capability_instance_spi3_lqfp64_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::SPI3},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_bk, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::bk, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_bk2, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::bk2, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_ch1, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch1, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_ch1n, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch1n, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_ch2, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch2, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_ch2n, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch2n, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_ch3, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch3, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_ch3n, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch3n, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_ch4, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::ch4, PeripheralId::none},
  {CapabilityId::capability_tim_gptimer2_v3_x_cube_etr, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::etr, PeripheralId::none},
  {CapabilityId::runtime_support_timer, CapabilityScopeId::runtime_contract, PeripheralClassId::class_timer, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_tim1_lqfp64_bk, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::bk, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_bk2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::bk2, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch1n, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1n, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch2, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch2n, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch2n, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch3, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch3n, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch3n, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim1_lqfp64_ch4, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch4, PeripheralId::TIM1},
  {CapabilityId::capability_instance_tim14_lqfp64_ch1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1, PeripheralId::TIM14},
  {CapabilityId::capability_instance_tim15_lqfp64_bk, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::bk, PeripheralId::TIM15},
  {CapabilityId::capability_instance_tim15_lqfp64_ch1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1, PeripheralId::TIM15},
  {CapabilityId::capability_instance_tim15_lqfp64_ch1n, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1n, PeripheralId::TIM15},
  {CapabilityId::capability_instance_tim15_lqfp64_ch2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch2, PeripheralId::TIM15},
  {CapabilityId::capability_instance_tim16_lqfp64_bk, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::bk, PeripheralId::TIM16},
  {CapabilityId::capability_instance_tim16_lqfp64_ch1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1, PeripheralId::TIM16},
  {CapabilityId::capability_instance_tim16_lqfp64_ch1n, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1n, PeripheralId::TIM16},
  {CapabilityId::capability_instance_tim17_lqfp64_bk, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::bk, PeripheralId::TIM17},
  {CapabilityId::capability_instance_tim17_lqfp64_ch1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1, PeripheralId::TIM17},
  {CapabilityId::capability_instance_tim17_lqfp64_ch1n, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::ch1n, PeripheralId::TIM17},
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
  {CapabilityId::capability_usart_sci3_v2_1_cube_ck, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::ck, PeripheralId::none},
  {CapabilityId::capability_lpuart_sci3_v1_4_cube_cts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::cts, PeripheralId::none},
  {CapabilityId::capability_usart_sci3_v2_1_cube_cts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::cts, PeripheralId::none},
  {CapabilityId::capability_lpuart_sci3_v1_4_cube_de, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::de, PeripheralId::none},
  {CapabilityId::capability_usart_sci3_v2_1_cube_de, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::de, PeripheralId::none},
  {CapabilityId::capability_usart_sci3_v2_1_cube_nss, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::nss, PeripheralId::none},
  {CapabilityId::capability_lpuart_sci3_v1_4_cube_rts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rts, PeripheralId::none},
  {CapabilityId::capability_usart_sci3_v2_1_cube_rts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rts, PeripheralId::none},
  {CapabilityId::capability_lpuart_sci3_v1_4_cube_rx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rx, PeripheralId::none},
  {CapabilityId::capability_usart_sci3_v2_1_cube_rx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rx, PeripheralId::none},
  {CapabilityId::capability_lpuart_sci3_v1_4_cube_tx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::tx, PeripheralId::none},
  {CapabilityId::capability_usart_sci3_v2_1_cube_tx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::tx, PeripheralId::none},
  {CapabilityId::runtime_support_uart, CapabilityScopeId::runtime_contract, PeripheralClassId::class_uart, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_lpuart1_lqfp64_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART1},
  {CapabilityId::capability_instance_lpuart1_lqfp64_de, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::de, PeripheralId::LPUART1},
  {CapabilityId::capability_instance_lpuart1_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART1},
  {CapabilityId::capability_instance_lpuart1_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART1},
  {CapabilityId::capability_instance_lpuart1_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART1},
  {CapabilityId::capability_instance_lpuart2_lqfp64_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART2},
  {CapabilityId::capability_instance_lpuart2_lqfp64_de, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::de, PeripheralId::LPUART2},
  {CapabilityId::capability_instance_lpuart2_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART2},
  {CapabilityId::capability_instance_lpuart2_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART2},
  {CapabilityId::capability_instance_lpuart2_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART2},
  {CapabilityId::runtime_dma_USART1_DMA1_DMA1_CH1_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::USART1},
  {CapabilityId::runtime_dma_USART1_DMA1_DMA1_CH2_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_ck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ck, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_de, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::de, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart2_lqfp64_ck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ck, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_de, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::de, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart3_lqfp64_ck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ck, PeripheralId::USART3},
  {CapabilityId::capability_instance_usart3_lqfp64_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART3},
  {CapabilityId::capability_instance_usart3_lqfp64_de, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::de, PeripheralId::USART3},
  {CapabilityId::capability_instance_usart3_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::USART3},
  {CapabilityId::capability_instance_usart3_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART3},
  {CapabilityId::capability_instance_usart3_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART3},
  {CapabilityId::capability_instance_usart3_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART3},
  {CapabilityId::capability_instance_usart4_lqfp64_ck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ck, PeripheralId::USART4},
  {CapabilityId::capability_instance_usart4_lqfp64_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART4},
  {CapabilityId::capability_instance_usart4_lqfp64_de, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::de, PeripheralId::USART4},
  {CapabilityId::capability_instance_usart4_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::USART4},
  {CapabilityId::capability_instance_usart4_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART4},
  {CapabilityId::capability_instance_usart4_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART4},
  {CapabilityId::capability_instance_usart4_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART4},
  {CapabilityId::capability_instance_usart5_lqfp64_ck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ck, PeripheralId::USART5},
  {CapabilityId::capability_instance_usart5_lqfp64_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART5},
  {CapabilityId::capability_instance_usart5_lqfp64_de, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::de, PeripheralId::USART5},
  {CapabilityId::capability_instance_usart5_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::USART5},
  {CapabilityId::capability_instance_usart5_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART5},
  {CapabilityId::capability_instance_usart5_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART5},
  {CapabilityId::capability_instance_usart5_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART5},
  {CapabilityId::capability_instance_usart6_lqfp64_ck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ck, PeripheralId::USART6},
  {CapabilityId::capability_instance_usart6_lqfp64_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART6},
  {CapabilityId::capability_instance_usart6_lqfp64_de, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::de, PeripheralId::USART6},
  {CapabilityId::capability_instance_usart6_lqfp64_nss, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::nss, PeripheralId::USART6},
  {CapabilityId::capability_instance_usart6_lqfp64_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART6},
  {CapabilityId::capability_instance_usart6_lqfp64_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART6},
  {CapabilityId::capability_instance_usart6_lqfp64_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART6},
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
struct CapabilityTraits<CapabilityId::runtime_support_dac> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
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
struct CapabilityTraits<CapabilityId::runtime_support_dma_router> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dma_router;
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
struct CapabilityTraits<CapabilityId::capability_spi_spi2s1_v3_5_cube_miso> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::miso;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi2s1_v3_5_cube_mosi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::mosi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi2s1_v3_5_cube_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi2s1_v3_5_cube_sck> {
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
struct CapabilityTraits<CapabilityId::capability_instance_spi3_lqfp64_miso> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::miso;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi3_lqfp64_mosi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::mosi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi3_lqfp64_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi3_lqfp64_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_bk> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::bk;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_bk2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::bk2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_ch2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_ch2n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_ch3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_ch3n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch3n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_ch4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tim_gptimer2_v3_x_cube_etr> {
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
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_bk> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::bk;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim1_lqfp64_bk2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::bk2;
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
struct CapabilityTraits<CapabilityId::capability_instance_tim14_lqfp64_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM14;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim15_lqfp64_bk> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::bk;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM15;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim15_lqfp64_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM15;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim15_lqfp64_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM15;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim15_lqfp64_ch2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM15;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim16_lqfp64_bk> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::bk;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM16;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim16_lqfp64_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM16;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim16_lqfp64_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM16;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim17_lqfp64_bk> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::bk;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM17;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim17_lqfp64_ch1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM17;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tim17_lqfp64_ch1n> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ch1n;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TIM17;
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
struct CapabilityTraits<CapabilityId::capability_usart_sci3_v2_1_cube_ck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpuart_sci3_v1_4_cube_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci3_v2_1_cube_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpuart_sci3_v1_4_cube_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci3_v2_1_cube_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci3_v2_1_cube_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpuart_sci3_v1_4_cube_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci3_v2_1_cube_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpuart_sci3_v1_4_cube_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci3_v2_1_cube_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpuart_sci3_v1_4_cube_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_sci3_v2_1_cube_tx> {
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
struct CapabilityTraits<CapabilityId::capability_instance_lpuart1_lqfp64_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart1_lqfp64_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart1_lqfp64_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart1_lqfp64_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart1_lqfp64_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart2_lqfp64_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart2_lqfp64_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart2_lqfp64_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart2_lqfp64_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart2_lqfp64_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART1_DMA1_DMA1_CH1_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART1_DMA1_DMA1_CH2_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
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
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp64_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp64_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
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
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp64_ck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp64_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp64_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp64_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
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
struct CapabilityTraits<CapabilityId::capability_instance_usart3_lqfp64_ck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart3_lqfp64_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart3_lqfp64_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart3_lqfp64_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart3_lqfp64_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart3_lqfp64_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart3_lqfp64_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart4_lqfp64_ck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart4_lqfp64_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart4_lqfp64_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart4_lqfp64_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart4_lqfp64_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart4_lqfp64_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart4_lqfp64_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart5_lqfp64_ck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart5_lqfp64_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart5_lqfp64_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart5_lqfp64_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart5_lqfp64_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart5_lqfp64_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart5_lqfp64_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart6_lqfp64_ck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart6_lqfp64_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart6_lqfp64_de> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::de;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart6_lqfp64_nss> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::nss;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart6_lqfp64_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart6_lqfp64_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart6_lqfp64_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART6;
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
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_dac> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_dac,
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
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_dma_router> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_dma_router,
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
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_spi> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 17> kCapabilityIds = {{
    CapabilityId::capability_spi_spi2s1_v3_5_cube_miso,
    CapabilityId::capability_spi_spi2s1_v3_5_cube_mosi,
    CapabilityId::capability_spi_spi2s1_v3_5_cube_nss,
    CapabilityId::capability_spi_spi2s1_v3_5_cube_sck,
    CapabilityId::runtime_support_spi,
    CapabilityId::capability_instance_spi1_lqfp64_miso,
    CapabilityId::capability_instance_spi1_lqfp64_mosi,
    CapabilityId::capability_instance_spi1_lqfp64_nss,
    CapabilityId::capability_instance_spi1_lqfp64_sck,
    CapabilityId::capability_instance_spi2_lqfp64_miso,
    CapabilityId::capability_instance_spi2_lqfp64_mosi,
    CapabilityId::capability_instance_spi2_lqfp64_nss,
    CapabilityId::capability_instance_spi2_lqfp64_sck,
    CapabilityId::capability_instance_spi3_lqfp64_miso,
    CapabilityId::capability_instance_spi3_lqfp64_mosi,
    CapabilityId::capability_instance_spi3_lqfp64_nss,
    CapabilityId::capability_instance_spi3_lqfp64_sck,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_timer> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 45> kCapabilityIds = {{
    CapabilityId::capability_tim_gptimer2_v3_x_cube_bk,
    CapabilityId::capability_tim_gptimer2_v3_x_cube_bk2,
    CapabilityId::capability_tim_gptimer2_v3_x_cube_ch1,
    CapabilityId::capability_tim_gptimer2_v3_x_cube_ch1n,
    CapabilityId::capability_tim_gptimer2_v3_x_cube_ch2,
    CapabilityId::capability_tim_gptimer2_v3_x_cube_ch2n,
    CapabilityId::capability_tim_gptimer2_v3_x_cube_ch3,
    CapabilityId::capability_tim_gptimer2_v3_x_cube_ch3n,
    CapabilityId::capability_tim_gptimer2_v3_x_cube_ch4,
    CapabilityId::capability_tim_gptimer2_v3_x_cube_etr,
    CapabilityId::runtime_support_timer,
    CapabilityId::capability_instance_tim1_lqfp64_bk,
    CapabilityId::capability_instance_tim1_lqfp64_bk2,
    CapabilityId::capability_instance_tim1_lqfp64_ch1,
    CapabilityId::capability_instance_tim1_lqfp64_ch1n,
    CapabilityId::capability_instance_tim1_lqfp64_ch2,
    CapabilityId::capability_instance_tim1_lqfp64_ch2n,
    CapabilityId::capability_instance_tim1_lqfp64_ch3,
    CapabilityId::capability_instance_tim1_lqfp64_ch3n,
    CapabilityId::capability_instance_tim1_lqfp64_ch4,
    CapabilityId::capability_instance_tim14_lqfp64_ch1,
    CapabilityId::capability_instance_tim15_lqfp64_bk,
    CapabilityId::capability_instance_tim15_lqfp64_ch1,
    CapabilityId::capability_instance_tim15_lqfp64_ch1n,
    CapabilityId::capability_instance_tim15_lqfp64_ch2,
    CapabilityId::capability_instance_tim16_lqfp64_bk,
    CapabilityId::capability_instance_tim16_lqfp64_ch1,
    CapabilityId::capability_instance_tim16_lqfp64_ch1n,
    CapabilityId::capability_instance_tim17_lqfp64_bk,
    CapabilityId::capability_instance_tim17_lqfp64_ch1,
    CapabilityId::capability_instance_tim17_lqfp64_ch1n,
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
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_uart> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 67> kCapabilityIds = {{
    CapabilityId::capability_usart_sci3_v2_1_cube_ck,
    CapabilityId::capability_lpuart_sci3_v1_4_cube_cts,
    CapabilityId::capability_usart_sci3_v2_1_cube_cts,
    CapabilityId::capability_lpuart_sci3_v1_4_cube_de,
    CapabilityId::capability_usart_sci3_v2_1_cube_de,
    CapabilityId::capability_usart_sci3_v2_1_cube_nss,
    CapabilityId::capability_lpuart_sci3_v1_4_cube_rts,
    CapabilityId::capability_usart_sci3_v2_1_cube_rts,
    CapabilityId::capability_lpuart_sci3_v1_4_cube_rx,
    CapabilityId::capability_usart_sci3_v2_1_cube_rx,
    CapabilityId::capability_lpuart_sci3_v1_4_cube_tx,
    CapabilityId::capability_usart_sci3_v2_1_cube_tx,
    CapabilityId::runtime_support_uart,
    CapabilityId::capability_instance_lpuart1_lqfp64_cts,
    CapabilityId::capability_instance_lpuart1_lqfp64_de,
    CapabilityId::capability_instance_lpuart1_lqfp64_rts,
    CapabilityId::capability_instance_lpuart1_lqfp64_rx,
    CapabilityId::capability_instance_lpuart1_lqfp64_tx,
    CapabilityId::capability_instance_lpuart2_lqfp64_cts,
    CapabilityId::capability_instance_lpuart2_lqfp64_de,
    CapabilityId::capability_instance_lpuart2_lqfp64_rts,
    CapabilityId::capability_instance_lpuart2_lqfp64_rx,
    CapabilityId::capability_instance_lpuart2_lqfp64_tx,
    CapabilityId::runtime_dma_USART1_DMA1_DMA1_CH1_RX,
    CapabilityId::runtime_dma_USART1_DMA1_DMA1_CH2_TX,
    CapabilityId::capability_instance_usart1_lqfp64_ck,
    CapabilityId::capability_instance_usart1_lqfp64_cts,
    CapabilityId::capability_instance_usart1_lqfp64_de,
    CapabilityId::capability_instance_usart1_lqfp64_nss,
    CapabilityId::capability_instance_usart1_lqfp64_rts,
    CapabilityId::capability_instance_usart1_lqfp64_rx,
    CapabilityId::capability_instance_usart1_lqfp64_tx,
    CapabilityId::capability_instance_usart2_lqfp64_ck,
    CapabilityId::capability_instance_usart2_lqfp64_cts,
    CapabilityId::capability_instance_usart2_lqfp64_de,
    CapabilityId::capability_instance_usart2_lqfp64_nss,
    CapabilityId::capability_instance_usart2_lqfp64_rts,
    CapabilityId::capability_instance_usart2_lqfp64_rx,
    CapabilityId::capability_instance_usart2_lqfp64_tx,
    CapabilityId::capability_instance_usart3_lqfp64_ck,
    CapabilityId::capability_instance_usart3_lqfp64_cts,
    CapabilityId::capability_instance_usart3_lqfp64_de,
    CapabilityId::capability_instance_usart3_lqfp64_nss,
    CapabilityId::capability_instance_usart3_lqfp64_rts,
    CapabilityId::capability_instance_usart3_lqfp64_rx,
    CapabilityId::capability_instance_usart3_lqfp64_tx,
    CapabilityId::capability_instance_usart4_lqfp64_ck,
    CapabilityId::capability_instance_usart4_lqfp64_cts,
    CapabilityId::capability_instance_usart4_lqfp64_de,
    CapabilityId::capability_instance_usart4_lqfp64_nss,
    CapabilityId::capability_instance_usart4_lqfp64_rts,
    CapabilityId::capability_instance_usart4_lqfp64_rx,
    CapabilityId::capability_instance_usart4_lqfp64_tx,
    CapabilityId::capability_instance_usart5_lqfp64_ck,
    CapabilityId::capability_instance_usart5_lqfp64_cts,
    CapabilityId::capability_instance_usart5_lqfp64_de,
    CapabilityId::capability_instance_usart5_lqfp64_nss,
    CapabilityId::capability_instance_usart5_lqfp64_rts,
    CapabilityId::capability_instance_usart5_lqfp64_rx,
    CapabilityId::capability_instance_usart5_lqfp64_tx,
    CapabilityId::capability_instance_usart6_lqfp64_ck,
    CapabilityId::capability_instance_usart6_lqfp64_cts,
    CapabilityId::capability_instance_usart6_lqfp64_de,
    CapabilityId::capability_instance_usart6_lqfp64_nss,
    CapabilityId::capability_instance_usart6_lqfp64_rts,
    CapabilityId::capability_instance_usart6_lqfp64_rx,
    CapabilityId::capability_instance_usart6_lqfp64_tx,
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
struct PeripheralCapabilityTraits<PeripheralId::DAC> {
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
struct PeripheralCapabilityTraits<PeripheralId::DMAMUX1> {
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
struct PeripheralCapabilityTraits<PeripheralId::GPIOF> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 5> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart1_lqfp64_cts,
    CapabilityId::capability_instance_lpuart1_lqfp64_de,
    CapabilityId::capability_instance_lpuart1_lqfp64_rts,
    CapabilityId::capability_instance_lpuart1_lqfp64_rx,
    CapabilityId::capability_instance_lpuart1_lqfp64_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 5> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart2_lqfp64_cts,
    CapabilityId::capability_instance_lpuart2_lqfp64_de,
    CapabilityId::capability_instance_lpuart2_lqfp64_rts,
    CapabilityId::capability_instance_lpuart2_lqfp64_rx,
    CapabilityId::capability_instance_lpuart2_lqfp64_tx,
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
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_spi3_lqfp64_miso,
    CapabilityId::capability_instance_spi3_lqfp64_mosi,
    CapabilityId::capability_instance_spi3_lqfp64_nss,
    CapabilityId::capability_instance_spi3_lqfp64_sck,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 9> kCapabilityIds = {{
    CapabilityId::capability_instance_tim1_lqfp64_bk,
    CapabilityId::capability_instance_tim1_lqfp64_bk2,
    CapabilityId::capability_instance_tim1_lqfp64_ch1,
    CapabilityId::capability_instance_tim1_lqfp64_ch1n,
    CapabilityId::capability_instance_tim1_lqfp64_ch2,
    CapabilityId::capability_instance_tim1_lqfp64_ch2n,
    CapabilityId::capability_instance_tim1_lqfp64_ch3,
    CapabilityId::capability_instance_tim1_lqfp64_ch3n,
    CapabilityId::capability_instance_tim1_lqfp64_ch4,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM14> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::capability_instance_tim14_lqfp64_ch1,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM15> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_tim15_lqfp64_bk,
    CapabilityId::capability_instance_tim15_lqfp64_ch1,
    CapabilityId::capability_instance_tim15_lqfp64_ch1n,
    CapabilityId::capability_instance_tim15_lqfp64_ch2,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM16> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 3> kCapabilityIds = {{
    CapabilityId::capability_instance_tim16_lqfp64_bk,
    CapabilityId::capability_instance_tim16_lqfp64_ch1,
    CapabilityId::capability_instance_tim16_lqfp64_ch1n,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM17> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 3> kCapabilityIds = {{
    CapabilityId::capability_instance_tim17_lqfp64_bk,
    CapabilityId::capability_instance_tim17_lqfp64_ch1,
    CapabilityId::capability_instance_tim17_lqfp64_ch1n,
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
struct PeripheralCapabilityTraits<PeripheralId::TIM6> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TIM7> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 9> kCapabilityIds = {{
    CapabilityId::runtime_dma_USART1_DMA1_DMA1_CH1_RX,
    CapabilityId::runtime_dma_USART1_DMA1_DMA1_CH2_TX,
    CapabilityId::capability_instance_usart1_lqfp64_ck,
    CapabilityId::capability_instance_usart1_lqfp64_cts,
    CapabilityId::capability_instance_usart1_lqfp64_de,
    CapabilityId::capability_instance_usart1_lqfp64_nss,
    CapabilityId::capability_instance_usart1_lqfp64_rts,
    CapabilityId::capability_instance_usart1_lqfp64_rx,
    CapabilityId::capability_instance_usart1_lqfp64_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 7> kCapabilityIds = {{
    CapabilityId::capability_instance_usart2_lqfp64_ck,
    CapabilityId::capability_instance_usart2_lqfp64_cts,
    CapabilityId::capability_instance_usart2_lqfp64_de,
    CapabilityId::capability_instance_usart2_lqfp64_nss,
    CapabilityId::capability_instance_usart2_lqfp64_rts,
    CapabilityId::capability_instance_usart2_lqfp64_rx,
    CapabilityId::capability_instance_usart2_lqfp64_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART3> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 7> kCapabilityIds = {{
    CapabilityId::capability_instance_usart3_lqfp64_ck,
    CapabilityId::capability_instance_usart3_lqfp64_cts,
    CapabilityId::capability_instance_usart3_lqfp64_de,
    CapabilityId::capability_instance_usart3_lqfp64_nss,
    CapabilityId::capability_instance_usart3_lqfp64_rts,
    CapabilityId::capability_instance_usart3_lqfp64_rx,
    CapabilityId::capability_instance_usart3_lqfp64_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART4> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 7> kCapabilityIds = {{
    CapabilityId::capability_instance_usart4_lqfp64_ck,
    CapabilityId::capability_instance_usart4_lqfp64_cts,
    CapabilityId::capability_instance_usart4_lqfp64_de,
    CapabilityId::capability_instance_usart4_lqfp64_nss,
    CapabilityId::capability_instance_usart4_lqfp64_rts,
    CapabilityId::capability_instance_usart4_lqfp64_rx,
    CapabilityId::capability_instance_usart4_lqfp64_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART5> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 7> kCapabilityIds = {{
    CapabilityId::capability_instance_usart5_lqfp64_ck,
    CapabilityId::capability_instance_usart5_lqfp64_cts,
    CapabilityId::capability_instance_usart5_lqfp64_de,
    CapabilityId::capability_instance_usart5_lqfp64_nss,
    CapabilityId::capability_instance_usart5_lqfp64_rts,
    CapabilityId::capability_instance_usart5_lqfp64_rx,
    CapabilityId::capability_instance_usart5_lqfp64_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART6> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 7> kCapabilityIds = {{
    CapabilityId::capability_instance_usart6_lqfp64_ck,
    CapabilityId::capability_instance_usart6_lqfp64_cts,
    CapabilityId::capability_instance_usart6_lqfp64_de,
    CapabilityId::capability_instance_usart6_lqfp64_nss,
    CapabilityId::capability_instance_usart6_lqfp64_rts,
    CapabilityId::capability_instance_usart6_lqfp64_rx,
    CapabilityId::capability_instance_usart6_lqfp64_tx,
  }};
};

}
}
}
}
}
}
