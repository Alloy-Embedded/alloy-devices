#pragma once

#include <array>
#include <cstdint>
#include "../../runtime_refs.hpp"
#include "../../runtime_semantics.hpp"
#include "peripheral_instances.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f405rg {
struct CapabilityOverlayDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityKeyId capability_key_id;
  IpBlockId ip_block_id;
  PeripheralId peripheral_id;
  PackageRefId package_id;
};
inline constexpr std::array<CapabilityOverlayDescriptor, 49> kCapabilityOverlays = {{
  {CapabilityId::capability_id_capability_instance_i2c1_lqfp64_scl, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_i2c1, CapabilityKeyId::capability_available_signal_scl, IpBlockId::ip_block_i2c1_i2c1_v1_5_Cube, PeripheralId::I2C1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_i2c1_lqfp64_sda, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_i2c1, CapabilityKeyId::capability_available_signal_sda, IpBlockId::ip_block_i2c1_i2c1_v1_5_Cube, PeripheralId::I2C1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_i2c1_lqfp64_smba, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_i2c1, CapabilityKeyId::capability_available_signal_smba, IpBlockId::ip_block_i2c1_i2c1_v1_5_Cube, PeripheralId::I2C1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_i2c2_lqfp64_scl, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_i2c2, CapabilityKeyId::capability_available_signal_scl, IpBlockId::ip_block_i2c2_i2c1_v1_5_Cube, PeripheralId::I2C2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_i2c2_lqfp64_sda, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_i2c2, CapabilityKeyId::capability_available_signal_sda, IpBlockId::ip_block_i2c2_i2c1_v1_5_Cube, PeripheralId::I2C2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_i2c2_lqfp64_smba, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_i2c2, CapabilityKeyId::capability_available_signal_smba, IpBlockId::ip_block_i2c2_i2c1_v1_5_Cube, PeripheralId::I2C2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_spi1_lqfp64_miso, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_miso, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, PeripheralId::SPI1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_spi1_lqfp64_mosi, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_mosi, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, PeripheralId::SPI1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_spi1_lqfp64_nss, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_nss, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, PeripheralId::SPI1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_spi1_lqfp64_sck, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_sck, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, PeripheralId::SPI1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_spi2_lqfp64_miso, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_miso, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, PeripheralId::SPI2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_spi2_lqfp64_mosi, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_mosi, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, PeripheralId::SPI2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_spi2_lqfp64_nss, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_nss, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, PeripheralId::SPI2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_spi2_lqfp64_sck, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_spi, CapabilityKeyId::capability_available_signal_sck, IpBlockId::ip_block_spi_spi2s1_v2_2_Cube, PeripheralId::SPI2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim1_lqfp64_bkin, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_bkin, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim1_lqfp64_ch1, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim1_lqfp64_ch1n, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1n, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim1_lqfp64_ch2, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch2, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim1_lqfp64_ch2n, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch2n, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim1_lqfp64_ch3, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch3, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim1_lqfp64_ch3n, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch3n, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim1_lqfp64_ch4, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch4, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim1_lqfp64_etr, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_etr, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim2_lqfp64_ch1, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim2_lqfp64_ch2, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch2, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim2_lqfp64_ch3, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch3, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim2_lqfp64_ch4, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch4, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim2_lqfp64_etr, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_etr, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim3_lqfp64_ch1, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM3, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim3_lqfp64_ch2, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch2, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM3, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim3_lqfp64_ch3, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch3, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM3, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim3_lqfp64_ch4, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch4, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM3, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim3_lqfp64_etr, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_etr, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM3, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim4_lqfp64_ch1, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch1, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM4, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim4_lqfp64_ch2, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch2, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM4, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim4_lqfp64_ch3, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch3, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM4, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim4_lqfp64_ch4, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch4, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM4, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim5_lqfp64_ch2, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch2, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM5, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim5_lqfp64_ch3, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch3, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM5, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_tim5_lqfp64_ch4, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_timer, CapabilityKeyId::capability_available_signal_ch4, IpBlockId::ip_block_tim_gptimer2_v2_x_Cube, PeripheralId::TIM5, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_usart1_lqfp64_ck, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_ck, IpBlockId::ip_block_usart_sci2_v1_2_Cube, PeripheralId::USART1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_usart1_lqfp64_cts, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_cts, IpBlockId::ip_block_usart_sci2_v1_2_Cube, PeripheralId::USART1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_usart1_lqfp64_rts, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_rts, IpBlockId::ip_block_usart_sci2_v1_2_Cube, PeripheralId::USART1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_usart1_lqfp64_rx, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_rx, IpBlockId::ip_block_usart_sci2_v1_2_Cube, PeripheralId::USART1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_usart1_lqfp64_tx, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_tx, IpBlockId::ip_block_usart_sci2_v1_2_Cube, PeripheralId::USART1, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_usart2_lqfp64_ck, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_ck, IpBlockId::ip_block_usart_sci2_v1_2_Cube, PeripheralId::USART2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_usart2_lqfp64_rts, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_rts, IpBlockId::ip_block_usart_sci2_v1_2_Cube, PeripheralId::USART2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_usart2_lqfp64_rx, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_rx, IpBlockId::ip_block_usart_sci2_v1_2_Cube, PeripheralId::USART2, PackageRefId::stm32f405rg_lqfp64},
  {CapabilityId::capability_id_capability_instance_usart2_lqfp64_tx, CapabilityScopeId::capability_scope_instance_overlay, PeripheralClassId::class_uart, CapabilityKeyId::capability_available_signal_tx, IpBlockId::ip_block_usart_sci2_v1_2_Cube, PeripheralId::USART2, PackageRefId::stm32f405rg_lqfp64},
}};
}
}
}
}
}
