#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "clock_bindings.hpp"
#include "peripheral_instances.hpp"
#include "register_fields.hpp"
#include "registers.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g071rb {
struct ResetDescriptor {
  ResetId reset_id;
  PeripheralId peripheral_id;
  RegisterId register_id;
  FieldId field_id;
  ActiveLevelId active_level_id;
};
inline constexpr std::array<ResetDescriptor, 26> kResetDescriptors = {{
  {ResetId::reset_adc1, PeripheralId::ADC1, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_adcrst, ActiveLevelId::active_level_high},
  {ResetId::reset_dma1, PeripheralId::DMA1, RegisterId::register_rcc_ahbrstr, FieldId::field_rcc_ahbrstr_dma1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_dmamux1, PeripheralId::DMAMUX1, RegisterId::register_rcc_ahbrstr, FieldId::field_rcc_ahbrstr_dma1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpioa, PeripheralId::GPIOA, RegisterId::register_rcc_ioprstr, FieldId::field_rcc_ioprstr_gpioarst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpiob, PeripheralId::GPIOB, RegisterId::register_rcc_ioprstr, FieldId::field_rcc_ioprstr_gpiobrst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpioc, PeripheralId::GPIOC, RegisterId::register_rcc_ioprstr, FieldId::field_rcc_ioprstr_gpiocrst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpiod, PeripheralId::GPIOD, RegisterId::register_rcc_ioprstr, FieldId::field_rcc_ioprstr_gpiodrst, ActiveLevelId::active_level_high},
  {ResetId::reset_gpiof, PeripheralId::GPIOF, RegisterId::register_rcc_ioprstr, FieldId::field_rcc_ioprstr_gpiofrst, ActiveLevelId::active_level_high},
  {ResetId::reset_i2c1, PeripheralId::I2C1, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_i2c1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_i2c2, PeripheralId::I2C2, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_i2c2rst, ActiveLevelId::active_level_high},
  {ResetId::reset_lpuart1, PeripheralId::LPUART1, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_lpuart1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_spi1, PeripheralId::SPI1, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_spi1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_spi2, PeripheralId::SPI2, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_spi2rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim1, PeripheralId::TIM1, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim14, PeripheralId::TIM14, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim14rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim15, PeripheralId::TIM15, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim15rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim16, PeripheralId::TIM16, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim16rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim17, PeripheralId::TIM17, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_tim17rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim2, PeripheralId::TIM2, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim2rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim3, PeripheralId::TIM3, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim3rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim6, PeripheralId::TIM6, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim6rst, ActiveLevelId::active_level_high},
  {ResetId::reset_tim7, PeripheralId::TIM7, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_tim7rst, ActiveLevelId::active_level_high},
  {ResetId::reset_usart1, PeripheralId::USART1, RegisterId::register_rcc_apbrstr2, FieldId::field_rcc_apbrstr2_usart1rst, ActiveLevelId::active_level_high},
  {ResetId::reset_usart2, PeripheralId::USART2, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart2rst, ActiveLevelId::active_level_high},
  {ResetId::reset_usart3, PeripheralId::USART3, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart3rst, ActiveLevelId::active_level_high},
  {ResetId::reset_usart4, PeripheralId::USART4, RegisterId::register_rcc_apbrstr1, FieldId::field_rcc_apbrstr1_usart4rst, ActiveLevelId::active_level_high},
}};
}
}
}
}
}
}
