#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1064 {
enum class RegisterId : std::uint16_t {
  none,
  register_ccm_cbcmr,
  register_ccm_cscdr1,
  register_ccm_ccgr0,
  register_ccm_ccgr1,
  register_ccm_ccgr2,
  register_ccm_ccgr3,
  register_ccm_ccgr5,
  register_ccm_ccgr6,
  register_gpio1_dr,
  register_gpio1_gdir,
  register_gpio1_psr,
  register_gpio1_icr1,
  register_gpio1_icr2,
  register_gpio1_imr,
  register_gpio1_isr,
  register_gpio1_edge_sel,
  register_gpio1_dr_set,
  register_gpio1_dr_clear,
  register_gpio1_dr_toggle,
  register_gpio10_dr,
  register_gpio10_gdir,
  register_gpio10_psr,
  register_gpio10_icr1,
  register_gpio10_icr2,
  register_gpio10_imr,
  register_gpio10_isr,
  register_gpio10_edge_sel,
  register_gpio10_dr_set,
  register_gpio10_dr_clear,
  register_gpio10_dr_toggle,
  register_gpio2_dr,
  register_gpio2_gdir,
  register_gpio2_psr,
  register_gpio2_icr1,
  register_gpio2_icr2,
  register_gpio2_imr,
  register_gpio2_isr,
  register_gpio2_edge_sel,
  register_gpio2_dr_set,
  register_gpio2_dr_clear,
  register_gpio2_dr_toggle,
  register_gpio3_dr,
  register_gpio3_gdir,
  register_gpio3_psr,
  register_gpio3_icr1,
  register_gpio3_icr2,
  register_gpio3_imr,
  register_gpio3_isr,
  register_gpio3_edge_sel,
  register_gpio3_dr_set,
  register_gpio3_dr_clear,
  register_gpio3_dr_toggle,
  register_gpio4_dr,
  register_gpio4_gdir,
  register_gpio4_psr,
  register_gpio4_icr1,
  register_gpio4_icr2,
  register_gpio4_imr,
  register_gpio4_isr,
  register_gpio4_edge_sel,
  register_gpio4_dr_set,
  register_gpio4_dr_clear,
  register_gpio4_dr_toggle,
  register_gpio5_dr,
  register_gpio5_gdir,
  register_gpio5_psr,
  register_gpio5_icr1,
  register_gpio5_icr2,
  register_gpio5_imr,
  register_gpio5_isr,
  register_gpio5_edge_sel,
  register_gpio5_dr_set,
  register_gpio5_dr_clear,
  register_gpio5_dr_toggle,
  register_gpio6_dr,
  register_gpio6_gdir,
  register_gpio6_psr,
  register_gpio6_icr1,
  register_gpio6_icr2,
  register_gpio6_imr,
  register_gpio6_isr,
  register_gpio6_edge_sel,
  register_gpio6_dr_set,
  register_gpio6_dr_clear,
  register_gpio6_dr_toggle,
  register_gpio7_dr,
  register_gpio7_gdir,
  register_gpio7_psr,
  register_gpio7_icr1,
  register_gpio7_icr2,
  register_gpio7_imr,
  register_gpio7_isr,
  register_gpio7_edge_sel,
  register_gpio7_dr_set,
  register_gpio7_dr_clear,
  register_gpio7_dr_toggle,
  register_gpio8_dr,
  register_gpio8_gdir,
  register_gpio8_psr,
  register_gpio8_icr1,
  register_gpio8_icr2,
  register_gpio8_imr,
  register_gpio8_isr,
  register_gpio8_edge_sel,
  register_gpio8_dr_set,
  register_gpio8_dr_clear,
  register_gpio8_dr_toggle,
  register_gpio9_dr,
  register_gpio9_gdir,
  register_gpio9_psr,
  register_gpio9_icr1,
  register_gpio9_icr2,
  register_gpio9_imr,
  register_gpio9_isr,
  register_gpio9_edge_sel,
  register_gpio9_dr_set,
  register_gpio9_dr_clear,
  register_gpio9_dr_toggle,
  register_lpspi1_verid,
  register_lpspi1_param,
  register_lpspi1_cr,
  register_lpspi1_sr,
  register_lpspi1_ier,
  register_lpspi1_der,
  register_lpspi1_cfgr0,
  register_lpspi1_cfgr1,
  register_lpspi1_dmr0,
  register_lpspi1_dmr1,
  register_lpspi1_ccr,
  register_lpspi1_fcr,
  register_lpspi1_fsr,
  register_lpspi1_tcr,
  register_lpspi1_tdr,
  register_lpspi1_rsr,
  register_lpspi1_rdr,
  register_lpspi2_verid,
  register_lpspi2_param,
  register_lpspi2_cr,
  register_lpspi2_sr,
  register_lpspi2_ier,
  register_lpspi2_der,
  register_lpspi2_cfgr0,
  register_lpspi2_cfgr1,
  register_lpspi2_dmr0,
  register_lpspi2_dmr1,
  register_lpspi2_ccr,
  register_lpspi2_fcr,
  register_lpspi2_fsr,
  register_lpspi2_tcr,
  register_lpspi2_tdr,
  register_lpspi2_rsr,
  register_lpspi2_rdr,
  register_lpspi3_verid,
  register_lpspi3_param,
  register_lpspi3_cr,
  register_lpspi3_sr,
  register_lpspi3_ier,
  register_lpspi3_der,
  register_lpspi3_cfgr0,
  register_lpspi3_cfgr1,
  register_lpspi3_dmr0,
  register_lpspi3_dmr1,
  register_lpspi3_ccr,
  register_lpspi3_fcr,
  register_lpspi3_fsr,
  register_lpspi3_tcr,
  register_lpspi3_tdr,
  register_lpspi3_rsr,
  register_lpspi3_rdr,
  register_lpspi4_verid,
  register_lpspi4_param,
  register_lpspi4_cr,
  register_lpspi4_sr,
  register_lpspi4_ier,
  register_lpspi4_der,
  register_lpspi4_cfgr0,
  register_lpspi4_cfgr1,
  register_lpspi4_dmr0,
  register_lpspi4_dmr1,
  register_lpspi4_ccr,
  register_lpspi4_fcr,
  register_lpspi4_fsr,
  register_lpspi4_tcr,
  register_lpspi4_tdr,
  register_lpspi4_rsr,
  register_lpspi4_rdr,
  register_lpuart1_verid,
  register_lpuart1_param,
  register_lpuart1_global,
  register_lpuart1_pincfg,
  register_lpuart1_baud,
  register_lpuart1_stat,
  register_lpuart1_ctrl,
  register_lpuart1_data,
  register_lpuart1_match,
  register_lpuart1_modir,
  register_lpuart1_fifo,
  register_lpuart1_water,
  register_lpuart2_verid,
  register_lpuart2_param,
  register_lpuart2_global,
  register_lpuart2_pincfg,
  register_lpuart2_baud,
  register_lpuart2_stat,
  register_lpuart2_ctrl,
  register_lpuart2_data,
  register_lpuart2_match,
  register_lpuart2_modir,
  register_lpuart2_fifo,
  register_lpuart2_water,
  register_lpuart3_verid,
  register_lpuart3_param,
  register_lpuart3_global,
  register_lpuart3_pincfg,
  register_lpuart3_baud,
  register_lpuart3_stat,
  register_lpuart3_ctrl,
  register_lpuart3_data,
  register_lpuart3_match,
  register_lpuart3_modir,
  register_lpuart3_fifo,
  register_lpuart3_water,
  register_lpuart4_verid,
  register_lpuart4_param,
  register_lpuart4_global,
  register_lpuart4_pincfg,
  register_lpuart4_baud,
  register_lpuart4_stat,
  register_lpuart4_ctrl,
  register_lpuart4_data,
  register_lpuart4_match,
  register_lpuart4_modir,
  register_lpuart4_fifo,
  register_lpuart4_water,
  register_lpuart5_verid,
  register_lpuart5_param,
  register_lpuart5_global,
  register_lpuart5_pincfg,
  register_lpuart5_baud,
  register_lpuart5_stat,
  register_lpuart5_ctrl,
  register_lpuart5_data,
  register_lpuart5_match,
  register_lpuart5_modir,
  register_lpuart5_fifo,
  register_lpuart5_water,
  register_lpuart6_verid,
  register_lpuart6_param,
  register_lpuart6_global,
  register_lpuart6_pincfg,
  register_lpuart6_baud,
  register_lpuart6_stat,
  register_lpuart6_ctrl,
  register_lpuart6_data,
  register_lpuart6_match,
  register_lpuart6_modir,
  register_lpuart6_fifo,
  register_lpuart6_water,
  register_lpuart7_verid,
  register_lpuart7_param,
  register_lpuart7_global,
  register_lpuart7_pincfg,
  register_lpuart7_baud,
  register_lpuart7_stat,
  register_lpuart7_ctrl,
  register_lpuart7_data,
  register_lpuart7_match,
  register_lpuart7_modir,
  register_lpuart7_fifo,
  register_lpuart7_water,
  register_lpuart8_verid,
  register_lpuart8_param,
  register_lpuart8_global,
  register_lpuart8_pincfg,
  register_lpuart8_baud,
  register_lpuart8_stat,
  register_lpuart8_ctrl,
  register_lpuart8_data,
  register_lpuart8_match,
  register_lpuart8_modir,
  register_lpuart8_fifo,
  register_lpuart8_water,
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
struct RegisterTraits<RegisterId::register_ccm_cbcmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_cscdr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_der> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_cfgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_cfgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_dmr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_dmr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_fsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_rsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_der> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_cfgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_cfgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_dmr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_dmr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_fsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_rsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_der> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_cfgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_cfgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_dmr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_dmr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_fsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_rsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_der> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_cfgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_cfgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_dmr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_dmr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_fsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_rsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

inline constexpr std::array<RegisterId, 282> kRegisters = {{
  RegisterId::register_ccm_cbcmr,
  RegisterId::register_ccm_cscdr1,
  RegisterId::register_ccm_ccgr0,
  RegisterId::register_ccm_ccgr1,
  RegisterId::register_ccm_ccgr2,
  RegisterId::register_ccm_ccgr3,
  RegisterId::register_ccm_ccgr5,
  RegisterId::register_ccm_ccgr6,
  RegisterId::register_gpio1_dr,
  RegisterId::register_gpio1_gdir,
  RegisterId::register_gpio1_psr,
  RegisterId::register_gpio1_icr1,
  RegisterId::register_gpio1_icr2,
  RegisterId::register_gpio1_imr,
  RegisterId::register_gpio1_isr,
  RegisterId::register_gpio1_edge_sel,
  RegisterId::register_gpio1_dr_set,
  RegisterId::register_gpio1_dr_clear,
  RegisterId::register_gpio1_dr_toggle,
  RegisterId::register_gpio10_dr,
  RegisterId::register_gpio10_gdir,
  RegisterId::register_gpio10_psr,
  RegisterId::register_gpio10_icr1,
  RegisterId::register_gpio10_icr2,
  RegisterId::register_gpio10_imr,
  RegisterId::register_gpio10_isr,
  RegisterId::register_gpio10_edge_sel,
  RegisterId::register_gpio10_dr_set,
  RegisterId::register_gpio10_dr_clear,
  RegisterId::register_gpio10_dr_toggle,
  RegisterId::register_gpio2_dr,
  RegisterId::register_gpio2_gdir,
  RegisterId::register_gpio2_psr,
  RegisterId::register_gpio2_icr1,
  RegisterId::register_gpio2_icr2,
  RegisterId::register_gpio2_imr,
  RegisterId::register_gpio2_isr,
  RegisterId::register_gpio2_edge_sel,
  RegisterId::register_gpio2_dr_set,
  RegisterId::register_gpio2_dr_clear,
  RegisterId::register_gpio2_dr_toggle,
  RegisterId::register_gpio3_dr,
  RegisterId::register_gpio3_gdir,
  RegisterId::register_gpio3_psr,
  RegisterId::register_gpio3_icr1,
  RegisterId::register_gpio3_icr2,
  RegisterId::register_gpio3_imr,
  RegisterId::register_gpio3_isr,
  RegisterId::register_gpio3_edge_sel,
  RegisterId::register_gpio3_dr_set,
  RegisterId::register_gpio3_dr_clear,
  RegisterId::register_gpio3_dr_toggle,
  RegisterId::register_gpio4_dr,
  RegisterId::register_gpio4_gdir,
  RegisterId::register_gpio4_psr,
  RegisterId::register_gpio4_icr1,
  RegisterId::register_gpio4_icr2,
  RegisterId::register_gpio4_imr,
  RegisterId::register_gpio4_isr,
  RegisterId::register_gpio4_edge_sel,
  RegisterId::register_gpio4_dr_set,
  RegisterId::register_gpio4_dr_clear,
  RegisterId::register_gpio4_dr_toggle,
  RegisterId::register_gpio5_dr,
  RegisterId::register_gpio5_gdir,
  RegisterId::register_gpio5_psr,
  RegisterId::register_gpio5_icr1,
  RegisterId::register_gpio5_icr2,
  RegisterId::register_gpio5_imr,
  RegisterId::register_gpio5_isr,
  RegisterId::register_gpio5_edge_sel,
  RegisterId::register_gpio5_dr_set,
  RegisterId::register_gpio5_dr_clear,
  RegisterId::register_gpio5_dr_toggle,
  RegisterId::register_gpio6_dr,
  RegisterId::register_gpio6_gdir,
  RegisterId::register_gpio6_psr,
  RegisterId::register_gpio6_icr1,
  RegisterId::register_gpio6_icr2,
  RegisterId::register_gpio6_imr,
  RegisterId::register_gpio6_isr,
  RegisterId::register_gpio6_edge_sel,
  RegisterId::register_gpio6_dr_set,
  RegisterId::register_gpio6_dr_clear,
  RegisterId::register_gpio6_dr_toggle,
  RegisterId::register_gpio7_dr,
  RegisterId::register_gpio7_gdir,
  RegisterId::register_gpio7_psr,
  RegisterId::register_gpio7_icr1,
  RegisterId::register_gpio7_icr2,
  RegisterId::register_gpio7_imr,
  RegisterId::register_gpio7_isr,
  RegisterId::register_gpio7_edge_sel,
  RegisterId::register_gpio7_dr_set,
  RegisterId::register_gpio7_dr_clear,
  RegisterId::register_gpio7_dr_toggle,
  RegisterId::register_gpio8_dr,
  RegisterId::register_gpio8_gdir,
  RegisterId::register_gpio8_psr,
  RegisterId::register_gpio8_icr1,
  RegisterId::register_gpio8_icr2,
  RegisterId::register_gpio8_imr,
  RegisterId::register_gpio8_isr,
  RegisterId::register_gpio8_edge_sel,
  RegisterId::register_gpio8_dr_set,
  RegisterId::register_gpio8_dr_clear,
  RegisterId::register_gpio8_dr_toggle,
  RegisterId::register_gpio9_dr,
  RegisterId::register_gpio9_gdir,
  RegisterId::register_gpio9_psr,
  RegisterId::register_gpio9_icr1,
  RegisterId::register_gpio9_icr2,
  RegisterId::register_gpio9_imr,
  RegisterId::register_gpio9_isr,
  RegisterId::register_gpio9_edge_sel,
  RegisterId::register_gpio9_dr_set,
  RegisterId::register_gpio9_dr_clear,
  RegisterId::register_gpio9_dr_toggle,
  RegisterId::register_lpspi1_verid,
  RegisterId::register_lpspi1_param,
  RegisterId::register_lpspi1_cr,
  RegisterId::register_lpspi1_sr,
  RegisterId::register_lpspi1_ier,
  RegisterId::register_lpspi1_der,
  RegisterId::register_lpspi1_cfgr0,
  RegisterId::register_lpspi1_cfgr1,
  RegisterId::register_lpspi1_dmr0,
  RegisterId::register_lpspi1_dmr1,
  RegisterId::register_lpspi1_ccr,
  RegisterId::register_lpspi1_fcr,
  RegisterId::register_lpspi1_fsr,
  RegisterId::register_lpspi1_tcr,
  RegisterId::register_lpspi1_tdr,
  RegisterId::register_lpspi1_rsr,
  RegisterId::register_lpspi1_rdr,
  RegisterId::register_lpspi2_verid,
  RegisterId::register_lpspi2_param,
  RegisterId::register_lpspi2_cr,
  RegisterId::register_lpspi2_sr,
  RegisterId::register_lpspi2_ier,
  RegisterId::register_lpspi2_der,
  RegisterId::register_lpspi2_cfgr0,
  RegisterId::register_lpspi2_cfgr1,
  RegisterId::register_lpspi2_dmr0,
  RegisterId::register_lpspi2_dmr1,
  RegisterId::register_lpspi2_ccr,
  RegisterId::register_lpspi2_fcr,
  RegisterId::register_lpspi2_fsr,
  RegisterId::register_lpspi2_tcr,
  RegisterId::register_lpspi2_tdr,
  RegisterId::register_lpspi2_rsr,
  RegisterId::register_lpspi2_rdr,
  RegisterId::register_lpspi3_verid,
  RegisterId::register_lpspi3_param,
  RegisterId::register_lpspi3_cr,
  RegisterId::register_lpspi3_sr,
  RegisterId::register_lpspi3_ier,
  RegisterId::register_lpspi3_der,
  RegisterId::register_lpspi3_cfgr0,
  RegisterId::register_lpspi3_cfgr1,
  RegisterId::register_lpspi3_dmr0,
  RegisterId::register_lpspi3_dmr1,
  RegisterId::register_lpspi3_ccr,
  RegisterId::register_lpspi3_fcr,
  RegisterId::register_lpspi3_fsr,
  RegisterId::register_lpspi3_tcr,
  RegisterId::register_lpspi3_tdr,
  RegisterId::register_lpspi3_rsr,
  RegisterId::register_lpspi3_rdr,
  RegisterId::register_lpspi4_verid,
  RegisterId::register_lpspi4_param,
  RegisterId::register_lpspi4_cr,
  RegisterId::register_lpspi4_sr,
  RegisterId::register_lpspi4_ier,
  RegisterId::register_lpspi4_der,
  RegisterId::register_lpspi4_cfgr0,
  RegisterId::register_lpspi4_cfgr1,
  RegisterId::register_lpspi4_dmr0,
  RegisterId::register_lpspi4_dmr1,
  RegisterId::register_lpspi4_ccr,
  RegisterId::register_lpspi4_fcr,
  RegisterId::register_lpspi4_fsr,
  RegisterId::register_lpspi4_tcr,
  RegisterId::register_lpspi4_tdr,
  RegisterId::register_lpspi4_rsr,
  RegisterId::register_lpspi4_rdr,
  RegisterId::register_lpuart1_verid,
  RegisterId::register_lpuart1_param,
  RegisterId::register_lpuart1_global,
  RegisterId::register_lpuart1_pincfg,
  RegisterId::register_lpuart1_baud,
  RegisterId::register_lpuart1_stat,
  RegisterId::register_lpuart1_ctrl,
  RegisterId::register_lpuart1_data,
  RegisterId::register_lpuart1_match,
  RegisterId::register_lpuart1_modir,
  RegisterId::register_lpuart1_fifo,
  RegisterId::register_lpuart1_water,
  RegisterId::register_lpuart2_verid,
  RegisterId::register_lpuart2_param,
  RegisterId::register_lpuart2_global,
  RegisterId::register_lpuart2_pincfg,
  RegisterId::register_lpuart2_baud,
  RegisterId::register_lpuart2_stat,
  RegisterId::register_lpuart2_ctrl,
  RegisterId::register_lpuart2_data,
  RegisterId::register_lpuart2_match,
  RegisterId::register_lpuart2_modir,
  RegisterId::register_lpuart2_fifo,
  RegisterId::register_lpuart2_water,
  RegisterId::register_lpuart3_verid,
  RegisterId::register_lpuart3_param,
  RegisterId::register_lpuart3_global,
  RegisterId::register_lpuart3_pincfg,
  RegisterId::register_lpuart3_baud,
  RegisterId::register_lpuart3_stat,
  RegisterId::register_lpuart3_ctrl,
  RegisterId::register_lpuart3_data,
  RegisterId::register_lpuart3_match,
  RegisterId::register_lpuart3_modir,
  RegisterId::register_lpuart3_fifo,
  RegisterId::register_lpuart3_water,
  RegisterId::register_lpuart4_verid,
  RegisterId::register_lpuart4_param,
  RegisterId::register_lpuart4_global,
  RegisterId::register_lpuart4_pincfg,
  RegisterId::register_lpuart4_baud,
  RegisterId::register_lpuart4_stat,
  RegisterId::register_lpuart4_ctrl,
  RegisterId::register_lpuart4_data,
  RegisterId::register_lpuart4_match,
  RegisterId::register_lpuart4_modir,
  RegisterId::register_lpuart4_fifo,
  RegisterId::register_lpuart4_water,
  RegisterId::register_lpuart5_verid,
  RegisterId::register_lpuart5_param,
  RegisterId::register_lpuart5_global,
  RegisterId::register_lpuart5_pincfg,
  RegisterId::register_lpuart5_baud,
  RegisterId::register_lpuart5_stat,
  RegisterId::register_lpuart5_ctrl,
  RegisterId::register_lpuart5_data,
  RegisterId::register_lpuart5_match,
  RegisterId::register_lpuart5_modir,
  RegisterId::register_lpuart5_fifo,
  RegisterId::register_lpuart5_water,
  RegisterId::register_lpuart6_verid,
  RegisterId::register_lpuart6_param,
  RegisterId::register_lpuart6_global,
  RegisterId::register_lpuart6_pincfg,
  RegisterId::register_lpuart6_baud,
  RegisterId::register_lpuart6_stat,
  RegisterId::register_lpuart6_ctrl,
  RegisterId::register_lpuart6_data,
  RegisterId::register_lpuart6_match,
  RegisterId::register_lpuart6_modir,
  RegisterId::register_lpuart6_fifo,
  RegisterId::register_lpuart6_water,
  RegisterId::register_lpuart7_verid,
  RegisterId::register_lpuart7_param,
  RegisterId::register_lpuart7_global,
  RegisterId::register_lpuart7_pincfg,
  RegisterId::register_lpuart7_baud,
  RegisterId::register_lpuart7_stat,
  RegisterId::register_lpuart7_ctrl,
  RegisterId::register_lpuart7_data,
  RegisterId::register_lpuart7_match,
  RegisterId::register_lpuart7_modir,
  RegisterId::register_lpuart7_fifo,
  RegisterId::register_lpuart7_water,
  RegisterId::register_lpuart8_verid,
  RegisterId::register_lpuart8_param,
  RegisterId::register_lpuart8_global,
  RegisterId::register_lpuart8_pincfg,
  RegisterId::register_lpuart8_baud,
  RegisterId::register_lpuart8_stat,
  RegisterId::register_lpuart8_ctrl,
  RegisterId::register_lpuart8_data,
  RegisterId::register_lpuart8_match,
  RegisterId::register_lpuart8_modir,
  RegisterId::register_lpuart8_fifo,
  RegisterId::register_lpuart8_water,
}};
}
}
}
}
}
}
