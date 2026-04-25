#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "peripheral_instances.hpp"
#include "registers.hpp"
#include "register_fields.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f405rg {
template<ClockGateId Id>
struct ClockGateTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
};

template<>
struct ClockGateTraits<ClockGateId::gate_dma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1enr_dma1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_dma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1enr_dma2en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpioa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1enr_gpioaen;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpiob> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1enr_gpioben;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpioc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1enr_gpiocen;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpiod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1enr_gpioden;
};

template<>
struct ClockGateTraits<ClockGateId::gate_gpioh> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1enr_gpiohen;
};

template<>
struct ClockGateTraits<ClockGateId::gate_spi1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb2enr_spi1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_spi2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1enr_spi2en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb2enr_tim1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1enr_tim2en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1enr_tim3en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1enr_tim4en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_tim5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1enr_tim5en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_usart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb2enr_usart1en;
};

template<>
struct ClockGateTraits<ClockGateId::gate_usart2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1enr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1enr_usart2en;
};

template<ResetId Id>
struct ResetTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::none;
};

template<>
struct ResetTraits<ResetId::reset_dma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1rstr_dma1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_dma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1rstr_dma2rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpioa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1rstr_gpioarst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpiob> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1rstr_gpiobrst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpioc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1rstr_gpiocrst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpiod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1rstr_gpiodrst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_gpioh> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_ahb1rstr_gpiohrst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_spi1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb2rstr_spi1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_spi2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1rstr_spi2rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb2rstr_tim1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1rstr_tim2rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1rstr_tim3rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1rstr_tim4rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_tim5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1rstr_tim5rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_usart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb2rstr_usart1rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<>
struct ResetTraits<ResetId::reset_usart2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1rstr;
  static constexpr FieldId kFieldId = FieldId::field_rcc_apb1rstr_usart2rst;
  static constexpr ActiveLevelId kActiveLevelId = ActiveLevelId::active_level_high;
};

template<ClockSelectorId Id>
struct ClockSelectorTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr FieldId kFieldId = FieldId::none;
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
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::ADC2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::ADC3> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::CAN1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::CAN2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
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
struct PeripheralClockBindingTraits<PeripheralId::DMA2> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_dma2;
  static constexpr ResetId kResetId = ResetId::reset_dma2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::Ethernet_DMA> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::Ethernet_MAC> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::Ethernet_MMC> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
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
struct PeripheralClockBindingTraits<PeripheralId::GPIOE> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOF> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOG> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOH> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpioh;
  static constexpr ResetId kResetId = ResetId::reset_gpioh;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOI> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOJ> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::GPIOK> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
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
struct PeripheralClockBindingTraits<PeripheralId::OTG_FS_DEVICE> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::OTG_FS_GLOBAL> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::OTG_FS_HOST> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::OTG_FS_PWRCLK> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::OTG_HS_DEVICE> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::OTG_HS_GLOBAL> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::OTG_HS_HOST> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::OTG_HS_PWRCLK> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
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
struct PeripheralClockBindingTraits<PeripheralId::SPI3> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::SPI4> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::SPI5> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::SPI6> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
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
struct PeripheralClockBindingTraits<PeripheralId::TIM10> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM11> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM12> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM13> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM14> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
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
struct PeripheralClockBindingTraits<PeripheralId::TIM4> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim4;
  static constexpr ResetId kResetId = ResetId::reset_tim4;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM5> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim5;
  static constexpr ResetId kResetId = ResetId::reset_tim5;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM6> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM7> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM8> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::TIM9> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::UART4> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::UART5> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::UART7> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::UART8> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::USART1> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart1;
  static constexpr ResetId kResetId = ResetId::reset_usart1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
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
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::USART6> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralClockBindingTraits<PeripheralId::WWDG> {
  static constexpr bool kPresent = true;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

inline constexpr std::array<PeripheralId, 61> kClockBoundPeripherals = {{
  PeripheralId::ADC1,
  PeripheralId::ADC2,
  PeripheralId::ADC3,
  PeripheralId::CAN1,
  PeripheralId::CAN2,
  PeripheralId::DAC,
  PeripheralId::DMA1,
  PeripheralId::DMA2,
  PeripheralId::Ethernet_DMA,
  PeripheralId::Ethernet_MAC,
  PeripheralId::Ethernet_MMC,
  PeripheralId::GPIOA,
  PeripheralId::GPIOB,
  PeripheralId::GPIOC,
  PeripheralId::GPIOD,
  PeripheralId::GPIOE,
  PeripheralId::GPIOF,
  PeripheralId::GPIOG,
  PeripheralId::GPIOH,
  PeripheralId::GPIOI,
  PeripheralId::GPIOJ,
  PeripheralId::GPIOK,
  PeripheralId::IWDG,
  PeripheralId::OTG_FS_DEVICE,
  PeripheralId::OTG_FS_GLOBAL,
  PeripheralId::OTG_FS_HOST,
  PeripheralId::OTG_FS_PWRCLK,
  PeripheralId::OTG_HS_DEVICE,
  PeripheralId::OTG_HS_GLOBAL,
  PeripheralId::OTG_HS_HOST,
  PeripheralId::OTG_HS_PWRCLK,
  PeripheralId::RTC,
  PeripheralId::SPI1,
  PeripheralId::SPI2,
  PeripheralId::SPI3,
  PeripheralId::SPI4,
  PeripheralId::SPI5,
  PeripheralId::SPI6,
  PeripheralId::TIM1,
  PeripheralId::TIM10,
  PeripheralId::TIM11,
  PeripheralId::TIM12,
  PeripheralId::TIM13,
  PeripheralId::TIM14,
  PeripheralId::TIM2,
  PeripheralId::TIM3,
  PeripheralId::TIM4,
  PeripheralId::TIM5,
  PeripheralId::TIM6,
  PeripheralId::TIM7,
  PeripheralId::TIM8,
  PeripheralId::TIM9,
  PeripheralId::UART4,
  PeripheralId::UART5,
  PeripheralId::UART7,
  PeripheralId::UART8,
  PeripheralId::USART1,
  PeripheralId::USART2,
  PeripheralId::USART3,
  PeripheralId::USART6,
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
inline auto clock_enable<PeripheralId::DMA1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg | (1u << 21);
}
template <>
inline auto clock_disable<PeripheralId::DMA1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg & ~(1u << 21);
}

template <>
inline auto clock_enable<PeripheralId::DMA2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg | (1u << 22);
}
template <>
inline auto clock_disable<PeripheralId::DMA2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg & ~(1u << 22);
}

template <>
inline auto clock_enable<PeripheralId::GPIOA>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg | (1u << 0);
}
template <>
inline auto clock_disable<PeripheralId::GPIOA>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg & ~(1u << 0);
}

template <>
inline auto clock_enable<PeripheralId::GPIOB>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg | (1u << 1);
}
template <>
inline auto clock_disable<PeripheralId::GPIOB>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg & ~(1u << 1);
}

template <>
inline auto clock_enable<PeripheralId::GPIOC>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg | (1u << 2);
}
template <>
inline auto clock_disable<PeripheralId::GPIOC>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg & ~(1u << 2);
}

template <>
inline auto clock_enable<PeripheralId::GPIOD>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg | (1u << 3);
}
template <>
inline auto clock_disable<PeripheralId::GPIOD>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg & ~(1u << 3);
}

template <>
inline auto clock_enable<PeripheralId::GPIOH>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg | (1u << 7);
}
template <>
inline auto clock_disable<PeripheralId::GPIOH>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023830u);
  *reg = *reg & ~(1u << 7);
}

template <>
inline auto clock_enable<PeripheralId::SPI1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023844u);
  *reg = *reg | (1u << 12);
}
template <>
inline auto clock_disable<PeripheralId::SPI1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023844u);
  *reg = *reg & ~(1u << 12);
}

template <>
inline auto clock_enable<PeripheralId::SPI2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg | (1u << 14);
}
template <>
inline auto clock_disable<PeripheralId::SPI2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg & ~(1u << 14);
}

template <>
inline auto clock_enable<PeripheralId::TIM1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023844u);
  *reg = *reg | (1u << 0);
}
template <>
inline auto clock_disable<PeripheralId::TIM1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023844u);
  *reg = *reg & ~(1u << 0);
}

template <>
inline auto clock_enable<PeripheralId::TIM2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg | (1u << 0);
}
template <>
inline auto clock_disable<PeripheralId::TIM2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg & ~(1u << 0);
}

template <>
inline auto clock_enable<PeripheralId::TIM3>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg | (1u << 1);
}
template <>
inline auto clock_disable<PeripheralId::TIM3>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg & ~(1u << 1);
}

template <>
inline auto clock_enable<PeripheralId::TIM4>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg | (1u << 2);
}
template <>
inline auto clock_disable<PeripheralId::TIM4>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg & ~(1u << 2);
}

template <>
inline auto clock_enable<PeripheralId::TIM5>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg | (1u << 3);
}
template <>
inline auto clock_disable<PeripheralId::TIM5>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg & ~(1u << 3);
}

template <>
inline auto clock_enable<PeripheralId::USART1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023844u);
  *reg = *reg | (1u << 4);
}
template <>
inline auto clock_disable<PeripheralId::USART1>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023844u);
  *reg = *reg & ~(1u << 4);
}

template <>
inline auto clock_enable<PeripheralId::USART2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg | (1u << 17);
}
template <>
inline auto clock_disable<PeripheralId::USART2>() noexcept -> void {
  auto* reg = reinterpret_cast<volatile std::uint32_t*>(0x40023840u);
  *reg = *reg & ~(1u << 17);
}

}
}
}
}
}
}
