#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f401re {
enum class PeripheralId : std::uint16_t {
  none,
  ADC1,
  DMA1,
  DMA2,
  GPIOA,
  GPIOB,
  GPIOC,
  GPIOD,
  GPIOE,
  GPIOH,
  I2C1,
  I2C2,
  I2C3,
  IWDG,
  OTG_FS_DEVICE,
  OTG_FS_GLOBAL,
  OTG_FS_HOST,
  OTG_FS_PWRCLK,
  RTC,
  SPI1,
  SPI2,
  SPI3,
  SPI4,
  TIM1,
  TIM10,
  TIM11,
  TIM2,
  TIM3,
  TIM4,
  TIM5,
  TIM8,
  TIM9,
  USART1,
  USART2,
  USART6,
  WWDG,
};

enum class ClockGateId : std::uint16_t {
  none,
  gate_dma1,
  gate_dma2,
  gate_gpioa,
  gate_gpiob,
  gate_gpioc,
  gate_gpiod,
  gate_gpioh,
  gate_i2c1,
  gate_i2c2,
  gate_spi1,
  gate_spi2,
  gate_tim1,
  gate_tim2,
  gate_tim3,
  gate_tim4,
  gate_tim5,
  gate_usart1,
  gate_usart2,
};

enum class ResetId : std::uint16_t {
  none,
  reset_dma1,
  reset_dma2,
  reset_gpioa,
  reset_gpiob,
  reset_gpioc,
  reset_gpiod,
  reset_gpioh,
  reset_i2c1,
  reset_i2c2,
  reset_spi1,
  reset_spi2,
  reset_tim1,
  reset_tim2,
  reset_tim3,
  reset_tim4,
  reset_tim5,
  reset_usart1,
  reset_usart2,
};

enum class ClockSelectorId : std::uint16_t {
  none,
};

template<PeripheralId Id>
struct PeripheralInstanceTraits {
  static constexpr bool kPresent = false;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr int kInstance = -1;
  static constexpr std::uintptr_t kBaseAddress = 0u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::ADC1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_adc;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_adc_st_aditf2_v1_1_cube;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::DMA1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dma;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_dma_st_dma;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_dma1;
  static constexpr ResetId kResetId = ResetId::reset_dma1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::DMA2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dma;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_dma_st_dma;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_dma2;
  static constexpr ResetId kResetId = ResetId::reset_dma2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIOA> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_st_gpio;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpioa;
  static constexpr ResetId kResetId = ResetId::reset_gpioa;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIOB> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_st_gpio;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpiob;
  static constexpr ResetId kResetId = ResetId::reset_gpiob;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIOC> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_st_gpio;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpioc;
  static constexpr ResetId kResetId = ResetId::reset_gpioc;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIOD> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_st_gpio;
  static constexpr int kInstance = 3;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpiod;
  static constexpr ResetId kResetId = ResetId::reset_gpiod;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIOE> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_st_gpio;
  static constexpr int kInstance = 4;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIOH> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_st_gpio;
  static constexpr int kInstance = 7;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpioh;
  static constexpr ResetId kResetId = ResetId::reset_gpioh;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::I2C1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_i2c_st_i2c1_v1_5_cube;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_i2c1;
  static constexpr ResetId kResetId = ResetId::reset_i2c1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::I2C2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_i2c_st_i2c1_v1_5_cube;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_i2c2;
  static constexpr ResetId kResetId = ResetId::reset_i2c2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::I2C3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_i2c;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_i2c_st_i2c1_v1_5_cube;
  static constexpr int kInstance = 3;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::IWDG> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_watchdog;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_watchdog_st_iwdg1_v1_1;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::OTG_FS_DEVICE> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_usb;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_usb_st_otg_fs_device;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::OTG_FS_GLOBAL> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_usb;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_usb_st_otg_fs_global;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::OTG_FS_HOST> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_usb;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_usb_st_otg_fs_host;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::OTG_FS_PWRCLK> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_usb;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_usb_st_otg_fs_pwrclk;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x50000E00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::RTC> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_rtc;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_rtc_st_rtc2_v2_3;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::SPI1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_st_spi2s1_v2_2_cube;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_spi1;
  static constexpr ResetId kResetId = ResetId::reset_spi1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::SPI2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_st_spi2s1_v2_2_cube;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_spi2;
  static constexpr ResetId kResetId = ResetId::reset_spi2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::SPI3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_st_spi2s1_v2_2_cube;
  static constexpr int kInstance = 3;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::SPI4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_st_spi;
  static constexpr int kInstance = 4;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim1;
  static constexpr ResetId kResetId = ResetId::reset_tim1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr int kInstance = 10;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr int kInstance = 11;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim2;
  static constexpr ResetId kResetId = ResetId::reset_tim2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr int kInstance = 3;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim3;
  static constexpr ResetId kResetId = ResetId::reset_tim3;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr int kInstance = 4;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim4;
  static constexpr ResetId kResetId = ResetId::reset_tim4;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM5> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr int kInstance = 5;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim5;
  static constexpr ResetId kResetId = ResetId::reset_tim5;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM8> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_tim;
  static constexpr int kInstance = 8;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM9> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr int kInstance = 9;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::USART1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_st_sci2_v1_2_cube;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40011000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart1;
  static constexpr ResetId kResetId = ResetId::reset_usart1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::USART2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_st_sci2_v1_2_cube;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart2;
  static constexpr ResetId kResetId = ResetId::reset_usart2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::USART6> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_st_sci2_v1_2_cube;
  static constexpr int kInstance = 6;
  static constexpr std::uintptr_t kBaseAddress = 0x40011400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::WWDG> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_watchdog;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_watchdog_st_wwdg1_v1_0;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x40002C00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template <PeripheralId Id>
[[nodiscard]] constexpr std::uintptr_t peripheral_base() noexcept {
  static_assert(PeripheralInstanceTraits<Id>::kPresent);
  return PeripheralInstanceTraits<Id>::kBaseAddress;
}

inline constexpr std::array<PeripheralId, 35> kRuntimePeripherals = {{
  PeripheralId::ADC1,
  PeripheralId::DMA1,
  PeripheralId::DMA2,
  PeripheralId::GPIOA,
  PeripheralId::GPIOB,
  PeripheralId::GPIOC,
  PeripheralId::GPIOD,
  PeripheralId::GPIOE,
  PeripheralId::GPIOH,
  PeripheralId::I2C1,
  PeripheralId::I2C2,
  PeripheralId::I2C3,
  PeripheralId::IWDG,
  PeripheralId::OTG_FS_DEVICE,
  PeripheralId::OTG_FS_GLOBAL,
  PeripheralId::OTG_FS_HOST,
  PeripheralId::OTG_FS_PWRCLK,
  PeripheralId::RTC,
  PeripheralId::SPI1,
  PeripheralId::SPI2,
  PeripheralId::SPI3,
  PeripheralId::SPI4,
  PeripheralId::TIM1,
  PeripheralId::TIM10,
  PeripheralId::TIM11,
  PeripheralId::TIM2,
  PeripheralId::TIM3,
  PeripheralId::TIM4,
  PeripheralId::TIM5,
  PeripheralId::TIM8,
  PeripheralId::TIM9,
  PeripheralId::USART1,
  PeripheralId::USART2,
  PeripheralId::USART6,
  PeripheralId::WWDG,
}};
}
}
}
}
}
}
