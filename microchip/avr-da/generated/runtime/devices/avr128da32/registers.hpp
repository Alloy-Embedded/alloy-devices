#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace microchip {
namespace avr_da {
namespace generated {
namespace runtime {
namespace devices {
namespace avr128da32 {
enum class RegisterId : std::uint16_t {
  none,
  register_adc0_ctrla,
  register_adc0_ctrlb,
  register_adc0_ctrlc,
  register_adc0_ctrld,
  register_adc0_ctrle,
  register_adc0_sampctrl,
  register_adc0_muxpos,
  register_adc0_muxneg,
  register_adc0_command,
  register_adc0_evctrl,
  register_adc0_intctrl,
  register_adc0_intflags,
  register_adc0_dbgctrl,
  register_adc0_temp,
  register_adc0_res,
  register_adc0_winlt,
  register_adc0_winht,
  register_spi0_ctrla,
  register_spi0_ctrlb,
  register_spi0_intctrl,
  register_spi0_intflags,
  register_spi0_data,
  register_tca0_ctrla,
  register_tca0_ctrlb,
  register_tca0_ctrlc,
  register_tca0_ctrld,
  register_tca0_ctrleclr,
  register_tca0_ctrleset,
  register_tca0_ctrlfclr,
  register_tca0_ctrlfset,
  register_tca0_evctrl,
  register_tca0_intctrl,
  register_tca0_intflags,
  register_tca0_dbgctrl,
  register_tca0_temp,
  register_tca0_cnt,
  register_tca0_hcnt,
  register_tca0_lper,
  register_tca0_hper,
  register_tca0_cmp0,
  register_tca0_hcmp0,
  register_tca0_cmp1,
  register_tca0_hcmp1,
  register_tca0_cmp2,
  register_tca0_hcmp2,
  register_tca0_perbuf,
  register_tca0_cmp0buf,
  register_tca0_cmp1buf,
  register_tca0_cmp2buf,
  register_twi0_ctrla,
  register_twi0_dualctrl,
  register_twi0_dbgctrl,
  register_twi0_mctrla,
  register_twi0_mctrlb,
  register_twi0_mstatus,
  register_twi0_mbaud,
  register_twi0_maddr,
  register_twi0_mdata,
  register_twi0_sctrla,
  register_twi0_sctrlb,
  register_twi0_sstatus,
  register_twi0_saddr,
  register_twi0_sdata,
  register_twi0_saddrmask,
  register_usart0_rxdatal,
  register_usart0_rxdatah,
  register_usart0_txdatal,
  register_usart0_txdatah,
  register_usart0_status,
  register_usart0_ctrla,
  register_usart0_ctrlb,
  register_usart0_ctrlc,
  register_usart0_baud,
  register_usart0_ctrld,
  register_usart0_dbgctrl,
  register_usart0_evctrl,
  register_usart0_txplctrl,
  register_usart0_rxplctrl,
  register_usart1_rxdatal,
  register_usart1_rxdatah,
  register_usart1_txdatal,
  register_usart1_txdatah,
  register_usart1_status,
  register_usart1_ctrla,
  register_usart1_ctrlb,
  register_usart1_ctrlc,
  register_usart1_baud,
  register_usart1_ctrld,
  register_usart1_dbgctrl,
  register_usart1_evctrl,
  register_usart1_txplctrl,
  register_usart1_rxplctrl,
};

enum class RegisterRole : std::uint16_t {
  none,
  general,
  secondary_core_release,
};

template<RegisterId Id>
struct RegisterTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uintptr_t kBaseAddress = 0u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_ctrla> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_ctrlb> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_ctrlc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_ctrld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_ctrle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_sampctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_muxpos> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_muxneg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_command> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_evctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 11u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_intctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_intflags> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_dbgctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 14u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_temp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 15u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_res> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_winlt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 18u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc0_winht> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000600u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_ctrla> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000940u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_ctrlb> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000940u;
  static constexpr std::uint32_t kOffsetBytes = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_intctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000940u;
  static constexpr std::uint32_t kOffsetBytes = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_intflags> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000940u;
  static constexpr std::uint32_t kOffsetBytes = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000940u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_ctrla> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_ctrlb> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_ctrlc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_ctrld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_ctrleclr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_ctrleset> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_ctrlfclr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_ctrlfset> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_evctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_intctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_intflags> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 11u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_dbgctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 14u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_temp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 15u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_hcnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 33u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_lper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 38u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_hper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 39u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_cmp0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_hcmp0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 41u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_cmp1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 42u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_hcmp1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 43u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_cmp2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_hcmp2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 45u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_perbuf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 54u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_cmp0buf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_cmp1buf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 58u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tca0_cmp2buf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000A00u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_ctrla> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_dualctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_dbgctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_mctrla> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_mctrlb> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_mstatus> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_mbaud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_maddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_mdata> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_sctrla> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_sctrlb> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_sstatus> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 11u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_sdata> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_twi0_saddrmask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000900u;
  static constexpr std::uint32_t kOffsetBytes = 14u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_rxdatal> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_rxdatah> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_txdatal> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_txdatah> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_status> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_ctrla> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_ctrlb> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_ctrlc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_ctrld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_dbgctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 11u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_evctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_txplctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart0_rxplctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000800u;
  static constexpr std::uint32_t kOffsetBytes = 14u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_rxdatal> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_rxdatah> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_txdatal> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_txdatah> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_status> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_ctrla> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_ctrlb> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_ctrlc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_ctrld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_dbgctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 11u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_evctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_txplctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_rxplctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x00000820u;
  static constexpr std::uint32_t kOffsetBytes = 14u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

inline constexpr std::array<RegisterId, 92> kRegisters = {{
  RegisterId::register_adc0_ctrla,
  RegisterId::register_adc0_ctrlb,
  RegisterId::register_adc0_ctrlc,
  RegisterId::register_adc0_ctrld,
  RegisterId::register_adc0_ctrle,
  RegisterId::register_adc0_sampctrl,
  RegisterId::register_adc0_muxpos,
  RegisterId::register_adc0_muxneg,
  RegisterId::register_adc0_command,
  RegisterId::register_adc0_evctrl,
  RegisterId::register_adc0_intctrl,
  RegisterId::register_adc0_intflags,
  RegisterId::register_adc0_dbgctrl,
  RegisterId::register_adc0_temp,
  RegisterId::register_adc0_res,
  RegisterId::register_adc0_winlt,
  RegisterId::register_adc0_winht,
  RegisterId::register_spi0_ctrla,
  RegisterId::register_spi0_ctrlb,
  RegisterId::register_spi0_intctrl,
  RegisterId::register_spi0_intflags,
  RegisterId::register_spi0_data,
  RegisterId::register_tca0_ctrla,
  RegisterId::register_tca0_ctrlb,
  RegisterId::register_tca0_ctrlc,
  RegisterId::register_tca0_ctrld,
  RegisterId::register_tca0_ctrleclr,
  RegisterId::register_tca0_ctrleset,
  RegisterId::register_tca0_ctrlfclr,
  RegisterId::register_tca0_ctrlfset,
  RegisterId::register_tca0_evctrl,
  RegisterId::register_tca0_intctrl,
  RegisterId::register_tca0_intflags,
  RegisterId::register_tca0_dbgctrl,
  RegisterId::register_tca0_temp,
  RegisterId::register_tca0_cnt,
  RegisterId::register_tca0_hcnt,
  RegisterId::register_tca0_lper,
  RegisterId::register_tca0_hper,
  RegisterId::register_tca0_cmp0,
  RegisterId::register_tca0_hcmp0,
  RegisterId::register_tca0_cmp1,
  RegisterId::register_tca0_hcmp1,
  RegisterId::register_tca0_cmp2,
  RegisterId::register_tca0_hcmp2,
  RegisterId::register_tca0_perbuf,
  RegisterId::register_tca0_cmp0buf,
  RegisterId::register_tca0_cmp1buf,
  RegisterId::register_tca0_cmp2buf,
  RegisterId::register_twi0_ctrla,
  RegisterId::register_twi0_dualctrl,
  RegisterId::register_twi0_dbgctrl,
  RegisterId::register_twi0_mctrla,
  RegisterId::register_twi0_mctrlb,
  RegisterId::register_twi0_mstatus,
  RegisterId::register_twi0_mbaud,
  RegisterId::register_twi0_maddr,
  RegisterId::register_twi0_mdata,
  RegisterId::register_twi0_sctrla,
  RegisterId::register_twi0_sctrlb,
  RegisterId::register_twi0_sstatus,
  RegisterId::register_twi0_saddr,
  RegisterId::register_twi0_sdata,
  RegisterId::register_twi0_saddrmask,
  RegisterId::register_usart0_rxdatal,
  RegisterId::register_usart0_rxdatah,
  RegisterId::register_usart0_txdatal,
  RegisterId::register_usart0_txdatah,
  RegisterId::register_usart0_status,
  RegisterId::register_usart0_ctrla,
  RegisterId::register_usart0_ctrlb,
  RegisterId::register_usart0_ctrlc,
  RegisterId::register_usart0_baud,
  RegisterId::register_usart0_ctrld,
  RegisterId::register_usart0_dbgctrl,
  RegisterId::register_usart0_evctrl,
  RegisterId::register_usart0_txplctrl,
  RegisterId::register_usart0_rxplctrl,
  RegisterId::register_usart1_rxdatal,
  RegisterId::register_usart1_rxdatah,
  RegisterId::register_usart1_txdatal,
  RegisterId::register_usart1_txdatah,
  RegisterId::register_usart1_status,
  RegisterId::register_usart1_ctrla,
  RegisterId::register_usart1_ctrlb,
  RegisterId::register_usart1_ctrlc,
  RegisterId::register_usart1_baud,
  RegisterId::register_usart1_ctrld,
  RegisterId::register_usart1_dbgctrl,
  RegisterId::register_usart1_evctrl,
  RegisterId::register_usart1_txplctrl,
  RegisterId::register_usart1_rxplctrl,
}};
}
}
}
}
}
}
