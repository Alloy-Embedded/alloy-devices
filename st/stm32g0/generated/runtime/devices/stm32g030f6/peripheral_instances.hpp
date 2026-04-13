#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g030f6 {
enum class PeripheralId : std::uint16_t {
  none,
  DMA1,
  DMAMUX1,
  GPIOA,
  GPIOB,
  GPIOC,
  GPIOD,
  GPIOF,
  SPI1,
  SPI2,
  USART1,
  USART2,
};

enum class ClockGateId : std::uint16_t {
  none,
  gate_dma1,
  gate_dmamux1,
  gate_gpioa,
  gate_gpiob,
  gate_gpioc,
  gate_gpiod,
  gate_gpiof,
  gate_spi1,
  gate_spi2,
  gate_usart1,
  gate_usart2,
};

enum class ResetId : std::uint16_t {
  none,
  reset_dma1,
  reset_dmamux1,
  reset_gpioa,
  reset_gpiob,
  reset_gpioc,
  reset_gpiod,
  reset_gpiof,
  reset_spi1,
  reset_spi2,
  reset_usart1,
  reset_usart2,
};

enum class ClockSelectorId : std::uint16_t {
  none,
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
struct PeripheralInstanceTraits<PeripheralId::SPI1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_st_spi2s1_v3_5_cube;
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
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_st_spi2s1_v3_5_cube;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_spi2;
  static constexpr ResetId kResetId = ResetId::reset_spi2;
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

inline constexpr std::array<PeripheralId, 11> kRuntimePeripherals = {{
  PeripheralId::DMA1,
  PeripheralId::DMAMUX1,
  PeripheralId::GPIOA,
  PeripheralId::GPIOB,
  PeripheralId::GPIOC,
  PeripheralId::GPIOD,
  PeripheralId::GPIOF,
  PeripheralId::SPI1,
  PeripheralId::SPI2,
  PeripheralId::USART1,
  PeripheralId::USART2,
}};
}
}
}
}
}
}
