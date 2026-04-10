#pragma once

namespace st {
namespace stm32g0 {
namespace stm32g030f6 {
struct PinFunctionDescriptor {
  const char* pin_name;
  const char* function;
  const char* peripheral;
  const char* signal;
  int af_number;
};
inline constexpr PinFunctionDescriptor kPinFunctions[] = {
  {"PA0", "gpio", "GPIOA", "IN0", -1},
  {"PA0", "spi2_sck", "SPI2", "SCK", 0},
  {"PA0", "usart2_cts", "USART2", "CTS", 1},
  {"PA0", "usart2_nss", "USART2", "NSS", 1},
  {"PA1", "gpio", "GPIOA", "IN1", -1},
  {"PA1", "spi1_sck", "SPI1", "SCK", 0},
  {"PA1", "usart2_ck", "USART2", "CK", 1},
  {"PA1", "usart2_de", "USART2", "DE", 1},
  {"PA1", "usart2_rts", "USART2", "RTS", 1},
  {"PA1", "i2c1_smba", "I2C1", "SMBA", 6},
  {"PA2", "gpio", "GPIOA", "IN2", -1},
  {"PA2", "spi1_mosi", "SPI1", "MOSI", 0},
  {"PA2", "usart2_tx", "USART2", "TX", 1},
  {"PA3", "gpio", "GPIOA", "IN3", -1},
  {"PA3", "spi2_miso", "SPI2", "MISO", 0},
  {"PA3", "usart2_rx", "USART2", "RX", 1},
  {"PA4", "gpio", "GPIOA", "IN4", -1},
  {"PA4", "spi1_nss", "SPI1", "NSS", 0},
  {"PA4", "spi2_mosi", "SPI2", "MOSI", 1},
  {"PA4", "tim14_ch1", "TIM14", "CH1", 4},
  {"PA5", "gpio", "GPIOA", "IN5", -1},
  {"PA5", "spi1_sck", "SPI1", "SCK", 0},
  {"PA6", "gpio", "GPIOA", "IN6", -1},
  {"PA6", "spi1_miso", "SPI1", "MISO", 0},
  {"PA6", "tim3_ch1", "TIM3", "CH1", 1},
  {"PA6", "tim1_bk", "TIM1", "BK", 2},
  {"PA6", "tim16_ch1", "TIM16", "CH1", 5},
  {"PA7", "gpio", "GPIOA", "IN7", -1},
  {"PA7", "spi1_mosi", "SPI1", "MOSI", 0},
  {"PA7", "tim3_ch2", "TIM3", "CH2", 1},
  {"PA7", "tim1_ch1n", "TIM1", "CH1N", 2},
  {"PA7", "tim14_ch1", "TIM14", "CH1", 4},
  {"PA7", "tim17_ch1", "TIM17", "CH1", 5},
  {"PA11", "gpio", "GPIOA", "IN11", -1},
  {"PA12", "gpio", "GPIOA", "IN12", -1},
  {"PA13", "gpio", "GPIOA", "IN13", -1},
  {"PA14", "gpio", "GPIOA", "IN14", -1},
  {"PB0", "gpio", "GPIOB", "IN0", -1},
  {"PB0", "spi1_nss", "SPI1", "NSS", 0},
  {"PB0", "tim3_ch3", "TIM3", "CH3", 1},
  {"PB0", "tim1_ch2n", "TIM1", "CH2N", 2},
  {"PB3", "gpio", "GPIOB", "IN3", -1},
  {"PB3", "spi1_sck", "SPI1", "SCK", 0},
  {"PB3", "tim1_ch2", "TIM1", "CH2", 1},
  {"PB3", "usart1_ck", "USART1", "CK", 4},
  {"PB3", "usart1_de", "USART1", "DE", 4},
  {"PB3", "usart1_rts", "USART1", "RTS", 4},
  {"PB7", "gpio", "GPIOB", "IN7", -1},
  {"PB7", "usart1_rx", "USART1", "RX", 0},
  {"PB7", "spi2_mosi", "SPI2", "MOSI", 1},
  {"PB7", "tim17_ch1n", "TIM17", "CH1N", 2},
  {"PB7", "i2c1_sda", "I2C1", "SDA", 6},
  {"PC14", "gpio", "GPIOC", "IN14", -1},
  {"PC15", "gpio", "GPIOC", "IN15", -1},
};
}
}
}
