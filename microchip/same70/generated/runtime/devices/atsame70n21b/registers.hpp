#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace runtime {
namespace devices {
namespace atsame70n21b {
enum class RegisterId : std::uint16_t {
  none,
  register_gpioa_per,
  register_gpioa_pdr,
  register_gpioa_psr,
  register_gpioa_oer,
  register_gpioa_odr,
  register_gpioa_osr,
  register_gpioa_ifer,
  register_gpioa_ifdr,
  register_gpioa_ifsr,
  register_gpioa_sodr,
  register_gpioa_codr,
  register_gpioa_odsr,
  register_gpioa_pdsr,
  register_gpioa_ier,
  register_gpioa_idr,
  register_gpioa_imr,
  register_gpioa_isr,
  register_gpioa_mder,
  register_gpioa_mddr,
  register_gpioa_mdsr,
  register_gpioa_pudr,
  register_gpioa_puer,
  register_gpioa_pusr,
  register_gpioa_abcdsr__s,
  register_gpioa_ifscdr,
  register_gpioa_ifscer,
  register_gpioa_ifscsr,
  register_gpioa_scdr,
  register_gpioa_ppddr,
  register_gpioa_ppder,
  register_gpioa_ppdsr,
  register_gpioa_ower,
  register_gpioa_owdr,
  register_gpioa_owsr,
  register_gpioa_aimer,
  register_gpioa_aimdr,
  register_gpioa_aimmr,
  register_gpioa_esr,
  register_gpioa_lsr,
  register_gpioa_elsr,
  register_gpioa_fellsr,
  register_gpioa_rehlsr,
  register_gpioa_frlhsr,
  register_gpioa_locksr,
  register_gpioa_wpmr,
  register_gpioa_wpsr,
  register_gpioa_schmitt,
  register_gpioa_driver,
  register_gpioa_pcmr,
  register_gpioa_pcier,
  register_gpioa_pcidr,
  register_gpioa_pcimr,
  register_gpioa_pcisr,
  register_gpioa_pcrhr,
  register_gpiob_per,
  register_gpiob_pdr,
  register_gpiob_psr,
  register_gpiob_oer,
  register_gpiob_odr,
  register_gpiob_osr,
  register_gpiob_ifer,
  register_gpiob_ifdr,
  register_gpiob_ifsr,
  register_gpiob_sodr,
  register_gpiob_codr,
  register_gpiob_odsr,
  register_gpiob_pdsr,
  register_gpiob_ier,
  register_gpiob_idr,
  register_gpiob_imr,
  register_gpiob_isr,
  register_gpiob_mder,
  register_gpiob_mddr,
  register_gpiob_mdsr,
  register_gpiob_pudr,
  register_gpiob_puer,
  register_gpiob_pusr,
  register_gpiob_abcdsr__s,
  register_gpiob_ifscdr,
  register_gpiob_ifscer,
  register_gpiob_ifscsr,
  register_gpiob_scdr,
  register_gpiob_ppddr,
  register_gpiob_ppder,
  register_gpiob_ppdsr,
  register_gpiob_ower,
  register_gpiob_owdr,
  register_gpiob_owsr,
  register_gpiob_aimer,
  register_gpiob_aimdr,
  register_gpiob_aimmr,
  register_gpiob_esr,
  register_gpiob_lsr,
  register_gpiob_elsr,
  register_gpiob_fellsr,
  register_gpiob_rehlsr,
  register_gpiob_frlhsr,
  register_gpiob_locksr,
  register_gpiob_wpmr,
  register_gpiob_wpsr,
  register_gpiob_schmitt,
  register_gpiob_driver,
  register_gpiob_pcmr,
  register_gpiob_pcier,
  register_gpiob_pcidr,
  register_gpiob_pcimr,
  register_gpiob_pcisr,
  register_gpiob_pcrhr,
  register_gpiod_per,
  register_gpiod_pdr,
  register_gpiod_psr,
  register_gpiod_oer,
  register_gpiod_odr,
  register_gpiod_osr,
  register_gpiod_ifer,
  register_gpiod_ifdr,
  register_gpiod_ifsr,
  register_gpiod_sodr,
  register_gpiod_codr,
  register_gpiod_odsr,
  register_gpiod_pdsr,
  register_gpiod_ier,
  register_gpiod_idr,
  register_gpiod_imr,
  register_gpiod_isr,
  register_gpiod_mder,
  register_gpiod_mddr,
  register_gpiod_mdsr,
  register_gpiod_pudr,
  register_gpiod_puer,
  register_gpiod_pusr,
  register_gpiod_abcdsr__s,
  register_gpiod_ifscdr,
  register_gpiod_ifscer,
  register_gpiod_ifscsr,
  register_gpiod_scdr,
  register_gpiod_ppddr,
  register_gpiod_ppder,
  register_gpiod_ppdsr,
  register_gpiod_ower,
  register_gpiod_owdr,
  register_gpiod_owsr,
  register_gpiod_aimer,
  register_gpiod_aimdr,
  register_gpiod_aimmr,
  register_gpiod_esr,
  register_gpiod_lsr,
  register_gpiod_elsr,
  register_gpiod_fellsr,
  register_gpiod_rehlsr,
  register_gpiod_frlhsr,
  register_gpiod_locksr,
  register_gpiod_wpmr,
  register_gpiod_wpsr,
  register_gpiod_schmitt,
  register_gpiod_driver,
  register_gpiod_pcmr,
  register_gpiod_pcier,
  register_gpiod_pcidr,
  register_gpiod_pcimr,
  register_gpiod_pcisr,
  register_gpiod_pcrhr,
  register_spi0_cr,
  register_spi0_mr,
  register_spi0_rdr,
  register_spi0_tdr,
  register_spi0_sr,
  register_spi0_ier,
  register_spi0_idr,
  register_spi0_imr,
  register_spi0_csr__s,
  register_spi0_wpmr,
  register_spi0_wpsr,
  register_twihs0_cr,
  register_twihs0_mmr,
  register_twihs0_smr,
  register_twihs0_iadr,
  register_twihs0_cwgr,
  register_twihs0_sr,
  register_twihs0_ier,
  register_twihs0_idr,
  register_twihs0_imr,
  register_twihs0_rhr,
  register_twihs0_thr,
  register_twihs0_smbtr,
  register_twihs0_filtr,
  register_twihs0_swmr,
  register_twihs0_wpmr,
  register_twihs0_wpsr,
  register_twihs1_cr,
  register_twihs1_mmr,
  register_twihs1_smr,
  register_twihs1_iadr,
  register_twihs1_cwgr,
  register_twihs1_sr,
  register_twihs1_ier,
  register_twihs1_idr,
  register_twihs1_imr,
  register_twihs1_rhr,
  register_twihs1_thr,
  register_twihs1_smbtr,
  register_twihs1_filtr,
  register_twihs1_swmr,
  register_twihs1_wpmr,
  register_twihs1_wpsr,
  register_twihs2_cr,
  register_twihs2_mmr,
  register_twihs2_smr,
  register_twihs2_iadr,
  register_twihs2_cwgr,
  register_twihs2_sr,
  register_twihs2_ier,
  register_twihs2_idr,
  register_twihs2_imr,
  register_twihs2_rhr,
  register_twihs2_thr,
  register_twihs2_smbtr,
  register_twihs2_filtr,
  register_twihs2_swmr,
  register_twihs2_wpmr,
  register_twihs2_wpsr,
  register_uart0_cr,
  register_uart0_mr,
  register_uart0_ier,
  register_uart0_idr,
  register_uart0_imr,
  register_uart0_sr,
  register_uart0_rhr,
  register_uart0_thr,
  register_uart0_brgr,
  register_uart0_cmpr,
  register_uart0_wpmr,
  register_uart1_cr,
  register_uart1_mr,
  register_uart1_ier,
  register_uart1_idr,
  register_uart1_imr,
  register_uart1_sr,
  register_uart1_rhr,
  register_uart1_thr,
  register_uart1_brgr,
  register_uart1_cmpr,
  register_uart1_wpmr,
  register_uart2_cr,
  register_uart2_mr,
  register_uart2_ier,
  register_uart2_idr,
  register_uart2_imr,
  register_uart2_sr,
  register_uart2_rhr,
  register_uart2_thr,
  register_uart2_brgr,
  register_uart2_cmpr,
  register_uart2_wpmr,
  register_uart3_cr,
  register_uart3_mr,
  register_uart3_ier,
  register_uart3_idr,
  register_uart3_imr,
  register_uart3_sr,
  register_uart3_rhr,
  register_uart3_thr,
  register_uart3_brgr,
  register_uart3_cmpr,
  register_uart3_wpmr,
  register_uart4_cr,
  register_uart4_mr,
  register_uart4_ier,
  register_uart4_idr,
  register_uart4_imr,
  register_uart4_sr,
  register_uart4_rhr,
  register_uart4_thr,
  register_uart4_brgr,
  register_uart4_cmpr,
  register_uart4_wpmr,
  register_usart0_us_cr_lin_mode,
  register_usart0_us_mr_spi_mode,
  register_usart0_us_ier_lin_mode,
  register_usart0_us_idr_lin_mode,
  register_usart0_us_imr_lin_mode,
  register_usart0_us_csr_lin_mode,
  register_usart0_us_rhr,
  register_usart0_us_thr,
  register_usart0_us_brgr,
  register_usart0_us_rtor,
  register_usart0_us_ttgr_lon_mode,
  register_usart0_us_fidi_lon_mode,
  register_usart0_us_ner,
  register_usart0_us_if,
  register_usart0_us_man,
  register_usart0_us_linmr,
  register_usart0_us_linir,
  register_usart0_us_linbrr,
  register_usart0_us_lonmr,
  register_usart0_us_lonpr,
  register_usart0_us_londl,
  register_usart0_us_lonl2hdr,
  register_usart0_us_lonbl,
  register_usart0_us_lonb1tx,
  register_usart0_us_lonb1rx,
  register_usart0_us_lonprio,
  register_usart0_us_idttx,
  register_usart0_us_idtrx,
  register_usart0_us_icdiff,
  register_usart0_us_wpmr,
  register_usart0_us_wpsr,
  register_usart1_us_cr_lin_mode,
  register_usart1_us_mr_spi_mode,
  register_usart1_us_ier_lin_mode,
  register_usart1_us_idr_lin_mode,
  register_usart1_us_imr_lin_mode,
  register_usart1_us_csr_lin_mode,
  register_usart1_us_rhr,
  register_usart1_us_thr,
  register_usart1_us_brgr,
  register_usart1_us_rtor,
  register_usart1_us_ttgr_lon_mode,
  register_usart1_us_fidi_lon_mode,
  register_usart1_us_ner,
  register_usart1_us_if,
  register_usart1_us_man,
  register_usart1_us_linmr,
  register_usart1_us_linir,
  register_usart1_us_linbrr,
  register_usart1_us_lonmr,
  register_usart1_us_lonpr,
  register_usart1_us_londl,
  register_usart1_us_lonl2hdr,
  register_usart1_us_lonbl,
  register_usart1_us_lonb1tx,
  register_usart1_us_lonb1rx,
  register_usart1_us_lonprio,
  register_usart1_us_idttx,
  register_usart1_us_idtrx,
  register_usart1_us_icdiff,
  register_usart1_us_wpmr,
  register_usart1_us_wpsr,
  register_usart2_us_cr_lin_mode,
  register_usart2_us_mr_spi_mode,
  register_usart2_us_ier_lin_mode,
  register_usart2_us_idr_lin_mode,
  register_usart2_us_imr_lin_mode,
  register_usart2_us_csr_lin_mode,
  register_usart2_us_rhr,
  register_usart2_us_thr,
  register_usart2_us_brgr,
  register_usart2_us_rtor,
  register_usart2_us_ttgr_lon_mode,
  register_usart2_us_fidi_lon_mode,
  register_usart2_us_ner,
  register_usart2_us_if,
  register_usart2_us_man,
  register_usart2_us_linmr,
  register_usart2_us_linir,
  register_usart2_us_linbrr,
  register_usart2_us_lonmr,
  register_usart2_us_lonpr,
  register_usart2_us_londl,
  register_usart2_us_lonl2hdr,
  register_usart2_us_lonbl,
  register_usart2_us_lonb1tx,
  register_usart2_us_lonb1rx,
  register_usart2_us_lonprio,
  register_usart2_us_idttx,
  register_usart2_us_idtrx,
  register_usart2_us_icdiff,
  register_usart2_us_wpmr,
  register_usart2_us_wpsr,
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
struct RegisterTraits<RegisterId::register_gpioa_per> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_oer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_osr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ifer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ifdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ifsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_sodr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_codr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_odsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_mder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_mddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_mdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pudr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_puer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pusr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_abcdsr__s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ifscdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ifscer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ifscsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_scdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ppddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ppder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ppdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ower> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 160u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_owdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 164u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_owsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 168u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_aimer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_aimdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 180u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_aimmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 184u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_esr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 192u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_lsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_elsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 200u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_fellsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 208u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_rehlsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 212u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_frlhsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 216u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_locksr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 224u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_schmitt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_driver> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pcmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 336u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pcier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 340u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pcidr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 344u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pcimr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 348u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pcisr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pcrhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0E00u;
  static constexpr std::uint32_t kOffsetBytes = 356u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_per> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_oer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_osr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ifer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ifdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ifsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_sodr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_codr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_odsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_mder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_mddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_mdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pudr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_puer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pusr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_abcdsr__s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ifscdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ifscer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ifscsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_scdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ppddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ppder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ppdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ower> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 160u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_owdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 164u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_owsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 168u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_aimer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_aimdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 180u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_aimmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 184u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_esr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 192u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_lsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_elsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 200u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_fellsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 208u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_rehlsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 212u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_frlhsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 216u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_locksr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 224u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_schmitt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_driver> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pcmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 336u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pcier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 340u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pcidr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 344u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pcimr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 348u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pcisr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pcrhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1000u;
  static constexpr std::uint32_t kOffsetBytes = 356u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_per> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_oer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_osr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ifer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ifdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ifsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_sodr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_codr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_odsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_mder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_mddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_mdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pudr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_puer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pusr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_abcdsr__s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ifscdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ifscer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ifscsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_scdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ppddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ppder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ppdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ower> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 160u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_owdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 164u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_owsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 168u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_aimer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_aimdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 180u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_aimmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 184u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_esr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 192u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_lsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_elsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 200u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_fellsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 208u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_rehlsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 212u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_frlhsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 216u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_locksr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 224u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_schmitt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_driver> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pcmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 336u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pcier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 340u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pcidr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 344u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pcimr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 348u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pcisr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pcrhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1400u;
  static constexpr std::uint32_t kOffsetBytes = 356u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_mr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_csr__s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40008000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_mmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_smr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_iadr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_cwgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_smbtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_filtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_swmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs0_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40018000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_mmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_smr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_iadr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_cwgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_smbtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_filtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_swmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs1_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4001C000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_mmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_smr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_iadr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_cwgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_smbtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_filtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_swmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_twihs2_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40060000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_mr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_brgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_cmpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0800u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_mr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_brgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_cmpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E0A00u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_mr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_brgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_cmpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart2_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1A00u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_mr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_brgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_cmpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart3_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1C00u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_mr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_brgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_cmpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E1E00u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_cr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_mr_spi_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_ier_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_idr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_imr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_csr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_brgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_rtor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_ttgr_lon_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_fidi_lon_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_ner> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_if> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_man> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_linmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_linir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_linbrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_lonmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_lonpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_londl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_lonl2hdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_lonbl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_lonb1tx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_lonb1rx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_lonprio> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_idttx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_idtrx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_icdiff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_us_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40024000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_cr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_mr_spi_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_ier_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_idr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_imr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_csr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_brgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_rtor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_ttgr_lon_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_fidi_lon_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_ner> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_if> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_man> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_linmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_linir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_linbrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_lonmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_lonpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_londl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_lonl2hdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_lonbl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_lonb1tx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_lonb1rx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_lonprio> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_idttx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_idtrx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_icdiff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_us_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_cr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_mr_spi_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_ier_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_idr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_imr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_csr_lin_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_rhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_thr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_brgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_rtor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_ttgr_lon_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_fidi_lon_mode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_ner> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_if> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_man> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_linmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_linir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_linbrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_lonmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_lonpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_londl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_lonl2hdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_lonbl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_lonb1tx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_lonb1rx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_lonprio> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_idttx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_idtrx> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_icdiff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_wpmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_us_wpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4002C000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

inline constexpr std::array<RegisterId, 369> kRegisters = {{
  RegisterId::register_gpioa_per,
  RegisterId::register_gpioa_pdr,
  RegisterId::register_gpioa_psr,
  RegisterId::register_gpioa_oer,
  RegisterId::register_gpioa_odr,
  RegisterId::register_gpioa_osr,
  RegisterId::register_gpioa_ifer,
  RegisterId::register_gpioa_ifdr,
  RegisterId::register_gpioa_ifsr,
  RegisterId::register_gpioa_sodr,
  RegisterId::register_gpioa_codr,
  RegisterId::register_gpioa_odsr,
  RegisterId::register_gpioa_pdsr,
  RegisterId::register_gpioa_ier,
  RegisterId::register_gpioa_idr,
  RegisterId::register_gpioa_imr,
  RegisterId::register_gpioa_isr,
  RegisterId::register_gpioa_mder,
  RegisterId::register_gpioa_mddr,
  RegisterId::register_gpioa_mdsr,
  RegisterId::register_gpioa_pudr,
  RegisterId::register_gpioa_puer,
  RegisterId::register_gpioa_pusr,
  RegisterId::register_gpioa_abcdsr__s,
  RegisterId::register_gpioa_ifscdr,
  RegisterId::register_gpioa_ifscer,
  RegisterId::register_gpioa_ifscsr,
  RegisterId::register_gpioa_scdr,
  RegisterId::register_gpioa_ppddr,
  RegisterId::register_gpioa_ppder,
  RegisterId::register_gpioa_ppdsr,
  RegisterId::register_gpioa_ower,
  RegisterId::register_gpioa_owdr,
  RegisterId::register_gpioa_owsr,
  RegisterId::register_gpioa_aimer,
  RegisterId::register_gpioa_aimdr,
  RegisterId::register_gpioa_aimmr,
  RegisterId::register_gpioa_esr,
  RegisterId::register_gpioa_lsr,
  RegisterId::register_gpioa_elsr,
  RegisterId::register_gpioa_fellsr,
  RegisterId::register_gpioa_rehlsr,
  RegisterId::register_gpioa_frlhsr,
  RegisterId::register_gpioa_locksr,
  RegisterId::register_gpioa_wpmr,
  RegisterId::register_gpioa_wpsr,
  RegisterId::register_gpioa_schmitt,
  RegisterId::register_gpioa_driver,
  RegisterId::register_gpioa_pcmr,
  RegisterId::register_gpioa_pcier,
  RegisterId::register_gpioa_pcidr,
  RegisterId::register_gpioa_pcimr,
  RegisterId::register_gpioa_pcisr,
  RegisterId::register_gpioa_pcrhr,
  RegisterId::register_gpiob_per,
  RegisterId::register_gpiob_pdr,
  RegisterId::register_gpiob_psr,
  RegisterId::register_gpiob_oer,
  RegisterId::register_gpiob_odr,
  RegisterId::register_gpiob_osr,
  RegisterId::register_gpiob_ifer,
  RegisterId::register_gpiob_ifdr,
  RegisterId::register_gpiob_ifsr,
  RegisterId::register_gpiob_sodr,
  RegisterId::register_gpiob_codr,
  RegisterId::register_gpiob_odsr,
  RegisterId::register_gpiob_pdsr,
  RegisterId::register_gpiob_ier,
  RegisterId::register_gpiob_idr,
  RegisterId::register_gpiob_imr,
  RegisterId::register_gpiob_isr,
  RegisterId::register_gpiob_mder,
  RegisterId::register_gpiob_mddr,
  RegisterId::register_gpiob_mdsr,
  RegisterId::register_gpiob_pudr,
  RegisterId::register_gpiob_puer,
  RegisterId::register_gpiob_pusr,
  RegisterId::register_gpiob_abcdsr__s,
  RegisterId::register_gpiob_ifscdr,
  RegisterId::register_gpiob_ifscer,
  RegisterId::register_gpiob_ifscsr,
  RegisterId::register_gpiob_scdr,
  RegisterId::register_gpiob_ppddr,
  RegisterId::register_gpiob_ppder,
  RegisterId::register_gpiob_ppdsr,
  RegisterId::register_gpiob_ower,
  RegisterId::register_gpiob_owdr,
  RegisterId::register_gpiob_owsr,
  RegisterId::register_gpiob_aimer,
  RegisterId::register_gpiob_aimdr,
  RegisterId::register_gpiob_aimmr,
  RegisterId::register_gpiob_esr,
  RegisterId::register_gpiob_lsr,
  RegisterId::register_gpiob_elsr,
  RegisterId::register_gpiob_fellsr,
  RegisterId::register_gpiob_rehlsr,
  RegisterId::register_gpiob_frlhsr,
  RegisterId::register_gpiob_locksr,
  RegisterId::register_gpiob_wpmr,
  RegisterId::register_gpiob_wpsr,
  RegisterId::register_gpiob_schmitt,
  RegisterId::register_gpiob_driver,
  RegisterId::register_gpiob_pcmr,
  RegisterId::register_gpiob_pcier,
  RegisterId::register_gpiob_pcidr,
  RegisterId::register_gpiob_pcimr,
  RegisterId::register_gpiob_pcisr,
  RegisterId::register_gpiob_pcrhr,
  RegisterId::register_gpiod_per,
  RegisterId::register_gpiod_pdr,
  RegisterId::register_gpiod_psr,
  RegisterId::register_gpiod_oer,
  RegisterId::register_gpiod_odr,
  RegisterId::register_gpiod_osr,
  RegisterId::register_gpiod_ifer,
  RegisterId::register_gpiod_ifdr,
  RegisterId::register_gpiod_ifsr,
  RegisterId::register_gpiod_sodr,
  RegisterId::register_gpiod_codr,
  RegisterId::register_gpiod_odsr,
  RegisterId::register_gpiod_pdsr,
  RegisterId::register_gpiod_ier,
  RegisterId::register_gpiod_idr,
  RegisterId::register_gpiod_imr,
  RegisterId::register_gpiod_isr,
  RegisterId::register_gpiod_mder,
  RegisterId::register_gpiod_mddr,
  RegisterId::register_gpiod_mdsr,
  RegisterId::register_gpiod_pudr,
  RegisterId::register_gpiod_puer,
  RegisterId::register_gpiod_pusr,
  RegisterId::register_gpiod_abcdsr__s,
  RegisterId::register_gpiod_ifscdr,
  RegisterId::register_gpiod_ifscer,
  RegisterId::register_gpiod_ifscsr,
  RegisterId::register_gpiod_scdr,
  RegisterId::register_gpiod_ppddr,
  RegisterId::register_gpiod_ppder,
  RegisterId::register_gpiod_ppdsr,
  RegisterId::register_gpiod_ower,
  RegisterId::register_gpiod_owdr,
  RegisterId::register_gpiod_owsr,
  RegisterId::register_gpiod_aimer,
  RegisterId::register_gpiod_aimdr,
  RegisterId::register_gpiod_aimmr,
  RegisterId::register_gpiod_esr,
  RegisterId::register_gpiod_lsr,
  RegisterId::register_gpiod_elsr,
  RegisterId::register_gpiod_fellsr,
  RegisterId::register_gpiod_rehlsr,
  RegisterId::register_gpiod_frlhsr,
  RegisterId::register_gpiod_locksr,
  RegisterId::register_gpiod_wpmr,
  RegisterId::register_gpiod_wpsr,
  RegisterId::register_gpiod_schmitt,
  RegisterId::register_gpiod_driver,
  RegisterId::register_gpiod_pcmr,
  RegisterId::register_gpiod_pcier,
  RegisterId::register_gpiod_pcidr,
  RegisterId::register_gpiod_pcimr,
  RegisterId::register_gpiod_pcisr,
  RegisterId::register_gpiod_pcrhr,
  RegisterId::register_spi0_cr,
  RegisterId::register_spi0_mr,
  RegisterId::register_spi0_rdr,
  RegisterId::register_spi0_tdr,
  RegisterId::register_spi0_sr,
  RegisterId::register_spi0_ier,
  RegisterId::register_spi0_idr,
  RegisterId::register_spi0_imr,
  RegisterId::register_spi0_csr__s,
  RegisterId::register_spi0_wpmr,
  RegisterId::register_spi0_wpsr,
  RegisterId::register_twihs0_cr,
  RegisterId::register_twihs0_mmr,
  RegisterId::register_twihs0_smr,
  RegisterId::register_twihs0_iadr,
  RegisterId::register_twihs0_cwgr,
  RegisterId::register_twihs0_sr,
  RegisterId::register_twihs0_ier,
  RegisterId::register_twihs0_idr,
  RegisterId::register_twihs0_imr,
  RegisterId::register_twihs0_rhr,
  RegisterId::register_twihs0_thr,
  RegisterId::register_twihs0_smbtr,
  RegisterId::register_twihs0_filtr,
  RegisterId::register_twihs0_swmr,
  RegisterId::register_twihs0_wpmr,
  RegisterId::register_twihs0_wpsr,
  RegisterId::register_twihs1_cr,
  RegisterId::register_twihs1_mmr,
  RegisterId::register_twihs1_smr,
  RegisterId::register_twihs1_iadr,
  RegisterId::register_twihs1_cwgr,
  RegisterId::register_twihs1_sr,
  RegisterId::register_twihs1_ier,
  RegisterId::register_twihs1_idr,
  RegisterId::register_twihs1_imr,
  RegisterId::register_twihs1_rhr,
  RegisterId::register_twihs1_thr,
  RegisterId::register_twihs1_smbtr,
  RegisterId::register_twihs1_filtr,
  RegisterId::register_twihs1_swmr,
  RegisterId::register_twihs1_wpmr,
  RegisterId::register_twihs1_wpsr,
  RegisterId::register_twihs2_cr,
  RegisterId::register_twihs2_mmr,
  RegisterId::register_twihs2_smr,
  RegisterId::register_twihs2_iadr,
  RegisterId::register_twihs2_cwgr,
  RegisterId::register_twihs2_sr,
  RegisterId::register_twihs2_ier,
  RegisterId::register_twihs2_idr,
  RegisterId::register_twihs2_imr,
  RegisterId::register_twihs2_rhr,
  RegisterId::register_twihs2_thr,
  RegisterId::register_twihs2_smbtr,
  RegisterId::register_twihs2_filtr,
  RegisterId::register_twihs2_swmr,
  RegisterId::register_twihs2_wpmr,
  RegisterId::register_twihs2_wpsr,
  RegisterId::register_uart0_cr,
  RegisterId::register_uart0_mr,
  RegisterId::register_uart0_ier,
  RegisterId::register_uart0_idr,
  RegisterId::register_uart0_imr,
  RegisterId::register_uart0_sr,
  RegisterId::register_uart0_rhr,
  RegisterId::register_uart0_thr,
  RegisterId::register_uart0_brgr,
  RegisterId::register_uart0_cmpr,
  RegisterId::register_uart0_wpmr,
  RegisterId::register_uart1_cr,
  RegisterId::register_uart1_mr,
  RegisterId::register_uart1_ier,
  RegisterId::register_uart1_idr,
  RegisterId::register_uart1_imr,
  RegisterId::register_uart1_sr,
  RegisterId::register_uart1_rhr,
  RegisterId::register_uart1_thr,
  RegisterId::register_uart1_brgr,
  RegisterId::register_uart1_cmpr,
  RegisterId::register_uart1_wpmr,
  RegisterId::register_uart2_cr,
  RegisterId::register_uart2_mr,
  RegisterId::register_uart2_ier,
  RegisterId::register_uart2_idr,
  RegisterId::register_uart2_imr,
  RegisterId::register_uart2_sr,
  RegisterId::register_uart2_rhr,
  RegisterId::register_uart2_thr,
  RegisterId::register_uart2_brgr,
  RegisterId::register_uart2_cmpr,
  RegisterId::register_uart2_wpmr,
  RegisterId::register_uart3_cr,
  RegisterId::register_uart3_mr,
  RegisterId::register_uart3_ier,
  RegisterId::register_uart3_idr,
  RegisterId::register_uart3_imr,
  RegisterId::register_uart3_sr,
  RegisterId::register_uart3_rhr,
  RegisterId::register_uart3_thr,
  RegisterId::register_uart3_brgr,
  RegisterId::register_uart3_cmpr,
  RegisterId::register_uart3_wpmr,
  RegisterId::register_uart4_cr,
  RegisterId::register_uart4_mr,
  RegisterId::register_uart4_ier,
  RegisterId::register_uart4_idr,
  RegisterId::register_uart4_imr,
  RegisterId::register_uart4_sr,
  RegisterId::register_uart4_rhr,
  RegisterId::register_uart4_thr,
  RegisterId::register_uart4_brgr,
  RegisterId::register_uart4_cmpr,
  RegisterId::register_uart4_wpmr,
  RegisterId::register_usart0_us_cr_lin_mode,
  RegisterId::register_usart0_us_mr_spi_mode,
  RegisterId::register_usart0_us_ier_lin_mode,
  RegisterId::register_usart0_us_idr_lin_mode,
  RegisterId::register_usart0_us_imr_lin_mode,
  RegisterId::register_usart0_us_csr_lin_mode,
  RegisterId::register_usart0_us_rhr,
  RegisterId::register_usart0_us_thr,
  RegisterId::register_usart0_us_brgr,
  RegisterId::register_usart0_us_rtor,
  RegisterId::register_usart0_us_ttgr_lon_mode,
  RegisterId::register_usart0_us_fidi_lon_mode,
  RegisterId::register_usart0_us_ner,
  RegisterId::register_usart0_us_if,
  RegisterId::register_usart0_us_man,
  RegisterId::register_usart0_us_linmr,
  RegisterId::register_usart0_us_linir,
  RegisterId::register_usart0_us_linbrr,
  RegisterId::register_usart0_us_lonmr,
  RegisterId::register_usart0_us_lonpr,
  RegisterId::register_usart0_us_londl,
  RegisterId::register_usart0_us_lonl2hdr,
  RegisterId::register_usart0_us_lonbl,
  RegisterId::register_usart0_us_lonb1tx,
  RegisterId::register_usart0_us_lonb1rx,
  RegisterId::register_usart0_us_lonprio,
  RegisterId::register_usart0_us_idttx,
  RegisterId::register_usart0_us_idtrx,
  RegisterId::register_usart0_us_icdiff,
  RegisterId::register_usart0_us_wpmr,
  RegisterId::register_usart0_us_wpsr,
  RegisterId::register_usart1_us_cr_lin_mode,
  RegisterId::register_usart1_us_mr_spi_mode,
  RegisterId::register_usart1_us_ier_lin_mode,
  RegisterId::register_usart1_us_idr_lin_mode,
  RegisterId::register_usart1_us_imr_lin_mode,
  RegisterId::register_usart1_us_csr_lin_mode,
  RegisterId::register_usart1_us_rhr,
  RegisterId::register_usart1_us_thr,
  RegisterId::register_usart1_us_brgr,
  RegisterId::register_usart1_us_rtor,
  RegisterId::register_usart1_us_ttgr_lon_mode,
  RegisterId::register_usart1_us_fidi_lon_mode,
  RegisterId::register_usart1_us_ner,
  RegisterId::register_usart1_us_if,
  RegisterId::register_usart1_us_man,
  RegisterId::register_usart1_us_linmr,
  RegisterId::register_usart1_us_linir,
  RegisterId::register_usart1_us_linbrr,
  RegisterId::register_usart1_us_lonmr,
  RegisterId::register_usart1_us_lonpr,
  RegisterId::register_usart1_us_londl,
  RegisterId::register_usart1_us_lonl2hdr,
  RegisterId::register_usart1_us_lonbl,
  RegisterId::register_usart1_us_lonb1tx,
  RegisterId::register_usart1_us_lonb1rx,
  RegisterId::register_usart1_us_lonprio,
  RegisterId::register_usart1_us_idttx,
  RegisterId::register_usart1_us_idtrx,
  RegisterId::register_usart1_us_icdiff,
  RegisterId::register_usart1_us_wpmr,
  RegisterId::register_usart1_us_wpsr,
  RegisterId::register_usart2_us_cr_lin_mode,
  RegisterId::register_usart2_us_mr_spi_mode,
  RegisterId::register_usart2_us_ier_lin_mode,
  RegisterId::register_usart2_us_idr_lin_mode,
  RegisterId::register_usart2_us_imr_lin_mode,
  RegisterId::register_usart2_us_csr_lin_mode,
  RegisterId::register_usart2_us_rhr,
  RegisterId::register_usart2_us_thr,
  RegisterId::register_usart2_us_brgr,
  RegisterId::register_usart2_us_rtor,
  RegisterId::register_usart2_us_ttgr_lon_mode,
  RegisterId::register_usart2_us_fidi_lon_mode,
  RegisterId::register_usart2_us_ner,
  RegisterId::register_usart2_us_if,
  RegisterId::register_usart2_us_man,
  RegisterId::register_usart2_us_linmr,
  RegisterId::register_usart2_us_linir,
  RegisterId::register_usart2_us_linbrr,
  RegisterId::register_usart2_us_lonmr,
  RegisterId::register_usart2_us_lonpr,
  RegisterId::register_usart2_us_londl,
  RegisterId::register_usart2_us_lonl2hdr,
  RegisterId::register_usart2_us_lonbl,
  RegisterId::register_usart2_us_lonb1tx,
  RegisterId::register_usart2_us_lonb1rx,
  RegisterId::register_usart2_us_lonprio,
  RegisterId::register_usart2_us_idttx,
  RegisterId::register_usart2_us_idtrx,
  RegisterId::register_usart2_us_icdiff,
  RegisterId::register_usart2_us_wpmr,
  RegisterId::register_usart2_us_wpsr,
}};
}
}
}
}
}
}
