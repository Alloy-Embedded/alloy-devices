#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "clock_bindings.hpp"
#include "peripheral_instances.hpp"
#include "register_fields.hpp"
#include "registers.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f405rg {
struct ResetDescriptor {
  ResetId reset_id;
  PeripheralId peripheral_id;
  RegisterId register_id;
  FieldId field_id;
  ActiveLevelId active_level_id;
};
inline constexpr std::array<ResetDescriptor, 18> kResetDescriptors = {{
  {ResetId::reset_dma1, PeripheralId::DMA1, RegisterId::register_rcc_ahb1rstr, FieldId::field_rcc_ahb1rstr_dma1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_dma2, PeripheralId::DMA2, RegisterId::register_rcc_ahb1rstr, FieldId::field_rcc_ahb1rstr_dma2rst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpioa, PeripheralId::GPIOA, RegisterId::register_rcc_ahb1rstr, FieldId::field_rcc_ahb1rstr_gpioarst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpiob, PeripheralId::GPIOB, RegisterId::register_rcc_ahb1rstr, FieldId::field_rcc_ahb1rstr_gpiobrst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpioc, PeripheralId::GPIOC, RegisterId::register_rcc_ahb1rstr, FieldId::field_rcc_ahb1rstr_gpiocrst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpiod, PeripheralId::GPIOD, RegisterId::register_rcc_ahb1rstr, FieldId::field_rcc_ahb1rstr_gpiodrst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpioh, PeripheralId::GPIOH, RegisterId::register_rcc_ahb1rstr, FieldId::field_rcc_ahb1rstr_gpiohrst, ActiveLevelId::active_level_high},
  {ResetId::reset_i2c1, PeripheralId::I2C1, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_i2c2, PeripheralId::I2C2, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_i2c2rst, ActiveLevelId::active_level_high},
  {ResetId::reset_spi1, PeripheralId::SPI1, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_spi1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_spi2, PeripheralId::SPI2, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_spi2rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim1, PeripheralId::TIM1, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_tim1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim2, PeripheralId::TIM2, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim2rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim3, PeripheralId::TIM3, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim3rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim4, PeripheralId::TIM4, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim4rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim5, PeripheralId::TIM5, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_tim5rst, ActiveLevelId::active_level_high},
  {ResetId::reset_usart1, PeripheralId::USART1, RegisterId::register_rcc_apb2rstr, FieldId::field_rcc_apb2rstr_usart1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_usart2, PeripheralId::USART2, RegisterId::register_rcc_apb1rstr, FieldId::field_rcc_apb1rstr_usart2rst, ActiveLevelId::active_level_high},
}};
}
}
}
}
}
}
