#pragma once

#include <array>
#include "runtime_refs.hpp"
#include "runtime_semantics.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
enum class ClockNodeId : std::uint16_t {
  none,
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
  none,
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
  none,
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
  DeviceRefId device_id;
  ClockNodeId node_id;
  ClockNodeKindId kind_id;
  ClockNodeId parent_node_id;
  ClockSelectorId selector_id;
};
inline constexpr std::array<ClockNodeDescriptor, 8> kClockNodes = {{
  {DeviceRefId::stm32f401re, ClockNodeId::stm32f401re_clock_node_rcc_ahb1enr, ClockNodeKindId::clock_node_kind_ahb_domain, ClockNodeId::stm32f401re_clock_root, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, ClockNodeKindId::clock_node_kind_apb_domain, ClockNodeId::stm32f401re_clock_root, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, ClockNodeId::stm32f401re_clock_node_rcc_apb2enr, ClockNodeKindId::clock_node_kind_apb_domain, ClockNodeId::stm32f401re_clock_root, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, ClockNodeId::stm32f401re_clock_root, ClockNodeKindId::clock_node_kind_root, ClockNodeId::none, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, ClockNodeId::stm32f405rg_clock_node_rcc_ahb1enr, ClockNodeKindId::clock_node_kind_ahb_domain, ClockNodeId::stm32f405rg_clock_root, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, ClockNodeKindId::clock_node_kind_apb_domain, ClockNodeId::stm32f405rg_clock_root, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, ClockNodeId::stm32f405rg_clock_node_rcc_apb2enr, ClockNodeKindId::clock_node_kind_apb_domain, ClockNodeId::stm32f405rg_clock_root, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, ClockNodeId::stm32f405rg_clock_root, ClockNodeKindId::clock_node_kind_root, ClockNodeId::none, ClockSelectorId::none},
}};

struct ClockSelectorDescriptor {
  DeviceRefId device_id;
  ClockSelectorId selector_id;
  std::uint16_t parent_option_offset;
  std::uint16_t parent_option_count;
  RegisterRefId register_id;
  RegisterFieldRefId register_field_id;
};
inline constexpr std::array<ClockSelectorDescriptor, 0> kClockSelectors = {};

struct ClockSelectorParentOption {
  ClockSelectorId selector_id;
  ClockNodeId parent_node_id;
};
inline constexpr std::array<ClockSelectorParentOption, 0> kClockSelectorParentOptions = {};

struct ClockGateDescriptor {
  DeviceRefId device_id;
  ClockGateId gate_id;
  PeripheralRefId peripheral_id;
  ClockNodeId parent_node_id;
  RegisterRefId register_id;
  RegisterFieldRefId register_field_id;
};
inline constexpr std::array<ClockGateDescriptor, 36> kClockGates = {{
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_dma1, PeripheralRefId::stm32f401re_DMA1, ClockNodeId::stm32f401re_clock_node_rcc_ahb1enr, RegisterRefId::stm32f401re_register_rcc_ahb1enr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1enr_dma1en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_dma2, PeripheralRefId::stm32f401re_DMA2, ClockNodeId::stm32f401re_clock_node_rcc_ahb1enr, RegisterRefId::stm32f401re_register_rcc_ahb1enr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1enr_dma2en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_gpioa, PeripheralRefId::stm32f401re_GPIOA, ClockNodeId::stm32f401re_clock_node_rcc_ahb1enr, RegisterRefId::stm32f401re_register_rcc_ahb1enr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1enr_gpioaen},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_gpiob, PeripheralRefId::stm32f401re_GPIOB, ClockNodeId::stm32f401re_clock_node_rcc_ahb1enr, RegisterRefId::stm32f401re_register_rcc_ahb1enr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1enr_gpioben},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_gpioc, PeripheralRefId::stm32f401re_GPIOC, ClockNodeId::stm32f401re_clock_node_rcc_ahb1enr, RegisterRefId::stm32f401re_register_rcc_ahb1enr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1enr_gpiocen},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_gpiod, PeripheralRefId::stm32f401re_GPIOD, ClockNodeId::stm32f401re_clock_node_rcc_ahb1enr, RegisterRefId::stm32f401re_register_rcc_ahb1enr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1enr_gpioden},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_gpioh, PeripheralRefId::stm32f401re_GPIOH, ClockNodeId::stm32f401re_clock_node_rcc_ahb1enr, RegisterRefId::stm32f401re_register_rcc_ahb1enr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1enr_gpiohen},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_i2c1, PeripheralRefId::stm32f401re_I2C1, ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, RegisterRefId::stm32f401re_register_rcc_apb1enr, RegisterFieldRefId::stm32f401re_field_rcc_apb1enr_i2c1en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_i2c2, PeripheralRefId::stm32f401re_I2C2, ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, RegisterRefId::stm32f401re_register_rcc_apb1enr, RegisterFieldRefId::stm32f401re_field_rcc_apb1enr_i2c2en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_spi1, PeripheralRefId::stm32f401re_SPI1, ClockNodeId::stm32f401re_clock_node_rcc_apb2enr, RegisterRefId::stm32f401re_register_rcc_apb2enr, RegisterFieldRefId::stm32f401re_field_rcc_apb2enr_spi1en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_spi2, PeripheralRefId::stm32f401re_SPI2, ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, RegisterRefId::stm32f401re_register_rcc_apb1enr, RegisterFieldRefId::stm32f401re_field_rcc_apb1enr_spi2en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_tim1, PeripheralRefId::stm32f401re_TIM1, ClockNodeId::stm32f401re_clock_node_rcc_apb2enr, RegisterRefId::stm32f401re_register_rcc_apb2enr, RegisterFieldRefId::stm32f401re_field_rcc_apb2enr_tim1en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_tim2, PeripheralRefId::stm32f401re_TIM2, ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, RegisterRefId::stm32f401re_register_rcc_apb1enr, RegisterFieldRefId::stm32f401re_field_rcc_apb1enr_tim2en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_tim3, PeripheralRefId::stm32f401re_TIM3, ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, RegisterRefId::stm32f401re_register_rcc_apb1enr, RegisterFieldRefId::stm32f401re_field_rcc_apb1enr_tim3en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_tim4, PeripheralRefId::stm32f401re_TIM4, ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, RegisterRefId::stm32f401re_register_rcc_apb1enr, RegisterFieldRefId::stm32f401re_field_rcc_apb1enr_tim4en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_tim5, PeripheralRefId::stm32f401re_TIM5, ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, RegisterRefId::stm32f401re_register_rcc_apb1enr, RegisterFieldRefId::stm32f401re_field_rcc_apb1enr_tim5en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_usart1, PeripheralRefId::stm32f401re_USART1, ClockNodeId::stm32f401re_clock_node_rcc_apb2enr, RegisterRefId::stm32f401re_register_rcc_apb2enr, RegisterFieldRefId::stm32f401re_field_rcc_apb2enr_usart1en},
  {DeviceRefId::stm32f401re, ClockGateId::stm32f401re_gate_usart2, PeripheralRefId::stm32f401re_USART2, ClockNodeId::stm32f401re_clock_node_rcc_apb1enr, RegisterRefId::stm32f401re_register_rcc_apb1enr, RegisterFieldRefId::stm32f401re_field_rcc_apb1enr_usart2en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_dma1, PeripheralRefId::stm32f405rg_DMA1, ClockNodeId::stm32f405rg_clock_node_rcc_ahb1enr, RegisterRefId::stm32f405rg_register_rcc_ahb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1enr_dma1en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_dma2, PeripheralRefId::stm32f405rg_DMA2, ClockNodeId::stm32f405rg_clock_node_rcc_ahb1enr, RegisterRefId::stm32f405rg_register_rcc_ahb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1enr_dma2en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_gpioa, PeripheralRefId::stm32f405rg_GPIOA, ClockNodeId::stm32f405rg_clock_node_rcc_ahb1enr, RegisterRefId::stm32f405rg_register_rcc_ahb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1enr_gpioaen},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_gpiob, PeripheralRefId::stm32f405rg_GPIOB, ClockNodeId::stm32f405rg_clock_node_rcc_ahb1enr, RegisterRefId::stm32f405rg_register_rcc_ahb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1enr_gpioben},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_gpioc, PeripheralRefId::stm32f405rg_GPIOC, ClockNodeId::stm32f405rg_clock_node_rcc_ahb1enr, RegisterRefId::stm32f405rg_register_rcc_ahb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1enr_gpiocen},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_gpiod, PeripheralRefId::stm32f405rg_GPIOD, ClockNodeId::stm32f405rg_clock_node_rcc_ahb1enr, RegisterRefId::stm32f405rg_register_rcc_ahb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1enr_gpioden},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_gpioh, PeripheralRefId::stm32f405rg_GPIOH, ClockNodeId::stm32f405rg_clock_node_rcc_ahb1enr, RegisterRefId::stm32f405rg_register_rcc_ahb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1enr_gpiohen},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_i2c1, PeripheralRefId::stm32f405rg_I2C1, ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, RegisterRefId::stm32f405rg_register_rcc_apb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1enr_i2c1en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_i2c2, PeripheralRefId::stm32f405rg_I2C2, ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, RegisterRefId::stm32f405rg_register_rcc_apb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1enr_i2c2en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_spi1, PeripheralRefId::stm32f405rg_SPI1, ClockNodeId::stm32f405rg_clock_node_rcc_apb2enr, RegisterRefId::stm32f405rg_register_rcc_apb2enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb2enr_spi1en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_spi2, PeripheralRefId::stm32f405rg_SPI2, ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, RegisterRefId::stm32f405rg_register_rcc_apb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1enr_spi2en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_tim1, PeripheralRefId::stm32f405rg_TIM1, ClockNodeId::stm32f405rg_clock_node_rcc_apb2enr, RegisterRefId::stm32f405rg_register_rcc_apb2enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb2enr_tim1en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_tim2, PeripheralRefId::stm32f405rg_TIM2, ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, RegisterRefId::stm32f405rg_register_rcc_apb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1enr_tim2en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_tim3, PeripheralRefId::stm32f405rg_TIM3, ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, RegisterRefId::stm32f405rg_register_rcc_apb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1enr_tim3en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_tim4, PeripheralRefId::stm32f405rg_TIM4, ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, RegisterRefId::stm32f405rg_register_rcc_apb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1enr_tim4en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_tim5, PeripheralRefId::stm32f405rg_TIM5, ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, RegisterRefId::stm32f405rg_register_rcc_apb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1enr_tim5en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_usart1, PeripheralRefId::stm32f405rg_USART1, ClockNodeId::stm32f405rg_clock_node_rcc_apb2enr, RegisterRefId::stm32f405rg_register_rcc_apb2enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb2enr_usart1en},
  {DeviceRefId::stm32f405rg, ClockGateId::stm32f405rg_gate_usart2, PeripheralRefId::stm32f405rg_USART2, ClockNodeId::stm32f405rg_clock_node_rcc_apb1enr, RegisterRefId::stm32f405rg_register_rcc_apb1enr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1enr_usart2en},
}};

struct ResetDescriptor {
  DeviceRefId device_id;
  ResetId reset_id;
  PeripheralRefId peripheral_id;
  ActiveLevelId active_level_id;
  RegisterRefId register_id;
  RegisterFieldRefId register_field_id;
};
inline constexpr std::array<ResetDescriptor, 36> kResets = {{
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_dma1, PeripheralRefId::stm32f401re_DMA1, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1rstr_dma1rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_dma2, PeripheralRefId::stm32f401re_DMA2, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1rstr_dma2rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_gpioa, PeripheralRefId::stm32f401re_GPIOA, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1rstr_gpioarst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_gpiob, PeripheralRefId::stm32f401re_GPIOB, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1rstr_gpiobrst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_gpioc, PeripheralRefId::stm32f401re_GPIOC, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1rstr_gpiocrst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_gpiod, PeripheralRefId::stm32f401re_GPIOD, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1rstr_gpiodrst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_gpioh, PeripheralRefId::stm32f401re_GPIOH, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_ahb1rstr_gpiohrst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_i2c1, PeripheralRefId::stm32f401re_I2C1, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb1rstr_i2c1rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_i2c2, PeripheralRefId::stm32f401re_I2C2, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb1rstr_i2c2rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_spi1, PeripheralRefId::stm32f401re_SPI1, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb2rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb2rstr_spi1rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_spi2, PeripheralRefId::stm32f401re_SPI2, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb1rstr_spi2rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_tim1, PeripheralRefId::stm32f401re_TIM1, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb2rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb2rstr_tim1rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_tim2, PeripheralRefId::stm32f401re_TIM2, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb1rstr_tim2rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_tim3, PeripheralRefId::stm32f401re_TIM3, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb1rstr_tim3rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_tim4, PeripheralRefId::stm32f401re_TIM4, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb1rstr_tim4rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_tim5, PeripheralRefId::stm32f401re_TIM5, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb1rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb1rstr_tim5rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_usart1, PeripheralRefId::stm32f401re_USART1, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb2rstr, RegisterFieldRefId::stm32f401re_field_rcc_apb2rstr_usart1rst},
  {DeviceRefId::stm32f401re, ResetId::stm32f401re_reset_usart2, PeripheralRefId::stm32f401re_USART2, ActiveLevelId::active_level_high, RegisterRefId::stm32f401re_register_rcc_apb1rstr, RegisterFieldRefId::none},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_dma1, PeripheralRefId::stm32f405rg_DMA1, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1rstr_dma1rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_dma2, PeripheralRefId::stm32f405rg_DMA2, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1rstr_dma2rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_gpioa, PeripheralRefId::stm32f405rg_GPIOA, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1rstr_gpioarst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_gpiob, PeripheralRefId::stm32f405rg_GPIOB, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1rstr_gpiobrst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_gpioc, PeripheralRefId::stm32f405rg_GPIOC, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1rstr_gpiocrst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_gpiod, PeripheralRefId::stm32f405rg_GPIOD, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1rstr_gpiodrst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_gpioh, PeripheralRefId::stm32f405rg_GPIOH, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_ahb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_ahb1rstr_gpiohrst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_i2c1, PeripheralRefId::stm32f405rg_I2C1, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1rstr_i2c1rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_i2c2, PeripheralRefId::stm32f405rg_I2C2, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1rstr_i2c2rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_spi1, PeripheralRefId::stm32f405rg_SPI1, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb2rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb2rstr_spi1rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_spi2, PeripheralRefId::stm32f405rg_SPI2, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1rstr_spi2rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_tim1, PeripheralRefId::stm32f405rg_TIM1, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb2rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb2rstr_tim1rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_tim2, PeripheralRefId::stm32f405rg_TIM2, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1rstr_tim2rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_tim3, PeripheralRefId::stm32f405rg_TIM3, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1rstr_tim3rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_tim4, PeripheralRefId::stm32f405rg_TIM4, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1rstr_tim4rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_tim5, PeripheralRefId::stm32f405rg_TIM5, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb1rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb1rstr_tim5rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_usart1, PeripheralRefId::stm32f405rg_USART1, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb2rstr, RegisterFieldRefId::stm32f405rg_field_rcc_apb2rstr_usart1rst},
  {DeviceRefId::stm32f405rg, ResetId::stm32f405rg_reset_usart2, PeripheralRefId::stm32f405rg_USART2, ActiveLevelId::active_level_high, RegisterRefId::stm32f405rg_register_rcc_apb1rstr, RegisterFieldRefId::none},
}};

struct PeripheralClockBindingDescriptor {
  DeviceRefId device_id;
  PeripheralRefId peripheral_id;
  ClockGateId clock_gate_id;
  ResetId reset_id;
  ClockSelectorId selector_id;
};
inline constexpr std::array<PeripheralClockBindingDescriptor, 36> kPeripheralClockBindings = {{
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_DMA1, ClockGateId::stm32f401re_gate_dma1, ResetId::stm32f401re_reset_dma1, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_DMA2, ClockGateId::stm32f401re_gate_dma2, ResetId::stm32f401re_reset_dma2, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOA, ClockGateId::stm32f401re_gate_gpioa, ResetId::stm32f401re_reset_gpioa, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOB, ClockGateId::stm32f401re_gate_gpiob, ResetId::stm32f401re_reset_gpiob, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOC, ClockGateId::stm32f401re_gate_gpioc, ResetId::stm32f401re_reset_gpioc, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOD, ClockGateId::stm32f401re_gate_gpiod, ResetId::stm32f401re_reset_gpiod, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_GPIOH, ClockGateId::stm32f401re_gate_gpioh, ResetId::stm32f401re_reset_gpioh, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_I2C1, ClockGateId::stm32f401re_gate_i2c1, ResetId::stm32f401re_reset_i2c1, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_I2C2, ClockGateId::stm32f401re_gate_i2c2, ResetId::stm32f401re_reset_i2c2, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_SPI1, ClockGateId::stm32f401re_gate_spi1, ResetId::stm32f401re_reset_spi1, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_SPI2, ClockGateId::stm32f401re_gate_spi2, ResetId::stm32f401re_reset_spi2, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM1, ClockGateId::stm32f401re_gate_tim1, ResetId::stm32f401re_reset_tim1, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM2, ClockGateId::stm32f401re_gate_tim2, ResetId::stm32f401re_reset_tim2, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM3, ClockGateId::stm32f401re_gate_tim3, ResetId::stm32f401re_reset_tim3, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM4, ClockGateId::stm32f401re_gate_tim4, ResetId::stm32f401re_reset_tim4, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_TIM5, ClockGateId::stm32f401re_gate_tim5, ResetId::stm32f401re_reset_tim5, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_USART1, ClockGateId::stm32f401re_gate_usart1, ResetId::stm32f401re_reset_usart1, ClockSelectorId::none},
  {DeviceRefId::stm32f401re, PeripheralRefId::stm32f401re_USART2, ClockGateId::stm32f401re_gate_usart2, ResetId::stm32f401re_reset_usart2, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_DMA1, ClockGateId::stm32f405rg_gate_dma1, ResetId::stm32f405rg_reset_dma1, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_DMA2, ClockGateId::stm32f405rg_gate_dma2, ResetId::stm32f405rg_reset_dma2, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOA, ClockGateId::stm32f405rg_gate_gpioa, ResetId::stm32f405rg_reset_gpioa, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOB, ClockGateId::stm32f405rg_gate_gpiob, ResetId::stm32f405rg_reset_gpiob, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOC, ClockGateId::stm32f405rg_gate_gpioc, ResetId::stm32f405rg_reset_gpioc, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOD, ClockGateId::stm32f405rg_gate_gpiod, ResetId::stm32f405rg_reset_gpiod, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_GPIOH, ClockGateId::stm32f405rg_gate_gpioh, ResetId::stm32f405rg_reset_gpioh, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_I2C1, ClockGateId::stm32f405rg_gate_i2c1, ResetId::stm32f405rg_reset_i2c1, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_I2C2, ClockGateId::stm32f405rg_gate_i2c2, ResetId::stm32f405rg_reset_i2c2, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_SPI1, ClockGateId::stm32f405rg_gate_spi1, ResetId::stm32f405rg_reset_spi1, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_SPI2, ClockGateId::stm32f405rg_gate_spi2, ResetId::stm32f405rg_reset_spi2, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM1, ClockGateId::stm32f405rg_gate_tim1, ResetId::stm32f405rg_reset_tim1, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM2, ClockGateId::stm32f405rg_gate_tim2, ResetId::stm32f405rg_reset_tim2, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM3, ClockGateId::stm32f405rg_gate_tim3, ResetId::stm32f405rg_reset_tim3, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM4, ClockGateId::stm32f405rg_gate_tim4, ResetId::stm32f405rg_reset_tim4, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_TIM5, ClockGateId::stm32f405rg_gate_tim5, ResetId::stm32f405rg_reset_tim5, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_USART1, ClockGateId::stm32f405rg_gate_usart1, ResetId::stm32f405rg_reset_usart1, ClockSelectorId::none},
  {DeviceRefId::stm32f405rg, PeripheralRefId::stm32f405rg_USART2, ClockGateId::stm32f405rg_gate_usart2, ResetId::stm32f405rg_reset_usart2, ClockSelectorId::none},
}};
}
}
}
