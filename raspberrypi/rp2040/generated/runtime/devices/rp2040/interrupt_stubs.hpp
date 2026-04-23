#pragma once

#include <array>
#include <cstdint>
#include "interrupts.hpp"
#include "startup.hpp"

extern "C" {
void Default_Handler();
void TIMER_IRQ_0_IRQHandler() __attribute__((weak));
void TIMER_IRQ_1_IRQHandler() __attribute__((weak));
void TIMER_IRQ_2_IRQHandler() __attribute__((weak));
void TIMER_IRQ_3_IRQHandler() __attribute__((weak));
void PWM_IRQ_WRAP_IRQHandler() __attribute__((weak));
void USBCTRL_IRQ_IRQHandler() __attribute__((weak));
void XIP_IRQ_IRQHandler() __attribute__((weak));
void PIO0_IRQ_0_IRQHandler() __attribute__((weak));
void PIO0_IRQ_1_IRQHandler() __attribute__((weak));
void PIO1_IRQ_0_IRQHandler() __attribute__((weak));
void PIO1_IRQ_1_IRQHandler() __attribute__((weak));
void DMA_IRQ_0_IRQHandler() __attribute__((weak));
void DMA_IRQ_1_IRQHandler() __attribute__((weak));
void IO_IRQ_BANK0_IRQHandler() __attribute__((weak));
void IO_IRQ_QSPI_IRQHandler() __attribute__((weak));
void SIO_IRQ_PROC0_IRQHandler() __attribute__((weak));
void SIO_IRQ_PROC1_IRQHandler() __attribute__((weak));
void CLOCKS_IRQ_IRQHandler() __attribute__((weak));
void SPI0_IRQ_IRQHandler() __attribute__((weak));
void SPI1_IRQ_IRQHandler() __attribute__((weak));
void UART0_IRQ_IRQHandler() __attribute__((weak));
void UART1_IRQ_IRQHandler() __attribute__((weak));
void ADC_IRQ_FIFO_IRQHandler() __attribute__((weak));
void I2C0_IRQ_IRQHandler() __attribute__((weak));
void I2C1_IRQ_IRQHandler() __attribute__((weak));
void RTC_IRQ_IRQHandler() __attribute__((weak));
void SPARE_IRQ_0_IRQHandler() __attribute__((weak));
void SPARE_IRQ_1_IRQHandler() __attribute__((weak));
void SPARE_IRQ_2_IRQHandler() __attribute__((weak));
void SPARE_IRQ_3_IRQHandler() __attribute__((weak));
void SPARE_IRQ_4_IRQHandler() __attribute__((weak));
void SPARE_IRQ_5_IRQHandler() __attribute__((weak));
}

namespace raspberrypi {
namespace rp2040 {
namespace generated {
namespace runtime {
namespace devices {
namespace rp2040 {
struct InterruptStubDescriptor {
  InterruptId interrupt_id;
  StartupSymbolId symbol_id;
  std::uint16_t line;
  std::uint16_t vector_slot;
};
inline constexpr std::array<InterruptStubDescriptor, 32> kInterruptStubs = {{
  {InterruptId::TIMER_IRQ_0, StartupSymbolId::TIMER_IRQ_0_IRQHandler, 0u, 16u},
  {InterruptId::TIMER_IRQ_1, StartupSymbolId::TIMER_IRQ_1_IRQHandler, 1u, 17u},
  {InterruptId::TIMER_IRQ_2, StartupSymbolId::TIMER_IRQ_2_IRQHandler, 2u, 18u},
  {InterruptId::TIMER_IRQ_3, StartupSymbolId::TIMER_IRQ_3_IRQHandler, 3u, 19u},
  {InterruptId::PWM_IRQ_WRAP, StartupSymbolId::PWM_IRQ_WRAP_IRQHandler, 4u, 20u},
  {InterruptId::USBCTRL_IRQ, StartupSymbolId::USBCTRL_IRQ_IRQHandler, 5u, 21u},
  {InterruptId::XIP_IRQ, StartupSymbolId::XIP_IRQ_IRQHandler, 6u, 22u},
  {InterruptId::PIO0_IRQ_0, StartupSymbolId::PIO0_IRQ_0_IRQHandler, 7u, 23u},
  {InterruptId::PIO0_IRQ_1, StartupSymbolId::PIO0_IRQ_1_IRQHandler, 8u, 24u},
  {InterruptId::PIO1_IRQ_0, StartupSymbolId::PIO1_IRQ_0_IRQHandler, 9u, 25u},
  {InterruptId::PIO1_IRQ_1, StartupSymbolId::PIO1_IRQ_1_IRQHandler, 10u, 26u},
  {InterruptId::DMA_IRQ_0, StartupSymbolId::DMA_IRQ_0_IRQHandler, 11u, 27u},
  {InterruptId::DMA_IRQ_1, StartupSymbolId::DMA_IRQ_1_IRQHandler, 12u, 28u},
  {InterruptId::IO_IRQ_BANK0, StartupSymbolId::IO_IRQ_BANK0_IRQHandler, 13u, 29u},
  {InterruptId::IO_IRQ_QSPI, StartupSymbolId::IO_IRQ_QSPI_IRQHandler, 14u, 30u},
  {InterruptId::SIO_IRQ_PROC0, StartupSymbolId::SIO_IRQ_PROC0_IRQHandler, 15u, 31u},
  {InterruptId::SIO_IRQ_PROC1, StartupSymbolId::SIO_IRQ_PROC1_IRQHandler, 16u, 32u},
  {InterruptId::CLOCKS_IRQ, StartupSymbolId::CLOCKS_IRQ_IRQHandler, 17u, 33u},
  {InterruptId::SPI0_IRQ, StartupSymbolId::SPI0_IRQ_IRQHandler, 18u, 34u},
  {InterruptId::SPI1_IRQ, StartupSymbolId::SPI1_IRQ_IRQHandler, 19u, 35u},
  {InterruptId::UART0_IRQ, StartupSymbolId::UART0_IRQ_IRQHandler, 20u, 36u},
  {InterruptId::UART1_IRQ, StartupSymbolId::UART1_IRQ_IRQHandler, 21u, 37u},
  {InterruptId::ADC_IRQ_FIFO, StartupSymbolId::ADC_IRQ_FIFO_IRQHandler, 22u, 38u},
  {InterruptId::I2C0_IRQ, StartupSymbolId::I2C0_IRQ_IRQHandler, 23u, 39u},
  {InterruptId::I2C1_IRQ, StartupSymbolId::I2C1_IRQ_IRQHandler, 24u, 40u},
  {InterruptId::RTC_IRQ, StartupSymbolId::RTC_IRQ_IRQHandler, 25u, 41u},
  {InterruptId::SPARE_IRQ_0, StartupSymbolId::SPARE_IRQ_0_IRQHandler, 26u, 42u},
  {InterruptId::SPARE_IRQ_1, StartupSymbolId::SPARE_IRQ_1_IRQHandler, 27u, 43u},
  {InterruptId::SPARE_IRQ_2, StartupSymbolId::SPARE_IRQ_2_IRQHandler, 28u, 44u},
  {InterruptId::SPARE_IRQ_3, StartupSymbolId::SPARE_IRQ_3_IRQHandler, 29u, 45u},
  {InterruptId::SPARE_IRQ_4, StartupSymbolId::SPARE_IRQ_4_IRQHandler, 30u, 46u},
  {InterruptId::SPARE_IRQ_5, StartupSymbolId::SPARE_IRQ_5_IRQHandler, 31u, 47u},
}};

template<InterruptId Id>
struct InterruptStubTraits {
  static constexpr bool kPresent = false;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::none;
  static constexpr std::uint16_t kLine = 0xFFFFu;
  static constexpr std::uint16_t kVectorSlot = 0xFFFFu;
};

template<>
struct InterruptStubTraits<InterruptId::TIMER_IRQ_0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIMER_IRQ_0_IRQHandler;
  static constexpr std::uint16_t kLine = 0u;
  static constexpr std::uint16_t kVectorSlot = 16u;
};

template<>
struct InterruptStubTraits<InterruptId::TIMER_IRQ_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIMER_IRQ_1_IRQHandler;
  static constexpr std::uint16_t kLine = 1u;
  static constexpr std::uint16_t kVectorSlot = 17u;
};

template<>
struct InterruptStubTraits<InterruptId::TIMER_IRQ_2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIMER_IRQ_2_IRQHandler;
  static constexpr std::uint16_t kLine = 2u;
  static constexpr std::uint16_t kVectorSlot = 18u;
};

template<>
struct InterruptStubTraits<InterruptId::TIMER_IRQ_3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIMER_IRQ_3_IRQHandler;
  static constexpr std::uint16_t kLine = 3u;
  static constexpr std::uint16_t kVectorSlot = 19u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM_IRQ_WRAP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM_IRQ_WRAP_IRQHandler;
  static constexpr std::uint16_t kLine = 4u;
  static constexpr std::uint16_t kVectorSlot = 20u;
};

template<>
struct InterruptStubTraits<InterruptId::USBCTRL_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USBCTRL_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 5u;
  static constexpr std::uint16_t kVectorSlot = 21u;
};

template<>
struct InterruptStubTraits<InterruptId::XIP_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::XIP_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 6u;
  static constexpr std::uint16_t kVectorSlot = 22u;
};

template<>
struct InterruptStubTraits<InterruptId::PIO0_IRQ_0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PIO0_IRQ_0_IRQHandler;
  static constexpr std::uint16_t kLine = 7u;
  static constexpr std::uint16_t kVectorSlot = 23u;
};

template<>
struct InterruptStubTraits<InterruptId::PIO0_IRQ_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PIO0_IRQ_1_IRQHandler;
  static constexpr std::uint16_t kLine = 8u;
  static constexpr std::uint16_t kVectorSlot = 24u;
};

template<>
struct InterruptStubTraits<InterruptId::PIO1_IRQ_0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PIO1_IRQ_0_IRQHandler;
  static constexpr std::uint16_t kLine = 9u;
  static constexpr std::uint16_t kVectorSlot = 25u;
};

template<>
struct InterruptStubTraits<InterruptId::PIO1_IRQ_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PIO1_IRQ_1_IRQHandler;
  static constexpr std::uint16_t kLine = 10u;
  static constexpr std::uint16_t kVectorSlot = 26u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA_IRQ_0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA_IRQ_0_IRQHandler;
  static constexpr std::uint16_t kLine = 11u;
  static constexpr std::uint16_t kVectorSlot = 27u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA_IRQ_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA_IRQ_1_IRQHandler;
  static constexpr std::uint16_t kLine = 12u;
  static constexpr std::uint16_t kVectorSlot = 28u;
};

template<>
struct InterruptStubTraits<InterruptId::IO_IRQ_BANK0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::IO_IRQ_BANK0_IRQHandler;
  static constexpr std::uint16_t kLine = 13u;
  static constexpr std::uint16_t kVectorSlot = 29u;
};

template<>
struct InterruptStubTraits<InterruptId::IO_IRQ_QSPI> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::IO_IRQ_QSPI_IRQHandler;
  static constexpr std::uint16_t kLine = 14u;
  static constexpr std::uint16_t kVectorSlot = 30u;
};

template<>
struct InterruptStubTraits<InterruptId::SIO_IRQ_PROC0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SIO_IRQ_PROC0_IRQHandler;
  static constexpr std::uint16_t kLine = 15u;
  static constexpr std::uint16_t kVectorSlot = 31u;
};

template<>
struct InterruptStubTraits<InterruptId::SIO_IRQ_PROC1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SIO_IRQ_PROC1_IRQHandler;
  static constexpr std::uint16_t kLine = 16u;
  static constexpr std::uint16_t kVectorSlot = 32u;
};

template<>
struct InterruptStubTraits<InterruptId::CLOCKS_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CLOCKS_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 17u;
  static constexpr std::uint16_t kVectorSlot = 33u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI0_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI0_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 18u;
  static constexpr std::uint16_t kVectorSlot = 34u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI1_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI1_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 19u;
  static constexpr std::uint16_t kVectorSlot = 35u;
};

template<>
struct InterruptStubTraits<InterruptId::UART0_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::UART0_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 20u;
  static constexpr std::uint16_t kVectorSlot = 36u;
};

template<>
struct InterruptStubTraits<InterruptId::UART1_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::UART1_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 21u;
  static constexpr std::uint16_t kVectorSlot = 37u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC_IRQ_FIFO> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC_IRQ_FIFO_IRQHandler;
  static constexpr std::uint16_t kLine = 22u;
  static constexpr std::uint16_t kVectorSlot = 38u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C0_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C0_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 23u;
  static constexpr std::uint16_t kVectorSlot = 39u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C1_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C1_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 24u;
  static constexpr std::uint16_t kVectorSlot = 40u;
};

template<>
struct InterruptStubTraits<InterruptId::RTC_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RTC_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 25u;
  static constexpr std::uint16_t kVectorSlot = 41u;
};

template<>
struct InterruptStubTraits<InterruptId::SPARE_IRQ_0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPARE_IRQ_0_IRQHandler;
  static constexpr std::uint16_t kLine = 26u;
  static constexpr std::uint16_t kVectorSlot = 42u;
};

template<>
struct InterruptStubTraits<InterruptId::SPARE_IRQ_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPARE_IRQ_1_IRQHandler;
  static constexpr std::uint16_t kLine = 27u;
  static constexpr std::uint16_t kVectorSlot = 43u;
};

template<>
struct InterruptStubTraits<InterruptId::SPARE_IRQ_2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPARE_IRQ_2_IRQHandler;
  static constexpr std::uint16_t kLine = 28u;
  static constexpr std::uint16_t kVectorSlot = 44u;
};

template<>
struct InterruptStubTraits<InterruptId::SPARE_IRQ_3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPARE_IRQ_3_IRQHandler;
  static constexpr std::uint16_t kLine = 29u;
  static constexpr std::uint16_t kVectorSlot = 45u;
};

template<>
struct InterruptStubTraits<InterruptId::SPARE_IRQ_4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPARE_IRQ_4_IRQHandler;
  static constexpr std::uint16_t kLine = 30u;
  static constexpr std::uint16_t kVectorSlot = 46u;
};

template<>
struct InterruptStubTraits<InterruptId::SPARE_IRQ_5> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPARE_IRQ_5_IRQHandler;
  static constexpr std::uint16_t kLine = 31u;
  static constexpr std::uint16_t kVectorSlot = 47u;
};

}
}
}
}
}
}
