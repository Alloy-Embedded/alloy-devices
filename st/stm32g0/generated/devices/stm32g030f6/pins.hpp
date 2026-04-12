#pragma once

#include <array>
#include <cstdint>
#include "../../runtime_refs.hpp"
#include "../../runtime_semantics.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
struct PinDescriptor {
  PinRefId pin_id;
  PortId port_id;
  int number;
  std::uint16_t package_pad_offset;
  std::uint16_t package_pad_count;
  std::uint16_t constraint_offset;
  std::uint16_t constraint_count;
};
inline constexpr std::array<PinDescriptor, 17> kPins = {{
  {PinRefId::stm32g030f6_PA0, PortId::port_A, 0, 0u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA1, PortId::port_A, 1, 1u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA11, PortId::port_A, 11, 2u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA12, PortId::port_A, 12, 3u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA13, PortId::port_A, 13, 4u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA14, PortId::port_A, 14, 5u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA2, PortId::port_A, 2, 6u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA3, PortId::port_A, 3, 7u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA4, PortId::port_A, 4, 8u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA5, PortId::port_A, 5, 9u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA6, PortId::port_A, 6, 10u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PA7, PortId::port_A, 7, 11u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PB0, PortId::port_B, 0, 12u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PB3, PortId::port_B, 3, 13u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PB7, PortId::port_B, 7, 14u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PC14, PortId::port_C, 14, 15u, 1u, 0u, 0u},
  {PinRefId::stm32g030f6_PC15, PortId::port_C, 15, 16u, 1u, 0u, 0u},
}};

struct PinPackagePadRef {
  PinRefId pin_id;
  PackagePadRefId package_pad_id;
};
inline constexpr std::array<PinPackagePadRef, 17> kPinPackagePadRefs = {{
  {PinRefId::stm32g030f6_PA0, PackagePadRefId::stm32g030f6_7},
  {PinRefId::stm32g030f6_PA1, PackagePadRefId::stm32g030f6_8},
  {PinRefId::stm32g030f6_PA11, PackagePadRefId::stm32g030f6_16},
  {PinRefId::stm32g030f6_PA12, PackagePadRefId::stm32g030f6_17},
  {PinRefId::stm32g030f6_PA13, PackagePadRefId::stm32g030f6_18},
  {PinRefId::stm32g030f6_PA14, PackagePadRefId::stm32g030f6_19},
  {PinRefId::stm32g030f6_PA2, PackagePadRefId::stm32g030f6_9},
  {PinRefId::stm32g030f6_PA3, PackagePadRefId::stm32g030f6_10},
  {PinRefId::stm32g030f6_PA4, PackagePadRefId::stm32g030f6_11},
  {PinRefId::stm32g030f6_PA5, PackagePadRefId::stm32g030f6_12},
  {PinRefId::stm32g030f6_PA6, PackagePadRefId::stm32g030f6_13},
  {PinRefId::stm32g030f6_PA7, PackagePadRefId::stm32g030f6_14},
  {PinRefId::stm32g030f6_PB0, PackagePadRefId::stm32g030f6_15},
  {PinRefId::stm32g030f6_PB3, PackagePadRefId::stm32g030f6_20},
  {PinRefId::stm32g030f6_PB7, PackagePadRefId::stm32g030f6_1},
  {PinRefId::stm32g030f6_PC14, PackagePadRefId::stm32g030f6_2},
  {PinRefId::stm32g030f6_PC15, PackagePadRefId::stm32g030f6_3},
}};

struct PinConstraintRef {
  PinRefId pin_id;
  ConstraintRefId constraint_id;
};
inline constexpr std::array<PinConstraintRef, 0> kPinConstraintRefs = {};

struct PinSignalDescriptor {
  PinRefId pin_id;
  PinFunctionId function_id;
  PeripheralRefId peripheral_id;
  SignalId signal_id;
  int af_number;
};
inline constexpr std::array<PinSignalDescriptor, 54> kPinSignals = {{
  {PinRefId::stm32g030f6_PA0, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN0, -1},
  {PinRefId::stm32g030f6_PA0, PinFunctionId::pin_function_spi2_sck, PeripheralRefId::stm32g030f6_SPI2, SignalId::signal_SCK, 0},
  {PinRefId::stm32g030f6_PA0, PinFunctionId::pin_function_usart2_cts, PeripheralRefId::stm32g030f6_USART2, SignalId::signal_CTS, 1},
  {PinRefId::stm32g030f6_PA0, PinFunctionId::pin_function_usart2_nss, PeripheralRefId::stm32g030f6_USART2, SignalId::signal_NSS, 1},
  {PinRefId::stm32g030f6_PA1, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN1, -1},
  {PinRefId::stm32g030f6_PA1, PinFunctionId::pin_function_i2c1_smba, PeripheralRefId::stm32g030f6_I2C1, SignalId::signal_SMBA, 6},
  {PinRefId::stm32g030f6_PA1, PinFunctionId::pin_function_spi1_sck, PeripheralRefId::stm32g030f6_SPI1, SignalId::signal_SCK, 0},
  {PinRefId::stm32g030f6_PA1, PinFunctionId::pin_function_usart2_ck, PeripheralRefId::stm32g030f6_USART2, SignalId::signal_CK, 1},
  {PinRefId::stm32g030f6_PA1, PinFunctionId::pin_function_usart2_de, PeripheralRefId::stm32g030f6_USART2, SignalId::signal_DE, 1},
  {PinRefId::stm32g030f6_PA1, PinFunctionId::pin_function_usart2_rts, PeripheralRefId::stm32g030f6_USART2, SignalId::signal_RTS, 1},
  {PinRefId::stm32g030f6_PA11, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN11, -1},
  {PinRefId::stm32g030f6_PA12, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN12, -1},
  {PinRefId::stm32g030f6_PA13, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN13, -1},
  {PinRefId::stm32g030f6_PA14, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN14, -1},
  {PinRefId::stm32g030f6_PA2, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN2, -1},
  {PinRefId::stm32g030f6_PA2, PinFunctionId::pin_function_spi1_mosi, PeripheralRefId::stm32g030f6_SPI1, SignalId::signal_MOSI, 0},
  {PinRefId::stm32g030f6_PA2, PinFunctionId::pin_function_usart2_tx, PeripheralRefId::stm32g030f6_USART2, SignalId::signal_TX, 1},
  {PinRefId::stm32g030f6_PA3, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN3, -1},
  {PinRefId::stm32g030f6_PA3, PinFunctionId::pin_function_spi2_miso, PeripheralRefId::stm32g030f6_SPI2, SignalId::signal_MISO, 0},
  {PinRefId::stm32g030f6_PA3, PinFunctionId::pin_function_usart2_rx, PeripheralRefId::stm32g030f6_USART2, SignalId::signal_RX, 1},
  {PinRefId::stm32g030f6_PA4, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN4, -1},
  {PinRefId::stm32g030f6_PA4, PinFunctionId::pin_function_spi1_nss, PeripheralRefId::stm32g030f6_SPI1, SignalId::signal_NSS, 0},
  {PinRefId::stm32g030f6_PA4, PinFunctionId::pin_function_spi2_mosi, PeripheralRefId::stm32g030f6_SPI2, SignalId::signal_MOSI, 1},
  {PinRefId::stm32g030f6_PA4, PinFunctionId::pin_function_tim14_ch1, PeripheralRefId::stm32g030f6_TIM14, SignalId::signal_CH1, 4},
  {PinRefId::stm32g030f6_PA5, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN5, -1},
  {PinRefId::stm32g030f6_PA5, PinFunctionId::pin_function_spi1_sck, PeripheralRefId::stm32g030f6_SPI1, SignalId::signal_SCK, 0},
  {PinRefId::stm32g030f6_PA6, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN6, -1},
  {PinRefId::stm32g030f6_PA6, PinFunctionId::pin_function_spi1_miso, PeripheralRefId::stm32g030f6_SPI1, SignalId::signal_MISO, 0},
  {PinRefId::stm32g030f6_PA6, PinFunctionId::pin_function_tim16_ch1, PeripheralRefId::stm32g030f6_TIM16, SignalId::signal_CH1, 5},
  {PinRefId::stm32g030f6_PA6, PinFunctionId::pin_function_tim1_bk, PeripheralRefId::stm32g030f6_TIM1, SignalId::signal_BK, 2},
  {PinRefId::stm32g030f6_PA6, PinFunctionId::pin_function_tim3_ch1, PeripheralRefId::stm32g030f6_TIM3, SignalId::signal_CH1, 1},
  {PinRefId::stm32g030f6_PA7, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOA, SignalId::signal_IN7, -1},
  {PinRefId::stm32g030f6_PA7, PinFunctionId::pin_function_spi1_mosi, PeripheralRefId::stm32g030f6_SPI1, SignalId::signal_MOSI, 0},
  {PinRefId::stm32g030f6_PA7, PinFunctionId::pin_function_tim14_ch1, PeripheralRefId::stm32g030f6_TIM14, SignalId::signal_CH1, 4},
  {PinRefId::stm32g030f6_PA7, PinFunctionId::pin_function_tim17_ch1, PeripheralRefId::stm32g030f6_TIM17, SignalId::signal_CH1, 5},
  {PinRefId::stm32g030f6_PA7, PinFunctionId::pin_function_tim1_ch1n, PeripheralRefId::stm32g030f6_TIM1, SignalId::signal_CH1N, 2},
  {PinRefId::stm32g030f6_PA7, PinFunctionId::pin_function_tim3_ch2, PeripheralRefId::stm32g030f6_TIM3, SignalId::signal_CH2, 1},
  {PinRefId::stm32g030f6_PB0, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOB, SignalId::signal_IN0, -1},
  {PinRefId::stm32g030f6_PB0, PinFunctionId::pin_function_spi1_nss, PeripheralRefId::stm32g030f6_SPI1, SignalId::signal_NSS, 0},
  {PinRefId::stm32g030f6_PB0, PinFunctionId::pin_function_tim1_ch2n, PeripheralRefId::stm32g030f6_TIM1, SignalId::signal_CH2N, 2},
  {PinRefId::stm32g030f6_PB0, PinFunctionId::pin_function_tim3_ch3, PeripheralRefId::stm32g030f6_TIM3, SignalId::signal_CH3, 1},
  {PinRefId::stm32g030f6_PB3, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOB, SignalId::signal_IN3, -1},
  {PinRefId::stm32g030f6_PB3, PinFunctionId::pin_function_spi1_sck, PeripheralRefId::stm32g030f6_SPI1, SignalId::signal_SCK, 0},
  {PinRefId::stm32g030f6_PB3, PinFunctionId::pin_function_tim1_ch2, PeripheralRefId::stm32g030f6_TIM1, SignalId::signal_CH2, 1},
  {PinRefId::stm32g030f6_PB3, PinFunctionId::pin_function_usart1_ck, PeripheralRefId::stm32g030f6_USART1, SignalId::signal_CK, 4},
  {PinRefId::stm32g030f6_PB3, PinFunctionId::pin_function_usart1_de, PeripheralRefId::stm32g030f6_USART1, SignalId::signal_DE, 4},
  {PinRefId::stm32g030f6_PB3, PinFunctionId::pin_function_usart1_rts, PeripheralRefId::stm32g030f6_USART1, SignalId::signal_RTS, 4},
  {PinRefId::stm32g030f6_PB7, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOB, SignalId::signal_IN7, -1},
  {PinRefId::stm32g030f6_PB7, PinFunctionId::pin_function_i2c1_sda, PeripheralRefId::stm32g030f6_I2C1, SignalId::signal_SDA, 6},
  {PinRefId::stm32g030f6_PB7, PinFunctionId::pin_function_spi2_mosi, PeripheralRefId::stm32g030f6_SPI2, SignalId::signal_MOSI, 1},
  {PinRefId::stm32g030f6_PB7, PinFunctionId::pin_function_tim17_ch1n, PeripheralRefId::stm32g030f6_TIM17, SignalId::signal_CH1N, 2},
  {PinRefId::stm32g030f6_PB7, PinFunctionId::pin_function_usart1_rx, PeripheralRefId::stm32g030f6_USART1, SignalId::signal_RX, 0},
  {PinRefId::stm32g030f6_PC14, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOC, SignalId::signal_IN14, -1},
  {PinRefId::stm32g030f6_PC15, PinFunctionId::pin_function_gpio, PeripheralRefId::stm32g030f6_GPIOC, SignalId::signal_IN15, -1},
}};
}
}
}
}
}
