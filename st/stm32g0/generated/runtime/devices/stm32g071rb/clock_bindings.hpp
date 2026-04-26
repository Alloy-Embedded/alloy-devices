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
namespace stm32g071rb {
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
struct ClockGateTraits<ClockGateId::gate_i2c1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_i2c1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_i2c2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_i2c2en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_lpuart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_lpuart1en;
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
struct ClockGateTraits<ClockGateId::gate_tim15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr2_tim15en;
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
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_tim2en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_tim3en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_tim6en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_tim7en;
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

template<>
struct ClockGateTraits<ClockGateId::gate_usart3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_usart3en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_usart4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbenr1_usart4en;
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
struct ResetTraits<ResetId::reset_i2c1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_i2c1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_i2c2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_i2c2rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_lpuart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_lpuart1rst;
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
struct ResetTraits<ResetId::reset_tim15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr2_tim15rst;
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
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_tim2rst;
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
struct ResetTraits<ResetId::reset_tim6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_tim6rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_tim7rst;
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

template<>
struct ResetTraits<ResetId::reset_usart3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_usart3rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_usart4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apbrstr1_usart4rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<ClockSelectorId Id>
struct ClockSelectorTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<>
struct ClockSelectorTraits<ClockSelectorId::selector_lpuart1_kernel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ccipr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ccipr_lpuart1sel;
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
struct PeripheralClockBindingTraits<PeripheralId::DAC> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
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
struct PeripheralClockBindingTraits<PeripheralId::I2C1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_i2c1;
  static constexpr ResetId kResetId = ResetId::reset_i2c1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::I2C2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_i2c2;
  static constexpr ResetId kResetId = ResetId::reset_i2c2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::IWDG> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::LPUART1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart1;
  static constexpr ResetId kResetId = ResetId::reset_lpuart1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::selector_lpuart1_kernel;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::RTC> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
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
struct PeripheralClockBindingTraits<PeripheralId::TIM15> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim15;
  static constexpr ResetId kResetId = ResetId::reset_tim15;
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
struct PeripheralClockBindingTraits<PeripheralId::TIM6> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim6;
  static constexpr ResetId kResetId = ResetId::reset_tim6;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM7> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim7;
  static constexpr ResetId kResetId = ResetId::reset_tim7;
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

template<>
struct PeripheralClockBindingTraits<PeripheralId::USART3> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart3;
  static constexpr ResetId kResetId = ResetId::reset_usart3;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::USART4> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart4;
  static constexpr ResetId kResetId = ResetId::reset_usart4;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::WWDG> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

inline constexpr std::array<PeripheralId, 30> kClockBoundPeripherals = {{
  PeripheralId::ADC1,
  PeripheralId::DAC,
  PeripheralId::DMA1,
  PeripheralId::DMAMUX1,
  PeripheralId::GPIOA,
  PeripheralId::GPIOB,
  PeripheralId::GPIOC,
  PeripheralId::GPIOD,
  PeripheralId::GPIOF,
  PeripheralId::I2C1,
  PeripheralId::I2C2,
  PeripheralId::IWDG,
  PeripheralId::LPUART1,
  PeripheralId::RTC,
  PeripheralId::SPI1,
  PeripheralId::SPI2,
  PeripheralId::TIM1,
  PeripheralId::TIM14,
  PeripheralId::TIM15,
  PeripheralId::TIM16,
  PeripheralId::TIM17,
  PeripheralId::TIM2,
  PeripheralId::TIM3,
  PeripheralId::TIM6,
  PeripheralId::TIM7,
  PeripheralId::USART1,
  PeripheralId::USART2,
  PeripheralId::USART3,
  PeripheralId::USART4,
  PeripheralId::WWDG,
}};

template <auto> inline constexpr bool kClockBindingDependentFalse = false;

template <PeripheralId Id>
inline auto clock_enable() noexcept -> void {
  static_assert(kClockBindingDependentFalse<Id>, "");
}

template <PeripheralId Id>
inline auto clock_disable() noexcept -> void {
  static_assert(kClockBindingDependentFalse<Id>, "");
}

template <>
inline auto clock_enable<PeripheralId::ADC1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg | (1u << 20);
}
template <>
inline auto clock_disable<PeripheralId::ADC1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg & ~(1u << 20);
}

template <>
inline auto clock_enable<PeripheralId::DMA1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021038u);
  *reg = *reg | (1u << 0);
}
template <>
inline auto clock_disable<PeripheralId::DMA1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021038u);
  *reg = *reg & ~(1u << 0);
}

template <>
inline auto clock_enable<PeripheralId::DMAMUX1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021038u);
  *reg = *reg | (1u << 0);
}
template <>
inline auto clock_disable<PeripheralId::DMAMUX1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021038u);
  *reg = *reg & ~(1u << 0);
}

template <>
inline auto clock_enable<PeripheralId::GPIOA>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg | (1u << 0);
}
template <>
inline auto clock_disable<PeripheralId::GPIOA>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg & ~(1u << 0);
}

template <>
inline auto clock_enable<PeripheralId::GPIOB>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg | (1u << 1);
}
template <>
inline auto clock_disable<PeripheralId::GPIOB>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg & ~(1u << 1);
}

template <>
inline auto clock_enable<PeripheralId::GPIOC>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg | (1u << 2);
}
template <>
inline auto clock_disable<PeripheralId::GPIOC>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg & ~(1u << 2);
}

template <>
inline auto clock_enable<PeripheralId::GPIOD>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg | (1u << 3);
}
template <>
inline auto clock_disable<PeripheralId::GPIOD>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg & ~(1u << 3);
}

template <>
inline auto clock_enable<PeripheralId::GPIOF>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg | (1u << 5);
}
template <>
inline auto clock_disable<PeripheralId::GPIOF>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021034u);
  *reg = *reg & ~(1u << 5);
}

template <>
inline auto clock_enable<PeripheralId::I2C1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 21);
}
template <>
inline auto clock_disable<PeripheralId::I2C1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 21);
}

template <>
inline auto clock_enable<PeripheralId::I2C2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 22);
}
template <>
inline auto clock_disable<PeripheralId::I2C2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 22);
}

template <>
inline auto clock_enable<PeripheralId::LPUART1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 20);
}
template <>
inline auto clock_disable<PeripheralId::LPUART1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 20);
}

template <>
inline auto clock_enable<PeripheralId::SPI1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg | (1u << 12);
}
template <>
inline auto clock_disable<PeripheralId::SPI1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg & ~(1u << 12);
}

template <>
inline auto clock_enable<PeripheralId::SPI2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 14);
}
template <>
inline auto clock_disable<PeripheralId::SPI2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 14);
}

template <>
inline auto clock_enable<PeripheralId::TIM1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg | (1u << 11);
}
template <>
inline auto clock_disable<PeripheralId::TIM1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg & ~(1u << 11);
}

template <>
inline auto clock_enable<PeripheralId::TIM14>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg | (1u << 15);
}
template <>
inline auto clock_disable<PeripheralId::TIM14>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg & ~(1u << 15);
}

template <>
inline auto clock_enable<PeripheralId::TIM15>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg | (1u << 16);
}
template <>
inline auto clock_disable<PeripheralId::TIM15>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg & ~(1u << 16);
}

template <>
inline auto clock_enable<PeripheralId::TIM16>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg | (1u << 17);
}
template <>
inline auto clock_disable<PeripheralId::TIM16>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg & ~(1u << 17);
}

template <>
inline auto clock_enable<PeripheralId::TIM17>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg | (1u << 18);
}
template <>
inline auto clock_disable<PeripheralId::TIM17>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg & ~(1u << 18);
}

template <>
inline auto clock_enable<PeripheralId::TIM2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 0);
}
template <>
inline auto clock_disable<PeripheralId::TIM2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 0);
}

template <>
inline auto clock_enable<PeripheralId::TIM3>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 1);
}
template <>
inline auto clock_disable<PeripheralId::TIM3>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 1);
}

template <>
inline auto clock_enable<PeripheralId::TIM6>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 4);
}
template <>
inline auto clock_disable<PeripheralId::TIM6>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 4);
}

template <>
inline auto clock_enable<PeripheralId::TIM7>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 5);
}
template <>
inline auto clock_disable<PeripheralId::TIM7>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 5);
}

template <>
inline auto clock_enable<PeripheralId::USART1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg | (1u << 14);
}
template <>
inline auto clock_disable<PeripheralId::USART1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40021040u);
  *reg = *reg & ~(1u << 14);
}

template <>
inline auto clock_enable<PeripheralId::USART2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 17);
}
template <>
inline auto clock_disable<PeripheralId::USART2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 17);
}

template <>
inline auto clock_enable<PeripheralId::USART3>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 18);
}
template <>
inline auto clock_disable<PeripheralId::USART3>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 18);
}

template <>
inline auto clock_enable<PeripheralId::USART4>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg | (1u << 19);
}
template <>
inline auto clock_disable<PeripheralId::USART4>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x4002103Cu);
  *reg = *reg & ~(1u << 19);
}

}
}
}
}
}
}
