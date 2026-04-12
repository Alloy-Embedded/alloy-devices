#pragma once

#include "clock_tree_lite.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
struct RccDescriptor {
  const char* device;
  const char* peripheral;
  ClockGateId gate_id;
  ResetId reset_id;
};
inline constexpr RccDescriptor kRccMap[] = {
  {"stm32f401re", "DMA1", ClockGateId::stm32f401re_gate_dma1, ResetId::stm32f401re_reset_dma1},
  {"stm32f401re", "DMA2", ClockGateId::stm32f401re_gate_dma2, ResetId::stm32f401re_reset_dma2},
  {"stm32f401re", "GPIOA", ClockGateId::stm32f401re_gate_gpioa, ResetId::stm32f401re_reset_gpioa},
  {"stm32f401re", "GPIOB", ClockGateId::stm32f401re_gate_gpiob, ResetId::stm32f401re_reset_gpiob},
  {"stm32f401re", "GPIOC", ClockGateId::stm32f401re_gate_gpioc, ResetId::stm32f401re_reset_gpioc},
  {"stm32f401re", "GPIOD", ClockGateId::stm32f401re_gate_gpiod, ResetId::stm32f401re_reset_gpiod},
  {"stm32f401re", "GPIOH", ClockGateId::stm32f401re_gate_gpioh, ResetId::stm32f401re_reset_gpioh},
  {"stm32f401re", "I2C1", ClockGateId::stm32f401re_gate_i2c1, ResetId::stm32f401re_reset_i2c1},
  {"stm32f401re", "I2C2", ClockGateId::stm32f401re_gate_i2c2, ResetId::stm32f401re_reset_i2c2},
  {"stm32f401re", "SPI1", ClockGateId::stm32f401re_gate_spi1, ResetId::stm32f401re_reset_spi1},
  {"stm32f401re", "SPI2", ClockGateId::stm32f401re_gate_spi2, ResetId::stm32f401re_reset_spi2},
  {"stm32f401re", "TIM1", ClockGateId::stm32f401re_gate_tim1, ResetId::stm32f401re_reset_tim1},
  {"stm32f401re", "TIM2", ClockGateId::stm32f401re_gate_tim2, ResetId::stm32f401re_reset_tim2},
  {"stm32f401re", "TIM3", ClockGateId::stm32f401re_gate_tim3, ResetId::stm32f401re_reset_tim3},
  {"stm32f401re", "TIM4", ClockGateId::stm32f401re_gate_tim4, ResetId::stm32f401re_reset_tim4},
  {"stm32f401re", "TIM5", ClockGateId::stm32f401re_gate_tim5, ResetId::stm32f401re_reset_tim5},
  {"stm32f401re", "USART1", ClockGateId::stm32f401re_gate_usart1, ResetId::stm32f401re_reset_usart1},
  {"stm32f401re", "USART2", ClockGateId::stm32f401re_gate_usart2, ResetId::stm32f401re_reset_usart2},
  {"stm32f405rg", "DMA1", ClockGateId::stm32f405rg_gate_dma1, ResetId::stm32f405rg_reset_dma1},
  {"stm32f405rg", "DMA2", ClockGateId::stm32f405rg_gate_dma2, ResetId::stm32f405rg_reset_dma2},
  {"stm32f405rg", "GPIOA", ClockGateId::stm32f405rg_gate_gpioa, ResetId::stm32f405rg_reset_gpioa},
  {"stm32f405rg", "GPIOB", ClockGateId::stm32f405rg_gate_gpiob, ResetId::stm32f405rg_reset_gpiob},
  {"stm32f405rg", "GPIOC", ClockGateId::stm32f405rg_gate_gpioc, ResetId::stm32f405rg_reset_gpioc},
  {"stm32f405rg", "GPIOD", ClockGateId::stm32f405rg_gate_gpiod, ResetId::stm32f405rg_reset_gpiod},
  {"stm32f405rg", "GPIOH", ClockGateId::stm32f405rg_gate_gpioh, ResetId::stm32f405rg_reset_gpioh},
  {"stm32f405rg", "I2C1", ClockGateId::stm32f405rg_gate_i2c1, ResetId::stm32f405rg_reset_i2c1},
  {"stm32f405rg", "I2C2", ClockGateId::stm32f405rg_gate_i2c2, ResetId::stm32f405rg_reset_i2c2},
  {"stm32f405rg", "SPI1", ClockGateId::stm32f405rg_gate_spi1, ResetId::stm32f405rg_reset_spi1},
  {"stm32f405rg", "SPI2", ClockGateId::stm32f405rg_gate_spi2, ResetId::stm32f405rg_reset_spi2},
  {"stm32f405rg", "TIM1", ClockGateId::stm32f405rg_gate_tim1, ResetId::stm32f405rg_reset_tim1},
  {"stm32f405rg", "TIM2", ClockGateId::stm32f405rg_gate_tim2, ResetId::stm32f405rg_reset_tim2},
  {"stm32f405rg", "TIM3", ClockGateId::stm32f405rg_gate_tim3, ResetId::stm32f405rg_reset_tim3},
  {"stm32f405rg", "TIM4", ClockGateId::stm32f405rg_gate_tim4, ResetId::stm32f405rg_reset_tim4},
  {"stm32f405rg", "TIM5", ClockGateId::stm32f405rg_gate_tim5, ResetId::stm32f405rg_reset_tim5},
  {"stm32f405rg", "USART1", ClockGateId::stm32f405rg_gate_usart1, ResetId::stm32f405rg_reset_usart1},
  {"stm32f405rg", "USART2", ClockGateId::stm32f405rg_gate_usart2, ResetId::stm32f405rg_reset_usart2},
};
}
}
}
