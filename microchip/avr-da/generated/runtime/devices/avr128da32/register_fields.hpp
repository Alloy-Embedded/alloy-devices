#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "registers.hpp"

namespace microchip {
namespace avr_da {
namespace generated {
namespace runtime {
namespace devices {
namespace avr128da32 {
enum class FieldId : std::uint16_t {
  none,
  field_spi0_ctrla_enable,
  field_spi0_ctrla_presc,
  field_spi0_ctrla_clk2x,
  field_spi0_ctrla_master,
  field_spi0_ctrla_dord,
  field_spi0_ctrlb_mode,
  field_spi0_ctrlb_ssd,
  field_spi0_ctrlb_bufwr,
  field_spi0_ctrlb_bufen,
  field_spi0_intctrl_ie,
  field_spi0_intctrl_ssie,
  field_spi0_intctrl_dreie,
  field_spi0_intctrl_txcie,
  field_spi0_intctrl_rxcie,
  field_spi0_intflags_bufovf,
  field_spi0_intflags_ssif,
  field_spi0_intflags_dreif,
  field_spi0_intflags_txcif,
  field_spi0_intflags_wrcol,
  field_spi0_intflags_if,
  field_spi0_intflags_rxcif,
  field_tca0_ctrla_enable,
  field_tca0_ctrla_clksel,
  field_tca0_ctrla_runstdby,
  field_tca0_ctrlb_wgmode,
  field_tca0_ctrlb_alupd,
  field_tca0_ctrlb_cmp0en,
  field_tca0_ctrlb_cmp1en,
  field_tca0_ctrlb_cmp2en,
  field_tca0_ctrlc_cmp0ov,
  field_tca0_ctrlc_cmp1ov,
  field_tca0_ctrlc_cmp2ov,
  field_tca0_ctrld_splitm,
  field_tca0_ctrleclr_dir,
  field_tca0_ctrleclr_lupd,
  field_tca0_ctrleclr_cmd,
  field_tca0_ctrleset_dir,
  field_tca0_ctrleset_lupd,
  field_tca0_ctrleset_cmd,
  field_tca0_ctrlfclr_perbv,
  field_tca0_ctrlfclr_cmp0bv,
  field_tca0_ctrlfclr_cmp1bv,
  field_tca0_ctrlfclr_cmp2bv,
  field_tca0_ctrlfset_perbv,
  field_tca0_ctrlfset_cmp0bv,
  field_tca0_ctrlfset_cmp1bv,
  field_tca0_ctrlfset_cmp2bv,
  field_tca0_dbgctrl_dbgrun,
  field_tca0_evctrl_cntaei,
  field_tca0_evctrl_evacta,
  field_tca0_evctrl_cntbei,
  field_tca0_evctrl_evactb,
  field_tca0_intctrl_ovf,
  field_tca0_intctrl_cmp0,
  field_tca0_intctrl_cmp1,
  field_tca0_intctrl_cmp2,
  field_tca0_intflags_ovf,
  field_tca0_intflags_cmp0,
  field_tca0_intflags_cmp1,
  field_tca0_intflags_cmp2,
  field_twi0_ctrla_fmpen,
  field_twi0_ctrla_sdahold,
  field_twi0_ctrla_sdasetup,
  field_twi0_ctrla_inputlvl,
  field_twi0_dbgctrl_dbgrun,
  field_twi0_dualctrl_enable,
  field_twi0_dualctrl_fmpen,
  field_twi0_dualctrl_sdahold,
  field_twi0_dualctrl_inputlvl,
  field_twi0_mctrla_enable,
  field_twi0_mctrla_smen,
  field_twi0_mctrla_timeout,
  field_twi0_mctrla_qcen,
  field_twi0_mctrla_wien,
  field_twi0_mctrla_rien,
  field_twi0_mctrlb_mcmd,
  field_twi0_mctrlb_ackact,
  field_twi0_mctrlb_flush,
  field_twi0_mstatus_busstate,
  field_twi0_mstatus_buserr,
  field_twi0_mstatus_arblost,
  field_twi0_mstatus_rxack,
  field_twi0_mstatus_clkhold,
  field_twi0_mstatus_wif,
  field_twi0_mstatus_rif,
  field_twi0_saddrmask_addren,
  field_twi0_saddrmask_addrmask,
  field_twi0_sctrla_enable,
  field_twi0_sctrla_smen,
  field_twi0_sctrla_pmen,
  field_twi0_sctrla_pien,
  field_twi0_sctrla_apien,
  field_twi0_sctrla_dien,
  field_twi0_sctrlb_scmd,
  field_twi0_sctrlb_ackact,
  field_twi0_sstatus_ap,
  field_twi0_sstatus_dir,
  field_twi0_sstatus_buserr,
  field_twi0_sstatus_coll,
  field_twi0_sstatus_rxack,
  field_twi0_sstatus_clkhold,
  field_twi0_sstatus_apif,
  field_twi0_sstatus_dif,
  field_usart0_ctrla_rs485,
  field_usart0_ctrla_abeie,
  field_usart0_ctrla_lbme,
  field_usart0_ctrla_rxsie,
  field_usart0_ctrla_dreie,
  field_usart0_ctrla_txcie,
  field_usart0_ctrla_rxcie,
  field_usart0_ctrlb_mpcm,
  field_usart0_ctrlb_rxmode,
  field_usart0_ctrlb_odme,
  field_usart0_ctrlb_sfden,
  field_usart0_ctrlb_txen,
  field_usart0_ctrlb_rxen,
  field_usart0_ctrlc_chsize,
  field_usart0_ctrlc_ucpha,
  field_usart0_ctrlc_udord,
  field_usart0_ctrlc_sbmode,
  field_usart0_ctrlc_pmode,
  field_usart0_ctrlc_cmode,
  field_usart0_ctrld_abw,
  field_usart0_dbgctrl_dbgrun,
  field_usart0_evctrl_irei,
  field_usart0_rxdatah_data8,
  field_usart0_rxdatah_perr,
  field_usart0_rxdatah_ferr,
  field_usart0_rxdatah_bufovf,
  field_usart0_rxdatah_rxcif,
  field_usart0_rxdatal_data,
  field_usart0_rxplctrl_rxpl,
  field_usart0_status_wfb,
  field_usart0_status_bdf,
  field_usart0_status_isfif,
  field_usart0_status_rxsif,
  field_usart0_status_dreif,
  field_usart0_status_txcif,
  field_usart0_status_rxcif,
  field_usart0_txdatah_data8,
  field_usart0_txdatal_data,
  field_usart0_txplctrl_txpl,
  field_usart1_ctrla_rs485,
  field_usart1_ctrla_abeie,
  field_usart1_ctrla_lbme,
  field_usart1_ctrla_rxsie,
  field_usart1_ctrla_dreie,
  field_usart1_ctrla_txcie,
  field_usart1_ctrla_rxcie,
  field_usart1_ctrlb_mpcm,
  field_usart1_ctrlb_rxmode,
  field_usart1_ctrlb_odme,
  field_usart1_ctrlb_sfden,
  field_usart1_ctrlb_txen,
  field_usart1_ctrlb_rxen,
  field_usart1_ctrlc_chsize,
  field_usart1_ctrlc_ucpha,
  field_usart1_ctrlc_udord,
  field_usart1_ctrlc_sbmode,
  field_usart1_ctrlc_pmode,
  field_usart1_ctrlc_cmode,
  field_usart1_ctrld_abw,
  field_usart1_dbgctrl_dbgrun,
  field_usart1_evctrl_irei,
  field_usart1_rxdatah_data8,
  field_usart1_rxdatah_perr,
  field_usart1_rxdatah_ferr,
  field_usart1_rxdatah_bufovf,
  field_usart1_rxdatah_rxcif,
  field_usart1_rxdatal_data,
  field_usart1_rxplctrl_rxpl,
  field_usart1_status_wfb,
  field_usart1_status_bdf,
  field_usart1_status_isfif,
  field_usart1_status_rxsif,
  field_usart1_status_dreif,
  field_usart1_status_txcif,
  field_usart1_status_rxcif,
  field_usart1_txdatah_data8,
  field_usart1_txdatal_data,
  field_usart1_txplctrl_txpl,
};

template<FieldId Id>
struct RegisterFieldTraits {
  static constexpr bool kPresent = false;
  static constexpr RegisterId kRegisterId = RegisterId::none;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ctrla_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ctrla;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ctrla_presc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ctrla;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ctrla_clk2x> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ctrla;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ctrla_master> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ctrla;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ctrla_dord> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ctrla;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ctrlb_mode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ctrlb_ssd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ctrlb_bufwr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ctrlb_bufen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intctrl_ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intctrl_ssie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intctrl_dreie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intctrl_txcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intctrl_rxcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intctrl;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intflags_bufovf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intflags;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intflags_ssif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intflags;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intflags_dreif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intflags;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intflags_txcif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intflags;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intflags_wrcol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intflags;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intflags_if> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intflags;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_intflags_rxcif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_intflags;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrla_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrla;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrla_clksel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrla;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrla_runstdby> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrla;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlb_wgmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlb_alupd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlb_cmp0en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlb_cmp1en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlb_cmp2en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlc_cmp0ov> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlc_cmp1ov> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlc;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlc_cmp2ov> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlc;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrld_splitm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrld;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrleclr_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrleclr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrleclr_lupd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrleclr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrleclr_cmd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrleclr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrleset_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrleset;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrleset_lupd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrleset;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrleset_cmd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrleset;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlfclr_perbv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlfclr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlfclr_cmp0bv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlfclr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlfclr_cmp1bv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlfclr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlfclr_cmp2bv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlfclr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlfset_perbv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlfset;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlfset_cmp0bv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlfset;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlfset_cmp1bv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlfset;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_ctrlfset_cmp2bv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_ctrlfset;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_dbgctrl_dbgrun> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_dbgctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_evctrl_cntaei> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_evctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_evctrl_evacta> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_evctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_evctrl_cntbei> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_evctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_evctrl_evactb> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_evctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_intctrl_ovf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_intctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_intctrl_cmp0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_intctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_intctrl_cmp1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_intctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_intctrl_cmp2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_intctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_intflags_ovf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_intflags;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_intflags_cmp0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_intflags;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_intflags_cmp1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_intflags;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_tca0_intflags_cmp2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_tca0_intflags;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_ctrla_fmpen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_ctrla;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_ctrla_sdahold> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_ctrla;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_ctrla_sdasetup> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_ctrla;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_ctrla_inputlvl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_ctrla;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_dbgctrl_dbgrun> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_dbgctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_dualctrl_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_dualctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_dualctrl_fmpen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_dualctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_dualctrl_sdahold> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_dualctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_dualctrl_inputlvl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_dualctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mctrla_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mctrla;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mctrla_smen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mctrla;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mctrla_timeout> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mctrla;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mctrla_qcen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mctrla;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mctrla_wien> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mctrla;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mctrla_rien> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mctrla;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mctrlb_mcmd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mctrlb;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mctrlb_ackact> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mctrlb;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mctrlb_flush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mctrlb;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mstatus_busstate> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mstatus;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mstatus_buserr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mstatus;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mstatus_arblost> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mstatus;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mstatus_rxack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mstatus;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mstatus_clkhold> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mstatus;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mstatus_wif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mstatus;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_mstatus_rif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_mstatus;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_saddrmask_addren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_saddrmask;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_saddrmask_addrmask> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_saddrmask;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sctrla_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sctrla;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sctrla_smen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sctrla;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sctrla_pmen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sctrla;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sctrla_pien> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sctrla;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sctrla_apien> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sctrla;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sctrla_dien> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sctrla;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sctrlb_scmd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sctrlb;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sctrlb_ackact> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sctrlb;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sstatus_ap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sstatus;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sstatus_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sstatus;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sstatus_buserr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sstatus;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sstatus_coll> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sstatus;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sstatus_rxack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sstatus;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sstatus_clkhold> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sstatus;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sstatus_apif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sstatus;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_twi0_sstatus_dif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_twi0_sstatus;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrla_rs485> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrla;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrla_abeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrla;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrla_lbme> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrla;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrla_rxsie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrla;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrla_dreie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrla;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrla_txcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrla;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrla_rxcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrla;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlb_mpcm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlb_rxmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlb_odme> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlb_sfden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlb_txen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlb_rxen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlb;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlc_chsize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlc_ucpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlc;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlc_udord> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlc;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlc_sbmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlc;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlc_pmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlc;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrlc_cmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrlc;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_ctrld_abw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_ctrld;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_dbgctrl_dbgrun> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_dbgctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_evctrl_irei> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_evctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_rxdatah_data8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_rxdatah;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_rxdatah_perr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_rxdatah;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_rxdatah_ferr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_rxdatah;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_rxdatah_bufovf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_rxdatah;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_rxdatah_rxcif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_rxdatah;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_rxdatal_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_rxdatal;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_rxplctrl_rxpl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_rxplctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_status_wfb> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_status;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_status_bdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_status;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_status_isfif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_status;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_status_rxsif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_status;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_status_dreif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_status;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_status_txcif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_status;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_status_rxcif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_status;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_txdatah_data8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_txdatah;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_txdatal_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_txdatal;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart0_txplctrl_txpl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart0_txplctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrla_rs485> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrla;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrla_abeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrla;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrla_lbme> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrla;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrla_rxsie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrla;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrla_dreie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrla;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrla_txcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrla;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrla_rxcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrla;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlb_mpcm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlb;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlb_rxmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlb;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlb_odme> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlb;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlb_sfden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlb;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlb_txen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlb;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlb_rxen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlb;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlc_chsize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlc_ucpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlc;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlc_udord> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlc;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlc_sbmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlc;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlc_pmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlc;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrlc_cmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrlc;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_ctrld_abw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_ctrld;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_dbgctrl_dbgrun> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_dbgctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_evctrl_irei> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_evctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rxdatah_data8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rxdatah;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rxdatah_perr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rxdatah;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rxdatah_ferr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rxdatah;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rxdatah_bufovf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rxdatah;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rxdatah_rxcif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rxdatah;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rxdatal_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rxdatal;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rxplctrl_rxpl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rxplctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_status_wfb> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_status;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_status_bdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_status;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_status_isfif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_status;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_status_rxsif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_status;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_status_dreif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_status;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_status_txcif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_status;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_status_rxcif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_status;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_r;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_txdatah_data8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_txdatah;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_txdatal_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_txdatal;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_txplctrl_txpl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_txplctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_rw;
};

inline constexpr std::array<FieldId, 181> kRegisterFields = {{
  FieldId::field_spi0_ctrla_enable,
  FieldId::field_spi0_ctrla_presc,
  FieldId::field_spi0_ctrla_clk2x,
  FieldId::field_spi0_ctrla_master,
  FieldId::field_spi0_ctrla_dord,
  FieldId::field_spi0_ctrlb_mode,
  FieldId::field_spi0_ctrlb_ssd,
  FieldId::field_spi0_ctrlb_bufwr,
  FieldId::field_spi0_ctrlb_bufen,
  FieldId::field_spi0_intctrl_ie,
  FieldId::field_spi0_intctrl_ssie,
  FieldId::field_spi0_intctrl_dreie,
  FieldId::field_spi0_intctrl_txcie,
  FieldId::field_spi0_intctrl_rxcie,
  FieldId::field_spi0_intflags_bufovf,
  FieldId::field_spi0_intflags_ssif,
  FieldId::field_spi0_intflags_dreif,
  FieldId::field_spi0_intflags_txcif,
  FieldId::field_spi0_intflags_wrcol,
  FieldId::field_spi0_intflags_if,
  FieldId::field_spi0_intflags_rxcif,
  FieldId::field_tca0_ctrla_enable,
  FieldId::field_tca0_ctrla_clksel,
  FieldId::field_tca0_ctrla_runstdby,
  FieldId::field_tca0_ctrlb_wgmode,
  FieldId::field_tca0_ctrlb_alupd,
  FieldId::field_tca0_ctrlb_cmp0en,
  FieldId::field_tca0_ctrlb_cmp1en,
  FieldId::field_tca0_ctrlb_cmp2en,
  FieldId::field_tca0_ctrlc_cmp0ov,
  FieldId::field_tca0_ctrlc_cmp1ov,
  FieldId::field_tca0_ctrlc_cmp2ov,
  FieldId::field_tca0_ctrld_splitm,
  FieldId::field_tca0_ctrleclr_dir,
  FieldId::field_tca0_ctrleclr_lupd,
  FieldId::field_tca0_ctrleclr_cmd,
  FieldId::field_tca0_ctrleset_dir,
  FieldId::field_tca0_ctrleset_lupd,
  FieldId::field_tca0_ctrleset_cmd,
  FieldId::field_tca0_ctrlfclr_perbv,
  FieldId::field_tca0_ctrlfclr_cmp0bv,
  FieldId::field_tca0_ctrlfclr_cmp1bv,
  FieldId::field_tca0_ctrlfclr_cmp2bv,
  FieldId::field_tca0_ctrlfset_perbv,
  FieldId::field_tca0_ctrlfset_cmp0bv,
  FieldId::field_tca0_ctrlfset_cmp1bv,
  FieldId::field_tca0_ctrlfset_cmp2bv,
  FieldId::field_tca0_dbgctrl_dbgrun,
  FieldId::field_tca0_evctrl_cntaei,
  FieldId::field_tca0_evctrl_evacta,
  FieldId::field_tca0_evctrl_cntbei,
  FieldId::field_tca0_evctrl_evactb,
  FieldId::field_tca0_intctrl_ovf,
  FieldId::field_tca0_intctrl_cmp0,
  FieldId::field_tca0_intctrl_cmp1,
  FieldId::field_tca0_intctrl_cmp2,
  FieldId::field_tca0_intflags_ovf,
  FieldId::field_tca0_intflags_cmp0,
  FieldId::field_tca0_intflags_cmp1,
  FieldId::field_tca0_intflags_cmp2,
  FieldId::field_twi0_ctrla_fmpen,
  FieldId::field_twi0_ctrla_sdahold,
  FieldId::field_twi0_ctrla_sdasetup,
  FieldId::field_twi0_ctrla_inputlvl,
  FieldId::field_twi0_dbgctrl_dbgrun,
  FieldId::field_twi0_dualctrl_enable,
  FieldId::field_twi0_dualctrl_fmpen,
  FieldId::field_twi0_dualctrl_sdahold,
  FieldId::field_twi0_dualctrl_inputlvl,
  FieldId::field_twi0_mctrla_enable,
  FieldId::field_twi0_mctrla_smen,
  FieldId::field_twi0_mctrla_timeout,
  FieldId::field_twi0_mctrla_qcen,
  FieldId::field_twi0_mctrla_wien,
  FieldId::field_twi0_mctrla_rien,
  FieldId::field_twi0_mctrlb_mcmd,
  FieldId::field_twi0_mctrlb_ackact,
  FieldId::field_twi0_mctrlb_flush,
  FieldId::field_twi0_mstatus_busstate,
  FieldId::field_twi0_mstatus_buserr,
  FieldId::field_twi0_mstatus_arblost,
  FieldId::field_twi0_mstatus_rxack,
  FieldId::field_twi0_mstatus_clkhold,
  FieldId::field_twi0_mstatus_wif,
  FieldId::field_twi0_mstatus_rif,
  FieldId::field_twi0_saddrmask_addren,
  FieldId::field_twi0_saddrmask_addrmask,
  FieldId::field_twi0_sctrla_enable,
  FieldId::field_twi0_sctrla_smen,
  FieldId::field_twi0_sctrla_pmen,
  FieldId::field_twi0_sctrla_pien,
  FieldId::field_twi0_sctrla_apien,
  FieldId::field_twi0_sctrla_dien,
  FieldId::field_twi0_sctrlb_scmd,
  FieldId::field_twi0_sctrlb_ackact,
  FieldId::field_twi0_sstatus_ap,
  FieldId::field_twi0_sstatus_dir,
  FieldId::field_twi0_sstatus_buserr,
  FieldId::field_twi0_sstatus_coll,
  FieldId::field_twi0_sstatus_rxack,
  FieldId::field_twi0_sstatus_clkhold,
  FieldId::field_twi0_sstatus_apif,
  FieldId::field_twi0_sstatus_dif,
  FieldId::field_usart0_ctrla_rs485,
  FieldId::field_usart0_ctrla_abeie,
  FieldId::field_usart0_ctrla_lbme,
  FieldId::field_usart0_ctrla_rxsie,
  FieldId::field_usart0_ctrla_dreie,
  FieldId::field_usart0_ctrla_txcie,
  FieldId::field_usart0_ctrla_rxcie,
  FieldId::field_usart0_ctrlb_mpcm,
  FieldId::field_usart0_ctrlb_rxmode,
  FieldId::field_usart0_ctrlb_odme,
  FieldId::field_usart0_ctrlb_sfden,
  FieldId::field_usart0_ctrlb_txen,
  FieldId::field_usart0_ctrlb_rxen,
  FieldId::field_usart0_ctrlc_chsize,
  FieldId::field_usart0_ctrlc_ucpha,
  FieldId::field_usart0_ctrlc_udord,
  FieldId::field_usart0_ctrlc_sbmode,
  FieldId::field_usart0_ctrlc_pmode,
  FieldId::field_usart0_ctrlc_cmode,
  FieldId::field_usart0_ctrld_abw,
  FieldId::field_usart0_dbgctrl_dbgrun,
  FieldId::field_usart0_evctrl_irei,
  FieldId::field_usart0_rxdatah_data8,
  FieldId::field_usart0_rxdatah_perr,
  FieldId::field_usart0_rxdatah_ferr,
  FieldId::field_usart0_rxdatah_bufovf,
  FieldId::field_usart0_rxdatah_rxcif,
  FieldId::field_usart0_rxdatal_data,
  FieldId::field_usart0_rxplctrl_rxpl,
  FieldId::field_usart0_status_wfb,
  FieldId::field_usart0_status_bdf,
  FieldId::field_usart0_status_isfif,
  FieldId::field_usart0_status_rxsif,
  FieldId::field_usart0_status_dreif,
  FieldId::field_usart0_status_txcif,
  FieldId::field_usart0_status_rxcif,
  FieldId::field_usart0_txdatah_data8,
  FieldId::field_usart0_txdatal_data,
  FieldId::field_usart0_txplctrl_txpl,
  FieldId::field_usart1_ctrla_rs485,
  FieldId::field_usart1_ctrla_abeie,
  FieldId::field_usart1_ctrla_lbme,
  FieldId::field_usart1_ctrla_rxsie,
  FieldId::field_usart1_ctrla_dreie,
  FieldId::field_usart1_ctrla_txcie,
  FieldId::field_usart1_ctrla_rxcie,
  FieldId::field_usart1_ctrlb_mpcm,
  FieldId::field_usart1_ctrlb_rxmode,
  FieldId::field_usart1_ctrlb_odme,
  FieldId::field_usart1_ctrlb_sfden,
  FieldId::field_usart1_ctrlb_txen,
  FieldId::field_usart1_ctrlb_rxen,
  FieldId::field_usart1_ctrlc_chsize,
  FieldId::field_usart1_ctrlc_ucpha,
  FieldId::field_usart1_ctrlc_udord,
  FieldId::field_usart1_ctrlc_sbmode,
  FieldId::field_usart1_ctrlc_pmode,
  FieldId::field_usart1_ctrlc_cmode,
  FieldId::field_usart1_ctrld_abw,
  FieldId::field_usart1_dbgctrl_dbgrun,
  FieldId::field_usart1_evctrl_irei,
  FieldId::field_usart1_rxdatah_data8,
  FieldId::field_usart1_rxdatah_perr,
  FieldId::field_usart1_rxdatah_ferr,
  FieldId::field_usart1_rxdatah_bufovf,
  FieldId::field_usart1_rxdatah_rxcif,
  FieldId::field_usart1_rxdatal_data,
  FieldId::field_usart1_rxplctrl_rxpl,
  FieldId::field_usart1_status_wfb,
  FieldId::field_usart1_status_bdf,
  FieldId::field_usart1_status_isfif,
  FieldId::field_usart1_status_rxsif,
  FieldId::field_usart1_status_dreif,
  FieldId::field_usart1_status_txcif,
  FieldId::field_usart1_status_rxcif,
  FieldId::field_usart1_txdatah_data8,
  FieldId::field_usart1_txdatal_data,
  FieldId::field_usart1_txplctrl_txpl,
}};
}
}
}
}
}
}
