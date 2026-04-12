#pragma once

#include "runtime_refs.hpp"
#include "clock_tree_lite.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
struct RccDescriptor {
  DeviceRefId device_id;
  PeripheralRefId peripheral_id;
  ClockGateId gate_id;
  ResetId reset_id;
};
inline constexpr RccDescriptor kRccMap[] = {
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_DMA1, ClockGateId::stm32f401re_gate_dma1, ResetId::stm32f401re_reset_dma1},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_DMA2, ClockGateId::stm32f401re_gate_dma2, ResetId::stm32f401re_reset_dma2},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOA, ClockGateId::stm32f401re_gate_gpioa, ResetId::stm32f401re_reset_gpioa},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOB, ClockGateId::stm32f401re_gate_gpiob, ResetId::stm32f401re_reset_gpiob},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOC, ClockGateId::stm32f401re_gate_gpioc, ResetId::stm32f401re_reset_gpioc},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOD, ClockGateId::stm32f401re_gate_gpiod, ResetId::stm32f401re_reset_gpiod},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOH, ClockGateId::stm32f401re_gate_gpioh, ResetId::stm32f401re_reset_gpioh},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_I2C1, ClockGateId::stm32f401re_gate_i2c1, ResetId::stm32f401re_reset_i2c1},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_I2C2, ClockGateId::stm32f401re_gate_i2c2, ResetId::stm32f401re_reset_i2c2},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_SPI1, ClockGateId::stm32f401re_gate_spi1, ResetId::stm32f401re_reset_spi1},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_SPI2, ClockGateId::stm32f401re_gate_spi2, ResetId::stm32f401re_reset_spi2},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM1, ClockGateId::stm32f401re_gate_tim1, ResetId::stm32f401re_reset_tim1},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM2, ClockGateId::stm32f401re_gate_tim2, ResetId::stm32f401re_reset_tim2},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM3, ClockGateId::stm32f401re_gate_tim3, ResetId::stm32f401re_reset_tim3},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM4, ClockGateId::stm32f401re_gate_tim4, ResetId::stm32f401re_reset_tim4},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM5, ClockGateId::stm32f401re_gate_tim5, ResetId::stm32f401re_reset_tim5},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_USART1, ClockGateId::stm32f401re_gate_usart1, ResetId::stm32f401re_reset_usart1},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_USART2, ClockGateId::stm32f401re_gate_usart2, ResetId::stm32f401re_reset_usart2},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_DMA1, ClockGateId::stm32f405rg_gate_dma1, ResetId::stm32f405rg_reset_dma1},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_DMA2, ClockGateId::stm32f405rg_gate_dma2, ResetId::stm32f405rg_reset_dma2},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOA, ClockGateId::stm32f405rg_gate_gpioa, ResetId::stm32f405rg_reset_gpioa},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOB, ClockGateId::stm32f405rg_gate_gpiob, ResetId::stm32f405rg_reset_gpiob},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOC, ClockGateId::stm32f405rg_gate_gpioc, ResetId::stm32f405rg_reset_gpioc},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOD, ClockGateId::stm32f405rg_gate_gpiod, ResetId::stm32f405rg_reset_gpiod},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOH, ClockGateId::stm32f405rg_gate_gpioh, ResetId::stm32f405rg_reset_gpioh},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_I2C1, ClockGateId::stm32f405rg_gate_i2c1, ResetId::stm32f405rg_reset_i2c1},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_I2C2, ClockGateId::stm32f405rg_gate_i2c2, ResetId::stm32f405rg_reset_i2c2},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_SPI1, ClockGateId::stm32f405rg_gate_spi1, ResetId::stm32f405rg_reset_spi1},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_SPI2, ClockGateId::stm32f405rg_gate_spi2, ResetId::stm32f405rg_reset_spi2},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM1, ClockGateId::stm32f405rg_gate_tim1, ResetId::stm32f405rg_reset_tim1},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM2, ClockGateId::stm32f405rg_gate_tim2, ResetId::stm32f405rg_reset_tim2},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM3, ClockGateId::stm32f405rg_gate_tim3, ResetId::stm32f405rg_reset_tim3},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM4, ClockGateId::stm32f405rg_gate_tim4, ResetId::stm32f405rg_reset_tim4},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM5, ClockGateId::stm32f405rg_gate_tim5, ResetId::stm32f405rg_reset_tim5},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_USART1, ClockGateId::stm32f405rg_gate_usart1, ResetId::stm32f405rg_reset_usart1},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_USART2, ClockGateId::stm32f405rg_gate_usart2, ResetId::stm32f405rg_reset_usart2},
};
}
}
}
