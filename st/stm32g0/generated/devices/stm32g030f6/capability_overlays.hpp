#pragma once

#include <array>
#include <cstdint>
#include "../../runtime_refs.hpp"
#include "../../runtime_semantics.hpp"
#include "peripheral_instances.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
struct CapabilityOverlayDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
  PeripheralId peripheral_id;
  PackageRefId package_id;
};
inline constexpr std::array<CapabilityOverlayDescriptor, 31> kCapabilityOverlays = {{
  {CapabilityId::capability_id_capability_instance_i2c1_tssop20_sda, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_i2c1, CapabilityKeyId::capability_available_signal_sda, IpBlockId::ip_block_i2c1_i2c2_v1_1_Cube, PeripheralId::I2C1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_i2c1_tssop20_smba, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_i2c1, CapabilityKeyId::capability_available_signal_smba, IpBlockId::ip_block_i2c1_i2c2_v1_1_Cube, PeripheralId::I2C1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_spi1_tssop20_miso, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_miso, IpBlockId::ip_block_spi_spi2s1_v3_5_Cube, PeripheralId::SPI1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_spi1_tssop20_mosi, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_mosi, IpBlockId::ip_block_spi_spi2s1_v3_5_Cube, PeripheralId::SPI1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_spi1_tssop20_nss, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_nss, IpBlockId::ip_block_spi_spi2s1_v3_5_Cube, PeripheralId::SPI1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_spi1_tssop20_sck, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_sck, IpBlockId::ip_block_spi_spi2s1_v3_5_Cube, PeripheralId::SPI1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_spi2_tssop20_miso, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_miso, IpBlockId::ip_block_spi_spi2s1_v3_5_Cube, PeripheralId::SPI2, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_spi2_tssop20_mosi, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_mosi, IpBlockId::ip_block_spi_spi2s1_v3_5_Cube, PeripheralId::SPI2, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_spi2_tssop20_sck, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_sck, IpBlockId::ip_block_spi_spi2s1_v3_5_Cube, PeripheralId::SPI2, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim14_tssop20_ch1, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM14, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim16_tssop20_ch1, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM16, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim17_tssop20_ch1, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM17, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim17_tssop20_ch1n, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1n, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM17, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim1_tssop20_bk, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_bk, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim1_tssop20_ch1n, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1n, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim1_tssop20_ch2, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch2, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim1_tssop20_ch2n, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch2n, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim3_tssop20_ch1, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM3, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim3_tssop20_ch2, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch2, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM3, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_tim3_tssop20_ch3, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch3, IpBlockId::ip_block_tim_gptimer2_v3_x_Cube, PeripheralId::TIM3, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart1_tssop20_ck, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_ck, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart1_tssop20_de, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_de, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart1_tssop20_rts, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_rts, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart1_tssop20_rx, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_rx, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART1, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart2_tssop20_ck, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_ck, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART2, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart2_tssop20_cts, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_cts, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART2, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart2_tssop20_de, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_de, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART2, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart2_tssop20_nss, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_nss, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART2, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart2_tssop20_rts, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_rts, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART2, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart2_tssop20_rx, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_rx, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART2, PackageRefId::stm32g030f6_tssop20},
  {CapabilityId::capability_id_capability_instance_usart2_tssop20_tx, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_tx, IpBlockId::ip_block_usart_sci3_v2_1_Cube, PeripheralId::USART2, PackageRefId::stm32g030f6_tssop20},
}};
}
}
}
}
}
