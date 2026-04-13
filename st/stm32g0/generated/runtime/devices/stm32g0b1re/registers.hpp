#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g0b1re {
enum class RegisterId : std::uint16_t {
  none,
  register_dma1_dma_isr,
  register_dma1_dma_ifcr,
  register_dma1_dma_ccr1,
  register_dma1_dma_cndtr1,
  register_dma1_dma_cpar1,
  register_dma1_dma_cmar1,
  register_dma1_dma_ccr2,
  register_dma1_dma_cndtr2,
  register_dma1_dma_cpar2,
  register_dma1_dma_cmar2,
  register_dma1_dma_ccr3,
  register_dma1_dma_cndtr3,
  register_dma1_dma_cpar3,
  register_dma1_dma_cmar3,
  register_dma1_dma_ccr4,
  register_dma1_dma_cndtr4,
  register_dma1_dma_cpar4,
  register_dma1_dma_cmar4,
  register_dma1_dma_ccr5,
  register_dma1_dma_cndtr5,
  register_dma1_dma_cpar5,
  register_dma1_dma_cmar5,
  register_dma1_dma_ccr6,
  register_dma1_dma_cndtr6,
  register_dma1_dma_cpar6,
  register_dma1_dma_cmar6,
  register_dma1_dma_ccr7,
  register_dma1_dma_cndtr7,
  register_dma1_dma_cpar7,
  register_dma1_dma_cmar7,
  register_dma2_dma_isr,
  register_dma2_dma_ifcr,
  register_dma2_dma_ccr1,
  register_dma2_dma_cndtr1,
  register_dma2_dma_cpar1,
  register_dma2_dma_cmar1,
  register_dma2_dma_ccr2,
  register_dma2_dma_cndtr2,
  register_dma2_dma_cpar2,
  register_dma2_dma_cmar2,
  register_dma2_dma_ccr3,
  register_dma2_dma_cndtr3,
  register_dma2_dma_cpar3,
  register_dma2_dma_cmar3,
  register_dma2_dma_ccr4,
  register_dma2_dma_cndtr4,
  register_dma2_dma_cpar4,
  register_dma2_dma_cmar4,
  register_dma2_dma_ccr5,
  register_dma2_dma_cndtr5,
  register_dma2_dma_cpar5,
  register_dma2_dma_cmar5,
  register_dma2_dma_ccr6,
  register_dma2_dma_cndtr6,
  register_dma2_dma_cpar6,
  register_dma2_dma_cmar6,
  register_dma2_dma_ccr7,
  register_dma2_dma_cndtr7,
  register_dma2_dma_cpar7,
  register_dma2_dma_cmar7,
  register_dmamux1_dmamux_c0cr,
  register_dmamux1_dmamux_c1cr,
  register_dmamux1_dmamux_c2cr,
  register_dmamux1_dmamux_c3cr,
  register_dmamux1_dmamux_c4cr,
  register_dmamux1_dmamux_c5cr,
  register_dmamux1_dmamux_c6cr,
  register_dmamux1_dmamux_csr,
  register_dmamux1_dmamux_cfr,
  register_dmamux1_dmamux_rg0cr,
  register_dmamux1_dmamux_rg1cr,
  register_dmamux1_dmamux_rg2cr,
  register_dmamux1_dmamux_rg3cr,
  register_dmamux1_dmamux_rgsr,
  register_dmamux1_dmamux_rgcfr,
  register_gpioa_moder,
  register_gpioa_otyper,
  register_gpioa_ospeedr,
  register_gpioa_pupdr,
  register_gpioa_idr,
  register_gpioa_odr,
  register_gpioa_bsrr,
  register_gpioa_lckr,
  register_gpioa_afrl,
  register_gpioa_afrh,
  register_gpioa_brr,
  register_gpiob_moder,
  register_gpiob_otyper,
  register_gpiob_ospeedr,
  register_gpiob_pupdr,
  register_gpiob_idr,
  register_gpiob_odr,
  register_gpiob_bsrr,
  register_gpiob_lckr,
  register_gpiob_afrl,
  register_gpiob_afrh,
  register_gpiob_brr,
  register_gpioc_moder,
  register_gpioc_otyper,
  register_gpioc_ospeedr,
  register_gpioc_pupdr,
  register_gpioc_idr,
  register_gpioc_odr,
  register_gpioc_bsrr,
  register_gpioc_lckr,
  register_gpioc_afrl,
  register_gpioc_afrh,
  register_gpioc_brr,
  register_gpiod_moder,
  register_gpiod_otyper,
  register_gpiod_ospeedr,
  register_gpiod_pupdr,
  register_gpiod_idr,
  register_gpiod_odr,
  register_gpiod_bsrr,
  register_gpiod_lckr,
  register_gpiod_afrl,
  register_gpiod_afrh,
  register_gpiod_brr,
  register_gpioe_moder,
  register_gpioe_otyper,
  register_gpioe_ospeedr,
  register_gpioe_pupdr,
  register_gpioe_idr,
  register_gpioe_odr,
  register_gpioe_bsrr,
  register_gpioe_lckr,
  register_gpioe_afrl,
  register_gpioe_afrh,
  register_gpioe_brr,
  register_gpiof_moder,
  register_gpiof_otyper,
  register_gpiof_ospeedr,
  register_gpiof_pupdr,
  register_gpiof_idr,
  register_gpiof_odr,
  register_gpiof_bsrr,
  register_gpiof_lckr,
  register_gpiof_afrl,
  register_gpiof_afrh,
  register_gpiof_brr,
  register_lpuart1_lpuart_cr1_disabled,
  register_lpuart1_lpuart_cr2,
  register_lpuart1_lpuart_cr3,
  register_lpuart1_lpuart_brr,
  register_lpuart1_lpuart_rqr,
  register_lpuart1_lpuart_isr_disabled,
  register_lpuart1_lpuart_icr,
  register_lpuart1_lpuart_rdr,
  register_lpuart1_lpuart_tdr,
  register_lpuart1_lpuart_presc,
  register_lpuart2_lpuart_cr1_disabled,
  register_lpuart2_lpuart_cr2,
  register_lpuart2_lpuart_cr3,
  register_lpuart2_lpuart_brr,
  register_lpuart2_lpuart_rqr,
  register_lpuart2_lpuart_isr_disabled,
  register_lpuart2_lpuart_icr,
  register_lpuart2_lpuart_rdr,
  register_lpuart2_lpuart_tdr,
  register_lpuart2_lpuart_presc,
  register_rcc_ioprstr,
  register_rcc_ahbrstr,
  register_rcc_apbrstr1,
  register_rcc_apbrstr2,
  register_rcc_iopenr,
  register_rcc_ahbenr,
  register_rcc_apbenr1,
  register_rcc_apbenr2,
  register_rcc_ccipr,
  register_spi1_spi_cr1,
  register_spi1_spi_cr2,
  register_spi1_spi_sr,
  register_spi1_spi_dr,
  register_spi1_spi_crcpr,
  register_spi1_spi_rxcrcr,
  register_spi1_spi_txcrcr,
  register_spi1_spi_i2scfgr,
  register_spi1_spi_i2spr,
  register_spi2_spi_cr1,
  register_spi2_spi_cr2,
  register_spi2_spi_sr,
  register_spi2_spi_dr,
  register_spi2_spi_crcpr,
  register_spi2_spi_rxcrcr,
  register_spi2_spi_txcrcr,
  register_spi2_spi_i2scfgr,
  register_spi2_spi_i2spr,
  register_spi3_spi_cr1,
  register_spi3_spi_cr2,
  register_spi3_spi_sr,
  register_spi3_spi_dr,
  register_spi3_spi_crcpr,
  register_spi3_spi_rxcrcr,
  register_spi3_spi_txcrcr,
  register_spi3_spi_i2scfgr,
  register_spi3_spi_i2spr,
  register_usart1_cr1_fifo_disabled,
  register_usart1_cr2,
  register_usart1_cr3,
  register_usart1_brr,
  register_usart1_gtpr,
  register_usart1_rtor,
  register_usart1_rqr,
  register_usart1_isr_fifo_disabled,
  register_usart1_icr,
  register_usart1_rdr,
  register_usart1_tdr,
  register_usart1_presc,
  register_usart2_cr1_fifo_disabled,
  register_usart2_cr2,
  register_usart2_cr3,
  register_usart2_brr,
  register_usart2_gtpr,
  register_usart2_rtor,
  register_usart2_rqr,
  register_usart2_isr_fifo_disabled,
  register_usart2_icr,
  register_usart2_rdr,
  register_usart2_tdr,
  register_usart2_presc,
  register_usart3_cr1_fifo_disabled,
  register_usart3_cr2,
  register_usart3_cr3,
  register_usart3_brr,
  register_usart3_gtpr,
  register_usart3_rtor,
  register_usart3_rqr,
  register_usart3_isr_fifo_disabled,
  register_usart3_icr,
  register_usart3_rdr,
  register_usart3_tdr,
  register_usart3_presc,
  register_usart4_cr1_fifo_disabled,
  register_usart4_cr2,
  register_usart4_cr3,
  register_usart4_brr,
  register_usart4_gtpr,
  register_usart4_rtor,
  register_usart4_rqr,
  register_usart4_isr_fifo_disabled,
  register_usart4_icr,
  register_usart4_rdr,
  register_usart4_tdr,
  register_usart4_presc,
  register_usart5_cr1_fifo_disabled,
  register_usart5_cr2,
  register_usart5_cr3,
  register_usart5_brr,
  register_usart5_gtpr,
  register_usart5_rtor,
  register_usart5_rqr,
  register_usart5_isr_fifo_disabled,
  register_usart5_icr,
  register_usart5_rdr,
  register_usart5_tdr,
  register_usart5_presc,
  register_usart6_cr1_fifo_disabled,
  register_usart6_cr2,
  register_usart6_cr3,
  register_usart6_brr,
  register_usart6_gtpr,
  register_usart6_rtor,
  register_usart6_rqr,
  register_usart6_isr_fifo_disabled,
  register_usart6_icr,
  register_usart6_rdr,
  register_usart6_tdr,
  register_usart6_presc,
};

template<RegisterId Id>
struct RegisterTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uintptr_t kBaseAddress = 0u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_ifcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cndtr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cpar1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cmar1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cndtr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cpar2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cmar2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cndtr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cpar3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cmar3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cndtr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cpar4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cmar4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_ccr5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cndtr5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cpar5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cmar5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_ccr6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cndtr6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cpar6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cmar6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_ccr7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cndtr7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cpar7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_dma_cmar7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_ifcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cndtr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cpar1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cmar1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cndtr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cpar2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cmar2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cndtr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cpar3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cmar3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cndtr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cpar4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cmar4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_ccr5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cndtr5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cpar5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cmar5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_ccr6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cndtr6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cpar6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cmar6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_ccr7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cndtr7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cpar7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_dma_cmar7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_c0cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_c1cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_c2cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_c3cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_c4cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_c5cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_c6cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_cfr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_rg0cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_rg1cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 260u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_rg2cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_rg3cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 268u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_rgsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 320u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_dmamux_rgcfr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 324u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000C00u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50001400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_cr1_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_rqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_isr_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_icr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_lpuart_presc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_cr1_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_rqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_isr_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_icr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_lpuart_presc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_ioprstr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_ahbrstr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_apbrstr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_apbrstr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_iopenr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_ahbenr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_apbenr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_apbenr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_ccipr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_spi_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_spi_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_spi_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_spi_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_spi_crcpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_spi_rxcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_spi_txcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_spi_i2scfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_spi_i2spr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_spi_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_spi_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_spi_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_spi_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_spi_crcpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_spi_rxcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_spi_txcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_spi_i2scfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_spi_i2spr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_spi_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_spi_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_spi_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_spi_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_spi_crcpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_spi_rxcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_spi_txcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_spi_i2scfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_spi_i2spr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 16;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_cr1_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_rtor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_rqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_isr_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_icr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_presc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_cr1_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_rtor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_rqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_isr_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_icr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_presc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_cr1_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_rtor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_rqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_isr_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_icr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_presc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_cr1_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_rtor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_rqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_isr_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_icr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart4_presc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_cr1_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_rtor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_rqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_isr_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_icr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart5_presc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_cr1_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_rtor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_rqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_isr_fifo_disabled> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_icr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_presc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013C00u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

inline constexpr std::array<RegisterId, 269> kRegisters = {{
  RegisterId::register_dma1_dma_isr,
  RegisterId::register_dma1_dma_ifcr,
  RegisterId::register_dma1_dma_ccr1,
  RegisterId::register_dma1_dma_cndtr1,
  RegisterId::register_dma1_dma_cpar1,
  RegisterId::register_dma1_dma_cmar1,
  RegisterId::register_dma1_dma_ccr2,
  RegisterId::register_dma1_dma_cndtr2,
  RegisterId::register_dma1_dma_cpar2,
  RegisterId::register_dma1_dma_cmar2,
  RegisterId::register_dma1_dma_ccr3,
  RegisterId::register_dma1_dma_cndtr3,
  RegisterId::register_dma1_dma_cpar3,
  RegisterId::register_dma1_dma_cmar3,
  RegisterId::register_dma1_dma_ccr4,
  RegisterId::register_dma1_dma_cndtr4,
  RegisterId::register_dma1_dma_cpar4,
  RegisterId::register_dma1_dma_cmar4,
  RegisterId::register_dma1_dma_ccr5,
  RegisterId::register_dma1_dma_cndtr5,
  RegisterId::register_dma1_dma_cpar5,
  RegisterId::register_dma1_dma_cmar5,
  RegisterId::register_dma1_dma_ccr6,
  RegisterId::register_dma1_dma_cndtr6,
  RegisterId::register_dma1_dma_cpar6,
  RegisterId::register_dma1_dma_cmar6,
  RegisterId::register_dma1_dma_ccr7,
  RegisterId::register_dma1_dma_cndtr7,
  RegisterId::register_dma1_dma_cpar7,
  RegisterId::register_dma1_dma_cmar7,
  RegisterId::register_dma2_dma_isr,
  RegisterId::register_dma2_dma_ifcr,
  RegisterId::register_dma2_dma_ccr1,
  RegisterId::register_dma2_dma_cndtr1,
  RegisterId::register_dma2_dma_cpar1,
  RegisterId::register_dma2_dma_cmar1,
  RegisterId::register_dma2_dma_ccr2,
  RegisterId::register_dma2_dma_cndtr2,
  RegisterId::register_dma2_dma_cpar2,
  RegisterId::register_dma2_dma_cmar2,
  RegisterId::register_dma2_dma_ccr3,
  RegisterId::register_dma2_dma_cndtr3,
  RegisterId::register_dma2_dma_cpar3,
  RegisterId::register_dma2_dma_cmar3,
  RegisterId::register_dma2_dma_ccr4,
  RegisterId::register_dma2_dma_cndtr4,
  RegisterId::register_dma2_dma_cpar4,
  RegisterId::register_dma2_dma_cmar4,
  RegisterId::register_dma2_dma_ccr5,
  RegisterId::register_dma2_dma_cndtr5,
  RegisterId::register_dma2_dma_cpar5,
  RegisterId::register_dma2_dma_cmar5,
  RegisterId::register_dma2_dma_ccr6,
  RegisterId::register_dma2_dma_cndtr6,
  RegisterId::register_dma2_dma_cpar6,
  RegisterId::register_dma2_dma_cmar6,
  RegisterId::register_dma2_dma_ccr7,
  RegisterId::register_dma2_dma_cndtr7,
  RegisterId::register_dma2_dma_cpar7,
  RegisterId::register_dma2_dma_cmar7,
  RegisterId::register_dmamux1_dmamux_c0cr,
  RegisterId::register_dmamux1_dmamux_c1cr,
  RegisterId::register_dmamux1_dmamux_c2cr,
  RegisterId::register_dmamux1_dmamux_c3cr,
  RegisterId::register_dmamux1_dmamux_c4cr,
  RegisterId::register_dmamux1_dmamux_c5cr,
  RegisterId::register_dmamux1_dmamux_c6cr,
  RegisterId::register_dmamux1_dmamux_csr,
  RegisterId::register_dmamux1_dmamux_cfr,
  RegisterId::register_dmamux1_dmamux_rg0cr,
  RegisterId::register_dmamux1_dmamux_rg1cr,
  RegisterId::register_dmamux1_dmamux_rg2cr,
  RegisterId::register_dmamux1_dmamux_rg3cr,
  RegisterId::register_dmamux1_dmamux_rgsr,
  RegisterId::register_dmamux1_dmamux_rgcfr,
  RegisterId::register_gpioa_moder,
  RegisterId::register_gpioa_otyper,
  RegisterId::register_gpioa_ospeedr,
  RegisterId::register_gpioa_pupdr,
  RegisterId::register_gpioa_idr,
  RegisterId::register_gpioa_odr,
  RegisterId::register_gpioa_bsrr,
  RegisterId::register_gpioa_lckr,
  RegisterId::register_gpioa_afrl,
  RegisterId::register_gpioa_afrh,
  RegisterId::register_gpioa_brr,
  RegisterId::register_gpiob_moder,
  RegisterId::register_gpiob_otyper,
  RegisterId::register_gpiob_ospeedr,
  RegisterId::register_gpiob_pupdr,
  RegisterId::register_gpiob_idr,
  RegisterId::register_gpiob_odr,
  RegisterId::register_gpiob_bsrr,
  RegisterId::register_gpiob_lckr,
  RegisterId::register_gpiob_afrl,
  RegisterId::register_gpiob_afrh,
  RegisterId::register_gpiob_brr,
  RegisterId::register_gpioc_moder,
  RegisterId::register_gpioc_otyper,
  RegisterId::register_gpioc_ospeedr,
  RegisterId::register_gpioc_pupdr,
  RegisterId::register_gpioc_idr,
  RegisterId::register_gpioc_odr,
  RegisterId::register_gpioc_bsrr,
  RegisterId::register_gpioc_lckr,
  RegisterId::register_gpioc_afrl,
  RegisterId::register_gpioc_afrh,
  RegisterId::register_gpioc_brr,
  RegisterId::register_gpiod_moder,
  RegisterId::register_gpiod_otyper,
  RegisterId::register_gpiod_ospeedr,
  RegisterId::register_gpiod_pupdr,
  RegisterId::register_gpiod_idr,
  RegisterId::register_gpiod_odr,
  RegisterId::register_gpiod_bsrr,
  RegisterId::register_gpiod_lckr,
  RegisterId::register_gpiod_afrl,
  RegisterId::register_gpiod_afrh,
  RegisterId::register_gpiod_brr,
  RegisterId::register_gpioe_moder,
  RegisterId::register_gpioe_otyper,
  RegisterId::register_gpioe_ospeedr,
  RegisterId::register_gpioe_pupdr,
  RegisterId::register_gpioe_idr,
  RegisterId::register_gpioe_odr,
  RegisterId::register_gpioe_bsrr,
  RegisterId::register_gpioe_lckr,
  RegisterId::register_gpioe_afrl,
  RegisterId::register_gpioe_afrh,
  RegisterId::register_gpioe_brr,
  RegisterId::register_gpiof_moder,
  RegisterId::register_gpiof_otyper,
  RegisterId::register_gpiof_ospeedr,
  RegisterId::register_gpiof_pupdr,
  RegisterId::register_gpiof_idr,
  RegisterId::register_gpiof_odr,
  RegisterId::register_gpiof_bsrr,
  RegisterId::register_gpiof_lckr,
  RegisterId::register_gpiof_afrl,
  RegisterId::register_gpiof_afrh,
  RegisterId::register_gpiof_brr,
  RegisterId::register_lpuart1_lpuart_cr1_disabled,
  RegisterId::register_lpuart1_lpuart_cr2,
  RegisterId::register_lpuart1_lpuart_cr3,
  RegisterId::register_lpuart1_lpuart_brr,
  RegisterId::register_lpuart1_lpuart_rqr,
  RegisterId::register_lpuart1_lpuart_isr_disabled,
  RegisterId::register_lpuart1_lpuart_icr,
  RegisterId::register_lpuart1_lpuart_rdr,
  RegisterId::register_lpuart1_lpuart_tdr,
  RegisterId::register_lpuart1_lpuart_presc,
  RegisterId::register_lpuart2_lpuart_cr1_disabled,
  RegisterId::register_lpuart2_lpuart_cr2,
  RegisterId::register_lpuart2_lpuart_cr3,
  RegisterId::register_lpuart2_lpuart_brr,
  RegisterId::register_lpuart2_lpuart_rqr,
  RegisterId::register_lpuart2_lpuart_isr_disabled,
  RegisterId::register_lpuart2_lpuart_icr,
  RegisterId::register_lpuart2_lpuart_rdr,
  RegisterId::register_lpuart2_lpuart_tdr,
  RegisterId::register_lpuart2_lpuart_presc,
  RegisterId::register_rcc_ioprstr,
  RegisterId::register_rcc_ahbrstr,
  RegisterId::register_rcc_apbrstr1,
  RegisterId::register_rcc_apbrstr2,
  RegisterId::register_rcc_iopenr,
  RegisterId::register_rcc_ahbenr,
  RegisterId::register_rcc_apbenr1,
  RegisterId::register_rcc_apbenr2,
  RegisterId::register_rcc_ccipr,
  RegisterId::register_spi1_spi_cr1,
  RegisterId::register_spi1_spi_cr2,
  RegisterId::register_spi1_spi_sr,
  RegisterId::register_spi1_spi_dr,
  RegisterId::register_spi1_spi_crcpr,
  RegisterId::register_spi1_spi_rxcrcr,
  RegisterId::register_spi1_spi_txcrcr,
  RegisterId::register_spi1_spi_i2scfgr,
  RegisterId::register_spi1_spi_i2spr,
  RegisterId::register_spi2_spi_cr1,
  RegisterId::register_spi2_spi_cr2,
  RegisterId::register_spi2_spi_sr,
  RegisterId::register_spi2_spi_dr,
  RegisterId::register_spi2_spi_crcpr,
  RegisterId::register_spi2_spi_rxcrcr,
  RegisterId::register_spi2_spi_txcrcr,
  RegisterId::register_spi2_spi_i2scfgr,
  RegisterId::register_spi2_spi_i2spr,
  RegisterId::register_spi3_spi_cr1,
  RegisterId::register_spi3_spi_cr2,
  RegisterId::register_spi3_spi_sr,
  RegisterId::register_spi3_spi_dr,
  RegisterId::register_spi3_spi_crcpr,
  RegisterId::register_spi3_spi_rxcrcr,
  RegisterId::register_spi3_spi_txcrcr,
  RegisterId::register_spi3_spi_i2scfgr,
  RegisterId::register_spi3_spi_i2spr,
  RegisterId::register_usart1_cr1_fifo_disabled,
  RegisterId::register_usart1_cr2,
  RegisterId::register_usart1_cr3,
  RegisterId::register_usart1_brr,
  RegisterId::register_usart1_gtpr,
  RegisterId::register_usart1_rtor,
  RegisterId::register_usart1_rqr,
  RegisterId::register_usart1_isr_fifo_disabled,
  RegisterId::register_usart1_icr,
  RegisterId::register_usart1_rdr,
  RegisterId::register_usart1_tdr,
  RegisterId::register_usart1_presc,
  RegisterId::register_usart2_cr1_fifo_disabled,
  RegisterId::register_usart2_cr2,
  RegisterId::register_usart2_cr3,
  RegisterId::register_usart2_brr,
  RegisterId::register_usart2_gtpr,
  RegisterId::register_usart2_rtor,
  RegisterId::register_usart2_rqr,
  RegisterId::register_usart2_isr_fifo_disabled,
  RegisterId::register_usart2_icr,
  RegisterId::register_usart2_rdr,
  RegisterId::register_usart2_tdr,
  RegisterId::register_usart2_presc,
  RegisterId::register_usart3_cr1_fifo_disabled,
  RegisterId::register_usart3_cr2,
  RegisterId::register_usart3_cr3,
  RegisterId::register_usart3_brr,
  RegisterId::register_usart3_gtpr,
  RegisterId::register_usart3_rtor,
  RegisterId::register_usart3_rqr,
  RegisterId::register_usart3_isr_fifo_disabled,
  RegisterId::register_usart3_icr,
  RegisterId::register_usart3_rdr,
  RegisterId::register_usart3_tdr,
  RegisterId::register_usart3_presc,
  RegisterId::register_usart4_cr1_fifo_disabled,
  RegisterId::register_usart4_cr2,
  RegisterId::register_usart4_cr3,
  RegisterId::register_usart4_brr,
  RegisterId::register_usart4_gtpr,
  RegisterId::register_usart4_rtor,
  RegisterId::register_usart4_rqr,
  RegisterId::register_usart4_isr_fifo_disabled,
  RegisterId::register_usart4_icr,
  RegisterId::register_usart4_rdr,
  RegisterId::register_usart4_tdr,
  RegisterId::register_usart4_presc,
  RegisterId::register_usart5_cr1_fifo_disabled,
  RegisterId::register_usart5_cr2,
  RegisterId::register_usart5_cr3,
  RegisterId::register_usart5_brr,
  RegisterId::register_usart5_gtpr,
  RegisterId::register_usart5_rtor,
  RegisterId::register_usart5_rqr,
  RegisterId::register_usart5_isr_fifo_disabled,
  RegisterId::register_usart5_icr,
  RegisterId::register_usart5_rdr,
  RegisterId::register_usart5_tdr,
  RegisterId::register_usart5_presc,
  RegisterId::register_usart6_cr1_fifo_disabled,
  RegisterId::register_usart6_cr2,
  RegisterId::register_usart6_cr3,
  RegisterId::register_usart6_brr,
  RegisterId::register_usart6_gtpr,
  RegisterId::register_usart6_rtor,
  RegisterId::register_usart6_rqr,
  RegisterId::register_usart6_isr_fifo_disabled,
  RegisterId::register_usart6_icr,
  RegisterId::register_usart6_rdr,
  RegisterId::register_usart6_tdr,
  RegisterId::register_usart6_presc,
}};
}
}
}
}
}
}
