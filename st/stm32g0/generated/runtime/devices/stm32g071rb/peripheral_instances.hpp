#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g071rb {
enum class PeripheralId : std::uint16_t {
  none,
  ADC1,
  DAC,
  DMA1,
  DMAMUX1,
  GPIOA,
  GPIOB,
  GPIOC,
  GPIOD,
  GPIOF,
  LPUART1,
  SPI1,
  SPI2,
  TIM1,
  TIM14,
  TIM15,
  TIM16,
  TIM17,
  TIM2,
  TIM3,
  TIM6,
  TIM7,
  USART1,
  USART2,
  USART3,
  USART4,
};

enum class ClockGateId : std::uint16_t {
  none,
  gate_adc1,
  gate_dma1,
  gate_dmamux1,
  gate_gpioa,
  gate_gpiob,
  gate_gpioc,
  gate_gpiod,
  gate_gpiof,
  gate_lpuart1,
  gate_spi1,
  gate_spi2,
  gate_tim1,
  gate_tim14,
  gate_tim15,
  gate_tim16,
  gate_tim17,
  gate_tim2,
  gate_tim3,
  gate_tim6,
  gate_tim7,
  gate_usart1,
  gate_usart2,
  gate_usart3,
  gate_usart4,
};

enum class ResetId : std::uint16_t {
  none,
  reset_adc1,
  reset_dma1,
  reset_dmamux1,
  reset_gpioa,
  reset_gpiob,
  reset_gpioc,
  reset_gpiod,
  reset_gpiof,
  reset_lpuart1,
  reset_spi1,
  reset_spi2,
  reset_tim1,
  reset_tim14,
  reset_tim15,
  reset_tim16,
  reset_tim17,
  reset_tim2,
  reset_tim3,
  reset_tim6,
  reset_tim7,
  reset_usart1,
  reset_usart2,
  reset_usart3,
  reset_usart4,
};

enum class ClockSelectorId : std::uint16_t {
  none,
  selector_lpuart1_kernel,
  selector_usart1_kernel,
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
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_adc_st_aditf4_v3_0_g0_cube;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_adc1;
  static constexpr ResetId kResetId = ResetId::reset_adc1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::DAC> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dac;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_dac_st_dac;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
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
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_dma1;
  static constexpr ResetId kResetId = ResetId::reset_dma1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::DMAMUX1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dma_router;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_dma_router_st_dmamux;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_dmamux1;
  static constexpr ResetId kResetId = ResetId::reset_dmamux1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIOA> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_st_gpio;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
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
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
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
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
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
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpiod;
  static constexpr ResetId kResetId = ResetId::reset_gpiod;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIOF> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_st_gpio;
  static constexpr int kInstance = 5;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpiof;
  static constexpr ResetId kResetId = ResetId::reset_gpiof;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPUART1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_st_sci3_v1_2_cube;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart1;
  static constexpr ResetId kResetId = ResetId::reset_lpuart1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::selector_lpuart1_kernel;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::SPI1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_st_spi2s1_v3_3_cube;
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
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_st_spi2s1_v3_3_cube;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_spi2;
  static constexpr ResetId kResetId = ResetId::reset_spi2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim1;
  static constexpr ResetId kResetId = ResetId::reset_tim1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr int kInstance = 14;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim14;
  static constexpr ResetId kResetId = ResetId::reset_tim14;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM15> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr int kInstance = 15;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim15;
  static constexpr ResetId kResetId = ResetId::reset_tim15;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM16> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr int kInstance = 16;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim16;
  static constexpr ResetId kResetId = ResetId::reset_tim16;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM17> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr int kInstance = 17;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim17;
  static constexpr ResetId kResetId = ResetId::reset_tim17;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
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
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr int kInstance = 3;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim3;
  static constexpr ResetId kResetId = ResetId::reset_tim3;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM6> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr int kInstance = 6;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim6;
  static constexpr ResetId kResetId = ResetId::reset_tim6;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::TIM7> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_timer;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr int kInstance = 7;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_tim7;
  static constexpr ResetId kResetId = ResetId::reset_tim7;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::USART1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart1;
  static constexpr ResetId kResetId = ResetId::reset_usart1;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::selector_usart1_kernel;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::USART2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart2;
  static constexpr ResetId kResetId = ResetId::reset_usart2;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::USART3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube;
  static constexpr int kInstance = 3;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart3;
  static constexpr ResetId kResetId = ResetId::reset_usart3;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::USART4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_st_sci3_v2_1_cube;
  static constexpr int kInstance = 4;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_usart4;
  static constexpr ResetId kResetId = ResetId::reset_usart4;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

inline constexpr std::array<PeripheralId, 25> kRuntimePeripherals = {{
  PeripheralId::ADC1,
  PeripheralId::DAC,
  PeripheralId::DMA1,
  PeripheralId::DMAMUX1,
  PeripheralId::GPIOA,
  PeripheralId::GPIOB,
  PeripheralId::GPIOC,
  PeripheralId::GPIOD,
  PeripheralId::GPIOF,
  PeripheralId::LPUART1,
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
}};
}
}
}
}
}
}
