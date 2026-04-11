#pragma once

#include <array>

namespace st {
namespace stm32f4 {
namespace generated {
struct ClockNodeDescriptor {
  const char* device;
  const char* node_id;
  const char* kind;
  const char* parent;
  const char* selector;
};
inline constexpr std::array<ClockNodeDescriptor, 8> kClockNodes = {{
  {"stm32f401re", "clock-node:rcc-ahb1enr", "ahb-domain", "clock-root", nullptr},
  {"stm32f401re", "clock-node:rcc-apb1enr", "apb-domain", "clock-root", nullptr},
  {"stm32f401re", "clock-node:rcc-apb2enr", "apb-domain", "clock-root", nullptr},
  {"stm32f401re", "clock-root", "root", nullptr, nullptr},
  {"stm32f405rg", "clock-node:rcc-ahb1enr", "ahb-domain", "clock-root", nullptr},
  {"stm32f405rg", "clock-node:rcc-apb1enr", "apb-domain", "clock-root", nullptr},
  {"stm32f405rg", "clock-node:rcc-apb2enr", "apb-domain", "clock-root", nullptr},
  {"stm32f405rg", "clock-root", "root", nullptr, nullptr},
}};

struct ClockSelectorDescriptor {
  const char* device;
  const char* selector_id;
  const char* parent_options;
  const char* register_target;
};
inline constexpr std::array<ClockSelectorDescriptor, 0> kClockSelectors = {};

struct ClockGateDescriptor {
  const char* device;
  const char* gate_id;
  const char* peripheral;
  const char* enable_signal;
  const char* parent_node;
};
inline constexpr std::array<ClockGateDescriptor, 36> kClockGates = {{
  {"stm32f401re", "gate:dma1", "DMA1", "RCC_AHB1ENR.DMA1EN", "clock-node:rcc-ahb1enr"},
  {"stm32f401re", "gate:dma2", "DMA2", "RCC_AHB1ENR.DMA2EN", "clock-node:rcc-ahb1enr"},
  {"stm32f401re", "gate:gpioa", "GPIOA", "RCC_AHB1ENR.GPIOAEN", "clock-node:rcc-ahb1enr"},
  {"stm32f401re", "gate:gpiob", "GPIOB", "RCC_AHB1ENR.GPIOBEN", "clock-node:rcc-ahb1enr"},
  {"stm32f401re", "gate:gpioc", "GPIOC", "RCC_AHB1ENR.GPIOCEN", "clock-node:rcc-ahb1enr"},
  {"stm32f401re", "gate:gpiod", "GPIOD", "RCC_AHB1ENR.GPIODEN", "clock-node:rcc-ahb1enr"},
  {"stm32f401re", "gate:gpioh", "GPIOH", "RCC_AHB1ENR.GPIOHEN", "clock-node:rcc-ahb1enr"},
  {"stm32f401re", "gate:i2c1", "I2C1", "RCC_APB1ENR.I2C1EN", "clock-node:rcc-apb1enr"},
  {"stm32f401re", "gate:i2c2", "I2C2", "RCC_APB1ENR.I2C2EN", "clock-node:rcc-apb1enr"},
  {"stm32f401re", "gate:spi1", "SPI1", "RCC_APB2ENR.SPI1EN", "clock-node:rcc-apb2enr"},
  {"stm32f401re", "gate:spi2", "SPI2", "RCC_APB1ENR.SPI2EN", "clock-node:rcc-apb1enr"},
  {"stm32f401re", "gate:tim1", "TIM1", "RCC_APB2ENR.TIM1EN", "clock-node:rcc-apb2enr"},
  {"stm32f401re", "gate:tim2", "TIM2", "RCC_APB1ENR.TIM2EN", "clock-node:rcc-apb1enr"},
  {"stm32f401re", "gate:tim3", "TIM3", "RCC_APB1ENR.TIM3EN", "clock-node:rcc-apb1enr"},
  {"stm32f401re", "gate:tim4", "TIM4", "RCC_APB1ENR.TIM4EN", "clock-node:rcc-apb1enr"},
  {"stm32f401re", "gate:tim5", "TIM5", "RCC_APB1ENR.TIM5EN", "clock-node:rcc-apb1enr"},
  {"stm32f401re", "gate:usart1", "USART1", "RCC_APB2ENR.USART1EN", "clock-node:rcc-apb2enr"},
  {"stm32f401re", "gate:usart2", "USART2", "RCC_APB1ENR.USART2EN", "clock-node:rcc-apb1enr"},
  {"stm32f405rg", "gate:dma1", "DMA1", "RCC_AHB1ENR.DMA1EN", "clock-node:rcc-ahb1enr"},
  {"stm32f405rg", "gate:dma2", "DMA2", "RCC_AHB1ENR.DMA2EN", "clock-node:rcc-ahb1enr"},
  {"stm32f405rg", "gate:gpioa", "GPIOA", "RCC_AHB1ENR.GPIOAEN", "clock-node:rcc-ahb1enr"},
  {"stm32f405rg", "gate:gpiob", "GPIOB", "RCC_AHB1ENR.GPIOBEN", "clock-node:rcc-ahb1enr"},
  {"stm32f405rg", "gate:gpioc", "GPIOC", "RCC_AHB1ENR.GPIOCEN", "clock-node:rcc-ahb1enr"},
  {"stm32f405rg", "gate:gpiod", "GPIOD", "RCC_AHB1ENR.GPIODEN", "clock-node:rcc-ahb1enr"},
  {"stm32f405rg", "gate:gpioh", "GPIOH", "RCC_AHB1ENR.GPIOHEN", "clock-node:rcc-ahb1enr"},
  {"stm32f405rg", "gate:i2c1", "I2C1", "RCC_APB1ENR.I2C1EN", "clock-node:rcc-apb1enr"},
  {"stm32f405rg", "gate:i2c2", "I2C2", "RCC_APB1ENR.I2C2EN", "clock-node:rcc-apb1enr"},
  {"stm32f405rg", "gate:spi1", "SPI1", "RCC_APB2ENR.SPI1EN", "clock-node:rcc-apb2enr"},
  {"stm32f405rg", "gate:spi2", "SPI2", "RCC_APB1ENR.SPI2EN", "clock-node:rcc-apb1enr"},
  {"stm32f405rg", "gate:tim1", "TIM1", "RCC_APB2ENR.TIM1EN", "clock-node:rcc-apb2enr"},
  {"stm32f405rg", "gate:tim2", "TIM2", "RCC_APB1ENR.TIM2EN", "clock-node:rcc-apb1enr"},
  {"stm32f405rg", "gate:tim3", "TIM3", "RCC_APB1ENR.TIM3EN", "clock-node:rcc-apb1enr"},
  {"stm32f405rg", "gate:tim4", "TIM4", "RCC_APB1ENR.TIM4EN", "clock-node:rcc-apb1enr"},
  {"stm32f405rg", "gate:tim5", "TIM5", "RCC_APB1ENR.TIM5EN", "clock-node:rcc-apb1enr"},
  {"stm32f405rg", "gate:usart1", "USART1", "RCC_APB2ENR.USART1EN", "clock-node:rcc-apb2enr"},
  {"stm32f405rg", "gate:usart2", "USART2", "RCC_APB1ENR.USART2EN", "clock-node:rcc-apb1enr"},
}};

struct ResetDescriptor {
  const char* device;
  const char* reset_id;
  const char* peripheral;
  const char* reset_signal;
  const char* active_level;
};
inline constexpr std::array<ResetDescriptor, 36> kResets = {{
  {"stm32f401re", "reset:dma1", "DMA1", "RCC_AHB1RSTR.DMA1RST", "high"},
  {"stm32f401re", "reset:dma2", "DMA2", "RCC_AHB1RSTR.DMA2RST", "high"},
  {"stm32f401re", "reset:gpioa", "GPIOA", "RCC_AHB1RSTR.GPIOARST", "high"},
  {"stm32f401re", "reset:gpiob", "GPIOB", "RCC_AHB1RSTR.GPIOBRST", "high"},
  {"stm32f401re", "reset:gpioc", "GPIOC", "RCC_AHB1RSTR.GPIOCRST", "high"},
  {"stm32f401re", "reset:gpiod", "GPIOD", "RCC_AHB1RSTR.GPIODRST", "high"},
  {"stm32f401re", "reset:gpioh", "GPIOH", "RCC_AHB1RSTR.GPIOHRST", "high"},
  {"stm32f401re", "reset:i2c1", "I2C1", "RCC_APB1RSTR.I2C1RST", "high"},
  {"stm32f401re", "reset:i2c2", "I2C2", "RCC_APB1RSTR.I2C2RST", "high"},
  {"stm32f401re", "reset:spi1", "SPI1", "RCC_APB2RSTR.SPI1RST", "high"},
  {"stm32f401re", "reset:spi2", "SPI2", "RCC_APB1RSTR.SPI2RST", "high"},
  {"stm32f401re", "reset:tim1", "TIM1", "RCC_APB2RSTR.TIM1RST", "high"},
  {"stm32f401re", "reset:tim2", "TIM2", "RCC_APB1RSTR.TIM2RST", "high"},
  {"stm32f401re", "reset:tim3", "TIM3", "RCC_APB1RSTR.TIM3RST", "high"},
  {"stm32f401re", "reset:tim4", "TIM4", "RCC_APB1RSTR.TIM4RST", "high"},
  {"stm32f401re", "reset:tim5", "TIM5", "RCC_APB1RSTR.TIM5RST", "high"},
  {"stm32f401re", "reset:usart1", "USART1", "RCC_APB2RSTR.USART1RST", "high"},
  {"stm32f401re", "reset:usart2", "USART2", "RCC_APB1RSTR.USART2RST", "high"},
  {"stm32f405rg", "reset:dma1", "DMA1", "RCC_AHB1RSTR.DMA1RST", "high"},
  {"stm32f405rg", "reset:dma2", "DMA2", "RCC_AHB1RSTR.DMA2RST", "high"},
  {"stm32f405rg", "reset:gpioa", "GPIOA", "RCC_AHB1RSTR.GPIOARST", "high"},
  {"stm32f405rg", "reset:gpiob", "GPIOB", "RCC_AHB1RSTR.GPIOBRST", "high"},
  {"stm32f405rg", "reset:gpioc", "GPIOC", "RCC_AHB1RSTR.GPIOCRST", "high"},
  {"stm32f405rg", "reset:gpiod", "GPIOD", "RCC_AHB1RSTR.GPIODRST", "high"},
  {"stm32f405rg", "reset:gpioh", "GPIOH", "RCC_AHB1RSTR.GPIOHRST", "high"},
  {"stm32f405rg", "reset:i2c1", "I2C1", "RCC_APB1RSTR.I2C1RST", "high"},
  {"stm32f405rg", "reset:i2c2", "I2C2", "RCC_APB1RSTR.I2C2RST", "high"},
  {"stm32f405rg", "reset:spi1", "SPI1", "RCC_APB2RSTR.SPI1RST", "high"},
  {"stm32f405rg", "reset:spi2", "SPI2", "RCC_APB1RSTR.SPI2RST", "high"},
  {"stm32f405rg", "reset:tim1", "TIM1", "RCC_APB2RSTR.TIM1RST", "high"},
  {"stm32f405rg", "reset:tim2", "TIM2", "RCC_APB1RSTR.TIM2RST", "high"},
  {"stm32f405rg", "reset:tim3", "TIM3", "RCC_APB1RSTR.TIM3RST", "high"},
  {"stm32f405rg", "reset:tim4", "TIM4", "RCC_APB1RSTR.TIM4RST", "high"},
  {"stm32f405rg", "reset:tim5", "TIM5", "RCC_APB1RSTR.TIM5RST", "high"},
  {"stm32f405rg", "reset:usart1", "USART1", "RCC_APB2RSTR.USART1RST", "high"},
  {"stm32f405rg", "reset:usart2", "USART2", "RCC_APB1RSTR.USART2RST", "high"},
}};

struct PeripheralClockBindingDescriptor {
  const char* device;
  const char* peripheral;
  const char* clock_gate_id;
  const char* reset_id;
  const char* selector_id;
};
inline constexpr std::array<PeripheralClockBindingDescriptor, 36> kPeripheralClockBindings = {{
  {"stm32f401re", "DMA1", "gate:dma1", "reset:dma1", nullptr},
  {"stm32f401re", "DMA2", "gate:dma2", "reset:dma2", nullptr},
  {"stm32f401re", "GPIOA", "gate:gpioa", "reset:gpioa", nullptr},
  {"stm32f401re", "GPIOB", "gate:gpiob", "reset:gpiob", nullptr},
  {"stm32f401re", "GPIOC", "gate:gpioc", "reset:gpioc", nullptr},
  {"stm32f401re", "GPIOD", "gate:gpiod", "reset:gpiod", nullptr},
  {"stm32f401re", "GPIOH", "gate:gpioh", "reset:gpioh", nullptr},
  {"stm32f401re", "I2C1", "gate:i2c1", "reset:i2c1", nullptr},
  {"stm32f401re", "I2C2", "gate:i2c2", "reset:i2c2", nullptr},
  {"stm32f401re", "SPI1", "gate:spi1", "reset:spi1", nullptr},
  {"stm32f401re", "SPI2", "gate:spi2", "reset:spi2", nullptr},
  {"stm32f401re", "TIM1", "gate:tim1", "reset:tim1", nullptr},
  {"stm32f401re", "TIM2", "gate:tim2", "reset:tim2", nullptr},
  {"stm32f401re", "TIM3", "gate:tim3", "reset:tim3", nullptr},
  {"stm32f401re", "TIM4", "gate:tim4", "reset:tim4", nullptr},
  {"stm32f401re", "TIM5", "gate:tim5", "reset:tim5", nullptr},
  {"stm32f401re", "USART1", "gate:usart1", "reset:usart1", nullptr},
  {"stm32f401re", "USART2", "gate:usart2", "reset:usart2", nullptr},
  {"stm32f405rg", "DMA1", "gate:dma1", "reset:dma1", nullptr},
  {"stm32f405rg", "DMA2", "gate:dma2", "reset:dma2", nullptr},
  {"stm32f405rg", "GPIOA", "gate:gpioa", "reset:gpioa", nullptr},
  {"stm32f405rg", "GPIOB", "gate:gpiob", "reset:gpiob", nullptr},
  {"stm32f405rg", "GPIOC", "gate:gpioc", "reset:gpioc", nullptr},
  {"stm32f405rg", "GPIOD", "gate:gpiod", "reset:gpiod", nullptr},
  {"stm32f405rg", "GPIOH", "gate:gpioh", "reset:gpioh", nullptr},
  {"stm32f405rg", "I2C1", "gate:i2c1", "reset:i2c1", nullptr},
  {"stm32f405rg", "I2C2", "gate:i2c2", "reset:i2c2", nullptr},
  {"stm32f405rg", "SPI1", "gate:spi1", "reset:spi1", nullptr},
  {"stm32f405rg", "SPI2", "gate:spi2", "reset:spi2", nullptr},
  {"stm32f405rg", "TIM1", "gate:tim1", "reset:tim1", nullptr},
  {"stm32f405rg", "TIM2", "gate:tim2", "reset:tim2", nullptr},
  {"stm32f405rg", "TIM3", "gate:tim3", "reset:tim3", nullptr},
  {"stm32f405rg", "TIM4", "gate:tim4", "reset:tim4", nullptr},
  {"stm32f405rg", "TIM5", "gate:tim5", "reset:tim5", nullptr},
  {"stm32f405rg", "USART1", "gate:usart1", "reset:usart1", nullptr},
  {"stm32f405rg", "USART2", "gate:usart2", "reset:usart2", nullptr},
}};
}
}
}
