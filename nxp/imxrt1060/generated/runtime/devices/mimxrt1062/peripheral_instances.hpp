#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1062 {
enum class PeripheralId : std::uint16_t {
  none,
  DMA0,
  DMAMUX1,
  GPIO1,
  GPIO10,
  GPIO2,
  GPIO3,
  GPIO4,
  GPIO5,
  GPIO6,
  GPIO7,
  GPIO8,
  GPIO9,
  LPSPI1,
  LPSPI2,
  LPSPI3,
  LPSPI4,
  LPUART1,
  LPUART2,
  LPUART3,
  LPUART4,
  LPUART5,
  LPUART6,
  LPUART7,
  LPUART8,
};

enum class ClockGateId : std::uint16_t {
  none,
  gate_gpio1,
  gate_gpio2,
  gate_gpio3,
  gate_gpio4,
  gate_gpio5,
  gate_lpspi1,
  gate_lpspi2,
  gate_lpspi3,
  gate_lpspi4,
  gate_lpuart1,
  gate_lpuart2,
  gate_lpuart3,
  gate_lpuart4,
  gate_lpuart5,
  gate_lpuart6,
  gate_lpuart7,
  gate_lpuart8,
};

enum class ResetId : std::uint16_t {
  none,
};

enum class ClockSelectorId : std::uint16_t {
  none,
  selector_lpspi_root,
  selector_lpuart_root,
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
struct PeripheralInstanceTraits<PeripheralId::DMA0> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dma;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_dma_nxp_dma;
  static constexpr int kInstance = 0;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::DMAMUX1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_dma_router;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_dma_router_nxp_dmamux;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x400EC000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_gpio;
  static constexpr int kInstance = 10;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr int kInstance = 3;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio3;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr int kInstance = 4;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio4;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO5> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr int kInstance = 5;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_gpio5;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO6> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_gpio;
  static constexpr int kInstance = 6;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO7> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_gpio;
  static constexpr int kInstance = 7;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO8> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_gpio;
  static constexpr int kInstance = 8;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::GPIO9> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_gpio;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_gpio;
  static constexpr int kInstance = 9;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::none;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPSPI1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_nxp_lpspi_v1;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::selector_lpspi_root;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPSPI2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_nxp_lpspi_v1;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPSPI3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_nxp_lpspi_v1;
  static constexpr int kInstance = 3;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi3;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPSPI4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_spi;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_nxp_lpspi_v1;
  static constexpr int kInstance = 4;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpspi4;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPUART1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_nxp_lpuart_v1;
  static constexpr int kInstance = 1;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart1;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::selector_lpuart_root;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPUART2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_nxp_lpuart_v1;
  static constexpr int kInstance = 2;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart2;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPUART3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_nxp_lpuart_v1;
  static constexpr int kInstance = 3;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart3;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPUART4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_nxp_lpuart_v1;
  static constexpr int kInstance = 4;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart4;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPUART5> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_nxp_lpuart_v1;
  static constexpr int kInstance = 5;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart5;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPUART6> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_nxp_lpuart_v1;
  static constexpr int kInstance = 6;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart6;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPUART7> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_nxp_lpuart_v1;
  static constexpr int kInstance = 7;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart7;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

template<>
struct PeripheralInstanceTraits<PeripheralId::LPUART8> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralClassId kPeripheralClassId = PeripheralClassId::class_uart;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_uart_nxp_lpuart_v1;
  static constexpr int kInstance = 8;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr ClockGateId kClockGateId = ClockGateId::gate_lpuart8;
  static constexpr ResetId kResetId = ResetId::none;
  static constexpr ClockSelectorId kSelectorId = ClockSelectorId::none;
};

inline constexpr std::array<PeripheralId, 24> kRuntimePeripherals = {{
  PeripheralId::DMA0,
  PeripheralId::DMAMUX1,
  PeripheralId::GPIO1,
  PeripheralId::GPIO10,
  PeripheralId::GPIO2,
  PeripheralId::GPIO3,
  PeripheralId::GPIO4,
  PeripheralId::GPIO5,
  PeripheralId::GPIO6,
  PeripheralId::GPIO7,
  PeripheralId::GPIO8,
  PeripheralId::GPIO9,
  PeripheralId::LPSPI1,
  PeripheralId::LPSPI2,
  PeripheralId::LPSPI3,
  PeripheralId::LPSPI4,
  PeripheralId::LPUART1,
  PeripheralId::LPUART2,
  PeripheralId::LPUART3,
  PeripheralId::LPUART4,
  PeripheralId::LPUART5,
  PeripheralId::LPUART6,
  PeripheralId::LPUART7,
  PeripheralId::LPUART8,
}};
}
}
}
}
}
}
