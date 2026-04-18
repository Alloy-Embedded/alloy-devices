#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace runtime {
namespace devices {
namespace atsame70n21b {
enum class CapabilityId : std::uint16_t {
  none,
  capability_afec_afec_s_ad0,
  capability_afec_afec_s_ad1,
  capability_afec_afec_s_ad10,
  capability_afec_afec_s_ad2,
  capability_afec_afec_s_ad5,
  capability_afec_afec_s_ad6,
  capability_afec_afec_s_ad7,
  capability_afec_afec_s_ad8,
  capability_afec_afec_s_ad9,
  capability_afec_afec_s_adtrg,
  runtime_support_adc,
  runtime_dma_AFEC0_XDMAC_PERID_35_RX,
  capability_instance_afec0_lqfp100_ad0,
  capability_instance_afec0_lqfp100_ad1,
  capability_instance_afec0_lqfp100_ad10,
  capability_instance_afec0_lqfp100_ad2,
  capability_instance_afec0_lqfp100_ad5,
  capability_instance_afec0_lqfp100_ad6,
  capability_instance_afec0_lqfp100_ad7,
  capability_instance_afec0_lqfp100_ad8,
  capability_instance_afec0_lqfp100_ad9,
  capability_instance_afec0_lqfp100_adtrg,
  runtime_dma_AFEC1_XDMAC_PERID_36_RX,
  capability_instance_afec1_lqfp100_ad0,
  capability_instance_afec1_lqfp100_adtrg,
  capability_dacc_dacc_e_dac0,
  capability_dacc_dacc_e_dac1,
  capability_dacc_dacc_e_datrg,
  runtime_support_dac,
  runtime_dma_DACC_XDMAC_PERID_30_CH0_TX,
  runtime_dma_DACC_XDMAC_PERID_31_CH1_TX,
  capability_instance_dacc_lqfp100_dac0,
  capability_instance_dacc_lqfp100_dac1,
  capability_instance_dacc_lqfp100_datrg,
  runtime_support_dma,
  capability_gpio_pio_v_piodc0,
  capability_gpio_pio_v_piodc1,
  capability_gpio_pio_v_piodc2,
  capability_gpio_pio_v_piodc3,
  capability_gpio_pio_v_piodc4,
  capability_gpio_pio_v_piodc5,
  capability_gpio_pio_v_piodc6,
  capability_gpio_pio_v_piodc7,
  capability_gpio_pio_v_piodcclk,
  capability_gpio_pio_v_piodcen1,
  capability_gpio_pio_v_piodcen2,
  runtime_support_gpio,
  runtime_dma_GPIOA_XDMAC_PERID_34_RX,
  capability_instance_gpioa_lqfp100_piodc0,
  capability_instance_gpioa_lqfp100_piodc1,
  capability_instance_gpioa_lqfp100_piodc2,
  capability_instance_gpioa_lqfp100_piodc3,
  capability_instance_gpioa_lqfp100_piodc4,
  capability_instance_gpioa_lqfp100_piodc5,
  capability_instance_gpioa_lqfp100_piodc6,
  capability_instance_gpioa_lqfp100_piodc7,
  capability_instance_gpioa_lqfp100_piodcclk,
  capability_instance_gpioa_lqfp100_piodcen1,
  capability_instance_gpioa_lqfp100_piodcen2,
  capability_twihs_twihs_z_scl,
  capability_twihs_twihs_z_sda,
  runtime_support_i2c,
  runtime_dma_TWIHS0_XDMAC_PERID_15_RX,
  runtime_dma_TWIHS0_XDMAC_PERID_14_TX,
  capability_instance_twihs0_lqfp100_scl,
  capability_instance_twihs0_lqfp100_sda,
  runtime_dma_TWIHS1_XDMAC_PERID_17_RX,
  runtime_dma_TWIHS1_XDMAC_PERID_16_TX,
  capability_instance_twihs1_lqfp100_scl,
  capability_instance_twihs1_lqfp100_sda,
  runtime_dma_TWIHS2_XDMAC_PERID_19_RX,
  runtime_dma_TWIHS2_XDMAC_PERID_18_TX,
  capability_instance_twihs2_lqfp100_scl,
  capability_instance_twihs2_lqfp100_sda,
  capability_pwm_pwm_y_pwmextrg0,
  capability_pwm_pwm_y_pwmextrg1,
  capability_pwm_pwm_y_pwmfi0,
  capability_pwm_pwm_y_pwmfi1,
  capability_pwm_pwm_y_pwmfi2,
  capability_pwm_pwm_y_pwmh0,
  capability_pwm_pwm_y_pwmh1,
  capability_pwm_pwm_y_pwmh2,
  capability_pwm_pwm_y_pwmh3,
  capability_pwm_pwm_y_pwml0,
  capability_pwm_pwm_y_pwml1,
  capability_pwm_pwm_y_pwml2,
  capability_pwm_pwm_y_pwml3,
  runtime_support_pwm,
  runtime_dma_PWM0_XDMAC_PERID_13_TX,
  capability_instance_pwm0_lqfp100_pwmextrg0,
  capability_instance_pwm0_lqfp100_pwmextrg1,
  capability_instance_pwm0_lqfp100_pwmfi0,
  capability_instance_pwm0_lqfp100_pwmfi1,
  capability_instance_pwm0_lqfp100_pwmfi2,
  capability_instance_pwm0_lqfp100_pwmh0,
  capability_instance_pwm0_lqfp100_pwmh1,
  capability_instance_pwm0_lqfp100_pwmh2,
  capability_instance_pwm0_lqfp100_pwmh3,
  capability_instance_pwm0_lqfp100_pwml0,
  capability_instance_pwm0_lqfp100_pwml1,
  capability_instance_pwm0_lqfp100_pwml2,
  capability_instance_pwm0_lqfp100_pwml3,
  runtime_dma_PWM1_XDMAC_PERID_39_TX,
  capability_instance_pwm1_lqfp100_pwmextrg0,
  capability_instance_pwm1_lqfp100_pwmextrg1,
  capability_instance_pwm1_lqfp100_pwmfi0,
  capability_instance_pwm1_lqfp100_pwmfi1,
  capability_instance_pwm1_lqfp100_pwmfi2,
  capability_instance_pwm1_lqfp100_pwmh0,
  capability_instance_pwm1_lqfp100_pwmh1,
  capability_instance_pwm1_lqfp100_pwmh2,
  capability_instance_pwm1_lqfp100_pwmh3,
  capability_instance_pwm1_lqfp100_pwml0,
  capability_instance_pwm1_lqfp100_pwml1,
  capability_instance_pwm1_lqfp100_pwml2,
  capability_instance_pwm1_lqfp100_pwml3,
  runtime_support_rswdt,
  capability_spi_spi_zm_cs,
  capability_spi_spi_zm_miso,
  capability_spi_spi_zm_mosi,
  capability_spi_spi_zm_sck,
  runtime_support_spi,
  runtime_dma_SPI0_XDMAC_PERID_2_RX,
  runtime_dma_SPI0_XDMAC_PERID_1_TX,
  capability_instance_spi0_lqfp100_cs,
  capability_instance_spi0_lqfp100_miso,
  capability_instance_spi0_lqfp100_mosi,
  capability_instance_spi0_lqfp100_sck,
  capability_tc_tc_zl_tclk0,
  capability_tc_tc_zl_tclk1,
  capability_tc_tc_zl_tclk11,
  capability_tc_tc_zl_tioa0,
  capability_tc_tc_zl_tioa1,
  capability_tc_tc_zl_tioa11,
  capability_tc_tc_zl_tioa2,
  capability_tc_tc_zl_tiob0,
  capability_tc_tc_zl_tiob1,
  capability_tc_tc_zl_tiob11,
  capability_tc_tc_zl_tiob2,
  runtime_support_timer,
  runtime_dma_TC0_XDMAC_PERID_40_RX,
  capability_instance_tc0_lqfp100_tclk0,
  capability_instance_tc0_lqfp100_tclk1,
  capability_instance_tc0_lqfp100_tioa0,
  capability_instance_tc0_lqfp100_tioa1,
  capability_instance_tc0_lqfp100_tioa2,
  capability_instance_tc0_lqfp100_tiob0,
  capability_instance_tc0_lqfp100_tiob1,
  capability_instance_tc0_lqfp100_tiob2,
  runtime_dma_TC1_XDMAC_PERID_41_RX,
  runtime_dma_TC2_XDMAC_PERID_42_RX,
  runtime_dma_TC3_XDMAC_PERID_43_RX,
  capability_instance_tc3_lqfp100_tclk11,
  capability_instance_tc3_lqfp100_tioa11,
  capability_instance_tc3_lqfp100_tiob11,
  capability_usart_usart_zw_cts,
  capability_usart_usart_zw_dcd0,
  capability_usart_usart_zw_dcd1,
  capability_usart_usart_zw_dcd2,
  capability_usart_usart_zw_dsr0,
  capability_usart_usart_zw_dsr1,
  capability_usart_usart_zw_dsr2,
  capability_usart_usart_zw_dtr0,
  capability_usart_usart_zw_dtr1,
  capability_usart_usart_zw_dtr2,
  capability_usart_usart_zw_loncol1,
  capability_usart_usart_zw_ri0,
  capability_usart_usart_zw_ri2,
  capability_usart_usart_zw_rts,
  capability_usart_usart_zw_rx,
  capability_usart_usart_zw_sck0,
  capability_usart_usart_zw_sck1,
  capability_usart_usart_zw_sck2,
  capability_usart_usart_zw_tx,
  capability_uart_uart_r_urxd0,
  capability_uart_uart_r_urxd1,
  capability_uart_uart_r_urxd2,
  capability_uart_uart_r_urxd3,
  capability_uart_uart_r_urxd4,
  capability_uart_uart_r_utxd0,
  capability_uart_uart_r_utxd1,
  capability_uart_uart_r_utxd2,
  capability_uart_uart_r_utxd3,
  capability_uart_uart_r_utxd4,
  runtime_support_uart,
  runtime_dma_UART0_XDMAC_PERID_21_RX,
  runtime_dma_UART0_XDMAC_PERID_20_TX,
  capability_instance_uart0_lqfp100_urxd0,
  capability_instance_uart0_lqfp100_utxd0,
  runtime_dma_UART1_XDMAC_PERID_23_RX,
  runtime_dma_UART1_XDMAC_PERID_22_TX,
  capability_instance_uart1_lqfp100_urxd1,
  capability_instance_uart1_lqfp100_utxd1,
  runtime_dma_UART2_XDMAC_PERID_25_RX,
  runtime_dma_UART2_XDMAC_PERID_24_TX,
  capability_instance_uart2_lqfp100_urxd2,
  capability_instance_uart2_lqfp100_utxd2,
  runtime_dma_UART3_XDMAC_PERID_27_RX,
  runtime_dma_UART3_XDMAC_PERID_26_TX,
  capability_instance_uart3_lqfp100_urxd3,
  capability_instance_uart3_lqfp100_utxd3,
  runtime_dma_UART4_XDMAC_PERID_29_RX,
  runtime_dma_UART4_XDMAC_PERID_28_TX,
  capability_instance_uart4_lqfp100_urxd4,
  capability_instance_uart4_lqfp100_utxd4,
  runtime_dma_USART0_XDMAC_PERID_8_RX,
  runtime_dma_USART0_XDMAC_PERID_7_TX,
  capability_instance_usart0_lqfp100_cts,
  capability_instance_usart0_lqfp100_dcd0,
  capability_instance_usart0_lqfp100_dsr0,
  capability_instance_usart0_lqfp100_dtr0,
  capability_instance_usart0_lqfp100_ri0,
  capability_instance_usart0_lqfp100_rts,
  capability_instance_usart0_lqfp100_rx,
  capability_instance_usart0_lqfp100_sck0,
  capability_instance_usart0_lqfp100_tx,
  runtime_dma_USART1_XDMAC_PERID_10_RX,
  runtime_dma_USART1_XDMAC_PERID_9_TX,
  capability_instance_usart1_lqfp100_cts,
  capability_instance_usart1_lqfp100_dcd1,
  capability_instance_usart1_lqfp100_dsr1,
  capability_instance_usart1_lqfp100_dtr1,
  capability_instance_usart1_lqfp100_loncol1,
  capability_instance_usart1_lqfp100_rts,
  capability_instance_usart1_lqfp100_rx,
  capability_instance_usart1_lqfp100_sck1,
  capability_instance_usart1_lqfp100_tx,
  runtime_dma_USART2_XDMAC_PERID_12_RX,
  runtime_dma_USART2_XDMAC_PERID_11_TX,
  capability_instance_usart2_lqfp100_cts,
  capability_instance_usart2_lqfp100_dcd2,
  capability_instance_usart2_lqfp100_dsr2,
  capability_instance_usart2_lqfp100_dtr2,
  capability_instance_usart2_lqfp100_ri2,
  capability_instance_usart2_lqfp100_rts,
  capability_instance_usart2_lqfp100_rx,
  capability_instance_usart2_lqfp100_sck2,
  capability_instance_usart2_lqfp100_tx,
  runtime_support_wdt,
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
  CH0_TX,
  CH1_TX,
  RX,
  TX,
  ad0,
  ad1,
  ad10,
  ad2,
  ad5,
  ad6,
  ad7,
  ad8,
  ad9,
  adtrg,
  cs,
  cts,
  dac0,
  dac1,
  datrg,
  dcd0,
  dcd1,
  dcd2,
  dsr0,
  dsr1,
  dsr2,
  dtr0,
  dtr1,
  dtr2,
  loncol1,
  miso,
  mosi,
  piodc0,
  piodc1,
  piodc2,
  piodc3,
  piodc4,
  piodc5,
  piodc6,
  piodc7,
  piodcclk,
  piodcen1,
  piodcen2,
  pwmextrg0,
  pwmextrg1,
  pwmfi0,
  pwmfi1,
  pwmfi2,
  pwmh0,
  pwmh1,
  pwmh2,
  pwmh3,
  pwml0,
  pwml1,
  pwml2,
  pwml3,
  ri0,
  ri2,
  rts,
  rx,
  sck,
  sck0,
  sck1,
  sck2,
  scl,
  sda,
  tclk0,
  tclk1,
  tclk11,
  tioa0,
  tioa1,
  tioa11,
  tioa2,
  tiob0,
  tiob1,
  tiob11,
  tiob2,
  true_value,
  tx,
  urxd0,
  urxd1,
  urxd2,
  urxd3,
  urxd4,
  utxd0,
  utxd1,
  utxd2,
  utxd3,
  utxd4,
};

struct CapabilityDescriptor {
  CapabilityId capability_id;
  CapabilityScopeId scope_id;
  PeripheralClassId peripheral_class_id;
  CapabilityNameId name_id;
  CapabilityValueId value_id;
  PeripheralId peripheral_id;
};
inline constexpr std::array<CapabilityDescriptor, 239> kCapabilities = {{
  {CapabilityId::capability_afec_afec_s_ad0, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::ad0, PeripheralId::none},
  {CapabilityId::capability_afec_afec_s_ad1, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::ad1, PeripheralId::none},
  {CapabilityId::capability_afec_afec_s_ad10, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::ad10, PeripheralId::none},
  {CapabilityId::capability_afec_afec_s_ad2, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::ad2, PeripheralId::none},
  {CapabilityId::capability_afec_afec_s_ad5, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::ad5, PeripheralId::none},
  {CapabilityId::capability_afec_afec_s_ad6, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::ad6, PeripheralId::none},
  {CapabilityId::capability_afec_afec_s_ad7, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::ad7, PeripheralId::none},
  {CapabilityId::capability_afec_afec_s_ad8, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::ad8, PeripheralId::none},
  {CapabilityId::capability_afec_afec_s_ad9, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::ad9, PeripheralId::none},
  {CapabilityId::capability_afec_afec_s_adtrg, CapabilityScopeId::ip_block, PeripheralClassId::class_adc, CapabilityNameId::signal_role, CapabilityValueId::adtrg, PeripheralId::none},
  {CapabilityId::runtime_support_adc, CapabilityScopeId::runtime_contract, PeripheralClassId::class_adc, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_dma_AFEC0_XDMAC_PERID_35_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_adc, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_ad0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad0, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_ad1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad1, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_ad10, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad10, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_ad2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad2, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_ad5, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad5, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_ad6, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad6, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_ad7, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad7, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_ad8, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad8, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_ad9, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad9, PeripheralId::AFEC0},
  {CapabilityId::capability_instance_afec0_lqfp100_adtrg, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::adtrg, PeripheralId::AFEC0},
  {CapabilityId::runtime_dma_AFEC1_XDMAC_PERID_36_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_adc, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::AFEC1},
  {CapabilityId::capability_instance_afec1_lqfp100_ad0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::ad0, PeripheralId::AFEC1},
  {CapabilityId::capability_instance_afec1_lqfp100_adtrg, CapabilityScopeId::instance_overlay, PeripheralClassId::class_adc, CapabilityNameId::available_signal, CapabilityValueId::adtrg, PeripheralId::AFEC1},
  {CapabilityId::capability_dacc_dacc_e_dac0, CapabilityScopeId::ip_block, PeripheralClassId::class_dac, CapabilityNameId::signal_role, CapabilityValueId::dac0, PeripheralId::none},
  {CapabilityId::capability_dacc_dacc_e_dac1, CapabilityScopeId::ip_block, PeripheralClassId::class_dac, CapabilityNameId::signal_role, CapabilityValueId::dac1, PeripheralId::none},
  {CapabilityId::capability_dacc_dacc_e_datrg, CapabilityScopeId::ip_block, PeripheralClassId::class_dac, CapabilityNameId::signal_role, CapabilityValueId::datrg, PeripheralId::none},
  {CapabilityId::runtime_support_dac, CapabilityScopeId::runtime_contract, PeripheralClassId::class_dac, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_dma_DACC_XDMAC_PERID_30_CH0_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_dac, CapabilityNameId::dma_compatible_signal, CapabilityValueId::CH0_TX, PeripheralId::DACC},
  {CapabilityId::runtime_dma_DACC_XDMAC_PERID_31_CH1_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_dac, CapabilityNameId::dma_compatible_signal, CapabilityValueId::CH1_TX, PeripheralId::DACC},
  {CapabilityId::capability_instance_dacc_lqfp100_dac0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_dac, CapabilityNameId::available_signal, CapabilityValueId::dac0, PeripheralId::DACC},
  {CapabilityId::capability_instance_dacc_lqfp100_dac1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_dac, CapabilityNameId::available_signal, CapabilityValueId::dac1, PeripheralId::DACC},
  {CapabilityId::capability_instance_dacc_lqfp100_datrg, CapabilityScopeId::instance_overlay, PeripheralClassId::class_dac, CapabilityNameId::available_signal, CapabilityValueId::datrg, PeripheralId::DACC},
  {CapabilityId::runtime_support_dma, CapabilityScopeId::runtime_contract, PeripheralClassId::class_dma, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodc0, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodc0, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodc1, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodc1, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodc2, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodc2, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodc3, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodc3, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodc4, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodc4, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodc5, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodc5, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodc6, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodc6, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodc7, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodc7, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodcclk, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodcclk, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodcen1, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodcen1, PeripheralId::none},
  {CapabilityId::capability_gpio_pio_v_piodcen2, CapabilityScopeId::ip_block, PeripheralClassId::class_gpio, CapabilityNameId::signal_role, CapabilityValueId::piodcen2, PeripheralId::none},
  {CapabilityId::runtime_support_gpio, CapabilityScopeId::runtime_contract, PeripheralClassId::class_gpio, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_dma_GPIOA_XDMAC_PERID_34_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_gpio, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodc0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodc0, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodc1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodc1, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodc2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodc2, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodc3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodc3, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodc4, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodc4, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodc5, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodc5, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodc6, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodc6, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodc7, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodc7, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodcclk, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodcclk, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodcen1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodcen1, PeripheralId::GPIOA},
  {CapabilityId::capability_instance_gpioa_lqfp100_piodcen2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_gpio, CapabilityNameId::available_signal, CapabilityValueId::piodcen2, PeripheralId::GPIOA},
  {CapabilityId::capability_twihs_twihs_z_scl, CapabilityScopeId::ip_block, PeripheralClassId::class_i2c, CapabilityNameId::signal_role, CapabilityValueId::scl, PeripheralId::none},
  {CapabilityId::capability_twihs_twihs_z_sda, CapabilityScopeId::ip_block, PeripheralClassId::class_i2c, CapabilityNameId::signal_role, CapabilityValueId::sda, PeripheralId::none},
  {CapabilityId::runtime_support_i2c, CapabilityScopeId::runtime_contract, PeripheralClassId::class_i2c, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_dma_TWIHS0_XDMAC_PERID_15_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_i2c, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::TWIHS0},
  {CapabilityId::runtime_dma_TWIHS0_XDMAC_PERID_14_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_i2c, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::TWIHS0},
  {CapabilityId::capability_instance_twihs0_lqfp100_scl, CapabilityScopeId::instance_overlay, PeripheralClassId::class_i2c, CapabilityNameId::available_signal, CapabilityValueId::scl, PeripheralId::TWIHS0},
  {CapabilityId::capability_instance_twihs0_lqfp100_sda, CapabilityScopeId::instance_overlay, PeripheralClassId::class_i2c, CapabilityNameId::available_signal, CapabilityValueId::sda, PeripheralId::TWIHS0},
  {CapabilityId::runtime_dma_TWIHS1_XDMAC_PERID_17_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_i2c, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::TWIHS1},
  {CapabilityId::runtime_dma_TWIHS1_XDMAC_PERID_16_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_i2c, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::TWIHS1},
  {CapabilityId::capability_instance_twihs1_lqfp100_scl, CapabilityScopeId::instance_overlay, PeripheralClassId::class_i2c, CapabilityNameId::available_signal, CapabilityValueId::scl, PeripheralId::TWIHS1},
  {CapabilityId::capability_instance_twihs1_lqfp100_sda, CapabilityScopeId::instance_overlay, PeripheralClassId::class_i2c, CapabilityNameId::available_signal, CapabilityValueId::sda, PeripheralId::TWIHS1},
  {CapabilityId::runtime_dma_TWIHS2_XDMAC_PERID_19_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_i2c, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::TWIHS2},
  {CapabilityId::runtime_dma_TWIHS2_XDMAC_PERID_18_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_i2c, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::TWIHS2},
  {CapabilityId::capability_instance_twihs2_lqfp100_scl, CapabilityScopeId::instance_overlay, PeripheralClassId::class_i2c, CapabilityNameId::available_signal, CapabilityValueId::scl, PeripheralId::TWIHS2},
  {CapabilityId::capability_instance_twihs2_lqfp100_sda, CapabilityScopeId::instance_overlay, PeripheralClassId::class_i2c, CapabilityNameId::available_signal, CapabilityValueId::sda, PeripheralId::TWIHS2},
  {CapabilityId::capability_pwm_pwm_y_pwmextrg0, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwmextrg0, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwmextrg1, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwmextrg1, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwmfi0, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwmfi0, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwmfi1, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwmfi1, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwmfi2, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwmfi2, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwmh0, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwmh0, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwmh1, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwmh1, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwmh2, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwmh2, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwmh3, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwmh3, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwml0, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwml0, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwml1, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwml1, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwml2, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwml2, PeripheralId::none},
  {CapabilityId::capability_pwm_pwm_y_pwml3, CapabilityScopeId::ip_block, PeripheralClassId::class_pwm, CapabilityNameId::signal_role, CapabilityValueId::pwml3, PeripheralId::none},
  {CapabilityId::runtime_support_pwm, CapabilityScopeId::runtime_contract, PeripheralClassId::class_pwm, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_dma_PWM0_XDMAC_PERID_13_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_pwm, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwmextrg0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmextrg0, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwmextrg1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmextrg1, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwmfi0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmfi0, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwmfi1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmfi1, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwmfi2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmfi2, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwmh0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmh0, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwmh1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmh1, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwmh2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmh2, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwmh3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmh3, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwml0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwml0, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwml1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwml1, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwml2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwml2, PeripheralId::PWM0},
  {CapabilityId::capability_instance_pwm0_lqfp100_pwml3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwml3, PeripheralId::PWM0},
  {CapabilityId::runtime_dma_PWM1_XDMAC_PERID_39_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_pwm, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwmextrg0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmextrg0, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwmextrg1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmextrg1, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwmfi0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmfi0, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwmfi1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmfi1, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwmfi2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmfi2, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwmh0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmh0, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwmh1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmh1, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwmh2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmh2, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwmh3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwmh3, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwml0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwml0, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwml1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwml1, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwml2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwml2, PeripheralId::PWM1},
  {CapabilityId::capability_instance_pwm1_lqfp100_pwml3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_pwm, CapabilityNameId::available_signal, CapabilityValueId::pwml3, PeripheralId::PWM1},
  {CapabilityId::runtime_support_rswdt, CapabilityScopeId::runtime_contract, PeripheralClassId::class_rswdt, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::capability_spi_spi_zm_cs, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::cs, PeripheralId::none},
  {CapabilityId::capability_spi_spi_zm_miso, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::miso, PeripheralId::none},
  {CapabilityId::capability_spi_spi_zm_mosi, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::mosi, PeripheralId::none},
  {CapabilityId::capability_spi_spi_zm_sck, CapabilityScopeId::ip_block, PeripheralClassId::class_spi, CapabilityNameId::signal_role, CapabilityValueId::sck, PeripheralId::none},
  {CapabilityId::runtime_support_spi, CapabilityScopeId::runtime_contract, PeripheralClassId::class_spi, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_dma_SPI0_XDMAC_PERID_2_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_spi, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::SPI0},
  {CapabilityId::runtime_dma_SPI0_XDMAC_PERID_1_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_spi, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::SPI0},
  {CapabilityId::capability_instance_spi0_lqfp100_cs, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::cs, PeripheralId::SPI0},
  {CapabilityId::capability_instance_spi0_lqfp100_miso, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::miso, PeripheralId::SPI0},
  {CapabilityId::capability_instance_spi0_lqfp100_mosi, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::mosi, PeripheralId::SPI0},
  {CapabilityId::capability_instance_spi0_lqfp100_sck, CapabilityScopeId::instance_overlay, PeripheralClassId::class_spi, CapabilityNameId::available_signal, CapabilityValueId::sck, PeripheralId::SPI0},
  {CapabilityId::capability_tc_tc_zl_tclk0, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tclk0, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tclk1, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tclk1, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tclk11, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tclk11, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tioa0, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tioa0, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tioa1, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tioa1, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tioa11, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tioa11, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tioa2, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tioa2, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tiob0, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tiob0, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tiob1, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tiob1, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tiob11, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tiob11, PeripheralId::none},
  {CapabilityId::capability_tc_tc_zl_tiob2, CapabilityScopeId::ip_block, PeripheralClassId::class_timer, CapabilityNameId::signal_role, CapabilityValueId::tiob2, PeripheralId::none},
  {CapabilityId::runtime_support_timer, CapabilityScopeId::runtime_contract, PeripheralClassId::class_timer, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_dma_TC0_XDMAC_PERID_40_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_timer, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::TC0},
  {CapabilityId::capability_instance_tc0_lqfp100_tclk0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tclk0, PeripheralId::TC0},
  {CapabilityId::capability_instance_tc0_lqfp100_tclk1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tclk1, PeripheralId::TC0},
  {CapabilityId::capability_instance_tc0_lqfp100_tioa0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tioa0, PeripheralId::TC0},
  {CapabilityId::capability_instance_tc0_lqfp100_tioa1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tioa1, PeripheralId::TC0},
  {CapabilityId::capability_instance_tc0_lqfp100_tioa2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tioa2, PeripheralId::TC0},
  {CapabilityId::capability_instance_tc0_lqfp100_tiob0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tiob0, PeripheralId::TC0},
  {CapabilityId::capability_instance_tc0_lqfp100_tiob1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tiob1, PeripheralId::TC0},
  {CapabilityId::capability_instance_tc0_lqfp100_tiob2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tiob2, PeripheralId::TC0},
  {CapabilityId::runtime_dma_TC1_XDMAC_PERID_41_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_timer, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::TC1},
  {CapabilityId::runtime_dma_TC2_XDMAC_PERID_42_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_timer, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::TC2},
  {CapabilityId::runtime_dma_TC3_XDMAC_PERID_43_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_timer, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::TC3},
  {CapabilityId::capability_instance_tc3_lqfp100_tclk11, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tclk11, PeripheralId::TC3},
  {CapabilityId::capability_instance_tc3_lqfp100_tioa11, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tioa11, PeripheralId::TC3},
  {CapabilityId::capability_instance_tc3_lqfp100_tiob11, CapabilityScopeId::instance_overlay, PeripheralClassId::class_timer, CapabilityNameId::available_signal, CapabilityValueId::tiob11, PeripheralId::TC3},
  {CapabilityId::capability_usart_usart_zw_cts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::cts, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_dcd0, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::dcd0, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_dcd1, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::dcd1, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_dcd2, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::dcd2, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_dsr0, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::dsr0, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_dsr1, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::dsr1, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_dsr2, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::dsr2, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_dtr0, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::dtr0, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_dtr1, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::dtr1, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_dtr2, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::dtr2, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_loncol1, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::loncol1, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_ri0, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::ri0, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_ri2, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::ri2, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_rts, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rts, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_rx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::rx, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_sck0, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::sck0, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_sck1, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::sck1, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_sck2, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::sck2, PeripheralId::none},
  {CapabilityId::capability_usart_usart_zw_tx, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::tx, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_urxd0, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::urxd0, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_urxd1, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::urxd1, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_urxd2, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::urxd2, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_urxd3, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::urxd3, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_urxd4, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::urxd4, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_utxd0, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::utxd0, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_utxd1, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::utxd1, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_utxd2, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::utxd2, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_utxd3, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::utxd3, PeripheralId::none},
  {CapabilityId::capability_uart_uart_r_utxd4, CapabilityScopeId::ip_block, PeripheralClassId::class_uart, CapabilityNameId::signal_role, CapabilityValueId::utxd4, PeripheralId::none},
  {CapabilityId::runtime_support_uart, CapabilityScopeId::runtime_contract, PeripheralClassId::class_uart, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
  {CapabilityId::runtime_dma_UART0_XDMAC_PERID_21_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::UART0},
  {CapabilityId::runtime_dma_UART0_XDMAC_PERID_20_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::UART0},
  {CapabilityId::capability_instance_uart0_lqfp100_urxd0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::urxd0, PeripheralId::UART0},
  {CapabilityId::capability_instance_uart0_lqfp100_utxd0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::utxd0, PeripheralId::UART0},
  {CapabilityId::runtime_dma_UART1_XDMAC_PERID_23_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::UART1},
  {CapabilityId::runtime_dma_UART1_XDMAC_PERID_22_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::UART1},
  {CapabilityId::capability_instance_uart1_lqfp100_urxd1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::urxd1, PeripheralId::UART1},
  {CapabilityId::capability_instance_uart1_lqfp100_utxd1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::utxd1, PeripheralId::UART1},
  {CapabilityId::runtime_dma_UART2_XDMAC_PERID_25_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::UART2},
  {CapabilityId::runtime_dma_UART2_XDMAC_PERID_24_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::UART2},
  {CapabilityId::capability_instance_uart2_lqfp100_urxd2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::urxd2, PeripheralId::UART2},
  {CapabilityId::capability_instance_uart2_lqfp100_utxd2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::utxd2, PeripheralId::UART2},
  {CapabilityId::runtime_dma_UART3_XDMAC_PERID_27_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::UART3},
  {CapabilityId::runtime_dma_UART3_XDMAC_PERID_26_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::UART3},
  {CapabilityId::capability_instance_uart3_lqfp100_urxd3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::urxd3, PeripheralId::UART3},
  {CapabilityId::capability_instance_uart3_lqfp100_utxd3, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::utxd3, PeripheralId::UART3},
  {CapabilityId::runtime_dma_UART4_XDMAC_PERID_29_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::UART4},
  {CapabilityId::runtime_dma_UART4_XDMAC_PERID_28_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::UART4},
  {CapabilityId::capability_instance_uart4_lqfp100_urxd4, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::urxd4, PeripheralId::UART4},
  {CapabilityId::capability_instance_uart4_lqfp100_utxd4, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::utxd4, PeripheralId::UART4},
  {CapabilityId::runtime_dma_USART0_XDMAC_PERID_8_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::USART0},
  {CapabilityId::runtime_dma_USART0_XDMAC_PERID_7_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_lqfp100_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_lqfp100_dcd0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::dcd0, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_lqfp100_dsr0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::dsr0, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_lqfp100_dtr0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::dtr0, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_lqfp100_ri0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ri0, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_lqfp100_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_lqfp100_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_lqfp100_sck0, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::sck0, PeripheralId::USART0},
  {CapabilityId::capability_instance_usart0_lqfp100_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART0},
  {CapabilityId::runtime_dma_USART1_XDMAC_PERID_10_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::USART1},
  {CapabilityId::runtime_dma_USART1_XDMAC_PERID_9_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp100_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp100_dcd1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::dcd1, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp100_dsr1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::dsr1, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp100_dtr1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::dtr1, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp100_loncol1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::loncol1, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp100_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp100_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp100_sck1, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::sck1, PeripheralId::USART1},
  {CapabilityId::capability_instance_usart1_lqfp100_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART1},
  {CapabilityId::runtime_dma_USART2_XDMAC_PERID_12_RX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::RX, PeripheralId::USART2},
  {CapabilityId::runtime_dma_USART2_XDMAC_PERID_11_TX, CapabilityScopeId::dma_binding, PeripheralClassId::class_uart, CapabilityNameId::dma_compatible_signal, CapabilityValueId::TX, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp100_cts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::cts, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp100_dcd2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::dcd2, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp100_dsr2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::dsr2, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp100_dtr2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::dtr2, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp100_ri2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::ri2, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp100_rts, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rts, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp100_rx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::rx, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp100_sck2, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::sck2, PeripheralId::USART2},
  {CapabilityId::capability_instance_usart2_lqfp100_tx, CapabilityScopeId::instance_overlay, PeripheralClassId::class_uart, CapabilityNameId::available_signal, CapabilityValueId::tx, PeripheralId::USART2},
  {CapabilityId::runtime_support_wdt, CapabilityScopeId::runtime_contract, PeripheralClassId::class_wdt, CapabilityNameId::runtime_supported, CapabilityValueId::true_value, PeripheralId::none},
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
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_ad0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_ad1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_ad10> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad10;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_ad2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_ad5> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad5;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_ad6> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad6;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_ad7> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad7;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_ad8> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad8;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_ad9> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad9;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_afec_afec_s_adtrg> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::adtrg;
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
struct CapabilityTraits<CapabilityId::runtime_dma_AFEC0_XDMAC_PERID_35_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_ad0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_ad1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_ad10> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad10;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_ad2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_ad5> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad5;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_ad6> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad6;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_ad7> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad7;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_ad8> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad8;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_ad9> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad9;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec0_lqfp100_adtrg> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::adtrg;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_AFEC1_XDMAC_PERID_36_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec1_lqfp100_ad0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ad0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_afec1_lqfp100_adtrg> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::adtrg;
  static constexpr PeripheralId kPeripheralId = PeripheralId::AFEC1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_dacc_dacc_e_dac0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dac0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_dacc_dacc_e_dac1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dac1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_dacc_dacc_e_datrg> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::datrg;
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
struct CapabilityTraits<CapabilityId::runtime_dma_DACC_XDMAC_PERID_30_CH0_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::CH0_TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::DACC;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_DACC_XDMAC_PERID_31_CH1_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::CH1_TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::DACC;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_dacc_lqfp100_dac0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dac0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::DACC;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_dacc_lqfp100_dac1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dac1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::DACC;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_dacc_lqfp100_datrg> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::datrg;
  static constexpr PeripheralId kPeripheralId = PeripheralId::DACC;
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
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodc0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodc1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodc2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodc3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodc4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodc5> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc5;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodc6> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc6;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodc7> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc7;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodcclk> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodcclk;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodcen1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodcen1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_gpio_pio_v_piodcen2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodcen2;
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
struct CapabilityTraits<CapabilityId::runtime_dma_GPIOA_XDMAC_PERID_34_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodc0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodc1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodc2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodc3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodc4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodc5> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc5;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodc6> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc6;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodc7> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodc7;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodcclk> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodcclk;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodcen1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodcen1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_gpioa_lqfp100_piodcen2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::piodcen2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
};

template<>
struct CapabilityTraits<CapabilityId::capability_twihs_twihs_z_scl> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::scl;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_twihs_twihs_z_sda> {
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
struct CapabilityTraits<CapabilityId::runtime_dma_TWIHS0_XDMAC_PERID_15_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_TWIHS0_XDMAC_PERID_14_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_twihs0_lqfp100_scl> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::scl;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_twihs0_lqfp100_sda> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sda;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_TWIHS1_XDMAC_PERID_17_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_TWIHS1_XDMAC_PERID_16_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_twihs1_lqfp100_scl> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::scl;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_twihs1_lqfp100_sda> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sda;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_TWIHS2_XDMAC_PERID_19_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS2;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_TWIHS2_XDMAC_PERID_18_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_twihs2_lqfp100_scl> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::scl;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_twihs2_lqfp100_sda> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sda;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TWIHS2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwmextrg0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmextrg0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwmextrg1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmextrg1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwmfi0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmfi0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwmfi1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmfi1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwmfi2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmfi2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwmh0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwmh1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwmh2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwmh3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwml0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwml1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwml2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_pwm_pwm_y_pwml3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
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
struct CapabilityTraits<CapabilityId::runtime_dma_PWM0_XDMAC_PERID_13_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwmextrg0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmextrg0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwmextrg1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmextrg1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwmfi0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmfi0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwmfi1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmfi1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwmfi2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmfi2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwmh0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwmh1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwmh2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwmh3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwml0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwml1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwml2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm0_lqfp100_pwml3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_PWM1_XDMAC_PERID_39_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwmextrg0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmextrg0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwmextrg1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmextrg1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwmfi0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmfi0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwmfi1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmfi1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwmfi2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmfi2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwmh0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwmh1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwmh2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwmh3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwmh3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwml0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwml1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwml2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_pwm1_lqfp100_pwml3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_pwm;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::pwml3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::PWM1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_rswdt> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_rswdt;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::runtime_supported;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::true_value;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi_zm_cs> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cs;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi_zm_miso> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::miso;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi_zm_mosi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::mosi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_spi_spi_zm_sck> {
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
struct CapabilityTraits<CapabilityId::runtime_dma_SPI0_XDMAC_PERID_2_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_SPI0_XDMAC_PERID_1_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi0_lqfp100_cs> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cs;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi0_lqfp100_miso> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::miso;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi0_lqfp100_mosi> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::mosi;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_spi0_lqfp100_sck> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck;
  static constexpr PeripheralId kPeripheralId = PeripheralId::SPI0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tclk0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tclk0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tclk1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tclk1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tclk11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tclk11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tioa0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tioa0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tioa1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tioa1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tioa11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tioa11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tioa2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tioa2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tiob0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tiob0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tiob1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tiob1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tiob11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tiob11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_tc_tc_zl_tiob2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tiob2;
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
struct CapabilityTraits<CapabilityId::runtime_dma_TC0_XDMAC_PERID_40_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc0_lqfp100_tclk0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tclk0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc0_lqfp100_tclk1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tclk1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc0_lqfp100_tioa0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tioa0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc0_lqfp100_tioa1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tioa1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc0_lqfp100_tioa2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tioa2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc0_lqfp100_tiob0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tiob0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc0_lqfp100_tiob1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tiob1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc0_lqfp100_tiob2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tiob2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_TC1_XDMAC_PERID_41_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_TC2_XDMAC_PERID_42_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC2;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_TC3_XDMAC_PERID_43_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc3_lqfp100_tclk11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tclk11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc3_lqfp100_tioa11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tioa11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_tc3_lqfp100_tiob11> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tiob11;
  static constexpr PeripheralId kPeripheralId = PeripheralId::TC3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_dcd0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dcd0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_dcd1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dcd1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_dcd2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dcd2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_dsr0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dsr0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_dsr1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dsr1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_dsr2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dsr2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_dtr0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dtr0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_dtr1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dtr1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_dtr2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dtr2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_loncol1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::loncol1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_ri0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ri0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_ri2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ri2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_sck0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_sck1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_sck2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_usart_usart_zw_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_urxd0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_urxd1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_urxd2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_urxd3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_urxd4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_utxd0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_utxd1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_utxd2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_utxd3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
};

template<>
struct CapabilityTraits<CapabilityId::capability_uart_uart_r_utxd4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::ip_block;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::signal_role;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd4;
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
struct CapabilityTraits<CapabilityId::runtime_dma_UART0_XDMAC_PERID_21_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_UART0_XDMAC_PERID_20_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart0_lqfp100_urxd0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart0_lqfp100_utxd0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_UART1_XDMAC_PERID_23_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_UART1_XDMAC_PERID_22_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart1_lqfp100_urxd1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart1_lqfp100_utxd1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_UART2_XDMAC_PERID_25_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART2;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_UART2_XDMAC_PERID_24_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart2_lqfp100_urxd2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart2_lqfp100_utxd2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART2;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_UART3_XDMAC_PERID_27_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART3;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_UART3_XDMAC_PERID_26_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart3_lqfp100_urxd3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART3;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart3_lqfp100_utxd3> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd3;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART3;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_UART4_XDMAC_PERID_29_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART4;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_UART4_XDMAC_PERID_28_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart4_lqfp100_urxd4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::urxd4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART4;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_uart4_lqfp100_utxd4> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::utxd4;
  static constexpr PeripheralId kPeripheralId = PeripheralId::UART4;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART0_XDMAC_PERID_8_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART0_XDMAC_PERID_7_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_lqfp100_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_lqfp100_dcd0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dcd0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_lqfp100_dsr0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dsr0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_lqfp100_dtr0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dtr0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_lqfp100_ri0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ri0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_lqfp100_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_lqfp100_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_lqfp100_sck0> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck0;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart0_lqfp100_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART0;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART1_XDMAC_PERID_10_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART1_XDMAC_PERID_9_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp100_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp100_dcd1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dcd1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp100_dsr1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dsr1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp100_dtr1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dtr1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp100_loncol1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::loncol1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp100_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp100_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp100_sck1> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck1;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart1_lqfp100_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART1;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART2_XDMAC_PERID_12_RX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::RX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_dma_USART2_XDMAC_PERID_11_TX> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::dma_binding;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::dma_compatible_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::TX;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp100_cts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::cts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp100_dcd2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dcd2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp100_dsr2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dsr2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp100_dtr2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::dtr2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp100_ri2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::ri2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp100_rts> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rts;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp100_rx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::rx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp100_sck2> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::sck2;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::capability_instance_usart2_lqfp100_tx> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::instance_overlay;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr CapabilityNameId kNameId = CapabilityNameId::available_signal;
  static constexpr CapabilityValueId kValueId = CapabilityValueId::tx;
  static constexpr PeripheralId kPeripheralId = PeripheralId::USART2;
};

template<>
struct CapabilityTraits<CapabilityId::runtime_support_wdt> {
  static constexpr bool kPresent = true;
  static constexpr CapabilityScopeId kScopeId = CapabilityScopeId::runtime_contract;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_wdt;
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
  inline static constexpr std::array<CapabilityId, 25> kCapabilityIds = {{
    CapabilityId::capability_afec_afec_s_ad0,
    CapabilityId::capability_afec_afec_s_ad1,
    CapabilityId::capability_afec_afec_s_ad10,
    CapabilityId::capability_afec_afec_s_ad2,
    CapabilityId::capability_afec_afec_s_ad5,
    CapabilityId::capability_afec_afec_s_ad6,
    CapabilityId::capability_afec_afec_s_ad7,
    CapabilityId::capability_afec_afec_s_ad8,
    CapabilityId::capability_afec_afec_s_ad9,
    CapabilityId::capability_afec_afec_s_adtrg,
    CapabilityId::runtime_support_adc,
    CapabilityId::runtime_dma_AFEC0_XDMAC_PERID_35_RX,
    CapabilityId::capability_instance_afec0_lqfp100_ad0,
    CapabilityId::capability_instance_afec0_lqfp100_ad1,
    CapabilityId::capability_instance_afec0_lqfp100_ad10,
    CapabilityId::capability_instance_afec0_lqfp100_ad2,
    CapabilityId::capability_instance_afec0_lqfp100_ad5,
    CapabilityId::capability_instance_afec0_lqfp100_ad6,
    CapabilityId::capability_instance_afec0_lqfp100_ad7,
    CapabilityId::capability_instance_afec0_lqfp100_ad8,
    CapabilityId::capability_instance_afec0_lqfp100_ad9,
    CapabilityId::capability_instance_afec0_lqfp100_adtrg,
    CapabilityId::runtime_dma_AFEC1_XDMAC_PERID_36_RX,
    CapabilityId::capability_instance_afec1_lqfp100_ad0,
    CapabilityId::capability_instance_afec1_lqfp100_adtrg,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_dac> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 9> kCapabilityIds = {{
    CapabilityId::capability_dacc_dacc_e_dac0,
    CapabilityId::capability_dacc_dacc_e_dac1,
    CapabilityId::capability_dacc_dacc_e_datrg,
    CapabilityId::runtime_support_dac,
    CapabilityId::runtime_dma_DACC_XDMAC_PERID_30_CH0_TX,
    CapabilityId::runtime_dma_DACC_XDMAC_PERID_31_CH1_TX,
    CapabilityId::capability_instance_dacc_lqfp100_dac0,
    CapabilityId::capability_instance_dacc_lqfp100_dac1,
    CapabilityId::capability_instance_dacc_lqfp100_datrg,
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
  inline static constexpr std::array<CapabilityId, 24> kCapabilityIds = {{
    CapabilityId::capability_gpio_pio_v_piodc0,
    CapabilityId::capability_gpio_pio_v_piodc1,
    CapabilityId::capability_gpio_pio_v_piodc2,
    CapabilityId::capability_gpio_pio_v_piodc3,
    CapabilityId::capability_gpio_pio_v_piodc4,
    CapabilityId::capability_gpio_pio_v_piodc5,
    CapabilityId::capability_gpio_pio_v_piodc6,
    CapabilityId::capability_gpio_pio_v_piodc7,
    CapabilityId::capability_gpio_pio_v_piodcclk,
    CapabilityId::capability_gpio_pio_v_piodcen1,
    CapabilityId::capability_gpio_pio_v_piodcen2,
    CapabilityId::runtime_support_gpio,
    CapabilityId::runtime_dma_GPIOA_XDMAC_PERID_34_RX,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc0,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc1,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc2,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc3,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc4,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc5,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc6,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc7,
    CapabilityId::capability_instance_gpioa_lqfp100_piodcclk,
    CapabilityId::capability_instance_gpioa_lqfp100_piodcen1,
    CapabilityId::capability_instance_gpioa_lqfp100_piodcen2,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_i2c> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 15> kCapabilityIds = {{
    CapabilityId::capability_twihs_twihs_z_scl,
    CapabilityId::capability_twihs_twihs_z_sda,
    CapabilityId::runtime_support_i2c,
    CapabilityId::runtime_dma_TWIHS0_XDMAC_PERID_15_RX,
    CapabilityId::runtime_dma_TWIHS0_XDMAC_PERID_14_TX,
    CapabilityId::capability_instance_twihs0_lqfp100_scl,
    CapabilityId::capability_instance_twihs0_lqfp100_sda,
    CapabilityId::runtime_dma_TWIHS1_XDMAC_PERID_17_RX,
    CapabilityId::runtime_dma_TWIHS1_XDMAC_PERID_16_TX,
    CapabilityId::capability_instance_twihs1_lqfp100_scl,
    CapabilityId::capability_instance_twihs1_lqfp100_sda,
    CapabilityId::runtime_dma_TWIHS2_XDMAC_PERID_19_RX,
    CapabilityId::runtime_dma_TWIHS2_XDMAC_PERID_18_TX,
    CapabilityId::capability_instance_twihs2_lqfp100_scl,
    CapabilityId::capability_instance_twihs2_lqfp100_sda,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_pwm> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 42> kCapabilityIds = {{
    CapabilityId::capability_pwm_pwm_y_pwmextrg0,
    CapabilityId::capability_pwm_pwm_y_pwmextrg1,
    CapabilityId::capability_pwm_pwm_y_pwmfi0,
    CapabilityId::capability_pwm_pwm_y_pwmfi1,
    CapabilityId::capability_pwm_pwm_y_pwmfi2,
    CapabilityId::capability_pwm_pwm_y_pwmh0,
    CapabilityId::capability_pwm_pwm_y_pwmh1,
    CapabilityId::capability_pwm_pwm_y_pwmh2,
    CapabilityId::capability_pwm_pwm_y_pwmh3,
    CapabilityId::capability_pwm_pwm_y_pwml0,
    CapabilityId::capability_pwm_pwm_y_pwml1,
    CapabilityId::capability_pwm_pwm_y_pwml2,
    CapabilityId::capability_pwm_pwm_y_pwml3,
    CapabilityId::runtime_support_pwm,
    CapabilityId::runtime_dma_PWM0_XDMAC_PERID_13_TX,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmextrg0,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmextrg1,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmfi0,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmfi1,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmfi2,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmh0,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmh1,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmh2,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmh3,
    CapabilityId::capability_instance_pwm0_lqfp100_pwml0,
    CapabilityId::capability_instance_pwm0_lqfp100_pwml1,
    CapabilityId::capability_instance_pwm0_lqfp100_pwml2,
    CapabilityId::capability_instance_pwm0_lqfp100_pwml3,
    CapabilityId::runtime_dma_PWM1_XDMAC_PERID_39_TX,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmextrg0,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmextrg1,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmfi0,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmfi1,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmfi2,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmh0,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmh1,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmh2,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmh3,
    CapabilityId::capability_instance_pwm1_lqfp100_pwml0,
    CapabilityId::capability_instance_pwm1_lqfp100_pwml1,
    CapabilityId::capability_instance_pwm1_lqfp100_pwml2,
    CapabilityId::capability_instance_pwm1_lqfp100_pwml3,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_rswdt> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_rswdt,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_spi> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 11> kCapabilityIds = {{
    CapabilityId::capability_spi_spi_zm_cs,
    CapabilityId::capability_spi_spi_zm_miso,
    CapabilityId::capability_spi_spi_zm_mosi,
    CapabilityId::capability_spi_spi_zm_sck,
    CapabilityId::runtime_support_spi,
    CapabilityId::runtime_dma_SPI0_XDMAC_PERID_2_RX,
    CapabilityId::runtime_dma_SPI0_XDMAC_PERID_1_TX,
    CapabilityId::capability_instance_spi0_lqfp100_cs,
    CapabilityId::capability_instance_spi0_lqfp100_miso,
    CapabilityId::capability_instance_spi0_lqfp100_mosi,
    CapabilityId::capability_instance_spi0_lqfp100_sck,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_timer> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 27> kCapabilityIds = {{
    CapabilityId::capability_tc_tc_zl_tclk0,
    CapabilityId::capability_tc_tc_zl_tclk1,
    CapabilityId::capability_tc_tc_zl_tclk11,
    CapabilityId::capability_tc_tc_zl_tioa0,
    CapabilityId::capability_tc_tc_zl_tioa1,
    CapabilityId::capability_tc_tc_zl_tioa11,
    CapabilityId::capability_tc_tc_zl_tioa2,
    CapabilityId::capability_tc_tc_zl_tiob0,
    CapabilityId::capability_tc_tc_zl_tiob1,
    CapabilityId::capability_tc_tc_zl_tiob11,
    CapabilityId::capability_tc_tc_zl_tiob2,
    CapabilityId::runtime_support_timer,
    CapabilityId::runtime_dma_TC0_XDMAC_PERID_40_RX,
    CapabilityId::capability_instance_tc0_lqfp100_tclk0,
    CapabilityId::capability_instance_tc0_lqfp100_tclk1,
    CapabilityId::capability_instance_tc0_lqfp100_tioa0,
    CapabilityId::capability_instance_tc0_lqfp100_tioa1,
    CapabilityId::capability_instance_tc0_lqfp100_tioa2,
    CapabilityId::capability_instance_tc0_lqfp100_tiob0,
    CapabilityId::capability_instance_tc0_lqfp100_tiob1,
    CapabilityId::capability_instance_tc0_lqfp100_tiob2,
    CapabilityId::runtime_dma_TC1_XDMAC_PERID_41_RX,
    CapabilityId::runtime_dma_TC2_XDMAC_PERID_42_RX,
    CapabilityId::runtime_dma_TC3_XDMAC_PERID_43_RX,
    CapabilityId::capability_instance_tc3_lqfp100_tclk11,
    CapabilityId::capability_instance_tc3_lqfp100_tioa11,
    CapabilityId::capability_instance_tc3_lqfp100_tiob11,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_uart> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 83> kCapabilityIds = {{
    CapabilityId::capability_usart_usart_zw_cts,
    CapabilityId::capability_usart_usart_zw_dcd0,
    CapabilityId::capability_usart_usart_zw_dcd1,
    CapabilityId::capability_usart_usart_zw_dcd2,
    CapabilityId::capability_usart_usart_zw_dsr0,
    CapabilityId::capability_usart_usart_zw_dsr1,
    CapabilityId::capability_usart_usart_zw_dsr2,
    CapabilityId::capability_usart_usart_zw_dtr0,
    CapabilityId::capability_usart_usart_zw_dtr1,
    CapabilityId::capability_usart_usart_zw_dtr2,
    CapabilityId::capability_usart_usart_zw_loncol1,
    CapabilityId::capability_usart_usart_zw_ri0,
    CapabilityId::capability_usart_usart_zw_ri2,
    CapabilityId::capability_usart_usart_zw_rts,
    CapabilityId::capability_usart_usart_zw_rx,
    CapabilityId::capability_usart_usart_zw_sck0,
    CapabilityId::capability_usart_usart_zw_sck1,
    CapabilityId::capability_usart_usart_zw_sck2,
    CapabilityId::capability_usart_usart_zw_tx,
    CapabilityId::capability_uart_uart_r_urxd0,
    CapabilityId::capability_uart_uart_r_urxd1,
    CapabilityId::capability_uart_uart_r_urxd2,
    CapabilityId::capability_uart_uart_r_urxd3,
    CapabilityId::capability_uart_uart_r_urxd4,
    CapabilityId::capability_uart_uart_r_utxd0,
    CapabilityId::capability_uart_uart_r_utxd1,
    CapabilityId::capability_uart_uart_r_utxd2,
    CapabilityId::capability_uart_uart_r_utxd3,
    CapabilityId::capability_uart_uart_r_utxd4,
    CapabilityId::runtime_support_uart,
    CapabilityId::runtime_dma_UART0_XDMAC_PERID_21_RX,
    CapabilityId::runtime_dma_UART0_XDMAC_PERID_20_TX,
    CapabilityId::capability_instance_uart0_lqfp100_urxd0,
    CapabilityId::capability_instance_uart0_lqfp100_utxd0,
    CapabilityId::runtime_dma_UART1_XDMAC_PERID_23_RX,
    CapabilityId::runtime_dma_UART1_XDMAC_PERID_22_TX,
    CapabilityId::capability_instance_uart1_lqfp100_urxd1,
    CapabilityId::capability_instance_uart1_lqfp100_utxd1,
    CapabilityId::runtime_dma_UART2_XDMAC_PERID_25_RX,
    CapabilityId::runtime_dma_UART2_XDMAC_PERID_24_TX,
    CapabilityId::capability_instance_uart2_lqfp100_urxd2,
    CapabilityId::capability_instance_uart2_lqfp100_utxd2,
    CapabilityId::runtime_dma_UART3_XDMAC_PERID_27_RX,
    CapabilityId::runtime_dma_UART3_XDMAC_PERID_26_TX,
    CapabilityId::capability_instance_uart3_lqfp100_urxd3,
    CapabilityId::capability_instance_uart3_lqfp100_utxd3,
    CapabilityId::runtime_dma_UART4_XDMAC_PERID_29_RX,
    CapabilityId::runtime_dma_UART4_XDMAC_PERID_28_TX,
    CapabilityId::capability_instance_uart4_lqfp100_urxd4,
    CapabilityId::capability_instance_uart4_lqfp100_utxd4,
    CapabilityId::runtime_dma_USART0_XDMAC_PERID_8_RX,
    CapabilityId::runtime_dma_USART0_XDMAC_PERID_7_TX,
    CapabilityId::capability_instance_usart0_lqfp100_cts,
    CapabilityId::capability_instance_usart0_lqfp100_dcd0,
    CapabilityId::capability_instance_usart0_lqfp100_dsr0,
    CapabilityId::capability_instance_usart0_lqfp100_dtr0,
    CapabilityId::capability_instance_usart0_lqfp100_ri0,
    CapabilityId::capability_instance_usart0_lqfp100_rts,
    CapabilityId::capability_instance_usart0_lqfp100_rx,
    CapabilityId::capability_instance_usart0_lqfp100_sck0,
    CapabilityId::capability_instance_usart0_lqfp100_tx,
    CapabilityId::runtime_dma_USART1_XDMAC_PERID_10_RX,
    CapabilityId::runtime_dma_USART1_XDMAC_PERID_9_TX,
    CapabilityId::capability_instance_usart1_lqfp100_cts,
    CapabilityId::capability_instance_usart1_lqfp100_dcd1,
    CapabilityId::capability_instance_usart1_lqfp100_dsr1,
    CapabilityId::capability_instance_usart1_lqfp100_dtr1,
    CapabilityId::capability_instance_usart1_lqfp100_loncol1,
    CapabilityId::capability_instance_usart1_lqfp100_rts,
    CapabilityId::capability_instance_usart1_lqfp100_rx,
    CapabilityId::capability_instance_usart1_lqfp100_sck1,
    CapabilityId::capability_instance_usart1_lqfp100_tx,
    CapabilityId::runtime_dma_USART2_XDMAC_PERID_12_RX,
    CapabilityId::runtime_dma_USART2_XDMAC_PERID_11_TX,
    CapabilityId::capability_instance_usart2_lqfp100_cts,
    CapabilityId::capability_instance_usart2_lqfp100_dcd2,
    CapabilityId::capability_instance_usart2_lqfp100_dsr2,
    CapabilityId::capability_instance_usart2_lqfp100_dtr2,
    CapabilityId::capability_instance_usart2_lqfp100_ri2,
    CapabilityId::capability_instance_usart2_lqfp100_rts,
    CapabilityId::capability_instance_usart2_lqfp100_rx,
    CapabilityId::capability_instance_usart2_lqfp100_sck2,
    CapabilityId::capability_instance_usart2_lqfp100_tx,
  }};
};

template<>
struct PeripheralClassCapabilityTraits<PeripheralClassId::class_wdt> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_support_wdt,
  }};
};

template<PeripheralId Id>
struct PeripheralCapabilityTraits {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::AFEC0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 11> kCapabilityIds = {{
    CapabilityId::runtime_dma_AFEC0_XDMAC_PERID_35_RX,
    CapabilityId::capability_instance_afec0_lqfp100_ad0,
    CapabilityId::capability_instance_afec0_lqfp100_ad1,
    CapabilityId::capability_instance_afec0_lqfp100_ad10,
    CapabilityId::capability_instance_afec0_lqfp100_ad2,
    CapabilityId::capability_instance_afec0_lqfp100_ad5,
    CapabilityId::capability_instance_afec0_lqfp100_ad6,
    CapabilityId::capability_instance_afec0_lqfp100_ad7,
    CapabilityId::capability_instance_afec0_lqfp100_ad8,
    CapabilityId::capability_instance_afec0_lqfp100_ad9,
    CapabilityId::capability_instance_afec0_lqfp100_adtrg,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::AFEC1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 3> kCapabilityIds = {{
    CapabilityId::runtime_dma_AFEC1_XDMAC_PERID_36_RX,
    CapabilityId::capability_instance_afec1_lqfp100_ad0,
    CapabilityId::capability_instance_afec1_lqfp100_adtrg,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::DACC> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 5> kCapabilityIds = {{
    CapabilityId::runtime_dma_DACC_XDMAC_PERID_30_CH0_TX,
    CapabilityId::runtime_dma_DACC_XDMAC_PERID_31_CH1_TX,
    CapabilityId::capability_instance_dacc_lqfp100_dac0,
    CapabilityId::capability_instance_dacc_lqfp100_dac1,
    CapabilityId::capability_instance_dacc_lqfp100_datrg,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIOA> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 12> kCapabilityIds = {{
    CapabilityId::runtime_dma_GPIOA_XDMAC_PERID_34_RX,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc0,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc1,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc2,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc3,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc4,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc5,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc6,
    CapabilityId::capability_instance_gpioa_lqfp100_piodc7,
    CapabilityId::capability_instance_gpioa_lqfp100_piodcclk,
    CapabilityId::capability_instance_gpioa_lqfp100_piodcen1,
    CapabilityId::capability_instance_gpioa_lqfp100_piodcen2,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::GPIOB> {
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
struct PeripheralCapabilityTraits<PeripheralId::PWM0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 14> kCapabilityIds = {{
    CapabilityId::runtime_dma_PWM0_XDMAC_PERID_13_TX,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmextrg0,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmextrg1,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmfi0,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmfi1,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmfi2,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmh0,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmh1,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmh2,
    CapabilityId::capability_instance_pwm0_lqfp100_pwmh3,
    CapabilityId::capability_instance_pwm0_lqfp100_pwml0,
    CapabilityId::capability_instance_pwm0_lqfp100_pwml1,
    CapabilityId::capability_instance_pwm0_lqfp100_pwml2,
    CapabilityId::capability_instance_pwm0_lqfp100_pwml3,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::PWM1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 14> kCapabilityIds = {{
    CapabilityId::runtime_dma_PWM1_XDMAC_PERID_39_TX,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmextrg0,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmextrg1,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmfi0,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmfi1,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmfi2,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmh0,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmh1,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmh2,
    CapabilityId::capability_instance_pwm1_lqfp100_pwmh3,
    CapabilityId::capability_instance_pwm1_lqfp100_pwml0,
    CapabilityId::capability_instance_pwm1_lqfp100_pwml1,
    CapabilityId::capability_instance_pwm1_lqfp100_pwml2,
    CapabilityId::capability_instance_pwm1_lqfp100_pwml3,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::RSWDT> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::SPI0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 6> kCapabilityIds = {{
    CapabilityId::runtime_dma_SPI0_XDMAC_PERID_2_RX,
    CapabilityId::runtime_dma_SPI0_XDMAC_PERID_1_TX,
    CapabilityId::capability_instance_spi0_lqfp100_cs,
    CapabilityId::capability_instance_spi0_lqfp100_miso,
    CapabilityId::capability_instance_spi0_lqfp100_mosi,
    CapabilityId::capability_instance_spi0_lqfp100_sck,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TC0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 9> kCapabilityIds = {{
    CapabilityId::runtime_dma_TC0_XDMAC_PERID_40_RX,
    CapabilityId::capability_instance_tc0_lqfp100_tclk0,
    CapabilityId::capability_instance_tc0_lqfp100_tclk1,
    CapabilityId::capability_instance_tc0_lqfp100_tioa0,
    CapabilityId::capability_instance_tc0_lqfp100_tioa1,
    CapabilityId::capability_instance_tc0_lqfp100_tioa2,
    CapabilityId::capability_instance_tc0_lqfp100_tiob0,
    CapabilityId::capability_instance_tc0_lqfp100_tiob1,
    CapabilityId::capability_instance_tc0_lqfp100_tiob2,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TC1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_dma_TC1_XDMAC_PERID_41_RX,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TC2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 1> kCapabilityIds = {{
    CapabilityId::runtime_dma_TC2_XDMAC_PERID_42_RX,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TC3> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::runtime_dma_TC3_XDMAC_PERID_43_RX,
    CapabilityId::capability_instance_tc3_lqfp100_tclk11,
    CapabilityId::capability_instance_tc3_lqfp100_tioa11,
    CapabilityId::capability_instance_tc3_lqfp100_tiob11,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TWIHS0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::runtime_dma_TWIHS0_XDMAC_PERID_15_RX,
    CapabilityId::runtime_dma_TWIHS0_XDMAC_PERID_14_TX,
    CapabilityId::capability_instance_twihs0_lqfp100_scl,
    CapabilityId::capability_instance_twihs0_lqfp100_sda,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TWIHS1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::runtime_dma_TWIHS1_XDMAC_PERID_17_RX,
    CapabilityId::runtime_dma_TWIHS1_XDMAC_PERID_16_TX,
    CapabilityId::capability_instance_twihs1_lqfp100_scl,
    CapabilityId::capability_instance_twihs1_lqfp100_sda,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::TWIHS2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::runtime_dma_TWIHS2_XDMAC_PERID_19_RX,
    CapabilityId::runtime_dma_TWIHS2_XDMAC_PERID_18_TX,
    CapabilityId::capability_instance_twihs2_lqfp100_scl,
    CapabilityId::capability_instance_twihs2_lqfp100_sda,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::UART0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::runtime_dma_UART0_XDMAC_PERID_21_RX,
    CapabilityId::runtime_dma_UART0_XDMAC_PERID_20_TX,
    CapabilityId::capability_instance_uart0_lqfp100_urxd0,
    CapabilityId::capability_instance_uart0_lqfp100_utxd0,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::UART1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::runtime_dma_UART1_XDMAC_PERID_23_RX,
    CapabilityId::runtime_dma_UART1_XDMAC_PERID_22_TX,
    CapabilityId::capability_instance_uart1_lqfp100_urxd1,
    CapabilityId::capability_instance_uart1_lqfp100_utxd1,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::UART2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::runtime_dma_UART2_XDMAC_PERID_25_RX,
    CapabilityId::runtime_dma_UART2_XDMAC_PERID_24_TX,
    CapabilityId::capability_instance_uart2_lqfp100_urxd2,
    CapabilityId::capability_instance_uart2_lqfp100_utxd2,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::UART3> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::runtime_dma_UART3_XDMAC_PERID_27_RX,
    CapabilityId::runtime_dma_UART3_XDMAC_PERID_26_TX,
    CapabilityId::capability_instance_uart3_lqfp100_urxd3,
    CapabilityId::capability_instance_uart3_lqfp100_utxd3,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::UART4> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 4> kCapabilityIds = {{
    CapabilityId::runtime_dma_UART4_XDMAC_PERID_29_RX,
    CapabilityId::runtime_dma_UART4_XDMAC_PERID_28_TX,
    CapabilityId::capability_instance_uart4_lqfp100_urxd4,
    CapabilityId::capability_instance_uart4_lqfp100_utxd4,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART0> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 11> kCapabilityIds = {{
    CapabilityId::runtime_dma_USART0_XDMAC_PERID_8_RX,
    CapabilityId::runtime_dma_USART0_XDMAC_PERID_7_TX,
    CapabilityId::capability_instance_usart0_lqfp100_cts,
    CapabilityId::capability_instance_usart0_lqfp100_dcd0,
    CapabilityId::capability_instance_usart0_lqfp100_dsr0,
    CapabilityId::capability_instance_usart0_lqfp100_dtr0,
    CapabilityId::capability_instance_usart0_lqfp100_ri0,
    CapabilityId::capability_instance_usart0_lqfp100_rts,
    CapabilityId::capability_instance_usart0_lqfp100_rx,
    CapabilityId::capability_instance_usart0_lqfp100_sck0,
    CapabilityId::capability_instance_usart0_lqfp100_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART1> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 11> kCapabilityIds = {{
    CapabilityId::runtime_dma_USART1_XDMAC_PERID_10_RX,
    CapabilityId::runtime_dma_USART1_XDMAC_PERID_9_TX,
    CapabilityId::capability_instance_usart1_lqfp100_cts,
    CapabilityId::capability_instance_usart1_lqfp100_dcd1,
    CapabilityId::capability_instance_usart1_lqfp100_dsr1,
    CapabilityId::capability_instance_usart1_lqfp100_dtr1,
    CapabilityId::capability_instance_usart1_lqfp100_loncol1,
    CapabilityId::capability_instance_usart1_lqfp100_rts,
    CapabilityId::capability_instance_usart1_lqfp100_rx,
    CapabilityId::capability_instance_usart1_lqfp100_sck1,
    CapabilityId::capability_instance_usart1_lqfp100_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::USART2> {
  static constexpr bool kPresent = true;
  inline static constexpr std::array<CapabilityId, 11> kCapabilityIds = {{
    CapabilityId::runtime_dma_USART2_XDMAC_PERID_12_RX,
    CapabilityId::runtime_dma_USART2_XDMAC_PERID_11_TX,
    CapabilityId::capability_instance_usart2_lqfp100_cts,
    CapabilityId::capability_instance_usart2_lqfp100_dcd2,
    CapabilityId::capability_instance_usart2_lqfp100_dsr2,
    CapabilityId::capability_instance_usart2_lqfp100_dtr2,
    CapabilityId::capability_instance_usart2_lqfp100_ri2,
    CapabilityId::capability_instance_usart2_lqfp100_rts,
    CapabilityId::capability_instance_usart2_lqfp100_rx,
    CapabilityId::capability_instance_usart2_lqfp100_sck2,
    CapabilityId::capability_instance_usart2_lqfp100_tx,
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::WDT> {
  static constexpr bool kPresent = false;
  inline static constexpr std::array<CapabilityId, 0> kCapabilityIds = {{
  }};
};

template<>
struct PeripheralCapabilityTraits<PeripheralId::XDMAC> {
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
