#pragma once

#include <array>

namespace st {
namespace stm32f4 {
namespace generated {
enum class ClockNodeId : std::uint16_t {
  stm32f401re_clock_node_rcc_ahb1enr,
  stm32f401re_clock_node_rcc_apb1enr,
  stm32f401re_clock_node_rcc_apb2enr,
  stm32f401re_clock_root,
  stm32f405rg_clock_node_rcc_ahb1enr,
  stm32f405rg_clock_node_rcc_apb1enr,
  stm32f405rg_clock_node_rcc_apb2enr,
  stm32f405rg_clock_root,
};

enum class ClockSelectorId : std::uint16_t {
  none,
};

enum class ClockGateId : std::uint16_t {
  stm32f401re_gate_dma1,
  stm32f401re_gate_dma2,
  stm32f401re_gate_gpioa,
  stm32f401re_gate_gpiob,
  stm32f401re_gate_gpioc,
  stm32f401re_gate_gpiod,
  stm32f401re_gate_gpioh,
  stm32f401re_gate_i2c1,
  stm32f401re_gate_i2c2,
  stm32f401re_gate_spi1,
  stm32f401re_gate_spi2,
  stm32f401re_gate_tim1,
  stm32f401re_gate_tim2,
  stm32f401re_gate_tim3,
  stm32f401re_gate_tim4,
  stm32f401re_gate_tim5,
  stm32f401re_gate_usart1,
  stm32f401re_gate_usart2,
  stm32f405rg_gate_dma1,
  stm32f405rg_gate_dma2,
  stm32f405rg_gate_gpioa,
  stm32f405rg_gate_gpiob,
  stm32f405rg_gate_gpioc,
  stm32f405rg_gate_gpiod,
  stm32f405rg_gate_gpioh,
  stm32f405rg_gate_i2c1,
  stm32f405rg_gate_i2c2,
  stm32f405rg_gate_spi1,
  stm32f405rg_gate_spi2,
  stm32f405rg_gate_tim1,
  stm32f405rg_gate_tim2,
  stm32f405rg_gate_tim3,
  stm32f405rg_gate_tim4,
  stm32f405rg_gate_tim5,
  stm32f405rg_gate_usart1,
  stm32f405rg_gate_usart2,
};

enum class ResetId : std::uint16_t {
  stm32f401re_reset_dma1,
  stm32f401re_reset_dma2,
  stm32f401re_reset_gpioa,
  stm32f401re_reset_gpiob,
  stm32f401re_reset_gpioc,
  stm32f401re_reset_gpiod,
  stm32f401re_reset_gpioh,
  stm32f401re_reset_i2c1,
  stm32f401re_reset_i2c2,
  stm32f401re_reset_spi1,
  stm32f401re_reset_spi2,
  stm32f401re_reset_tim1,
  stm32f401re_reset_tim2,
  stm32f401re_reset_tim3,
  stm32f401re_reset_tim4,
  stm32f401re_reset_tim5,
  stm32f401re_reset_usart1,
  stm32f401re_reset_usart2,
  stm32f405rg_reset_dma1,
  stm32f405rg_reset_dma2,
  stm32f405rg_reset_gpioa,
  stm32f405rg_reset_gpiob,
  stm32f405rg_reset_gpioc,
  stm32f405rg_reset_gpiod,
  stm32f405rg_reset_gpioh,
  stm32f405rg_reset_i2c1,
  stm32f405rg_reset_i2c2,
  stm32f405rg_reset_spi1,
  stm32f405rg_reset_spi2,
  stm32f405rg_reset_tim1,
  stm32f405rg_reset_tim2,
  stm32f405rg_reset_tim3,
  stm32f405rg_reset_tim4,
  stm32f405rg_reset_tim5,
  stm32f405rg_reset_usart1,
  stm32f405rg_reset_usart2,
};

struct ClockNodeDescriptor {
  const char* device;
  ClockNodeId node_id;
  const char* node_name;
  const char* kind;
  int parent_index;
  int selector_index;
};
inline constexpr std::array<ClockNodeDescriptor, 8> kClockNodes = {{
  {"stm32f401re", ClockNodeId::stm32f401re_clock_node_rcc_ahb1enr, "clock-node:rcc-ahb1enr", "ahb-domain", 3, -1},
  {"stm32f401re", ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, "clock-node:rcc-apb1enr", "apb-domain", 3, -1},
  {"stm32f401re", ClockNodeId::stm32f401re_clock_node_rcc_apb2enr, "clock-node:rcc-apb2enr", "apb-domain", 3, -1},
  {"stm32f401re", ClockNodeId::stm32f401re_clock_root, "clock-root", "root", -1, -1},
  {"stm32f405rg", ClockNodeId::stm32f405rg_clock_node_rcc_ahb1enr, "clock-node:rcc-ahb1enr", "ahb-domain", 7, -1},
  {"stm32f405rg", ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, "clock-node:rcc-apb1enr", "apb-domain", 7, -1},
  {"stm32f405rg", ClockNodeId::stm32f405rg_clock_node_rcc_apb2enr, "clock-node:rcc-apb2enr", "apb-domain", 7, -1},
  {"stm32f405rg", ClockNodeId::stm32f405rg_clock_root, "clock-root", "root", -1, -1},
}};

struct ClockSelectorDescriptor {
  const char* device;
  ClockSelectorId selector_id;
  const char* selector_name;
  std::uint16_t parent_option_offset;
  std::uint16_t parent_option_count;
  const char* register_target;
  const char* register_peripheral;
  const char* register_name;
  int register_offset;
  const char* register_id;
  const char* register_field_id;
};
inline constexpr std::array<ClockSelectorDescriptor, 0> kClockSelectors = {};

struct ClockSelectorParentOption {
  ClockSelectorId selector_id;
  ClockNodeId parent_node_id;
};
inline constexpr std::array<ClockSelectorParentOption, 0> kClockSelectorParentOptions = {};

struct ClockGateDescriptor {
  const char* device;
  ClockGateId gate_id;
  const char* gate_name;
  const char* peripheral;
  int parent_node_index;
  const char* enable_signal;
  const char* register_peripheral;
  const char* register_name;
  int register_offset;
  const char* register_id;
  const char* register_field_id;
};
inline constexpr std::array<ClockGateDescriptor, 36> kClockGates = {{
  {"stm32f401re", ClockGateId::stm32f401re_gate_dma1, "gate:dma1", "DMA1", 0, "RCC_AHB1ENR.DMA1EN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:dma1en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_dma2, "gate:dma2", "DMA2", 0, "RCC_AHB1ENR.DMA2EN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:dma2en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_gpioa, "gate:gpioa", "GPIOA", 0, "RCC_AHB1ENR.GPIOAEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpioaen"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_gpiob, "gate:gpiob", "GPIOB", 0, "RCC_AHB1ENR.GPIOBEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpioben"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_gpioc, "gate:gpioc", "GPIOC", 0, "RCC_AHB1ENR.GPIOCEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpiocen"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_gpiod, "gate:gpiod", "GPIOD", 0, "RCC_AHB1ENR.GPIODEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpioden"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_gpioh, "gate:gpioh", "GPIOH", 0, "RCC_AHB1ENR.GPIOHEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpiohen"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_i2c1, "gate:i2c1", "I2C1", 1, "RCC_APB1ENR.I2C1EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:i2c1en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_i2c2, "gate:i2c2", "I2C2", 1, "RCC_APB1ENR.I2C2EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:i2c2en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_spi1, "gate:spi1", "SPI1", 2, "RCC_APB2ENR.SPI1EN", "RCC", "APB2ENR", 68, "register:rcc:apb2enr", "field:rcc:apb2enr:spi1en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_spi2, "gate:spi2", "SPI2", 1, "RCC_APB1ENR.SPI2EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:spi2en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_tim1, "gate:tim1", "TIM1", 2, "RCC_APB2ENR.TIM1EN", "RCC", "APB2ENR", 68, "register:rcc:apb2enr", "field:rcc:apb2enr:tim1en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_tim2, "gate:tim2", "TIM2", 1, "RCC_APB1ENR.TIM2EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:tim2en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_tim3, "gate:tim3", "TIM3", 1, "RCC_APB1ENR.TIM3EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:tim3en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_tim4, "gate:tim4", "TIM4", 1, "RCC_APB1ENR.TIM4EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:tim4en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_tim5, "gate:tim5", "TIM5", 1, "RCC_APB1ENR.TIM5EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:tim5en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_usart1, "gate:usart1", "USART1", 2, "RCC_APB2ENR.USART1EN", "RCC", "APB2ENR", 68, "register:rcc:apb2enr", "field:rcc:apb2enr:usart1en"},
  {"stm32f401re", ClockGateId::stm32f401re_gate_usart2, "gate:usart2", "USART2", 1, "RCC_APB1ENR.USART2EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:usart2en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_dma1, "gate:dma1", "DMA1", 4, "RCC_AHB1ENR.DMA1EN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:dma1en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_dma2, "gate:dma2", "DMA2", 4, "RCC_AHB1ENR.DMA2EN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:dma2en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_gpioa, "gate:gpioa", "GPIOA", 4, "RCC_AHB1ENR.GPIOAEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpioaen"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_gpiob, "gate:gpiob", "GPIOB", 4, "RCC_AHB1ENR.GPIOBEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpioben"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_gpioc, "gate:gpioc", "GPIOC", 4, "RCC_AHB1ENR.GPIOCEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpiocen"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_gpiod, "gate:gpiod", "GPIOD", 4, "RCC_AHB1ENR.GPIODEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpioden"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_gpioh, "gate:gpioh", "GPIOH", 4, "RCC_AHB1ENR.GPIOHEN", "RCC", "AHB1ENR", 48, "register:rcc:ahb1enr", "field:rcc:ahb1enr:gpiohen"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_i2c1, "gate:i2c1", "I2C1", 5, "RCC_APB1ENR.I2C1EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:i2c1en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_i2c2, "gate:i2c2", "I2C2", 5, "RCC_APB1ENR.I2C2EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:i2c2en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_spi1, "gate:spi1", "SPI1", 6, "RCC_APB2ENR.SPI1EN", "RCC", "APB2ENR", 68, "register:rcc:apb2enr", "field:rcc:apb2enr:spi1en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_spi2, "gate:spi2", "SPI2", 5, "RCC_APB1ENR.SPI2EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:spi2en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_tim1, "gate:tim1", "TIM1", 6, "RCC_APB2ENR.TIM1EN", "RCC", "APB2ENR", 68, "register:rcc:apb2enr", "field:rcc:apb2enr:tim1en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_tim2, "gate:tim2", "TIM2", 5, "RCC_APB1ENR.TIM2EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:tim2en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_tim3, "gate:tim3", "TIM3", 5, "RCC_APB1ENR.TIM3EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:tim3en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_tim4, "gate:tim4", "TIM4", 5, "RCC_APB1ENR.TIM4EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:tim4en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_tim5, "gate:tim5", "TIM5", 5, "RCC_APB1ENR.TIM5EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:tim5en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_usart1, "gate:usart1", "USART1", 6, "RCC_APB2ENR.USART1EN", "RCC", "APB2ENR", 68, "register:rcc:apb2enr", "field:rcc:apb2enr:usart1en"},
  {"stm32f405rg", ClockGateId::stm32f405rg_gate_usart2, "gate:usart2", "USART2", 5, "RCC_APB1ENR.USART2EN", "RCC", "APB1ENR", 64, "register:rcc:apb1enr", "field:rcc:apb1enr:usart2en"},
}};

struct ResetDescriptor {
  const char* device;
  ResetId reset_id;
  const char* reset_name;
  const char* peripheral;
  const char* reset_signal;
  const char* active_level;
  const char* register_peripheral;
  const char* register_name;
  int register_offset;
  const char* register_id;
  const char* register_field_id;
};
inline constexpr std::array<ResetDescriptor, 36> kResets = {{
  {"stm32f401re", ResetId::stm32f401re_reset_dma1, "reset:dma1", "DMA1", "RCC_AHB1RSTR.DMA1RST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:dma1rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_dma2, "reset:dma2", "DMA2", "RCC_AHB1RSTR.DMA2RST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:dma2rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_gpioa, "reset:gpioa", "GPIOA", "RCC_AHB1RSTR.GPIOARST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpioarst"},
  {"stm32f401re", ResetId::stm32f401re_reset_gpiob, "reset:gpiob", "GPIOB", "RCC_AHB1RSTR.GPIOBRST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpiobrst"},
  {"stm32f401re", ResetId::stm32f401re_reset_gpioc, "reset:gpioc", "GPIOC", "RCC_AHB1RSTR.GPIOCRST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpiocrst"},
  {"stm32f401re", ResetId::stm32f401re_reset_gpiod, "reset:gpiod", "GPIOD", "RCC_AHB1RSTR.GPIODRST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpiodrst"},
  {"stm32f401re", ResetId::stm32f401re_reset_gpioh, "reset:gpioh", "GPIOH", "RCC_AHB1RSTR.GPIOHRST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpiohrst"},
  {"stm32f401re", ResetId::stm32f401re_reset_i2c1, "reset:i2c1", "I2C1", "RCC_APB1RSTR.I2C1RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:i2c1rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_i2c2, "reset:i2c2", "I2C2", "RCC_APB1RSTR.I2C2RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:i2c2rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_spi1, "reset:spi1", "SPI1", "RCC_APB2RSTR.SPI1RST", "high", "RCC", "APB2RSTR", 36, "register:rcc:apb2rstr", "field:rcc:apb2rstr:spi1rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_spi2, "reset:spi2", "SPI2", "RCC_APB1RSTR.SPI2RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:spi2rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_tim1, "reset:tim1", "TIM1", "RCC_APB2RSTR.TIM1RST", "high", "RCC", "APB2RSTR", 36, "register:rcc:apb2rstr", "field:rcc:apb2rstr:tim1rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_tim2, "reset:tim2", "TIM2", "RCC_APB1RSTR.TIM2RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:tim2rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_tim3, "reset:tim3", "TIM3", "RCC_APB1RSTR.TIM3RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:tim3rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_tim4, "reset:tim4", "TIM4", "RCC_APB1RSTR.TIM4RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:tim4rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_tim5, "reset:tim5", "TIM5", "RCC_APB1RSTR.TIM5RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:tim5rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_usart1, "reset:usart1", "USART1", "RCC_APB2RSTR.USART1RST", "high", "RCC", "APB2RSTR", 36, "register:rcc:apb2rstr", "field:rcc:apb2rstr:usart1rst"},
  {"stm32f401re", ResetId::stm32f401re_reset_usart2, "reset:usart2", "USART2", "RCC_APB1RSTR.USART2RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", nullptr},
  {"stm32f405rg", ResetId::stm32f405rg_reset_dma1, "reset:dma1", "DMA1", "RCC_AHB1RSTR.DMA1RST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:dma1rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_dma2, "reset:dma2", "DMA2", "RCC_AHB1RSTR.DMA2RST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:dma2rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_gpioa, "reset:gpioa", "GPIOA", "RCC_AHB1RSTR.GPIOARST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpioarst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_gpiob, "reset:gpiob", "GPIOB", "RCC_AHB1RSTR.GPIOBRST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpiobrst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_gpioc, "reset:gpioc", "GPIOC", "RCC_AHB1RSTR.GPIOCRST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpiocrst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_gpiod, "reset:gpiod", "GPIOD", "RCC_AHB1RSTR.GPIODRST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpiodrst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_gpioh, "reset:gpioh", "GPIOH", "RCC_AHB1RSTR.GPIOHRST", "high", "RCC", "AHB1RSTR", 16, "register:rcc:ahb1rstr", "field:rcc:ahb1rstr:gpiohrst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_i2c1, "reset:i2c1", "I2C1", "RCC_APB1RSTR.I2C1RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:i2c1rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_i2c2, "reset:i2c2", "I2C2", "RCC_APB1RSTR.I2C2RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:i2c2rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_spi1, "reset:spi1", "SPI1", "RCC_APB2RSTR.SPI1RST", "high", "RCC", "APB2RSTR", 36, "register:rcc:apb2rstr", "field:rcc:apb2rstr:spi1rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_spi2, "reset:spi2", "SPI2", "RCC_APB1RSTR.SPI2RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:spi2rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_tim1, "reset:tim1", "TIM1", "RCC_APB2RSTR.TIM1RST", "high", "RCC", "APB2RSTR", 36, "register:rcc:apb2rstr", "field:rcc:apb2rstr:tim1rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_tim2, "reset:tim2", "TIM2", "RCC_APB1RSTR.TIM2RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:tim2rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_tim3, "reset:tim3", "TIM3", "RCC_APB1RSTR.TIM3RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:tim3rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_tim4, "reset:tim4", "TIM4", "RCC_APB1RSTR.TIM4RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:tim4rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_tim5, "reset:tim5", "TIM5", "RCC_APB1RSTR.TIM5RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", "field:rcc:apb1rstr:tim5rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_usart1, "reset:usart1", "USART1", "RCC_APB2RSTR.USART1RST", "high", "RCC", "APB2RSTR", 36, "register:rcc:apb2rstr", "field:rcc:apb2rstr:usart1rst"},
  {"stm32f405rg", ResetId::stm32f405rg_reset_usart2, "reset:usart2", "USART2", "RCC_APB1RSTR.USART2RST", "high", "RCC", "APB1RSTR", 32, "register:rcc:apb1rstr", nullptr},
}};

struct PeripheralClockBindingDescriptor {
  const char* device;
  const char* peripheral;
  int clock_gate_index;
  int reset_index;
  int selector_index;
};
inline constexpr std::array<PeripheralClockBindingDescriptor, 36> kPeripheralClockBindings = {{
  {"stm32f401re", "DMA1", 0, 0, -1},
  {"stm32f401re", "DMA2", 1, 1, -1},
  {"stm32f401re", "GPIOA", 2, 2, -1},
  {"stm32f401re", "GPIOB", 3, 3, -1},
  {"stm32f401re", "GPIOC", 4, 4, -1},
  {"stm32f401re", "GPIOD", 5, 5, -1},
  {"stm32f401re", "GPIOH", 6, 6, -1},
  {"stm32f401re", "I2C1", 7, 7, -1},
  {"stm32f401re", "I2C2", 8, 8, -1},
  {"stm32f401re", "SPI1", 9, 9, -1},
  {"stm32f401re", "SPI2", 10, 10, -1},
  {"stm32f401re", "TIM1", 11, 11, -1},
  {"stm32f401re", "TIM2", 12, 12, -1},
  {"stm32f401re", "TIM3", 13, 13, -1},
  {"stm32f401re", "TIM4", 14, 14, -1},
  {"stm32f401re", "TIM5", 15, 15, -1},
  {"stm32f401re", "USART1", 16, 16, -1},
  {"stm32f401re", "USART2", 17, 17, -1},
  {"stm32f405rg", "DMA1", 18, 18, -1},
  {"stm32f405rg", "DMA2", 19, 19, -1},
  {"stm32f405rg", "GPIOA", 20, 20, -1},
  {"stm32f405rg", "GPIOB", 21, 21, -1},
  {"stm32f405rg", "GPIOC", 22, 22, -1},
  {"stm32f405rg", "GPIOD", 23, 23, -1},
  {"stm32f405rg", "GPIOH", 24, 24, -1},
  {"stm32f405rg", "I2C1", 25, 25, -1},
  {"stm32f405rg", "I2C2", 26, 26, -1},
  {"stm32f405rg", "SPI1", 27, 27, -1},
  {"stm32f405rg", "SPI2", 28, 28, -1},
  {"stm32f405rg", "TIM1", 29, 29, -1},
  {"stm32f405rg", "TIM2", 30, 30, -1},
  {"stm32f405rg", "TIM3", 31, 31, -1},
  {"stm32f405rg", "TIM4", 32, 32, -1},
  {"stm32f405rg", "TIM5", 33, 33, -1},
  {"stm32f405rg", "USART1", 34, 34, -1},
  {"stm32f405rg", "USART2", 35, 35, -1},
}};
}
}
}
