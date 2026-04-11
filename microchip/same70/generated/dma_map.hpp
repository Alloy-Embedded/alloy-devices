#pragma once

#include <array>

namespace microchip {
namespace same70 {
namespace generated {
struct DmaDescriptor {
  const char* peripheral;
  const char* signal;
  const char* controller;
  const char* request_line;
};
inline constexpr std::array<DmaDescriptor, 52> kDmaMap = {{
  {"AES", "RX", "XDMAC", "PERID_38"},
  {"AES", "TX", "XDMAC", "PERID_37"},
  {"AFEC0", "RX", "XDMAC", "PERID_35"},
  {"AFEC1", "RX", "XDMAC", "PERID_36"},
  {"DACC", "CH0_TX", "XDMAC", "PERID_30"},
  {"DACC", "CH1_TX", "XDMAC", "PERID_31"},
  {"GPIOA", "RX", "XDMAC", "PERID_34"},
  {"HSMCI", "RX", "XDMAC", "PERID_0"},
  {"I2SC0", "RX_LEFT", "XDMAC", "PERID_45"},
  {"I2SC0", "RX_RIGHT", "XDMAC", "PERID_49"},
  {"I2SC0", "TX_LEFT", "XDMAC", "PERID_44"},
  {"I2SC0", "TX_RIGHT", "XDMAC", "PERID_48"},
  {"I2SC1", "RX_LEFT", "XDMAC", "PERID_47"},
  {"I2SC1", "RX_RIGHT", "XDMAC", "PERID_51"},
  {"I2SC1", "TX_LEFT", "XDMAC", "PERID_46"},
  {"I2SC1", "TX_RIGHT", "XDMAC", "PERID_50"},
  {"PWM0", "TX", "XDMAC", "PERID_13"},
  {"PWM1", "TX", "XDMAC", "PERID_39"},
  {"QSPI", "RX", "XDMAC", "PERID_6"},
  {"QSPI", "TX", "XDMAC", "PERID_5"},
  {"SPI0", "RX", "XDMAC", "PERID_2"},
  {"SPI0", "TX", "XDMAC", "PERID_1"},
  {"SPI1", "RX", "XDMAC", "PERID_4"},
  {"SPI1", "TX", "XDMAC", "PERID_3"},
  {"SSC", "RX", "XDMAC", "PERID_33"},
  {"SSC", "TX", "XDMAC", "PERID_32"},
  {"TC0", "RX", "XDMAC", "PERID_40"},
  {"TC1", "RX", "XDMAC", "PERID_41"},
  {"TC2", "RX", "XDMAC", "PERID_42"},
  {"TC3", "RX", "XDMAC", "PERID_43"},
  {"TWIHS0", "RX", "XDMAC", "PERID_15"},
  {"TWIHS0", "TX", "XDMAC", "PERID_14"},
  {"TWIHS1", "RX", "XDMAC", "PERID_17"},
  {"TWIHS1", "TX", "XDMAC", "PERID_16"},
  {"TWIHS2", "RX", "XDMAC", "PERID_19"},
  {"TWIHS2", "TX", "XDMAC", "PERID_18"},
  {"UART0", "RX", "XDMAC", "PERID_21"},
  {"UART0", "TX", "XDMAC", "PERID_20"},
  {"UART1", "RX", "XDMAC", "PERID_23"},
  {"UART1", "TX", "XDMAC", "PERID_22"},
  {"UART2", "RX", "XDMAC", "PERID_25"},
  {"UART2", "TX", "XDMAC", "PERID_24"},
  {"UART3", "RX", "XDMAC", "PERID_27"},
  {"UART3", "TX", "XDMAC", "PERID_26"},
  {"UART4", "RX", "XDMAC", "PERID_29"},
  {"UART4", "TX", "XDMAC", "PERID_28"},
  {"USART0", "RX", "XDMAC", "PERID_8"},
  {"USART0", "TX", "XDMAC", "PERID_7"},
  {"USART1", "RX", "XDMAC", "PERID_10"},
  {"USART1", "TX", "XDMAC", "PERID_9"},
  {"USART2", "RX", "XDMAC", "PERID_12"},
  {"USART2", "TX", "XDMAC", "PERID_11"},
}};
}
}
}
