#pragma once

#include <array>
#include <cstdint>
#include "peripheral_instances.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace devices {
namespace atsame70q21b {
enum class DmaBindingId : std::uint16_t {
  dma_binding_aes_rx_xdmac_perid_38,
  dma_binding_aes_tx_xdmac_perid_37,
  dma_binding_afec0_rx_xdmac_perid_35,
  dma_binding_afec1_rx_xdmac_perid_36,
  dma_binding_dacc_ch0_tx_xdmac_perid_30,
  dma_binding_dacc_ch1_tx_xdmac_perid_31,
  dma_binding_gpioa_rx_xdmac_perid_34,
  dma_binding_hsmci_rx_xdmac_perid_0,
  dma_binding_i2sc0_rx_left_xdmac_perid_45,
  dma_binding_i2sc0_rx_right_xdmac_perid_49,
  dma_binding_i2sc0_tx_left_xdmac_perid_44,
  dma_binding_i2sc0_tx_right_xdmac_perid_48,
  dma_binding_i2sc1_rx_left_xdmac_perid_47,
  dma_binding_i2sc1_rx_right_xdmac_perid_51,
  dma_binding_i2sc1_tx_left_xdmac_perid_46,
  dma_binding_i2sc1_tx_right_xdmac_perid_50,
  dma_binding_pwm0_tx_xdmac_perid_13,
  dma_binding_pwm1_tx_xdmac_perid_39,
  dma_binding_qspi_rx_xdmac_perid_6,
  dma_binding_qspi_tx_xdmac_perid_5,
  dma_binding_spi0_rx_xdmac_perid_2,
  dma_binding_spi0_tx_xdmac_perid_1,
  dma_binding_spi1_rx_xdmac_perid_4,
  dma_binding_spi1_tx_xdmac_perid_3,
  dma_binding_ssc_rx_xdmac_perid_33,
  dma_binding_ssc_tx_xdmac_perid_32,
  dma_binding_tc0_rx_xdmac_perid_40,
  dma_binding_tc1_rx_xdmac_perid_41,
  dma_binding_tc2_rx_xdmac_perid_42,
  dma_binding_tc3_rx_xdmac_perid_43,
  dma_binding_twihs0_rx_xdmac_perid_15,
  dma_binding_twihs0_tx_xdmac_perid_14,
  dma_binding_twihs1_rx_xdmac_perid_17,
  dma_binding_twihs1_tx_xdmac_perid_16,
  dma_binding_twihs2_rx_xdmac_perid_19,
  dma_binding_twihs2_tx_xdmac_perid_18,
  dma_binding_uart0_rx_xdmac_perid_21,
  dma_binding_uart0_tx_xdmac_perid_20,
  dma_binding_uart1_rx_xdmac_perid_23,
  dma_binding_uart1_tx_xdmac_perid_22,
  dma_binding_uart2_rx_xdmac_perid_25,
  dma_binding_uart2_tx_xdmac_perid_24,
  dma_binding_uart3_rx_xdmac_perid_27,
  dma_binding_uart3_tx_xdmac_perid_26,
  dma_binding_uart4_rx_xdmac_perid_29,
  dma_binding_uart4_tx_xdmac_perid_28,
  dma_binding_usart0_rx_xdmac_perid_8,
  dma_binding_usart0_tx_xdmac_perid_7,
  dma_binding_usart1_rx_xdmac_perid_10,
  dma_binding_usart1_tx_xdmac_perid_9,
  dma_binding_usart2_rx_xdmac_perid_12,
  dma_binding_usart2_tx_xdmac_perid_11,
};

struct DmaBindingDescriptor {
  DmaBindingId binding_id;
  PeripheralId peripheral_id;
  const char* peripheral_name;
  const char* signal_name;
  const char* controller_name;
  const char* request_line;
  const char* route_id;
  const char* conflict_group;
};
inline constexpr std::array<DmaBindingDescriptor, 52> kDmaBindings = {{
  {DmaBindingId::dma_binding_aes_rx_xdmac_perid_38, PeripheralId::AES, "AES", "RX", "XDMAC", "PERID_38", "dma-route:xdmac:perid-38:aes:rx", nullptr},
  {DmaBindingId::dma_binding_aes_tx_xdmac_perid_37, PeripheralId::AES, "AES", "TX", "XDMAC", "PERID_37", "dma-route:xdmac:perid-37:aes:tx", nullptr},
  {DmaBindingId::dma_binding_afec0_rx_xdmac_perid_35, PeripheralId::AFEC0, "AFEC0", "RX", "XDMAC", "PERID_35", "dma-route:xdmac:perid-35:afec0:rx", nullptr},
  {DmaBindingId::dma_binding_afec1_rx_xdmac_perid_36, PeripheralId::AFEC1, "AFEC1", "RX", "XDMAC", "PERID_36", "dma-route:xdmac:perid-36:afec1:rx", nullptr},
  {DmaBindingId::dma_binding_dacc_ch0_tx_xdmac_perid_30, PeripheralId::DACC, "DACC", "CH0_TX", "XDMAC", "PERID_30", "dma-route:xdmac:perid-30:dacc:ch0-tx", nullptr},
  {DmaBindingId::dma_binding_dacc_ch1_tx_xdmac_perid_31, PeripheralId::DACC, "DACC", "CH1_TX", "XDMAC", "PERID_31", "dma-route:xdmac:perid-31:dacc:ch1-tx", nullptr},
  {DmaBindingId::dma_binding_gpioa_rx_xdmac_perid_34, PeripheralId::GPIOA, "GPIOA", "RX", "XDMAC", "PERID_34", "dma-route:xdmac:perid-34:gpioa:rx", nullptr},
  {DmaBindingId::dma_binding_hsmci_rx_xdmac_perid_0, PeripheralId::HSMCI, "HSMCI", "RX", "XDMAC", "PERID_0", "dma-route:xdmac:perid-0:hsmci:rx", nullptr},
  {DmaBindingId::dma_binding_i2sc0_rx_left_xdmac_perid_45, PeripheralId::I2SC0, "I2SC0", "RX_LEFT", "XDMAC", "PERID_45", "dma-route:xdmac:perid-45:i2sc0:rx-left", nullptr},
  {DmaBindingId::dma_binding_i2sc0_rx_right_xdmac_perid_49, PeripheralId::I2SC0, "I2SC0", "RX_RIGHT", "XDMAC", "PERID_49", "dma-route:xdmac:perid-49:i2sc0:rx-right", nullptr},
  {DmaBindingId::dma_binding_i2sc0_tx_left_xdmac_perid_44, PeripheralId::I2SC0, "I2SC0", "TX_LEFT", "XDMAC", "PERID_44", "dma-route:xdmac:perid-44:i2sc0:tx-left", nullptr},
  {DmaBindingId::dma_binding_i2sc0_tx_right_xdmac_perid_48, PeripheralId::I2SC0, "I2SC0", "TX_RIGHT", "XDMAC", "PERID_48", "dma-route:xdmac:perid-48:i2sc0:tx-right", nullptr},
  {DmaBindingId::dma_binding_i2sc1_rx_left_xdmac_perid_47, PeripheralId::I2SC1, "I2SC1", "RX_LEFT", "XDMAC", "PERID_47", "dma-route:xdmac:perid-47:i2sc1:rx-left", nullptr},
  {DmaBindingId::dma_binding_i2sc1_rx_right_xdmac_perid_51, PeripheralId::I2SC1, "I2SC1", "RX_RIGHT", "XDMAC", "PERID_51", "dma-route:xdmac:perid-51:i2sc1:rx-right", nullptr},
  {DmaBindingId::dma_binding_i2sc1_tx_left_xdmac_perid_46, PeripheralId::I2SC1, "I2SC1", "TX_LEFT", "XDMAC", "PERID_46", "dma-route:xdmac:perid-46:i2sc1:tx-left", nullptr},
  {DmaBindingId::dma_binding_i2sc1_tx_right_xdmac_perid_50, PeripheralId::I2SC1, "I2SC1", "TX_RIGHT", "XDMAC", "PERID_50", "dma-route:xdmac:perid-50:i2sc1:tx-right", nullptr},
  {DmaBindingId::dma_binding_pwm0_tx_xdmac_perid_13, PeripheralId::PWM0, "PWM0", "TX", "XDMAC", "PERID_13", "dma-route:xdmac:perid-13:pwm0:tx", nullptr},
  {DmaBindingId::dma_binding_pwm1_tx_xdmac_perid_39, PeripheralId::PWM1, "PWM1", "TX", "XDMAC", "PERID_39", "dma-route:xdmac:perid-39:pwm1:tx", nullptr},
  {DmaBindingId::dma_binding_qspi_rx_xdmac_perid_6, PeripheralId::QSPI, "QSPI", "RX", "XDMAC", "PERID_6", "dma-route:xdmac:perid-6:qspi:rx", nullptr},
  {DmaBindingId::dma_binding_qspi_tx_xdmac_perid_5, PeripheralId::QSPI, "QSPI", "TX", "XDMAC", "PERID_5", "dma-route:xdmac:perid-5:qspi:tx", nullptr},
  {DmaBindingId::dma_binding_spi0_rx_xdmac_perid_2, PeripheralId::SPI0, "SPI0", "RX", "XDMAC", "PERID_2", "dma-route:xdmac:perid-2:spi0:rx", nullptr},
  {DmaBindingId::dma_binding_spi0_tx_xdmac_perid_1, PeripheralId::SPI0, "SPI0", "TX", "XDMAC", "PERID_1", "dma-route:xdmac:perid-1:spi0:tx", nullptr},
  {DmaBindingId::dma_binding_spi1_rx_xdmac_perid_4, PeripheralId::SPI1, "SPI1", "RX", "XDMAC", "PERID_4", "dma-route:xdmac:perid-4:spi1:rx", nullptr},
  {DmaBindingId::dma_binding_spi1_tx_xdmac_perid_3, PeripheralId::SPI1, "SPI1", "TX", "XDMAC", "PERID_3", "dma-route:xdmac:perid-3:spi1:tx", nullptr},
  {DmaBindingId::dma_binding_ssc_rx_xdmac_perid_33, PeripheralId::SSC, "SSC", "RX", "XDMAC", "PERID_33", "dma-route:xdmac:perid-33:ssc:rx", nullptr},
  {DmaBindingId::dma_binding_ssc_tx_xdmac_perid_32, PeripheralId::SSC, "SSC", "TX", "XDMAC", "PERID_32", "dma-route:xdmac:perid-32:ssc:tx", nullptr},
  {DmaBindingId::dma_binding_tc0_rx_xdmac_perid_40, PeripheralId::TC0, "TC0", "RX", "XDMAC", "PERID_40", "dma-route:xdmac:perid-40:tc0:rx", nullptr},
  {DmaBindingId::dma_binding_tc1_rx_xdmac_perid_41, PeripheralId::TC1, "TC1", "RX", "XDMAC", "PERID_41", "dma-route:xdmac:perid-41:tc1:rx", nullptr},
  {DmaBindingId::dma_binding_tc2_rx_xdmac_perid_42, PeripheralId::TC2, "TC2", "RX", "XDMAC", "PERID_42", "dma-route:xdmac:perid-42:tc2:rx", nullptr},
  {DmaBindingId::dma_binding_tc3_rx_xdmac_perid_43, PeripheralId::TC3, "TC3", "RX", "XDMAC", "PERID_43", "dma-route:xdmac:perid-43:tc3:rx", nullptr},
  {DmaBindingId::dma_binding_twihs0_rx_xdmac_perid_15, PeripheralId::TWIHS0, "TWIHS0", "RX", "XDMAC", "PERID_15", "dma-route:xdmac:perid-15:twihs0:rx", nullptr},
  {DmaBindingId::dma_binding_twihs0_tx_xdmac_perid_14, PeripheralId::TWIHS0, "TWIHS0", "TX", "XDMAC", "PERID_14", "dma-route:xdmac:perid-14:twihs0:tx", nullptr},
  {DmaBindingId::dma_binding_twihs1_rx_xdmac_perid_17, PeripheralId::TWIHS1, "TWIHS1", "RX", "XDMAC", "PERID_17", "dma-route:xdmac:perid-17:twihs1:rx", nullptr},
  {DmaBindingId::dma_binding_twihs1_tx_xdmac_perid_16, PeripheralId::TWIHS1, "TWIHS1", "TX", "XDMAC", "PERID_16", "dma-route:xdmac:perid-16:twihs1:tx", nullptr},
  {DmaBindingId::dma_binding_twihs2_rx_xdmac_perid_19, PeripheralId::TWIHS2, "TWIHS2", "RX", "XDMAC", "PERID_19", "dma-route:xdmac:perid-19:twihs2:rx", nullptr},
  {DmaBindingId::dma_binding_twihs2_tx_xdmac_perid_18, PeripheralId::TWIHS2, "TWIHS2", "TX", "XDMAC", "PERID_18", "dma-route:xdmac:perid-18:twihs2:tx", nullptr},
  {DmaBindingId::dma_binding_uart0_rx_xdmac_perid_21, PeripheralId::UART0, "UART0", "RX", "XDMAC", "PERID_21", "dma-route:xdmac:perid-21:uart0:rx", nullptr},
  {DmaBindingId::dma_binding_uart0_tx_xdmac_perid_20, PeripheralId::UART0, "UART0", "TX", "XDMAC", "PERID_20", "dma-route:xdmac:perid-20:uart0:tx", nullptr},
  {DmaBindingId::dma_binding_uart1_rx_xdmac_perid_23, PeripheralId::UART1, "UART1", "RX", "XDMAC", "PERID_23", "dma-route:xdmac:perid-23:uart1:rx", nullptr},
  {DmaBindingId::dma_binding_uart1_tx_xdmac_perid_22, PeripheralId::UART1, "UART1", "TX", "XDMAC", "PERID_22", "dma-route:xdmac:perid-22:uart1:tx", nullptr},
  {DmaBindingId::dma_binding_uart2_rx_xdmac_perid_25, PeripheralId::UART2, "UART2", "RX", "XDMAC", "PERID_25", "dma-route:xdmac:perid-25:uart2:rx", nullptr},
  {DmaBindingId::dma_binding_uart2_tx_xdmac_perid_24, PeripheralId::UART2, "UART2", "TX", "XDMAC", "PERID_24", "dma-route:xdmac:perid-24:uart2:tx", nullptr},
  {DmaBindingId::dma_binding_uart3_rx_xdmac_perid_27, PeripheralId::UART3, "UART3", "RX", "XDMAC", "PERID_27", "dma-route:xdmac:perid-27:uart3:rx", nullptr},
  {DmaBindingId::dma_binding_uart3_tx_xdmac_perid_26, PeripheralId::UART3, "UART3", "TX", "XDMAC", "PERID_26", "dma-route:xdmac:perid-26:uart3:tx", nullptr},
  {DmaBindingId::dma_binding_uart4_rx_xdmac_perid_29, PeripheralId::UART4, "UART4", "RX", "XDMAC", "PERID_29", "dma-route:xdmac:perid-29:uart4:rx", nullptr},
  {DmaBindingId::dma_binding_uart4_tx_xdmac_perid_28, PeripheralId::UART4, "UART4", "TX", "XDMAC", "PERID_28", "dma-route:xdmac:perid-28:uart4:tx", nullptr},
  {DmaBindingId::dma_binding_usart0_rx_xdmac_perid_8, PeripheralId::USART0, "USART0", "RX", "XDMAC", "PERID_8", "dma-route:xdmac:perid-8:usart0:rx", nullptr},
  {DmaBindingId::dma_binding_usart0_tx_xdmac_perid_7, PeripheralId::USART0, "USART0", "TX", "XDMAC", "PERID_7", "dma-route:xdmac:perid-7:usart0:tx", nullptr},
  {DmaBindingId::dma_binding_usart1_rx_xdmac_perid_10, PeripheralId::USART1, "USART1", "RX", "XDMAC", "PERID_10", "dma-route:xdmac:perid-10:usart1:rx", nullptr},
  {DmaBindingId::dma_binding_usart1_tx_xdmac_perid_9, PeripheralId::USART1, "USART1", "TX", "XDMAC", "PERID_9", "dma-route:xdmac:perid-9:usart1:tx", nullptr},
  {DmaBindingId::dma_binding_usart2_rx_xdmac_perid_12, PeripheralId::USART2, "USART2", "RX", "XDMAC", "PERID_12", "dma-route:xdmac:perid-12:usart2:rx", nullptr},
  {DmaBindingId::dma_binding_usart2_tx_xdmac_perid_11, PeripheralId::USART2, "USART2", "TX", "XDMAC", "PERID_11", "dma-route:xdmac:perid-11:usart2:tx", nullptr},
}};
}
}
}
}
}
