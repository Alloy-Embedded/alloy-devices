#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "peripheral_instances.hpp"
#include "registers.hpp"
#include "register_fields.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g030f6 {
template<ClockGateId Id>
struct ClockGateTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<>
struct ClockGateTraits<ClockGateId::gate_adc1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr2_adcen;
};

template<>
struct ClockGateTraits<ClockGateId::gate_dma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahbenr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahbenr_dma1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_dmamux1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahbenr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahbenr_dma1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpioa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_iopenr_gpioaen;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpiob> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_iopenr_gpioben;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpioc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_iopenr_gpiocen;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpiod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_iopenr_gpioden;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpiof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_iopenr_gpiofen;
};

template<>
struct ClockGateTraits<ClockGateId::gate_spi1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr2_spi1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_spi2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_spi2en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr2_tim1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr2_tim14en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr2_tim16en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr2_tim17en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_tim3en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_usart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr2_usart1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_usart2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_usart2en;
};

template<ResetId Id>
struct ResetTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::none;
};

template<>
struct ResetTraits<ResetId::reset_adc1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr2_adcrst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_dma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahbrstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahbrstr_dma1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_dmamux1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahbrstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahbrstr_dma1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpioa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ioprstr_gpioarst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpiob> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ioprstr_gpiobrst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpioc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ioprstr_gpiocrst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpiod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ioprstr_gpiodrst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpiof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ioprstr_gpiofrst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_spi1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr2_spi1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_spi2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_spi2rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr2_tim1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr2_tim14rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr2_tim16rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr2_tim17rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::none;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_tim3rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_usart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr2_usart1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_usart2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_usart2rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<ClockSelectorId Id>
struct ClockSelectorTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<>
struct ClockSelectorTraits<ClockSelectorId::selector_usart1_kernel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ccipr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ccipr_usart1sel;
};

template<PeripheralId Id>
struct PeripheralClockBindingTraits {
  static constexpr bool kPresent = false;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::ADC1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_adc1;
  static constexpr ResetId kResetId = ResetId::reset_adc1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::DMA1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_dma1;
  static constexpr ResetId kResetId = ResetId::reset_dma1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::DMAMUX1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_dmamux1;
  static constexpr ResetId kResetId = ResetId::reset_dmamux1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOA> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpioa;
  static constexpr ResetId kResetId = ResetId::reset_gpioa;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOB> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpiob;
  static constexpr ResetId kResetId = ResetId::reset_gpiob;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOC> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpioc;
  static constexpr ResetId kResetId = ResetId::reset_gpioc;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOD> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpiod;
  static constexpr ResetId kResetId = ResetId::reset_gpiod;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOF> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpiof;
  static constexpr ResetId kResetId = ResetId::reset_gpiof;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::SPI1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_spi1;
  static constexpr ResetId kResetId = ResetId::reset_spi1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::SPI2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_spi2;
  static constexpr ResetId kResetId = ResetId::reset_spi2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim1;
  static constexpr ResetId kResetId = ResetId::reset_tim1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM14> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim14;
  static constexpr ResetId kResetId = ResetId::reset_tim14;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM16> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim16;
  static constexpr ResetId kResetId = ResetId::reset_tim16;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM17> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim17;
  static constexpr ResetId kResetId = ResetId::reset_tim17;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim2;
  static constexpr ResetId kResetId = ResetId::reset_tim2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM3> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim3;
  static constexpr ResetId kResetId = ResetId::reset_tim3;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::USART1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart1;
  static constexpr ResetId kResetId = ResetId::reset_usart1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::selector_usart1_kernel;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::USART2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart2;
  static constexpr ResetId kResetId = ResetId::reset_usart2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

inline constexpr std::array<PeripheralId, 18> kClockBoundPeripherals = {{
  PeripheralId::ADC1,
  PeripheralId::DMA1,
  PeripheralId::DMAMUX1,
  PeripheralId::GPIOA,
  PeripheralId::GPIOB,
  PeripheralId::GPIOC,
  PeripheralId::GPIOD,
  PeripheralId::GPIOF,
  PeripheralId::SPI1,
  PeripheralId::SPI2,
  PeripheralId::TIM1,
  PeripheralId::TIM14,
  PeripheralId::TIM16,
  PeripheralId::TIM17,
  PeripheralId::TIM2,
  PeripheralId::TIM3,
  PeripheralId::USART1,
  PeripheralId::USART2,
}};
}
}
}
}
}
}
