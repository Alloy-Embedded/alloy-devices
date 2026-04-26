#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1062 {
enum class CapabilityId : std::uint16_t {
  none,
  runtime_support_adc,
  runtime_support_can,
  device_core_count,
  device_multicore_topology,
  runtime_support_dma,
  runtime_support_dma_router,
  runtime_support_eth,
  capability_gpio_imxrt_gpio_v1_io00,
  capability_gpio_imxrt_gpio_v1_io01,
  capability_gpio_imxrt_gpio_v1_io02,
  capability_gpio_imxrt_gpio_v1_io03,
  capability_gpio_imxrt_gpio_v1_io04,
  capability_gpio_imxrt_gpio_v1_io05,
  capability_gpio_imxrt_gpio_v1_io06,
  capability_gpio_imxrt_gpio_v1_io07,
  capability_gpio_imxrt_gpio_v1_io08,
  capability_gpio_imxrt_gpio_v1_io09,
  capability_gpio_imxrt_gpio_v1_io10,
  capability_gpio_imxrt_gpio_v1_io11,
  capability_gpio_imxrt_gpio_v1_io12,
  capability_gpio_imxrt_gpio_v1_io13,
  capability_gpio_imxrt_gpio_v1_io14,
  capability_gpio_imxrt_gpio_v1_io15,
  capability_gpio_imxrt_gpio_v1_io16,
  capability_gpio_imxrt_gpio_v1_io17,
  capability_gpio_imxrt_gpio_v1_io18,
  capability_gpio_imxrt_gpio_v1_io19,
  capability_gpio_imxrt_gpio_v1_io20,
  capability_gpio_imxrt_gpio_v1_io21,
  capability_gpio_imxrt_gpio_v1_io22,
  capability_gpio_imxrt_gpio_v1_io23,
  capability_gpio_imxrt_gpio_v1_io24,
  capability_gpio_imxrt_gpio_v1_io25,
  capability_gpio_imxrt_gpio_v1_io26,
  capability_gpio_imxrt_gpio_v1_io27,
  capability_gpio_imxrt_gpio_v1_io28,
  capability_gpio_imxrt_gpio_v1_io29,
  capability_gpio_imxrt_gpio_v1_io30,
  capability_gpio_imxrt_gpio_v1_io31,
  runtime_support_gpio,
  capability_instance_gpio1_bga196_io00,
  capability_instance_gpio1_bga196_io01,
  capability_instance_gpio1_bga196_io02,
  capability_instance_gpio1_bga196_io03,
  capability_instance_gpio1_bga196_io04,
  capability_instance_gpio1_bga196_io05,
  capability_instance_gpio1_bga196_io06,
  capability_instance_gpio1_bga196_io07,
  capability_instance_gpio1_bga196_io08,
  capability_instance_gpio1_bga196_io09,
  capability_instance_gpio1_bga196_io10,
  capability_instance_gpio1_bga196_io11,
  capability_instance_gpio1_bga196_io12,
  capability_instance_gpio1_bga196_io13,
  capability_instance_gpio1_bga196_io14,
  capability_instance_gpio1_bga196_io15,
  capability_instance_gpio1_bga196_io16,
  capability_instance_gpio1_bga196_io17,
  capability_instance_gpio1_bga196_io18,
  capability_instance_gpio1_bga196_io19,
  capability_instance_gpio1_bga196_io20,
  capability_instance_gpio1_bga196_io21,
  capability_instance_gpio1_bga196_io22,
  capability_instance_gpio1_bga196_io23,
  capability_instance_gpio1_bga196_io24,
  capability_instance_gpio1_bga196_io25,
  capability_instance_gpio1_bga196_io26,
  capability_instance_gpio1_bga196_io27,
  capability_instance_gpio1_bga196_io28,
  capability_instance_gpio1_bga196_io29,
  capability_instance_gpio1_bga196_io30,
  capability_instance_gpio1_bga196_io31,
  capability_instance_gpio2_bga196_io00,
  capability_instance_gpio2_bga196_io01,
  capability_instance_gpio2_bga196_io02,
  capability_instance_gpio2_bga196_io03,
  capability_instance_gpio2_bga196_io04,
  capability_instance_gpio2_bga196_io05,
  capability_instance_gpio2_bga196_io06,
  capability_instance_gpio2_bga196_io07,
  capability_instance_gpio2_bga196_io08,
  capability_instance_gpio2_bga196_io09,
  capability_instance_gpio2_bga196_io10,
  capability_instance_gpio2_bga196_io11,
  capability_instance_gpio2_bga196_io12,
  capability_instance_gpio2_bga196_io13,
  capability_instance_gpio2_bga196_io14,
  capability_instance_gpio2_bga196_io15,
  capability_instance_gpio2_bga196_io16,
  capability_instance_gpio2_bga196_io17,
  capability_instance_gpio2_bga196_io18,
  capability_instance_gpio2_bga196_io19,
  capability_instance_gpio2_bga196_io20,
  capability_instance_gpio2_bga196_io21,
  capability_instance_gpio2_bga196_io22,
  capability_instance_gpio2_bga196_io23,
  capability_instance_gpio2_bga196_io24,
  capability_instance_gpio2_bga196_io25,
  capability_instance_gpio2_bga196_io26,
  capability_instance_gpio2_bga196_io27,
  capability_instance_gpio2_bga196_io28,
  capability_instance_gpio2_bga196_io29,
  capability_instance_gpio2_bga196_io30,
  capability_instance_gpio2_bga196_io31,
  capability_instance_gpio3_bga196_io00,
  capability_instance_gpio3_bga196_io01,
  capability_instance_gpio3_bga196_io02,
  capability_instance_gpio3_bga196_io03,
  capability_instance_gpio3_bga196_io04,
  capability_instance_gpio3_bga196_io05,
  capability_instance_gpio3_bga196_io06,
  capability_instance_gpio3_bga196_io07,
  capability_instance_gpio3_bga196_io08,
  capability_instance_gpio3_bga196_io09,
  capability_instance_gpio3_bga196_io10,
  capability_instance_gpio3_bga196_io11,
  capability_instance_gpio3_bga196_io12,
  capability_instance_gpio3_bga196_io13,
  capability_instance_gpio3_bga196_io14,
  capability_instance_gpio3_bga196_io15,
  capability_instance_gpio3_bga196_io16,
  capability_instance_gpio3_bga196_io17,
  capability_instance_gpio3_bga196_io18,
  capability_instance_gpio3_bga196_io19,
  capability_instance_gpio3_bga196_io20,
  capability_instance_gpio3_bga196_io21,
  capability_instance_gpio3_bga196_io22,
  capability_instance_gpio3_bga196_io23,
  capability_instance_gpio3_bga196_io24,
  capability_instance_gpio3_bga196_io25,
  capability_instance_gpio3_bga196_io26,
  capability_instance_gpio3_bga196_io27,
  capability_instance_gpio4_bga196_io00,
  capability_instance_gpio4_bga196_io01,
  capability_instance_gpio4_bga196_io02,
  capability_instance_gpio4_bga196_io03,
  capability_instance_gpio4_bga196_io04,
  capability_instance_gpio4_bga196_io05,
  capability_instance_gpio4_bga196_io06,
  capability_instance_gpio4_bga196_io07,
  capability_instance_gpio4_bga196_io08,
  capability_instance_gpio4_bga196_io09,
  capability_instance_gpio4_bga196_io10,
  capability_instance_gpio4_bga196_io11,
  capability_instance_gpio4_bga196_io12,
  capability_instance_gpio4_bga196_io13,
  capability_instance_gpio4_bga196_io14,
  capability_instance_gpio4_bga196_io15,
  capability_instance_gpio4_bga196_io16,
  capability_instance_gpio4_bga196_io17,
  capability_instance_gpio4_bga196_io18,
  capability_instance_gpio4_bga196_io19,
  capability_instance_gpio4_bga196_io20,
  capability_instance_gpio4_bga196_io21,
  capability_instance_gpio4_bga196_io22,
  capability_instance_gpio4_bga196_io23,
  capability_instance_gpio4_bga196_io24,
  capability_instance_gpio4_bga196_io25,
  capability_instance_gpio4_bga196_io26,
  capability_instance_gpio4_bga196_io27,
  capability_instance_gpio4_bga196_io28,
  capability_instance_gpio4_bga196_io29,
  capability_instance_gpio4_bga196_io30,
  capability_instance_gpio4_bga196_io31,
  runtime_support_pwm,
  capability_lpspi_lpspi_v1_cs,
  capability_lpspi_lpspi_v1_sck,
  capability_lpspi_lpspi_v1_sd0,
  capability_lpspi_lpspi_v1_sdi,
  capability_lpspi_lpspi_v1_sdo,
  runtime_support_spi,
  capability_instance_lpspi1_bga196_cs,
  capability_instance_lpspi1_bga196_sck,
  capability_instance_lpspi1_bga196_sdi,
  capability_instance_lpspi1_bga196_sdo,
  capability_instance_lpspi2_bga196_cs,
  capability_instance_lpspi2_bga196_sck,
  capability_instance_lpspi2_bga196_sd0,
  capability_instance_lpspi2_bga196_sdi,
  capability_instance_lpspi2_bga196_sdo,
  capability_instance_lpspi3_bga196_cs,
  capability_instance_lpspi3_bga196_sck,
  capability_instance_lpspi3_bga196_sdi,
  capability_instance_lpspi3_bga196_sdo,
  capability_instance_lpspi4_bga196_cs,
  capability_instance_lpspi4_bga196_sck,
  capability_instance_lpspi4_bga196_sdi,
  capability_instance_lpspi4_bga196_sdo,
  runtime_support_timer,
  capability_lpuart_lpuart_v1_cts,
  capability_lpuart_lpuart_v1_rts,
  capability_lpuart_lpuart_v1_rx,
  capability_lpuart_lpuart_v1_tx,
  runtime_support_uart,
  capability_instance_lpuart1_bga196_cts,
  capability_instance_lpuart1_bga196_rts,
  capability_instance_lpuart1_bga196_rx,
  capability_instance_lpuart1_bga196_tx,
  capability_instance_lpuart2_bga196_cts,
  capability_instance_lpuart2_bga196_rts,
  capability_instance_lpuart2_bga196_rx,
  capability_instance_lpuart2_bga196_tx,
  capability_instance_lpuart3_bga196_cts,
  capability_instance_lpuart3_bga196_rts,
  capability_instance_lpuart3_bga196_rx,
  capability_instance_lpuart3_bga196_tx,
  capability_instance_lpuart4_bga196_cts,
  capability_instance_lpuart4_bga196_rts,
  capability_instance_lpuart4_bga196_rx,
  capability_instance_lpuart4_bga196_tx,
  capability_instance_lpuart5_bga196_cts,
  capability_instance_lpuart5_bga196_rts,
  capability_instance_lpuart5_bga196_rx,
  capability_instance_lpuart5_bga196_tx,
  capability_instance_lpuart6_bga196_cts,
  capability_instance_lpuart6_bga196_rts,
  capability_instance_lpuart6_bga196_rx,
  capability_instance_lpuart6_bga196_tx,
  capability_instance_lpuart7_bga196_cts,
  capability_instance_lpuart7_bga196_rts,
  capability_instance_lpuart7_bga196_rx,
  capability_instance_lpuart7_bga196_tx,
  capability_instance_lpuart8_bga196_cts,
  capability_instance_lpuart8_bga196_rts,
  capability_instance_lpuart8_bga196_rx,
  capability_instance_lpuart8_bga196_tx,
  runtime_support_usb,
  runtime_support_watchdog,
};

enum class CapabilityScopeId : std::uint16_t {
  none,
  device,
  instance_overlay,
  ip_block,
  runtime_contract,
};

enum class CapabilityNameId : std::uint16_t {
  none,
  available_signal,
  core_count,
  multicore_topology,
  runtime_supported,
  signal_role,
};

enum class CapabilityValueId : std::uint16_t {
  none,
  _1,
  cs,
  cts,
  io00,
  io01,
  io02,
  io03,
  io04,
  io05,
  io06,
  io07,
  io08,
  io09,
  io10,
  io11,
  io12,
  io13,
  io14,
  io15,
  io16,
  io17,
  io18,
  io19,
  io20,
  io21,
  io22,
  io23,
  io24,
  io25,
  io26,
  io27,
  io28,
  io29,
  io30,
  io31,
  rts,
  rx,
  sck,
  sd0,
  sdi,
  sdo,
  single_core,
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
inline constexpr std::array<CapabilityDescriptor, 228> kCapabilities = {{
  {CapabilityId::runtime_support_adc, CapabilityScopeId::runtime_contract, PeripheralClassId::class_adc, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_can, CapabilityScopeId::runtime_contract, PeripheralClassId::class_can, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::device_core_count, CapabilityScopeId::device, PeripheralClassId::class_device, CapabilityNameId::core_count, CapabilityValueId::_1, PeripheralId::none},
  {CapabilityId::device_multicore_topology, CapabilityScopeId::device, PeripheralClassId::class_device, CapabilityNameId::multicore_topology, CapabilityValueId::single_core, PeripheralId::none},
  {CapabilityId::runtime_support_dma, CapabilityScopeId::runtime_contract, PeripheralClassId::class_dma, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_dma_router, CapabilityScopeId::runtime_contract, PeripheralClassId::class_dma_router, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_support_eth, CapabilityScopeId::runtime_contract, PeripheralClassId::class_eth, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io00, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io00, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io01, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io01, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io02, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io02, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io03, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io03, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io04, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io04, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io05, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io05, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io06, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io06, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io07, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io07, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io08, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io08, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io09, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io09, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io10, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io10, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io11, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io11, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io12, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io12, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io13, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io13, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io14, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io14, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io15, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io15, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io16, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io16, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io17, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io17, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io18, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io18, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io19, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io19, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io20, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io20, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io21, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io21, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io22, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io22, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io23, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io23, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io24, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io24, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io25, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io25, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io26, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io26, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io27, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io27, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io28, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io28, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io29, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io29, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io30, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io30, PeripheralId::none},
  {CapabilityId::capability_gpio_imxrt_gpio_v1_io31, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::io31, PeripheralId::none},
  {CapabilityId::runtime_support_gpio, CapabilityScopeId::runtime_contract, PeripheralClassId::class_gpio, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_gpio1_bga196_io00, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io00, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io01, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io01, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io02, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io02, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io03, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io03, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io04, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io04, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io05, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io05, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io06, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io06, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io07, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io07, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io08, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io08, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io09, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io09, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io10, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io10, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io11, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io11, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io12, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io12, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io13, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io13, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io14, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io14, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io15, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io15, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io16, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io16, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io17, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io17, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io18, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io18, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io19, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io19, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io20, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io20, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io21, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io21, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io22, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io22, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io23, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io23, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io24, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io24, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io25, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io25, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io26, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io26, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io27, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io27, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io28, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io28, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io29, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io29, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io30, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io30, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio1_bga196_io31, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io31, PeripheralId::GPIO1},
  {CapabilityId::capability_instance_gpio2_bga196_io00, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io00, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io01, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io01, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io02, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io02, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io03, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io03, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io04, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io04, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io05, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io05, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io06, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io06, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io07, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io07, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io08, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io08, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io09, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io09, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io10, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io10, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io11, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io11, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io12, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io12, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io13, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io13, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io14, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io14, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io15, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io15, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io16, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io16, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io17, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io17, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io18, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io18, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io19, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io19, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io20, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io20, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io21, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io21, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io22, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io22, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io23, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io23, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io24, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io24, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io25, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io25, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io26, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io26, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io27, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io27, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io28, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io28, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io29, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io29, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io30, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io30, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio2_bga196_io31, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io31, PeripheralId::GPIO2},
  {CapabilityId::capability_instance_gpio3_bga196_io00, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io00, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io01, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io01, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io02, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io02, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io03, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io03, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io04, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io04, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io05, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io05, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io06, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io06, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io07, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io07, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io08, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io08, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io09, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io09, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io10, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io10, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io11, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io11, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io12, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io12, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io13, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io13, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io14, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io14, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io15, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io15, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io16, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io16, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io17, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io17, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io18, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io18, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io19, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io19, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io20, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io20, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io21, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io21, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io22, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io22, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io23, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io23, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io24, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io24, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io25, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io25, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io26, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io26, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio3_bga196_io27, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io27, PeripheralId::GPIO3},
  {CapabilityId::capability_instance_gpio4_bga196_io00, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io00, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io01, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io01, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io02, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io02, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io03, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io03, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io04, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io04, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io05, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io05, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io06, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io06, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io07, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io07, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io08, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io08, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io09, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io09, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io10, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io10, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io11, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io11, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io12, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io12, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io13, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io13, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io14, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io14, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io15, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io15, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io16, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io16, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io17, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io17, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io18, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io18, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io19, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io19, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io20, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io20, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io21, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io21, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io22, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io22, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io23, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io23, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io24, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io24, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io25, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io25, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io26, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io26, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io27, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io27, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io28, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io28, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io29, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io29, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io30, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io30, PeripheralId::GPIO4},
  {CapabilityId::capability_instance_gpio4_bga196_io31, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::io31, PeripheralId::GPIO4},
  {CapabilityId::runtime_support_pwm, CapabilityScopeId::runtime_contract, PeripheralClassId::class_pwm, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_lpspi_lpspi_v1_cs, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::cs, PeripheralId::none},
  {CapabilityId::capability_lpspi_lpspi_v1_sck, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::sck, PeripheralId::none},
  {CapabilityId::capability_lpspi_lpspi_v1_sd0, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::sd0, PeripheralId::none},
  {CapabilityId::capability_lpspi_lpspi_v1_sdi, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::sdi, PeripheralId::none},
  {CapabilityId::capability_lpspi_lpspi_v1_sdo, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::sdo, PeripheralId::none},
  {CapabilityId::runtime_support_spi, CapabilityScopeId::runtime_contract, PeripheralClassId::class_spi, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_lpspi1_bga196_cs, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::cs, PeripheralId::LPSPI1},
  {CapabilityId::capability_instance_lpspi1_bga196_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::LPSPI1},
  {CapabilityId::capability_instance_lpspi1_bga196_sdi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sdi, PeripheralId::LPSPI1},
  {CapabilityId::capability_instance_lpspi1_bga196_sdo, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sdo, PeripheralId::LPSPI1},
  {CapabilityId::capability_instance_lpspi2_bga196_cs, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::cs, PeripheralId::LPSPI2},
  {CapabilityId::capability_instance_lpspi2_bga196_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::LPSPI2},
  {CapabilityId::capability_instance_lpspi2_bga196_sd0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sd0, PeripheralId::LPSPI2},
  {CapabilityId::capability_instance_lpspi2_bga196_sdi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sdi, PeripheralId::LPSPI2},
  {CapabilityId::capability_instance_lpspi2_bga196_sdo, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sdo, PeripheralId::LPSPI2},
  {CapabilityId::capability_instance_lpspi3_bga196_cs, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::cs, PeripheralId::LPSPI3},
  {CapabilityId::capability_instance_lpspi3_bga196_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::LPSPI3},
  {CapabilityId::capability_instance_lpspi3_bga196_sdi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sdi, PeripheralId::LPSPI3},
  {CapabilityId::capability_instance_lpspi3_bga196_sdo, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sdo, PeripheralId::LPSPI3},
  {CapabilityId::capability_instance_lpspi4_bga196_cs, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::cs, PeripheralId::LPSPI4},
  {CapabilityId::capability_instance_lpspi4_bga196_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::LPSPI4},
  {CapabilityId::capability_instance_lpspi4_bga196_sdi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sdi, PeripheralId::LPSPI4},
  {CapabilityId::capability_instance_lpspi4_bga196_sdo, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sdo, PeripheralId::LPSPI4},
  {CapabilityId::runtime_support_timer, CapabilityScopeId::runtime_contract, PeripheralClassId::class_timer, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_lpuart_lpuart_v1_cts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::cts, PeripheralId::none},
  {CapabilityId::capability_lpuart_lpuart_v1_rts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rts, PeripheralId::none},
  {CapabilityId::capability_lpuart_lpuart_v1_rx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rx, PeripheralId::none},
  {CapabilityId::capability_lpuart_lpuart_v1_tx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::tx, PeripheralId::none},
  {CapabilityId::runtime_support_uart, CapabilityScopeId::runtime_contract, PeripheralClassId::class_uart, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_instance_lpuart1_bga196_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART1},
  {CapabilityId::capability_instance_lpuart1_bga196_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART1},
  {CapabilityId::capability_instance_lpuart1_bga196_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART1},
  {CapabilityId::capability_instance_lpuart1_bga196_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART1},
  {CapabilityId::capability_instance_lpuart2_bga196_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART2},
  {CapabilityId::capability_instance_lpuart2_bga196_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART2},
  {CapabilityId::capability_instance_lpuart2_bga196_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART2},
  {CapabilityId::capability_instance_lpuart2_bga196_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART2},
  {CapabilityId::capability_instance_lpuart3_bga196_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART3},
  {CapabilityId::capability_instance_lpuart3_bga196_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART3},
  {CapabilityId::capability_instance_lpuart3_bga196_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART3},
  {CapabilityId::capability_instance_lpuart3_bga196_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART3},
  {CapabilityId::capability_instance_lpuart4_bga196_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART4},
  {CapabilityId::capability_instance_lpuart4_bga196_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART4},
  {CapabilityId::capability_instance_lpuart4_bga196_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART4},
  {CapabilityId::capability_instance_lpuart4_bga196_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART4},
  {CapabilityId::capability_instance_lpuart5_bga196_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART5},
  {CapabilityId::capability_instance_lpuart5_bga196_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART5},
  {CapabilityId::capability_instance_lpuart5_bga196_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART5},
  {CapabilityId::capability_instance_lpuart5_bga196_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART5},
  {CapabilityId::capability_instance_lpuart6_bga196_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART6},
  {CapabilityId::capability_instance_lpuart6_bga196_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART6},
  {CapabilityId::capability_instance_lpuart6_bga196_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART6},
  {CapabilityId::capability_instance_lpuart6_bga196_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART6},
  {CapabilityId::capability_instance_lpuart7_bga196_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART7},
  {CapabilityId::capability_instance_lpuart7_bga196_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART7},
  {CapabilityId::capability_instance_lpuart7_bga196_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART7},
  {CapabilityId::capability_instance_lpuart7_bga196_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART7},
  {CapabilityId::capability_instance_lpuart8_bga196_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::LPUART8},
  {CapabilityId::capability_instance_lpuart8_bga196_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::LPUART8},
  {CapabilityId::capability_instance_lpuart8_bga196_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::LPUART8},
  {CapabilityId::capability_instance_lpuart8_bga196_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::LPUART8},
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
struct CapabilityTraits<CapabilityId::runtime_support_can> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_can;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::device_core_count> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::device;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_device;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::core_count;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::_1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::device_multicore_topology> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::device;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_device;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::multicore_topology;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::single_core;
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
struct CapabilityTraits<CapabilityId::runtime_support_eth> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_eth;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io00> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io00;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io01> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io01;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io02> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io02;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io03> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io03;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io04> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io04;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io05> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io05;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io06> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io06;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io07> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io07;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io08> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io08;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io09> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io09;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io10> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io10;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io12> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io12;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io13> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io13;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io14> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io14;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io15> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io15;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io16> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io16;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io17> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io17;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io18> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io18;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io19> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io19;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io20> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io20;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io21> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io21;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io22> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io22;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io23> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io23;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io24> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io24;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io25> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io25;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io26> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io26;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io27> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io27;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io28> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io28;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io29> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io29;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io30> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io30;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_imxrt_gpio_v1_io31> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io31;
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
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io00> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io00;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io01> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io01;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io02> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io02;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io03> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io03;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io04> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io04;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io05> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io05;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io06> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io06;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io07> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io07;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io08> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io08;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io09> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io09;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io10> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io10;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io12> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io12;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io13> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io13;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io14> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io14;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io15> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io15;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io16> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io16;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io17> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io17;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io18> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io18;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io19> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io19;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io20> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io20;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io21> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io21;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io22> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io22;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io23> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io23;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io24> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io24;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io25> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io25;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io26> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io26;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io27> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io27;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io28> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io28;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io29> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io29;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io30> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io30;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio1_bga196_io31> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io31;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io00> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io00;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io01> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io01;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io02> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io02;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io03> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io03;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io04> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io04;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io05> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io05;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io06> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io06;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io07> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io07;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io08> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io08;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io09> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io09;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io10> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io10;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io12> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io12;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io13> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io13;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io14> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io14;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io15> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io15;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io16> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io16;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io17> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io17;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io18> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io18;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io19> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io19;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io20> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io20;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io21> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io21;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io22> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io22;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io23> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io23;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io24> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io24;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io25> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io25;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io26> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io26;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io27> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io27;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io28> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io28;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io29> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io29;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io30> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io30;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio2_bga196_io31> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io31;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io00> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io00;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io01> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io01;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io02> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io02;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io03> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io03;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io04> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io04;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io05> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io05;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io06> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io06;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io07> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io07;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io08> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io08;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io09> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io09;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io10> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io10;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io12> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io12;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io13> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io13;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io14> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io14;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io15> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io15;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io16> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io16;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io17> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io17;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io18> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io18;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io19> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io19;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io20> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io20;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io21> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io21;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io22> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io22;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io23> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io23;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io24> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io24;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io25> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io25;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io26> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io26;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio3_bga196_io27> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io27;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io00> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io00;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io01> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io01;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io02> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io02;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io03> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io03;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io04> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io04;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io05> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io05;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io06> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io06;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io07> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io07;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io08> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io08;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io09> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io09;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io10> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io10;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io12> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io12;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io13> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io13;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io14> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io14;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io15> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io15;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io16> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io16;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io17> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io17;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io18> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io18;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io19> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io19;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io20> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io20;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io21> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io21;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io22> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io22;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io23> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io23;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io24> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io24;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io25> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io25;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io26> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io26;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io27> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io27;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io28> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io28;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io29> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io29;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io30> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io30;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpio4_bga196_io31> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::io31;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_pwm> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpspi_lpspi_v1_cs> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cs;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpspi_lpspi_v1_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpspi_lpspi_v1_sd0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sd0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpspi_lpspi_v1_sdi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpspi_lpspi_v1_sdo> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdo;
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
struct CapabilityTraits<CapabilityId::capability_instance_lpspi1_bga196_cs> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cs;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi1_bga196_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi1_bga196_sdi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi1_bga196_sdo> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdo;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi2_bga196_cs> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cs;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi2_bga196_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi2_bga196_sd0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sd0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi2_bga196_sdi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi2_bga196_sdo> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdo;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi3_bga196_cs> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cs;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi3_bga196_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi3_bga196_sdi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi3_bga196_sdo> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdo;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi4_bga196_cs> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cs;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi4_bga196_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi4_bga196_sdi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpspi4_bga196_sdo> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sdo;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPSPI4;
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
struct CapabilityTraits<CapabilityId::capability_lpuart_lpuart_v1_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpuart_lpuart_v1_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpuart_lpuart_v1_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_lpuart_lpuart_v1_tx> {
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
struct CapabilityTraits<CapabilityId::capability_instance_lpuart1_bga196_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart1_bga196_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart1_bga196_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart1_bga196_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart2_bga196_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart2_bga196_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart2_bga196_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart2_bga196_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart3_bga196_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart3_bga196_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart3_bga196_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart3_bga196_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart4_bga196_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart4_bga196_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart4_bga196_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart4_bga196_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart5_bga196_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart5_bga196_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart5_bga196_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart5_bga196_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART5;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart6_bga196_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart6_bga196_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart6_bga196_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart6_bga196_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART6;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart7_bga196_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART7;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart7_bga196_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART7;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart7_bga196_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART7;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart7_bga196_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART7;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart8_bga196_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART8;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart8_bga196_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART8;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart8_bga196_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART8;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_lpuart8_bga196_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::LPUART8;
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
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_can> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_can,
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
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_eth> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_eth,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_gpio> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 157> kCapabilityIds = {{
    CapabilityId::capability_gpio_imxrt_gpio_v1_io00,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io01,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io02,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io03,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io04,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io05,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io06,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io07,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io08,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io09,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io10,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io11,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io12,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io13,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io14,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io15,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io16,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io17,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io18,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io19,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io20,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io21,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io22,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io23,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io24,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io25,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io26,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io27,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io28,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io29,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io30,
    CapabilityId::capability_gpio_imxrt_gpio_v1_io31,
    CapabilityId::runtime_support_gpio,
    CapabilityId::capability_instance_gpio1_bga196_io00,
    CapabilityId::capability_instance_gpio1_bga196_io01,
    CapabilityId::capability_instance_gpio1_bga196_io02,
    CapabilityId::capability_instance_gpio1_bga196_io03,
    CapabilityId::capability_instance_gpio1_bga196_io04,
    CapabilityId::capability_instance_gpio1_bga196_io05,
    CapabilityId::capability_instance_gpio1_bga196_io06,
    CapabilityId::capability_instance_gpio1_bga196_io07,
    CapabilityId::capability_instance_gpio1_bga196_io08,
    CapabilityId::capability_instance_gpio1_bga196_io09,
    CapabilityId::capability_instance_gpio1_bga196_io10,
    CapabilityId::capability_instance_gpio1_bga196_io11,
    CapabilityId::capability_instance_gpio1_bga196_io12,
    CapabilityId::capability_instance_gpio1_bga196_io13,
    CapabilityId::capability_instance_gpio1_bga196_io14,
    CapabilityId::capability_instance_gpio1_bga196_io15,
    CapabilityId::capability_instance_gpio1_bga196_io16,
    CapabilityId::capability_instance_gpio1_bga196_io17,
    CapabilityId::capability_instance_gpio1_bga196_io18,
    CapabilityId::capability_instance_gpio1_bga196_io19,
    CapabilityId::capability_instance_gpio1_bga196_io20,
    CapabilityId::capability_instance_gpio1_bga196_io21,
    CapabilityId::capability_instance_gpio1_bga196_io22,
    CapabilityId::capability_instance_gpio1_bga196_io23,
    CapabilityId::capability_instance_gpio1_bga196_io24,
    CapabilityId::capability_instance_gpio1_bga196_io25,
    CapabilityId::capability_instance_gpio1_bga196_io26,
    CapabilityId::capability_instance_gpio1_bga196_io27,
    CapabilityId::capability_instance_gpio1_bga196_io28,
    CapabilityId::capability_instance_gpio1_bga196_io29,
    CapabilityId::capability_instance_gpio1_bga196_io30,
    CapabilityId::capability_instance_gpio1_bga196_io31,
    CapabilityId::capability_instance_gpio2_bga196_io00,
    CapabilityId::capability_instance_gpio2_bga196_io01,
    CapabilityId::capability_instance_gpio2_bga196_io02,
    CapabilityId::capability_instance_gpio2_bga196_io03,
    CapabilityId::capability_instance_gpio2_bga196_io04,
    CapabilityId::capability_instance_gpio2_bga196_io05,
    CapabilityId::capability_instance_gpio2_bga196_io06,
    CapabilityId::capability_instance_gpio2_bga196_io07,
    CapabilityId::capability_instance_gpio2_bga196_io08,
    CapabilityId::capability_instance_gpio2_bga196_io09,
    CapabilityId::capability_instance_gpio2_bga196_io10,
    CapabilityId::capability_instance_gpio2_bga196_io11,
    CapabilityId::capability_instance_gpio2_bga196_io12,
    CapabilityId::capability_instance_gpio2_bga196_io13,
    CapabilityId::capability_instance_gpio2_bga196_io14,
    CapabilityId::capability_instance_gpio2_bga196_io15,
    CapabilityId::capability_instance_gpio2_bga196_io16,
    CapabilityId::capability_instance_gpio2_bga196_io17,
    CapabilityId::capability_instance_gpio2_bga196_io18,
    CapabilityId::capability_instance_gpio2_bga196_io19,
    CapabilityId::capability_instance_gpio2_bga196_io20,
    CapabilityId::capability_instance_gpio2_bga196_io21,
    CapabilityId::capability_instance_gpio2_bga196_io22,
    CapabilityId::capability_instance_gpio2_bga196_io23,
    CapabilityId::capability_instance_gpio2_bga196_io24,
    CapabilityId::capability_instance_gpio2_bga196_io25,
    CapabilityId::capability_instance_gpio2_bga196_io26,
    CapabilityId::capability_instance_gpio2_bga196_io27,
    CapabilityId::capability_instance_gpio2_bga196_io28,
    CapabilityId::capability_instance_gpio2_bga196_io29,
    CapabilityId::capability_instance_gpio2_bga196_io30,
    CapabilityId::capability_instance_gpio2_bga196_io31,
    CapabilityId::capability_instance_gpio3_bga196_io00,
    CapabilityId::capability_instance_gpio3_bga196_io01,
    CapabilityId::capability_instance_gpio3_bga196_io02,
    CapabilityId::capability_instance_gpio3_bga196_io03,
    CapabilityId::capability_instance_gpio3_bga196_io04,
    CapabilityId::capability_instance_gpio3_bga196_io05,
    CapabilityId::capability_instance_gpio3_bga196_io06,
    CapabilityId::capability_instance_gpio3_bga196_io07,
    CapabilityId::capability_instance_gpio3_bga196_io08,
    CapabilityId::capability_instance_gpio3_bga196_io09,
    CapabilityId::capability_instance_gpio3_bga196_io10,
    CapabilityId::capability_instance_gpio3_bga196_io11,
    CapabilityId::capability_instance_gpio3_bga196_io12,
    CapabilityId::capability_instance_gpio3_bga196_io13,
    CapabilityId::capability_instance_gpio3_bga196_io14,
    CapabilityId::capability_instance_gpio3_bga196_io15,
    CapabilityId::capability_instance_gpio3_bga196_io16,
    CapabilityId::capability_instance_gpio3_bga196_io17,
    CapabilityId::capability_instance_gpio3_bga196_io18,
    CapabilityId::capability_instance_gpio3_bga196_io19,
    CapabilityId::capability_instance_gpio3_bga196_io20,
    CapabilityId::capability_instance_gpio3_bga196_io21,
    CapabilityId::capability_instance_gpio3_bga196_io22,
    CapabilityId::capability_instance_gpio3_bga196_io23,
    CapabilityId::capability_instance_gpio3_bga196_io24,
    CapabilityId::capability_instance_gpio3_bga196_io25,
    CapabilityId::capability_instance_gpio3_bga196_io26,
    CapabilityId::capability_instance_gpio3_bga196_io27,
    CapabilityId::capability_instance_gpio4_bga196_io00,
    CapabilityId::capability_instance_gpio4_bga196_io01,
    CapabilityId::capability_instance_gpio4_bga196_io02,
    CapabilityId::capability_instance_gpio4_bga196_io03,
    CapabilityId::capability_instance_gpio4_bga196_io04,
    CapabilityId::capability_instance_gpio4_bga196_io05,
    CapabilityId::capability_instance_gpio4_bga196_io06,
    CapabilityId::capability_instance_gpio4_bga196_io07,
    CapabilityId::capability_instance_gpio4_bga196_io08,
    CapabilityId::capability_instance_gpio4_bga196_io09,
    CapabilityId::capability_instance_gpio4_bga196_io10,
    CapabilityId::capability_instance_gpio4_bga196_io11,
    CapabilityId::capability_instance_gpio4_bga196_io12,
    CapabilityId::capability_instance_gpio4_bga196_io13,
    CapabilityId::capability_instance_gpio4_bga196_io14,
    CapabilityId::capability_instance_gpio4_bga196_io15,
    CapabilityId::capability_instance_gpio4_bga196_io16,
    CapabilityId::capability_instance_gpio4_bga196_io17,
    CapabilityId::capability_instance_gpio4_bga196_io18,
    CapabilityId::capability_instance_gpio4_bga196_io19,
    CapabilityId::capability_instance_gpio4_bga196_io20,
    CapabilityId::capability_instance_gpio4_bga196_io21,
    CapabilityId::capability_instance_gpio4_bga196_io22,
    CapabilityId::capability_instance_gpio4_bga196_io23,
    CapabilityId::capability_instance_gpio4_bga196_io24,
    CapabilityId::capability_instance_gpio4_bga196_io25,
    CapabilityId::capability_instance_gpio4_bga196_io26,
    CapabilityId::capability_instance_gpio4_bga196_io27,
    CapabilityId::capability_instance_gpio4_bga196_io28,
    CapabilityId::capability_instance_gpio4_bga196_io29,
    CapabilityId::capability_instance_gpio4_bga196_io30,
    CapabilityId::capability_instance_gpio4_bga196_io31,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_pwm> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_pwm,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_spi> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 23> kCapabilityIds = {{
    CapabilityId::capability_lpspi_lpspi_v1_cs,
    CapabilityId::capability_lpspi_lpspi_v1_sck,
    CapabilityId::capability_lpspi_lpspi_v1_sd0,
    CapabilityId::capability_lpspi_lpspi_v1_sdi,
    CapabilityId::capability_lpspi_lpspi_v1_sdo,
    CapabilityId::runtime_support_spi,
    CapabilityId::capability_instance_lpspi1_bga196_cs,
    CapabilityId::capability_instance_lpspi1_bga196_sck,
    CapabilityId::capability_instance_lpspi1_bga196_sdi,
    CapabilityId::capability_instance_lpspi1_bga196_sdo,
    CapabilityId::capability_instance_lpspi2_bga196_cs,
    CapabilityId::capability_instance_lpspi2_bga196_sck,
    CapabilityId::capability_instance_lpspi2_bga196_sd0,
    CapabilityId::capability_instance_lpspi2_bga196_sdi,
    CapabilityId::capability_instance_lpspi2_bga196_sdo,
    CapabilityId::capability_instance_lpspi3_bga196_cs,
    CapabilityId::capability_instance_lpspi3_bga196_sck,
    CapabilityId::capability_instance_lpspi3_bga196_sdi,
    CapabilityId::capability_instance_lpspi3_bga196_sdo,
    CapabilityId::capability_instance_lpspi4_bga196_cs,
    CapabilityId::capability_instance_lpspi4_bga196_sck,
    CapabilityId::capability_instance_lpspi4_bga196_sdi,
    CapabilityId::capability_instance_lpspi4_bga196_sdo,
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
  inline static constexpr std::array<CapabilityId, 37> kCapabilityIds = {{
    CapabilityId::capability_lpuart_lpuart_v1_cts,
    CapabilityId::capability_lpuart_lpuart_v1_rts,
    CapabilityId::capability_lpuart_lpuart_v1_rx,
    CapabilityId::capability_lpuart_lpuart_v1_tx,
    CapabilityId::runtime_support_uart,
    CapabilityId::capability_instance_lpuart1_bga196_cts,
    CapabilityId::capability_instance_lpuart1_bga196_rts,
    CapabilityId::capability_instance_lpuart1_bga196_rx,
    CapabilityId::capability_instance_lpuart1_bga196_tx,
    CapabilityId::capability_instance_lpuart2_bga196_cts,
    CapabilityId::capability_instance_lpuart2_bga196_rts,
    CapabilityId::capability_instance_lpuart2_bga196_rx,
    CapabilityId::capability_instance_lpuart2_bga196_tx,
    CapabilityId::capability_instance_lpuart3_bga196_cts,
    CapabilityId::capability_instance_lpuart3_bga196_rts,
    CapabilityId::capability_instance_lpuart3_bga196_rx,
    CapabilityId::capability_instance_lpuart3_bga196_tx,
    CapabilityId::capability_instance_lpuart4_bga196_cts,
    CapabilityId::capability_instance_lpuart4_bga196_rts,
    CapabilityId::capability_instance_lpuart4_bga196_rx,
    CapabilityId::capability_instance_lpuart4_bga196_tx,
    CapabilityId::capability_instance_lpuart5_bga196_cts,
    CapabilityId::capability_instance_lpuart5_bga196_rts,
    CapabilityId::capability_instance_lpuart5_bga196_rx,
    CapabilityId::capability_instance_lpuart5_bga196_tx,
    CapabilityId::capability_instance_lpuart6_bga196_cts,
    CapabilityId::capability_instance_lpuart6_bga196_rts,
    CapabilityId::capability_instance_lpuart6_bga196_rx,
    CapabilityId::capability_instance_lpuart6_bga196_tx,
    CapabilityId::capability_instance_lpuart7_bga196_cts,
    CapabilityId::capability_instance_lpuart7_bga196_rts,
    CapabilityId::capability_instance_lpuart7_bga196_rx,
    CapabilityId::capability_instance_lpuart7_bga196_tx,
    CapabilityId::capability_instance_lpuart8_bga196_cts,
    CapabilityId::capability_instance_lpuart8_bga196_rts,
    CapabilityId::capability_instance_lpuart8_bga196_rx,
    CapabilityId::capability_instance_lpuart8_bga196_tx,
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
struct PeripheralCapabilityTraits<PeripheralId::ADC2> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::CAN1> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::CAN2> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::CAN3> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::DMA0> {
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
struct PeripheralCapabilityTraits<PeripheralId::ENET> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::ENET2> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 32> kCapabilityIds = {{
    CapabilityId::capability_instance_gpio1_bga196_io00,
    CapabilityId::capability_instance_gpio1_bga196_io01,
    CapabilityId::capability_instance_gpio1_bga196_io02,
    CapabilityId::capability_instance_gpio1_bga196_io03,
    CapabilityId::capability_instance_gpio1_bga196_io04,
    CapabilityId::capability_instance_gpio1_bga196_io05,
    CapabilityId::capability_instance_gpio1_bga196_io06,
    CapabilityId::capability_instance_gpio1_bga196_io07,
    CapabilityId::capability_instance_gpio1_bga196_io08,
    CapabilityId::capability_instance_gpio1_bga196_io09,
    CapabilityId::capability_instance_gpio1_bga196_io10,
    CapabilityId::capability_instance_gpio1_bga196_io11,
    CapabilityId::capability_instance_gpio1_bga196_io12,
    CapabilityId::capability_instance_gpio1_bga196_io13,
    CapabilityId::capability_instance_gpio1_bga196_io14,
    CapabilityId::capability_instance_gpio1_bga196_io15,
    CapabilityId::capability_instance_gpio1_bga196_io16,
    CapabilityId::capability_instance_gpio1_bga196_io17,
    CapabilityId::capability_instance_gpio1_bga196_io18,
    CapabilityId::capability_instance_gpio1_bga196_io19,
    CapabilityId::capability_instance_gpio1_bga196_io20,
    CapabilityId::capability_instance_gpio1_bga196_io21,
    CapabilityId::capability_instance_gpio1_bga196_io22,
    CapabilityId::capability_instance_gpio1_bga196_io23,
    CapabilityId::capability_instance_gpio1_bga196_io24,
    CapabilityId::capability_instance_gpio1_bga196_io25,
    CapabilityId::capability_instance_gpio1_bga196_io26,
    CapabilityId::capability_instance_gpio1_bga196_io27,
    CapabilityId::capability_instance_gpio1_bga196_io28,
    CapabilityId::capability_instance_gpio1_bga196_io29,
    CapabilityId::capability_instance_gpio1_bga196_io30,
    CapabilityId::capability_instance_gpio1_bga196_io31,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO10> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 32> kCapabilityIds = {{
    CapabilityId::capability_instance_gpio2_bga196_io00,
    CapabilityId::capability_instance_gpio2_bga196_io01,
    CapabilityId::capability_instance_gpio2_bga196_io02,
    CapabilityId::capability_instance_gpio2_bga196_io03,
    CapabilityId::capability_instance_gpio2_bga196_io04,
    CapabilityId::capability_instance_gpio2_bga196_io05,
    CapabilityId::capability_instance_gpio2_bga196_io06,
    CapabilityId::capability_instance_gpio2_bga196_io07,
    CapabilityId::capability_instance_gpio2_bga196_io08,
    CapabilityId::capability_instance_gpio2_bga196_io09,
    CapabilityId::capability_instance_gpio2_bga196_io10,
    CapabilityId::capability_instance_gpio2_bga196_io11,
    CapabilityId::capability_instance_gpio2_bga196_io12,
    CapabilityId::capability_instance_gpio2_bga196_io13,
    CapabilityId::capability_instance_gpio2_bga196_io14,
    CapabilityId::capability_instance_gpio2_bga196_io15,
    CapabilityId::capability_instance_gpio2_bga196_io16,
    CapabilityId::capability_instance_gpio2_bga196_io17,
    CapabilityId::capability_instance_gpio2_bga196_io18,
    CapabilityId::capability_instance_gpio2_bga196_io19,
    CapabilityId::capability_instance_gpio2_bga196_io20,
    CapabilityId::capability_instance_gpio2_bga196_io21,
    CapabilityId::capability_instance_gpio2_bga196_io22,
    CapabilityId::capability_instance_gpio2_bga196_io23,
    CapabilityId::capability_instance_gpio2_bga196_io24,
    CapabilityId::capability_instance_gpio2_bga196_io25,
    CapabilityId::capability_instance_gpio2_bga196_io26,
    CapabilityId::capability_instance_gpio2_bga196_io27,
    CapabilityId::capability_instance_gpio2_bga196_io28,
    CapabilityId::capability_instance_gpio2_bga196_io29,
    CapabilityId::capability_instance_gpio2_bga196_io30,
    CapabilityId::capability_instance_gpio2_bga196_io31,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO3> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 28> kCapabilityIds = {{
    CapabilityId::capability_instance_gpio3_bga196_io00,
    CapabilityId::capability_instance_gpio3_bga196_io01,
    CapabilityId::capability_instance_gpio3_bga196_io02,
    CapabilityId::capability_instance_gpio3_bga196_io03,
    CapabilityId::capability_instance_gpio3_bga196_io04,
    CapabilityId::capability_instance_gpio3_bga196_io05,
    CapabilityId::capability_instance_gpio3_bga196_io06,
    CapabilityId::capability_instance_gpio3_bga196_io07,
    CapabilityId::capability_instance_gpio3_bga196_io08,
    CapabilityId::capability_instance_gpio3_bga196_io09,
    CapabilityId::capability_instance_gpio3_bga196_io10,
    CapabilityId::capability_instance_gpio3_bga196_io11,
    CapabilityId::capability_instance_gpio3_bga196_io12,
    CapabilityId::capability_instance_gpio3_bga196_io13,
    CapabilityId::capability_instance_gpio3_bga196_io14,
    CapabilityId::capability_instance_gpio3_bga196_io15,
    CapabilityId::capability_instance_gpio3_bga196_io16,
    CapabilityId::capability_instance_gpio3_bga196_io17,
    CapabilityId::capability_instance_gpio3_bga196_io18,
    CapabilityId::capability_instance_gpio3_bga196_io19,
    CapabilityId::capability_instance_gpio3_bga196_io20,
    CapabilityId::capability_instance_gpio3_bga196_io21,
    CapabilityId::capability_instance_gpio3_bga196_io22,
    CapabilityId::capability_instance_gpio3_bga196_io23,
    CapabilityId::capability_instance_gpio3_bga196_io24,
    CapabilityId::capability_instance_gpio3_bga196_io25,
    CapabilityId::capability_instance_gpio3_bga196_io26,
    CapabilityId::capability_instance_gpio3_bga196_io27,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO4> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 32> kCapabilityIds = {{
    CapabilityId::capability_instance_gpio4_bga196_io00,
    CapabilityId::capability_instance_gpio4_bga196_io01,
    CapabilityId::capability_instance_gpio4_bga196_io02,
    CapabilityId::capability_instance_gpio4_bga196_io03,
    CapabilityId::capability_instance_gpio4_bga196_io04,
    CapabilityId::capability_instance_gpio4_bga196_io05,
    CapabilityId::capability_instance_gpio4_bga196_io06,
    CapabilityId::capability_instance_gpio4_bga196_io07,
    CapabilityId::capability_instance_gpio4_bga196_io08,
    CapabilityId::capability_instance_gpio4_bga196_io09,
    CapabilityId::capability_instance_gpio4_bga196_io10,
    CapabilityId::capability_instance_gpio4_bga196_io11,
    CapabilityId::capability_instance_gpio4_bga196_io12,
    CapabilityId::capability_instance_gpio4_bga196_io13,
    CapabilityId::capability_instance_gpio4_bga196_io14,
    CapabilityId::capability_instance_gpio4_bga196_io15,
    CapabilityId::capability_instance_gpio4_bga196_io16,
    CapabilityId::capability_instance_gpio4_bga196_io17,
    CapabilityId::capability_instance_gpio4_bga196_io18,
    CapabilityId::capability_instance_gpio4_bga196_io19,
    CapabilityId::capability_instance_gpio4_bga196_io20,
    CapabilityId::capability_instance_gpio4_bga196_io21,
    CapabilityId::capability_instance_gpio4_bga196_io22,
    CapabilityId::capability_instance_gpio4_bga196_io23,
    CapabilityId::capability_instance_gpio4_bga196_io24,
    CapabilityId::capability_instance_gpio4_bga196_io25,
    CapabilityId::capability_instance_gpio4_bga196_io26,
    CapabilityId::capability_instance_gpio4_bga196_io27,
    CapabilityId::capability_instance_gpio4_bga196_io28,
    CapabilityId::capability_instance_gpio4_bga196_io29,
    CapabilityId::capability_instance_gpio4_bga196_io30,
    CapabilityId::capability_instance_gpio4_bga196_io31,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO5> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO6> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO7> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO8> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIO9> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPT1> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPT2> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPSPI1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpspi1_bga196_cs,
    CapabilityId::capability_instance_lpspi1_bga196_sck,
    CapabilityId::capability_instance_lpspi1_bga196_sdi,
    CapabilityId::capability_instance_lpspi1_bga196_sdo,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPSPI2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 5> kCapabilityIds = {{
    CapabilityId::capability_instance_lpspi2_bga196_cs,
    CapabilityId::capability_instance_lpspi2_bga196_sck,
    CapabilityId::capability_instance_lpspi2_bga196_sd0,
    CapabilityId::capability_instance_lpspi2_bga196_sdi,
    CapabilityId::capability_instance_lpspi2_bga196_sdo,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPSPI3> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpspi3_bga196_cs,
    CapabilityId::capability_instance_lpspi3_bga196_sck,
    CapabilityId::capability_instance_lpspi3_bga196_sdi,
    CapabilityId::capability_instance_lpspi3_bga196_sdo,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPSPI4> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpspi4_bga196_cs,
    CapabilityId::capability_instance_lpspi4_bga196_sck,
    CapabilityId::capability_instance_lpspi4_bga196_sdi,
    CapabilityId::capability_instance_lpspi4_bga196_sdo,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart1_bga196_cts,
    CapabilityId::capability_instance_lpuart1_bga196_rts,
    CapabilityId::capability_instance_lpuart1_bga196_rx,
    CapabilityId::capability_instance_lpuart1_bga196_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart2_bga196_cts,
    CapabilityId::capability_instance_lpuart2_bga196_rts,
    CapabilityId::capability_instance_lpuart2_bga196_rx,
    CapabilityId::capability_instance_lpuart2_bga196_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART3> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart3_bga196_cts,
    CapabilityId::capability_instance_lpuart3_bga196_rts,
    CapabilityId::capability_instance_lpuart3_bga196_rx,
    CapabilityId::capability_instance_lpuart3_bga196_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART4> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart4_bga196_cts,
    CapabilityId::capability_instance_lpuart4_bga196_rts,
    CapabilityId::capability_instance_lpuart4_bga196_rx,
    CapabilityId::capability_instance_lpuart4_bga196_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART5> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart5_bga196_cts,
    CapabilityId::capability_instance_lpuart5_bga196_rts,
    CapabilityId::capability_instance_lpuart5_bga196_rx,
    CapabilityId::capability_instance_lpuart5_bga196_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART6> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart6_bga196_cts,
    CapabilityId::capability_instance_lpuart6_bga196_rts,
    CapabilityId::capability_instance_lpuart6_bga196_rx,
    CapabilityId::capability_instance_lpuart6_bga196_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART7> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart7_bga196_cts,
    CapabilityId::capability_instance_lpuart7_bga196_rts,
    CapabilityId::capability_instance_lpuart7_bga196_rx,
    CapabilityId::capability_instance_lpuart7_bga196_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::LPUART8> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::capability_instance_lpuart8_bga196_cts,
    CapabilityId::capability_instance_lpuart8_bga196_rts,
    CapabilityId::capability_instance_lpuart8_bga196_rx,
    CapabilityId::capability_instance_lpuart8_bga196_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::PIT> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::PWM1> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::PWM2> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::PWM3> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::PWM4> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::RTWDOG> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USB1> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USB2> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::WDOG1> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::WDOG2> {
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
