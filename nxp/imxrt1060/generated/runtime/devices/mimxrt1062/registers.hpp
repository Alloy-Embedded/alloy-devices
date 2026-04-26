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
enum class RegisterId : std::uint16_t {
  none,
  register_adc1_hc0,
  register_adc1_hc_s,
  register_adc1_hs,
  register_adc1_r0,
  register_adc1_r_s,
  register_adc1_cfg,
  register_adc1_gc,
  register_adc1_gs,
  register_adc1_cv,
  register_adc1_ofs,
  register_adc1_cal,
  register_adc2_hc0,
  register_adc2_hc_s,
  register_adc2_hs,
  register_adc2_r0,
  register_adc2_r_s,
  register_adc2_cfg,
  register_adc2_gc,
  register_adc2_gs,
  register_adc2_cv,
  register_adc2_ofs,
  register_adc2_cal,
  register_can1_mcr,
  register_can1_ctrl1,
  register_can1_timer,
  register_can1_rxmgmask,
  register_can1_rx14mask,
  register_can1_rx15mask,
  register_can1_ecr,
  register_can1_esr1,
  register_can1_imask2,
  register_can1_imask1,
  register_can1_iflag2,
  register_can1_iflag1,
  register_can1_ctrl2,
  register_can1_esr2,
  register_can1_crcr,
  register_can1_rxfgmask,
  register_can1_rxfir,
  register_can1_dbg1,
  register_can1_dbg2,
  register_can1_rximr_s,
  register_can1_gfwr,
  register_can2_mcr,
  register_can2_ctrl1,
  register_can2_timer,
  register_can2_rxmgmask,
  register_can2_rx14mask,
  register_can2_rx15mask,
  register_can2_ecr,
  register_can2_esr1,
  register_can2_imask2,
  register_can2_imask1,
  register_can2_iflag2,
  register_can2_iflag1,
  register_can2_ctrl2,
  register_can2_esr2,
  register_can2_crcr,
  register_can2_rxfgmask,
  register_can2_rxfir,
  register_can2_dbg1,
  register_can2_dbg2,
  register_can2_rximr_s,
  register_can2_gfwr,
  register_can3_mcr,
  register_can3_ctrl1,
  register_can3_timer,
  register_can3_rxmgmask,
  register_can3_rx14mask,
  register_can3_rx15mask,
  register_can3_ecr,
  register_can3_esr1,
  register_can3_imask2,
  register_can3_imask1,
  register_can3_iflag2,
  register_can3_iflag1,
  register_can3_ctrl2,
  register_can3_esr2,
  register_can3_crcr,
  register_can3_rxfgmask,
  register_can3_rxfir,
  register_can3_cbt,
  register_can3_cs0,
  register_can3_id0,
  register_can3_mb0_16b_word0_l,
  register_can3_mb0_16b_word1_l,
  register_can3_cs1,
  register_can3_id1,
  register_can3_mb0_32b_word4_l,
  register_can3_mb0_32b_word5_l,
  register_can3_cs2,
  register_can3_id2,
  register_can3_mb0_64b_word8_l,
  register_can3_mb0_64b_word9_l,
  register_can3_cs3,
  register_can3_id3,
  register_can3_mb0_64b_word12_l,
  register_can3_mb0_64b_word13_l,
  register_can3_cs4,
  register_can3_id4,
  register_can3_mb1_32b_word6_l,
  register_can3_mb1_32b_word7_l,
  register_can3_cs5,
  register_can3_id5,
  register_can3_mb1_64b_word2_l,
  register_can3_mb1_64b_word3_l,
  register_can3_cs6,
  register_can3_id6,
  register_can3_mb1_64b_word6_l,
  register_can3_mb1_64b_word7_l,
  register_can3_cs7,
  register_can3_id7,
  register_can3_mb1_64b_word10_l,
  register_can3_mb1_64b_word11_l,
  register_can3_cs8,
  register_can3_id8,
  register_can3_mb1_64b_word14_l,
  register_can3_mb1_64b_word15_l,
  register_can3_cs9,
  register_can3_id9,
  register_can3_mb2_64b_word0_l,
  register_can3_mb2_64b_word1_l,
  register_can3_cs10,
  register_can3_id10,
  register_can3_mb10_8b_word0,
  register_can3_mb10_8b_word1,
  register_can3_cs11,
  register_can3_id11,
  register_can3_mb11_8b_word0,
  register_can3_mb11_8b_word1,
  register_can3_cs12,
  register_can3_id12,
  register_can3_mb12_8b_word0,
  register_can3_mb12_8b_word1,
  register_can3_cs13,
  register_can3_id13,
  register_can3_mb13_8b_word0,
  register_can3_mb13_8b_word1,
  register_can3_cs14,
  register_can3_id14,
  register_can3_mb14_8b_word0,
  register_can3_mb14_8b_word1,
  register_can3_cs15,
  register_can3_id15,
  register_can3_mb10_16b_word0_l,
  register_can3_mb10_16b_word1_l,
  register_can3_cs16,
  register_can3_id16,
  register_can3_mb11_16b_cs_l,
  register_can3_mb11_16b_id_l,
  register_can3_cs17,
  register_can3_id17,
  register_can3_mb11_16b_word2_l,
  register_can3_mb11_16b_word3_l,
  register_can3_cs18,
  register_can3_id18,
  register_can3_mb12_16b_word0_l,
  register_can3_mb12_16b_word1_l,
  register_can3_cs19,
  register_can3_id19,
  register_can3_mb13_16b_cs_l,
  register_can3_mb13_16b_id_l,
  register_can3_cs20,
  register_can3_id20,
  register_can3_mb13_16b_word2_l,
  register_can3_mb13_16b_word3_l,
  register_can3_cs21,
  register_can3_id21,
  register_can3_mb14_16b_word0_l,
  register_can3_mb14_16b_word1_l,
  register_can3_cs22,
  register_can3_id22,
  register_can3_mb15_16b_cs_l,
  register_can3_mb15_16b_id_l,
  register_can3_cs23,
  register_can3_id23,
  register_can3_mb15_16b_word2_l,
  register_can3_mb15_16b_word3_l,
  register_can3_cs24,
  register_can3_id24,
  register_can3_mb16_16b_word0_l,
  register_can3_mb16_16b_word1_l,
  register_can3_cs25,
  register_can3_id25,
  register_can3_mb10_32b_word0_l,
  register_can3_mb10_32b_word1_l,
  register_can3_cs26,
  register_can3_id26,
  register_can3_mb10_32b_word4_l,
  register_can3_mb10_32b_word5_l,
  register_can3_cs27,
  register_can3_id27,
  register_can3_mb11_32b_cs_l,
  register_can3_mb11_32b_id_l,
  register_can3_cs28,
  register_can3_id28,
  register_can3_mb11_32b_word2_l,
  register_can3_mb11_32b_word3_l,
  register_can3_cs29,
  register_can3_id29,
  register_can3_mb11_32b_word6_l,
  register_can3_mb11_32b_word7_l,
  register_can3_cs30,
  register_can3_id30,
  register_can3_mb20_16b_word0_l,
  register_can3_mb20_16b_word1_l,
  register_can3_cs31,
  register_can3_id31,
  register_can3_mb31_8b_word0,
  register_can3_mb31_8b_word1,
  register_can3_cs32,
  register_can3_id32,
  register_can3_mb0_16b_word0_h,
  register_can3_mb0_16b_word1_h,
  register_can3_cs33,
  register_can3_id33,
  register_can3_mb0_32b_word4_h,
  register_can3_mb0_32b_word5_h,
  register_can3_cs34,
  register_can3_id34,
  register_can3_mb0_64b_word8_h,
  register_can3_mb0_64b_word9_h,
  register_can3_cs35,
  register_can3_id35,
  register_can3_mb0_64b_word12_h,
  register_can3_mb0_64b_word13_h,
  register_can3_cs36,
  register_can3_id36,
  register_can3_mb1_32b_word6_h,
  register_can3_mb1_32b_word7_h,
  register_can3_cs37,
  register_can3_id37,
  register_can3_mb1_64b_word2_h,
  register_can3_mb1_64b_word3_h,
  register_can3_cs38,
  register_can3_id38,
  register_can3_mb1_64b_word6_h,
  register_can3_mb1_64b_word7_h,
  register_can3_cs39,
  register_can3_id39,
  register_can3_mb1_64b_word10_h,
  register_can3_mb1_64b_word11_h,
  register_can3_cs40,
  register_can3_id40,
  register_can3_mb1_64b_word14_h,
  register_can3_mb1_64b_word15_h,
  register_can3_cs41,
  register_can3_id41,
  register_can3_mb2_64b_word0_h,
  register_can3_mb2_64b_word1_h,
  register_can3_cs42,
  register_can3_id42,
  register_can3_mb2_64b_word4_h,
  register_can3_mb2_64b_word5_h,
  register_can3_cs43,
  register_can3_id43,
  register_can3_mb2_64b_word8_h,
  register_can3_mb2_64b_word9_h,
  register_can3_cs44,
  register_can3_id44,
  register_can3_mb2_64b_word12_h,
  register_can3_mb2_64b_word13_h,
  register_can3_cs45,
  register_can3_id45,
  register_can3_mb3_64b_cs_h,
  register_can3_mb3_64b_id_h,
  register_can3_cs46,
  register_can3_id46,
  register_can3_mb3_64b_word2_h,
  register_can3_mb3_64b_word3_h,
  register_can3_cs47,
  register_can3_id47,
  register_can3_mb10_16b_word0_h,
  register_can3_mb10_16b_word1_h,
  register_can3_cs48,
  register_can3_id48,
  register_can3_mb11_16b_cs_h,
  register_can3_mb11_16b_id_h,
  register_can3_cs49,
  register_can3_id49,
  register_can3_mb11_16b_word2_h,
  register_can3_mb11_16b_word3_h,
  register_can3_cs50,
  register_can3_id50,
  register_can3_mb12_16b_word0_h,
  register_can3_mb12_16b_word1_h,
  register_can3_cs51,
  register_can3_id51,
  register_can3_mb13_16b_cs_h,
  register_can3_mb13_16b_id_h,
  register_can3_cs52,
  register_can3_id52,
  register_can3_mb13_16b_word2_h,
  register_can3_mb13_16b_word3_h,
  register_can3_cs53,
  register_can3_id53,
  register_can3_mb14_16b_word0_h,
  register_can3_mb14_16b_word1_h,
  register_can3_cs54,
  register_can3_id54,
  register_can3_mb15_16b_cs_h,
  register_can3_mb15_16b_id_h,
  register_can3_cs55,
  register_can3_id55,
  register_can3_mb15_16b_word2_h,
  register_can3_mb15_16b_word3_h,
  register_can3_cs56,
  register_can3_id56,
  register_can3_mb16_16b_word0_h,
  register_can3_mb16_16b_word1_h,
  register_can3_cs57,
  register_can3_id57,
  register_can3_mb10_32b_word0_h,
  register_can3_mb10_32b_word1_h,
  register_can3_cs58,
  register_can3_id58,
  register_can3_mb10_32b_word4_h,
  register_can3_mb10_32b_word5_h,
  register_can3_cs59,
  register_can3_id59,
  register_can3_mb11_32b_cs_h,
  register_can3_mb11_32b_id_h,
  register_can3_cs60,
  register_can3_id60,
  register_can3_mb11_32b_word2_h,
  register_can3_mb11_32b_word3_h,
  register_can3_cs61,
  register_can3_id61,
  register_can3_mb11_32b_word6_h,
  register_can3_mb11_32b_word7_h,
  register_can3_cs62,
  register_can3_id62,
  register_can3_mb20_16b_word0_h,
  register_can3_mb20_16b_word1_h,
  register_can3_cs63,
  register_can3_id63,
  register_can3_mb63_8b_word0,
  register_can3_mb63_8b_word1,
  register_can3_rximr__s,
  register_can3_fdctrl,
  register_can3_fdcbt,
  register_can3_fdcrc,
  register_ccm_cacrr,
  register_ccm_cbcdr,
  register_ccm_cbcmr,
  register_ccm_cscdr1,
  register_ccm_cdhipr,
  register_ccm_ccgr0,
  register_ccm_ccgr1,
  register_ccm_ccgr2,
  register_ccm_ccgr3,
  register_ccm_ccgr5,
  register_ccm_ccgr6,
  register_dcdc_reg0,
  register_dcdc_reg3,
  register_dma0_cr,
  register_dma0_es,
  register_dma0_erq,
  register_dma0_eei,
  register_dma0_ceei,
  register_dma0_seei,
  register_dma0_cerq,
  register_dma0_serq,
  register_dma0_cdne,
  register_dma0_ssrt,
  register_dma0_cerr,
  register_dma0_cint,
  register_dma0_int,
  register_dma0_err,
  register_dma0_hrs,
  register_dma0_ears,
  register_dma0_dchpri3,
  register_dma0_dchpri2,
  register_dma0_dchpri1,
  register_dma0_dchpri0,
  register_dma0_dchpri7,
  register_dma0_dchpri6,
  register_dma0_dchpri5,
  register_dma0_dchpri4,
  register_dma0_dchpri11,
  register_dma0_dchpri10,
  register_dma0_dchpri9,
  register_dma0_dchpri8,
  register_dma0_dchpri15,
  register_dma0_dchpri14,
  register_dma0_dchpri13,
  register_dma0_dchpri12,
  register_dma0_dchpri19,
  register_dma0_dchpri18,
  register_dma0_dchpri17,
  register_dma0_dchpri16,
  register_dma0_dchpri23,
  register_dma0_dchpri22,
  register_dma0_dchpri21,
  register_dma0_dchpri20,
  register_dma0_dchpri27,
  register_dma0_dchpri26,
  register_dma0_dchpri25,
  register_dma0_dchpri24,
  register_dma0_dchpri31,
  register_dma0_dchpri30,
  register_dma0_dchpri29,
  register_dma0_dchpri28,
  register_dma0_tcd0_saddr,
  register_dma0_tcd0_soff,
  register_dma0_tcd0_attr,
  register_dma0_tcd0_nbytes_mlno,
  register_dma0_tcd0_slast,
  register_dma0_tcd0_daddr,
  register_dma0_tcd0_doff,
  register_dma0_tcd0_citer_elinkno,
  register_dma0_tcd0_dlastsga,
  register_dma0_tcd0_csr,
  register_dma0_tcd0_biter_elinkno,
  register_dma0_tcd1_saddr,
  register_dma0_tcd1_soff,
  register_dma0_tcd1_attr,
  register_dma0_tcd1_nbytes_mlno,
  register_dma0_tcd1_slast,
  register_dma0_tcd1_daddr,
  register_dma0_tcd1_doff,
  register_dma0_tcd1_citer_elinkno,
  register_dma0_tcd1_dlastsga,
  register_dma0_tcd1_csr,
  register_dma0_tcd1_biter_elinkno,
  register_dma0_tcd2_saddr,
  register_dma0_tcd2_soff,
  register_dma0_tcd2_attr,
  register_dma0_tcd2_nbytes_mlno,
  register_dma0_tcd2_slast,
  register_dma0_tcd2_daddr,
  register_dma0_tcd2_doff,
  register_dma0_tcd2_citer_elinkno,
  register_dma0_tcd2_dlastsga,
  register_dma0_tcd2_csr,
  register_dma0_tcd2_biter_elinkno,
  register_dma0_tcd3_saddr,
  register_dma0_tcd3_soff,
  register_dma0_tcd3_attr,
  register_dma0_tcd3_nbytes_mlno,
  register_dma0_tcd3_slast,
  register_dma0_tcd3_daddr,
  register_dma0_tcd3_doff,
  register_dma0_tcd3_citer_elinkno,
  register_dma0_tcd3_dlastsga,
  register_dma0_tcd3_csr,
  register_dma0_tcd3_biter_elinkno,
  register_dma0_tcd4_saddr,
  register_dma0_tcd4_soff,
  register_dma0_tcd4_attr,
  register_dma0_tcd4_nbytes_mlno,
  register_dma0_tcd4_slast,
  register_dma0_tcd4_daddr,
  register_dma0_tcd4_doff,
  register_dma0_tcd4_citer_elinkno,
  register_dma0_tcd4_dlastsga,
  register_dma0_tcd4_csr,
  register_dma0_tcd4_biter_elinkno,
  register_dma0_tcd5_saddr,
  register_dma0_tcd5_soff,
  register_dma0_tcd5_attr,
  register_dma0_tcd5_nbytes_mlno,
  register_dma0_tcd5_slast,
  register_dma0_tcd5_daddr,
  register_dma0_tcd5_doff,
  register_dma0_tcd5_citer_elinkno,
  register_dma0_tcd5_dlastsga,
  register_dma0_tcd5_csr,
  register_dma0_tcd5_biter_elinkno,
  register_dma0_tcd6_saddr,
  register_dma0_tcd6_soff,
  register_dma0_tcd6_attr,
  register_dma0_tcd6_nbytes_mlno,
  register_dma0_tcd6_slast,
  register_dma0_tcd6_daddr,
  register_dma0_tcd6_doff,
  register_dma0_tcd6_citer_elinkno,
  register_dma0_tcd6_dlastsga,
  register_dma0_tcd6_csr,
  register_dma0_tcd6_biter_elinkno,
  register_dma0_tcd7_saddr,
  register_dma0_tcd7_soff,
  register_dma0_tcd7_attr,
  register_dma0_tcd7_nbytes_mlno,
  register_dma0_tcd7_slast,
  register_dma0_tcd7_daddr,
  register_dma0_tcd7_doff,
  register_dma0_tcd7_citer_elinkno,
  register_dma0_tcd7_dlastsga,
  register_dma0_tcd7_csr,
  register_dma0_tcd7_biter_elinkno,
  register_dma0_tcd8_saddr,
  register_dma0_tcd8_soff,
  register_dma0_tcd8_attr,
  register_dma0_tcd8_nbytes_mlno,
  register_dma0_tcd8_slast,
  register_dma0_tcd8_daddr,
  register_dma0_tcd8_doff,
  register_dma0_tcd8_citer_elinkno,
  register_dma0_tcd8_dlastsga,
  register_dma0_tcd8_csr,
  register_dma0_tcd8_biter_elinkno,
  register_dma0_tcd9_saddr,
  register_dma0_tcd9_soff,
  register_dma0_tcd9_attr,
  register_dma0_tcd9_nbytes_mlno,
  register_dma0_tcd9_slast,
  register_dma0_tcd9_daddr,
  register_dma0_tcd9_doff,
  register_dma0_tcd9_citer_elinkno,
  register_dma0_tcd9_dlastsga,
  register_dma0_tcd9_csr,
  register_dma0_tcd9_biter_elinkno,
  register_dma0_tcd10_saddr,
  register_dma0_tcd10_soff,
  register_dma0_tcd10_attr,
  register_dma0_tcd10_nbytes_mlno,
  register_dma0_tcd10_slast,
  register_dma0_tcd10_daddr,
  register_dma0_tcd10_doff,
  register_dma0_tcd10_citer_elinkno,
  register_dma0_tcd10_dlastsga,
  register_dma0_tcd10_csr,
  register_dma0_tcd10_biter_elinkno,
  register_dma0_tcd11_saddr,
  register_dma0_tcd11_soff,
  register_dma0_tcd11_attr,
  register_dma0_tcd11_nbytes_mlno,
  register_dma0_tcd11_slast,
  register_dma0_tcd11_daddr,
  register_dma0_tcd11_doff,
  register_dma0_tcd11_citer_elinkno,
  register_dma0_tcd11_dlastsga,
  register_dma0_tcd11_csr,
  register_dma0_tcd11_biter_elinkno,
  register_dma0_tcd12_saddr,
  register_dma0_tcd12_soff,
  register_dma0_tcd12_attr,
  register_dma0_tcd12_nbytes_mlno,
  register_dma0_tcd12_slast,
  register_dma0_tcd12_daddr,
  register_dma0_tcd12_doff,
  register_dma0_tcd12_citer_elinkno,
  register_dma0_tcd12_dlastsga,
  register_dma0_tcd12_csr,
  register_dma0_tcd12_biter_elinkno,
  register_dma0_tcd13_saddr,
  register_dma0_tcd13_soff,
  register_dma0_tcd13_attr,
  register_dma0_tcd13_nbytes_mlno,
  register_dma0_tcd13_slast,
  register_dma0_tcd13_daddr,
  register_dma0_tcd13_doff,
  register_dma0_tcd13_citer_elinkno,
  register_dma0_tcd13_dlastsga,
  register_dma0_tcd13_csr,
  register_dma0_tcd13_biter_elinkno,
  register_dma0_tcd14_saddr,
  register_dma0_tcd14_soff,
  register_dma0_tcd14_attr,
  register_dma0_tcd14_nbytes_mlno,
  register_dma0_tcd14_slast,
  register_dma0_tcd14_daddr,
  register_dma0_tcd14_doff,
  register_dma0_tcd14_citer_elinkno,
  register_dma0_tcd14_dlastsga,
  register_dma0_tcd14_csr,
  register_dma0_tcd14_biter_elinkno,
  register_dma0_tcd15_saddr,
  register_dma0_tcd15_soff,
  register_dma0_tcd15_attr,
  register_dma0_tcd15_nbytes_mlno,
  register_dma0_tcd15_slast,
  register_dma0_tcd15_daddr,
  register_dma0_tcd15_doff,
  register_dma0_tcd15_citer_elinkno,
  register_dma0_tcd15_dlastsga,
  register_dma0_tcd15_csr,
  register_dma0_tcd15_biter_elinkno,
  register_dma0_tcd16_saddr,
  register_dma0_tcd16_soff,
  register_dma0_tcd16_attr,
  register_dma0_tcd16_nbytes_mlno,
  register_dma0_tcd16_slast,
  register_dma0_tcd16_daddr,
  register_dma0_tcd16_doff,
  register_dma0_tcd16_citer_elinkno,
  register_dma0_tcd16_dlastsga,
  register_dma0_tcd16_csr,
  register_dma0_tcd16_biter_elinkno,
  register_dma0_tcd17_saddr,
  register_dma0_tcd17_soff,
  register_dma0_tcd17_attr,
  register_dma0_tcd17_nbytes_mlno,
  register_dma0_tcd17_slast,
  register_dma0_tcd17_daddr,
  register_dma0_tcd17_doff,
  register_dma0_tcd17_citer_elinkno,
  register_dma0_tcd17_dlastsga,
  register_dma0_tcd17_csr,
  register_dma0_tcd17_biter_elinkno,
  register_dma0_tcd18_saddr,
  register_dma0_tcd18_soff,
  register_dma0_tcd18_attr,
  register_dma0_tcd18_nbytes_mlno,
  register_dma0_tcd18_slast,
  register_dma0_tcd18_daddr,
  register_dma0_tcd18_doff,
  register_dma0_tcd18_citer_elinkno,
  register_dma0_tcd18_dlastsga,
  register_dma0_tcd18_csr,
  register_dma0_tcd18_biter_elinkno,
  register_dma0_tcd19_saddr,
  register_dma0_tcd19_soff,
  register_dma0_tcd19_attr,
  register_dma0_tcd19_nbytes_mlno,
  register_dma0_tcd19_slast,
  register_dma0_tcd19_daddr,
  register_dma0_tcd19_doff,
  register_dma0_tcd19_citer_elinkno,
  register_dma0_tcd19_dlastsga,
  register_dma0_tcd19_csr,
  register_dma0_tcd19_biter_elinkno,
  register_dma0_tcd20_saddr,
  register_dma0_tcd20_soff,
  register_dma0_tcd20_attr,
  register_dma0_tcd20_nbytes_mlno,
  register_dma0_tcd20_slast,
  register_dma0_tcd20_daddr,
  register_dma0_tcd20_doff,
  register_dma0_tcd20_citer_elinkno,
  register_dma0_tcd20_dlastsga,
  register_dma0_tcd20_csr,
  register_dma0_tcd20_biter_elinkno,
  register_dma0_tcd21_saddr,
  register_dma0_tcd21_soff,
  register_dma0_tcd21_attr,
  register_dma0_tcd21_nbytes_mlno,
  register_dma0_tcd21_slast,
  register_dma0_tcd21_daddr,
  register_dma0_tcd21_doff,
  register_dma0_tcd21_citer_elinkno,
  register_dma0_tcd21_dlastsga,
  register_dma0_tcd21_csr,
  register_dma0_tcd21_biter_elinkno,
  register_dma0_tcd22_saddr,
  register_dma0_tcd22_soff,
  register_dma0_tcd22_attr,
  register_dma0_tcd22_nbytes_mlno,
  register_dma0_tcd22_slast,
  register_dma0_tcd22_daddr,
  register_dma0_tcd22_doff,
  register_dma0_tcd22_citer_elinkno,
  register_dma0_tcd22_dlastsga,
  register_dma0_tcd22_csr,
  register_dma0_tcd22_biter_elinkno,
  register_dma0_tcd23_saddr,
  register_dma0_tcd23_soff,
  register_dma0_tcd23_attr,
  register_dma0_tcd23_nbytes_mlno,
  register_dma0_tcd23_slast,
  register_dma0_tcd23_daddr,
  register_dma0_tcd23_doff,
  register_dma0_tcd23_citer_elinkno,
  register_dma0_tcd23_dlastsga,
  register_dma0_tcd23_csr,
  register_dma0_tcd23_biter_elinkno,
  register_dma0_tcd24_saddr,
  register_dma0_tcd24_soff,
  register_dma0_tcd24_attr,
  register_dma0_tcd24_nbytes_mlno,
  register_dma0_tcd24_slast,
  register_dma0_tcd24_daddr,
  register_dma0_tcd24_doff,
  register_dma0_tcd24_citer_elinkno,
  register_dma0_tcd24_dlastsga,
  register_dma0_tcd24_csr,
  register_dma0_tcd24_biter_elinkno,
  register_dma0_tcd25_saddr,
  register_dma0_tcd25_soff,
  register_dma0_tcd25_attr,
  register_dma0_tcd25_nbytes_mlno,
  register_dma0_tcd25_slast,
  register_dma0_tcd25_daddr,
  register_dma0_tcd25_doff,
  register_dma0_tcd25_citer_elinkno,
  register_dma0_tcd25_dlastsga,
  register_dma0_tcd25_csr,
  register_dma0_tcd25_biter_elinkno,
  register_dma0_tcd26_saddr,
  register_dma0_tcd26_soff,
  register_dma0_tcd26_attr,
  register_dma0_tcd26_nbytes_mlno,
  register_dma0_tcd26_slast,
  register_dma0_tcd26_daddr,
  register_dma0_tcd26_doff,
  register_dma0_tcd26_citer_elinkno,
  register_dma0_tcd26_dlastsga,
  register_dma0_tcd26_csr,
  register_dma0_tcd26_biter_elinkno,
  register_dma0_tcd27_saddr,
  register_dma0_tcd27_soff,
  register_dma0_tcd27_attr,
  register_dma0_tcd27_nbytes_mlno,
  register_dma0_tcd27_slast,
  register_dma0_tcd27_daddr,
  register_dma0_tcd27_doff,
  register_dma0_tcd27_citer_elinkno,
  register_dma0_tcd27_dlastsga,
  register_dma0_tcd27_csr,
  register_dma0_tcd27_biter_elinkno,
  register_dma0_tcd28_saddr,
  register_dma0_tcd28_soff,
  register_dma0_tcd28_attr,
  register_dma0_tcd28_nbytes_mlno,
  register_dma0_tcd28_slast,
  register_dma0_tcd28_daddr,
  register_dma0_tcd28_doff,
  register_dma0_tcd28_citer_elinkno,
  register_dma0_tcd28_dlastsga,
  register_dma0_tcd28_csr,
  register_dma0_tcd28_biter_elinkno,
  register_dma0_tcd29_saddr,
  register_dma0_tcd29_soff,
  register_dma0_tcd29_attr,
  register_dma0_tcd29_nbytes_mlno,
  register_dma0_tcd29_slast,
  register_dma0_tcd29_daddr,
  register_dma0_tcd29_doff,
  register_dma0_tcd29_citer_elinkno,
  register_dma0_tcd29_dlastsga,
  register_dma0_tcd29_csr,
  register_dma0_tcd29_biter_elinkno,
  register_dma0_tcd30_saddr,
  register_dma0_tcd30_soff,
  register_dma0_tcd30_attr,
  register_dma0_tcd30_nbytes_mlno,
  register_dma0_tcd30_slast,
  register_dma0_tcd30_daddr,
  register_dma0_tcd30_doff,
  register_dma0_tcd30_citer_elinkno,
  register_dma0_tcd30_dlastsga,
  register_dma0_tcd30_csr,
  register_dma0_tcd30_biter_elinkno,
  register_dma0_tcd31_saddr,
  register_dma0_tcd31_soff,
  register_dma0_tcd31_attr,
  register_dma0_tcd31_nbytes_mlno,
  register_dma0_tcd31_slast,
  register_dma0_tcd31_daddr,
  register_dma0_tcd31_doff,
  register_dma0_tcd31_citer_elinkno,
  register_dma0_tcd31_dlastsga,
  register_dma0_tcd31_csr,
  register_dma0_tcd31_biter_elinkno,
  register_dmamux1_chcfg__s,
  register_enet_eir,
  register_enet_eimr,
  register_enet_rdar,
  register_enet_tdar,
  register_enet_ecr,
  register_enet_mmfr,
  register_enet_mscr,
  register_enet_mibc,
  register_enet_rcr,
  register_enet_tcr,
  register_enet_palr,
  register_enet_paur,
  register_enet_opd,
  register_enet_txic0,
  register_enet_rxic0,
  register_enet_iaur,
  register_enet_ialr,
  register_enet_gaur,
  register_enet_galr,
  register_enet_tfwr,
  register_enet_rdsr,
  register_enet_tdsr,
  register_enet_mrbr,
  register_enet_rsfl,
  register_enet_rsem,
  register_enet_raem,
  register_enet_rafl,
  register_enet_tsem,
  register_enet_taem,
  register_enet_tafl,
  register_enet_tipg,
  register_enet_ftrl,
  register_enet_tacc,
  register_enet_racc,
  register_enet_rmon_t_packets,
  register_enet_rmon_t_bc_pkt,
  register_enet_rmon_t_mc_pkt,
  register_enet_rmon_t_crc_align,
  register_enet_rmon_t_undersize,
  register_enet_rmon_t_oversize,
  register_enet_rmon_t_frag,
  register_enet_rmon_t_jab,
  register_enet_rmon_t_col,
  register_enet_rmon_t_p64,
  register_enet_rmon_t_p65to127,
  register_enet_rmon_t_p128to255,
  register_enet_rmon_t_p256to511,
  register_enet_rmon_t_p512to1023,
  register_enet_rmon_t_p1024to2047,
  register_enet_rmon_t_p_gte2048,
  register_enet_rmon_t_octets,
  register_enet_ieee_t_frame_ok,
  register_enet_ieee_t_1col,
  register_enet_ieee_t_mcol,
  register_enet_ieee_t_def,
  register_enet_ieee_t_lcol,
  register_enet_ieee_t_excol,
  register_enet_ieee_t_macerr,
  register_enet_ieee_t_cserr,
  register_enet_ieee_t_sqe,
  register_enet_ieee_t_fdxfc,
  register_enet_ieee_t_octets_ok,
  register_enet_rmon_r_packets,
  register_enet_rmon_r_bc_pkt,
  register_enet_rmon_r_mc_pkt,
  register_enet_rmon_r_crc_align,
  register_enet_rmon_r_undersize,
  register_enet_rmon_r_oversize,
  register_enet_rmon_r_frag,
  register_enet_rmon_r_jab,
  register_enet_rmon_r_p64,
  register_enet_rmon_r_p65to127,
  register_enet_rmon_r_p128to255,
  register_enet_rmon_r_p256to511,
  register_enet_rmon_r_p512to1023,
  register_enet_rmon_r_p1024to2047,
  register_enet_rmon_r_p_gte2048,
  register_enet_rmon_r_octets,
  register_enet_ieee_r_drop,
  register_enet_ieee_r_frame_ok,
  register_enet_ieee_r_crc,
  register_enet_ieee_r_align,
  register_enet_ieee_r_macerr,
  register_enet_ieee_r_fdxfc,
  register_enet_ieee_r_octets_ok,
  register_enet_atcr,
  register_enet_atvr,
  register_enet_atoff,
  register_enet_atper,
  register_enet_atcor,
  register_enet_atinc,
  register_enet_atstmp,
  register_enet_tgsr,
  register_enet_tcsr0,
  register_enet_tccr0,
  register_enet_tcsr1,
  register_enet_tccr1,
  register_enet_tcsr2,
  register_enet_tccr2,
  register_enet_tcsr3,
  register_enet_tccr3,
  register_enet2_eir,
  register_enet2_eimr,
  register_enet2_rdar,
  register_enet2_tdar,
  register_enet2_ecr,
  register_enet2_mmfr,
  register_enet2_mscr,
  register_enet2_mibc,
  register_enet2_rcr,
  register_enet2_tcr,
  register_enet2_palr,
  register_enet2_paur,
  register_enet2_opd,
  register_enet2_txic0,
  register_enet2_rxic0,
  register_enet2_iaur,
  register_enet2_ialr,
  register_enet2_gaur,
  register_enet2_galr,
  register_enet2_tfwr,
  register_enet2_rdsr,
  register_enet2_tdsr,
  register_enet2_mrbr,
  register_enet2_rsfl,
  register_enet2_rsem,
  register_enet2_raem,
  register_enet2_rafl,
  register_enet2_tsem,
  register_enet2_taem,
  register_enet2_tafl,
  register_enet2_tipg,
  register_enet2_ftrl,
  register_enet2_tacc,
  register_enet2_racc,
  register_enet2_rmon_t_packets,
  register_enet2_rmon_t_bc_pkt,
  register_enet2_rmon_t_mc_pkt,
  register_enet2_rmon_t_crc_align,
  register_enet2_rmon_t_undersize,
  register_enet2_rmon_t_oversize,
  register_enet2_rmon_t_frag,
  register_enet2_rmon_t_jab,
  register_enet2_rmon_t_col,
  register_enet2_rmon_t_p64,
  register_enet2_rmon_t_p65to127,
  register_enet2_rmon_t_p128to255,
  register_enet2_rmon_t_p256to511,
  register_enet2_rmon_t_p512to1023,
  register_enet2_rmon_t_p1024to2047,
  register_enet2_rmon_t_p_gte2048,
  register_enet2_rmon_t_octets,
  register_enet2_ieee_t_frame_ok,
  register_enet2_ieee_t_1col,
  register_enet2_ieee_t_mcol,
  register_enet2_ieee_t_def,
  register_enet2_ieee_t_lcol,
  register_enet2_ieee_t_excol,
  register_enet2_ieee_t_macerr,
  register_enet2_ieee_t_cserr,
  register_enet2_ieee_t_sqe,
  register_enet2_ieee_t_fdxfc,
  register_enet2_ieee_t_octets_ok,
  register_enet2_rmon_r_packets,
  register_enet2_rmon_r_bc_pkt,
  register_enet2_rmon_r_mc_pkt,
  register_enet2_rmon_r_crc_align,
  register_enet2_rmon_r_undersize,
  register_enet2_rmon_r_oversize,
  register_enet2_rmon_r_frag,
  register_enet2_rmon_r_jab,
  register_enet2_rmon_r_p64,
  register_enet2_rmon_r_p65to127,
  register_enet2_rmon_r_p128to255,
  register_enet2_rmon_r_p256to511,
  register_enet2_rmon_r_p512to1023,
  register_enet2_rmon_r_p1024to2047,
  register_enet2_rmon_r_p_gte2048,
  register_enet2_rmon_r_octets,
  register_enet2_ieee_r_drop,
  register_enet2_ieee_r_frame_ok,
  register_enet2_ieee_r_crc,
  register_enet2_ieee_r_align,
  register_enet2_ieee_r_macerr,
  register_enet2_ieee_r_fdxfc,
  register_enet2_ieee_r_octets_ok,
  register_enet2_atcr,
  register_enet2_atvr,
  register_enet2_atoff,
  register_enet2_atper,
  register_enet2_atcor,
  register_enet2_atinc,
  register_enet2_atstmp,
  register_enet2_tgsr,
  register_enet2_tcsr0,
  register_enet2_tccr0,
  register_enet2_tcsr1,
  register_enet2_tccr1,
  register_enet2_tcsr2,
  register_enet2_tccr2,
  register_enet2_tcsr3,
  register_enet2_tccr3,
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
  register_gpt1_cr,
  register_gpt1_pr,
  register_gpt1_sr,
  register_gpt1_ir,
  register_gpt1_ocr_s,
  register_gpt1_icr_s,
  register_gpt1_cnt,
  register_gpt2_cr,
  register_gpt2_pr,
  register_gpt2_sr,
  register_gpt2_ir,
  register_gpt2_ocr_s,
  register_gpt2_icr_s,
  register_gpt2_cnt,
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
  register_pit_mcr,
  register_pit_ltmr64h,
  register_pit_ltmr64l,
  register_pwm1_outen,
  register_pwm1_mask,
  register_pwm1_swcout,
  register_pwm1_dtsrcsel,
  register_pwm1_mctrl,
  register_pwm1_mctrl2,
  register_pwm1_fctrl0,
  register_pwm1_fsts0,
  register_pwm1_ffilt0,
  register_pwm1_ftst0,
  register_pwm1_fctrl20,
  register_pwm2_outen,
  register_pwm2_mask,
  register_pwm2_swcout,
  register_pwm2_dtsrcsel,
  register_pwm2_mctrl,
  register_pwm2_mctrl2,
  register_pwm2_fctrl0,
  register_pwm2_fsts0,
  register_pwm2_ffilt0,
  register_pwm2_ftst0,
  register_pwm2_fctrl20,
  register_pwm3_outen,
  register_pwm3_mask,
  register_pwm3_swcout,
  register_pwm3_dtsrcsel,
  register_pwm3_mctrl,
  register_pwm3_mctrl2,
  register_pwm3_fctrl0,
  register_pwm3_fsts0,
  register_pwm3_ffilt0,
  register_pwm3_ftst0,
  register_pwm3_fctrl20,
  register_pwm4_outen,
  register_pwm4_mask,
  register_pwm4_swcout,
  register_pwm4_dtsrcsel,
  register_pwm4_mctrl,
  register_pwm4_mctrl2,
  register_pwm4_fctrl0,
  register_pwm4_fsts0,
  register_pwm4_ffilt0,
  register_pwm4_ftst0,
  register_pwm4_fctrl20,
  register_rtwdog_cs,
  register_rtwdog_cnt,
  register_rtwdog_toval,
  register_rtwdog_win,
  register_usb1_id,
  register_usb1_hwgeneral,
  register_usb1_hwhost,
  register_usb1_hwdevice,
  register_usb1_hwtxbuf,
  register_usb1_hwrxbuf,
  register_usb1_gptimer0ld,
  register_usb1_gptimer0ctrl,
  register_usb1_gptimer1ld,
  register_usb1_gptimer1ctrl,
  register_usb1_sbuscfg,
  register_usb1_caplength,
  register_usb1_hciversion,
  register_usb1_hcsparams,
  register_usb1_hccparams,
  register_usb1_dciversion,
  register_usb1_dccparams,
  register_usb1_usbcmd,
  register_usb1_usbsts,
  register_usb1_usbintr,
  register_usb1_frindex,
  register_usb1_deviceaddr,
  register_usb1_asynclistaddr,
  register_usb1_burstsize,
  register_usb1_txfilltuning,
  register_usb1_endptnak,
  register_usb1_endptnaken,
  register_usb1_configflag,
  register_usb1_portsc1,
  register_usb1_otgsc,
  register_usb1_usbmode,
  register_usb1_endptsetupstat,
  register_usb1_endptprime,
  register_usb1_endptflush,
  register_usb1_endptstat,
  register_usb1_endptcomplete,
  register_usb1_endptctrl0,
  register_usb1_endptctrl1,
  register_usb1_endptctrl2,
  register_usb1_endptctrl3,
  register_usb1_endptctrl4,
  register_usb1_endptctrl5,
  register_usb1_endptctrl6,
  register_usb1_endptctrl7,
  register_usb2_id,
  register_usb2_hwgeneral,
  register_usb2_hwhost,
  register_usb2_hwdevice,
  register_usb2_hwtxbuf,
  register_usb2_hwrxbuf,
  register_usb2_gptimer0ld,
  register_usb2_gptimer0ctrl,
  register_usb2_gptimer1ld,
  register_usb2_gptimer1ctrl,
  register_usb2_sbuscfg,
  register_usb2_caplength,
  register_usb2_hciversion,
  register_usb2_hcsparams,
  register_usb2_hccparams,
  register_usb2_dciversion,
  register_usb2_dccparams,
  register_usb2_usbcmd,
  register_usb2_usbsts,
  register_usb2_usbintr,
  register_usb2_frindex,
  register_usb2_deviceaddr,
  register_usb2_asynclistaddr,
  register_usb2_burstsize,
  register_usb2_txfilltuning,
  register_usb2_endptnak,
  register_usb2_endptnaken,
  register_usb2_configflag,
  register_usb2_portsc1,
  register_usb2_otgsc,
  register_usb2_usbmode,
  register_usb2_endptsetupstat,
  register_usb2_endptprime,
  register_usb2_endptflush,
  register_usb2_endptstat,
  register_usb2_endptcomplete,
  register_usb2_endptctrl0,
  register_usb2_endptctrl1,
  register_usb2_endptctrl2,
  register_usb2_endptctrl3,
  register_usb2_endptctrl4,
  register_usb2_endptctrl5,
  register_usb2_endptctrl6,
  register_usb2_endptctrl7,
  register_wdog1_wcr,
  register_wdog1_wsr,
  register_wdog1_wrsr,
  register_wdog1_wicr,
  register_wdog1_wmcr,
  register_wdog2_wcr,
  register_wdog2_wsr,
  register_wdog2_wrsr,
  register_wdog2_wicr,
  register_wdog2_wmcr,
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
struct RegisterTraits<RegisterId::register_adc1_hc0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_hc_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_hs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_r0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_r_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_cfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_gc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_gs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_cv> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_ofs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_cal> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C4000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_hc0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_hc_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_hs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_r0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_r_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_cfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_gc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_gs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_cv> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_ofs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_cal> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C8000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_mcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ctrl1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_timer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rxmgmask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rx14mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rx15mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ecr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_esr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_imask2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_imask1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_iflag2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_iflag1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ctrl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_esr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_crcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rxfgmask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rxfir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_dbg1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_dbg2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rximr_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 2176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_gfwr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D0000u;
  static constexpr std::uint32_t kOffsetBytes = 2528u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_mcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ctrl1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_timer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rxmgmask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rx14mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rx15mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ecr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_esr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_imask2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_imask1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_iflag2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_iflag1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ctrl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_esr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_crcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rxfgmask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rxfir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_dbg1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_dbg2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rximr_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 2176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_gfwr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D4000u;
  static constexpr std::uint32_t kOffsetBytes = 2528u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_ctrl1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_timer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_rxmgmask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_rx14mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_rx15mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_ecr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_esr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_imask2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_imask1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_iflag2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_iflag1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_ctrl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_esr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_crcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_rxfgmask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_rxfir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cbt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_16b_word0_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_16b_word1_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_32b_word4_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_32b_word5_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 156u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 160u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 164u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_64b_word8_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 168u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_64b_word9_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 172u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 180u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_64b_word12_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 184u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_64b_word13_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 188u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 192u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_32b_word6_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 200u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_32b_word7_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 204u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 208u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 212u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word2_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 216u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word3_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 220u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 224u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word6_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word7_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 236u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 240u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 244u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word10_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 248u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word11_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 252u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 260u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word14_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word15_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 268u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 272u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 276u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word0_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word1_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 284u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 292u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_8b_word0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 296u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_8b_word1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 300u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 304u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 308u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_8b_word0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 312u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_8b_word1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 316u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs12> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 320u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id12> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 324u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb12_8b_word0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 328u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb12_8b_word1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 332u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs13> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 336u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id13> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 340u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_8b_word0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 344u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_8b_word1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 348u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs14> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id14> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 356u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb14_8b_word0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 360u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb14_8b_word1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 364u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs15> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 368u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id15> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 372u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_16b_word0_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 376u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_16b_word1_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 380u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs16> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id16> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_16b_cs_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_16b_id_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs17> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id17> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_16b_word2_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 408u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_16b_word3_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 412u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs18> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 416u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id18> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 420u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb12_16b_word0_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb12_16b_word1_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs19> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id19> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 436u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_16b_cs_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 440u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_16b_id_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 444u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs20> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id20> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 452u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_16b_word2_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 456u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_16b_word3_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 460u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs21> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 464u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id21> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 468u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb14_16b_word0_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 472u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb14_16b_word1_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 476u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs22> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 480u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id22> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 484u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb15_16b_cs_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 488u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb15_16b_id_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 492u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs23> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 496u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id23> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 500u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb15_16b_word2_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 504u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb15_16b_word3_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 508u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs24> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 512u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id24> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 516u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb16_16b_word0_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 520u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb16_16b_word1_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 524u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs25> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 528u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id25> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 532u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_32b_word0_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 536u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_32b_word1_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 540u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs26> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 544u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id26> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 548u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_32b_word4_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 552u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_32b_word5_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 556u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs27> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 560u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id27> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 564u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_cs_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 568u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_id_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 572u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs28> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 576u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id28> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 580u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_word2_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 584u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_word3_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 588u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs29> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 592u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id29> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 596u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_word6_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 600u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_word7_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 604u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs30> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 608u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id30> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 612u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb20_16b_word0_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 616u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb20_16b_word1_l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 620u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs31> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 624u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id31> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 628u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb31_8b_word0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 632u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb31_8b_word1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 636u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs32> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 640u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id32> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 644u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_16b_word0_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 648u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_16b_word1_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 652u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs33> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 656u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id33> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 660u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_32b_word4_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 664u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_32b_word5_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 668u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs34> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 672u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id34> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 676u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_64b_word8_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 680u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_64b_word9_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 684u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs35> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 688u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id35> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 692u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_64b_word12_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 696u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb0_64b_word13_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 700u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs36> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 704u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id36> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 708u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_32b_word6_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 712u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_32b_word7_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 716u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs37> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 720u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id37> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 724u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word2_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 728u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word3_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 732u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs38> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 736u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id38> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 740u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word6_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 744u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word7_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 748u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs39> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 752u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id39> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 756u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word10_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 760u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word11_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 764u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs40> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 768u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id40> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 772u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word14_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 776u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb1_64b_word15_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 780u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs41> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 784u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id41> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 788u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word0_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 792u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word1_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 796u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs42> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 800u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id42> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 804u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word4_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 808u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word5_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 812u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs43> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 816u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id43> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 820u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word8_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 824u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word9_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 828u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs44> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 832u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id44> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 836u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word12_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 840u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb2_64b_word13_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 844u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs45> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 848u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id45> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 852u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb3_64b_cs_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 856u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb3_64b_id_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 860u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs46> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 864u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id46> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 868u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb3_64b_word2_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 872u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb3_64b_word3_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 876u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs47> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 880u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id47> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 884u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_16b_word0_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 888u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_16b_word1_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 892u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs48> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 896u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id48> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 900u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_16b_cs_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 904u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_16b_id_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 908u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs49> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 912u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id49> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 916u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_16b_word2_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 920u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_16b_word3_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 924u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs50> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 928u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id50> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 932u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb12_16b_word0_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 936u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb12_16b_word1_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 940u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs51> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 944u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id51> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 948u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_16b_cs_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 952u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_16b_id_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 956u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs52> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 960u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id52> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 964u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_16b_word2_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 968u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb13_16b_word3_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 972u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs53> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 976u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id53> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 980u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb14_16b_word0_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 984u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb14_16b_word1_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 988u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs54> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 992u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id54> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 996u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb15_16b_cs_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1000u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb15_16b_id_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1004u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs55> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1008u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id55> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1012u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb15_16b_word2_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1016u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb15_16b_word3_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1020u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs56> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1024u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id56> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1028u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb16_16b_word0_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1032u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb16_16b_word1_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1036u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs57> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1040u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id57> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1044u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_32b_word0_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1048u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_32b_word1_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1052u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs58> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1056u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id58> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1060u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_32b_word4_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1064u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb10_32b_word5_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1068u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs59> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1072u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id59> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1076u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_cs_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1080u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_id_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1084u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs60> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1088u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id60> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1092u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_word2_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1096u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_word3_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs61> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id61> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1108u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_word6_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb11_32b_word7_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs62> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1120u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id62> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1124u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb20_16b_word0_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb20_16b_word1_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_cs63> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_id63> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb63_8b_word0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_mb63_8b_word1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_rximr__s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 2176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_fdctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 3072u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_fdcbt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 3076u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can3_fdcrc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401D8000u;
  static constexpr std::uint32_t kOffsetBytes = 3080u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_cacrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_cbcdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_cbcmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_cscdr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_cdhipr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ccm_ccgr6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400FC000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dcdc_reg0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40080000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dcdc_reg3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40080000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_es> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_erq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_eei> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_ceei> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_seei> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 25u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_cerq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 26u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_serq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 27u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_cdne> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_ssrt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 29u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_cerr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 30u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_cint> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 31u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_int> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_err> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_hrs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_ears> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 257u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 258u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 259u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 260u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 261u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 262u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 263u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 265u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 266u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 267u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri15> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 268u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri14> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 269u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri13> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 270u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri12> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 271u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri19> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 272u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri18> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 273u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri17> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 274u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri16> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 275u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri23> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 276u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri22> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 277u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri21> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 278u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri20> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 279u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri27> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri26> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 281u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri25> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 282u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri24> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 283u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri31> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 284u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri30> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 285u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri29> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 286u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_dchpri28> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 287u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4096u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4102u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4108u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4118u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4120u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4124u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd0_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4126u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4134u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4150u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4152u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4156u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd1_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4158u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4160u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4164u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4166u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4168u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4172u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4180u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4182u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4184u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4188u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd2_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4190u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4192u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4198u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4200u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4204u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4208u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4212u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4214u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4216u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4220u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd3_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4222u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4224u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4228u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4230u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4236u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4240u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4244u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4246u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4248u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4252u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd4_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4254u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4260u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4262u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4268u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4272u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4276u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4278u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4280u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4284u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd5_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4286u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4288u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4292u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4294u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4296u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4300u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4304u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4308u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4310u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4312u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4316u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd6_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4318u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4320u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4324u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4326u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4328u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4332u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4336u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4340u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4342u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4344u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4348u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd7_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4350u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4352u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4356u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4358u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4360u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4364u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4368u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4372u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4374u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4376u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4380u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd8_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4382u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4390u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4406u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4408u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4412u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd9_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4414u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4416u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4420u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4422u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4436u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4438u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4440u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4444u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd10_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4446u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4452u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4454u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4456u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4460u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4464u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4468u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4470u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4472u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4476u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd11_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4478u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4480u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4484u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4486u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4488u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4492u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4496u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4500u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4502u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4504u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4508u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd12_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4510u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4512u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4516u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4518u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4520u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4524u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4528u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4532u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4534u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4536u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4540u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd13_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4542u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4544u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4548u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4550u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4552u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4556u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4560u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4564u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4566u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4568u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4572u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd14_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4574u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4576u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4580u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4582u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4584u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4588u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4592u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4596u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4598u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4600u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4604u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd15_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4606u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4608u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4612u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4614u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4616u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4620u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4624u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4628u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4630u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4632u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4636u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd16_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4638u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4640u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4644u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4646u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4648u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4652u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4656u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4660u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4662u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4664u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4668u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd17_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4670u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4672u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4676u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4678u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4680u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4684u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4688u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4692u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4694u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4696u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4700u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd18_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4702u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4704u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4708u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4710u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4712u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4716u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4720u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4724u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4726u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4728u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4732u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd19_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4734u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4736u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4740u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4742u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4744u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4748u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4752u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4756u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4758u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4760u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4764u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd20_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4766u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4768u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4772u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4774u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4776u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4780u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4784u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4788u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4790u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4792u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4796u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd21_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4798u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4800u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4804u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4806u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4808u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4812u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4816u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4820u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4822u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4824u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4828u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd22_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4830u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4832u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4836u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4838u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4840u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4844u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4848u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4852u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4854u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4856u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4860u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd23_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4862u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4864u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4868u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4870u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4872u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4876u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4880u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4884u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4886u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4888u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4892u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd24_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4894u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4896u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4900u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4902u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4904u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4908u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4912u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4916u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4918u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4920u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4924u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd25_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4926u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4928u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4932u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4934u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4936u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4940u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4944u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4948u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4950u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4952u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4956u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd26_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4958u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4960u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4964u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4966u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4968u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4972u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4976u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4980u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4982u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4984u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4988u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd27_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4990u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4992u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4996u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 4998u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5000u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5004u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5008u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5012u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5014u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5016u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5020u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd28_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5022u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5024u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5028u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5030u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5032u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5036u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5040u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5044u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5046u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5048u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5052u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd29_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5054u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5056u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5060u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5062u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5064u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5068u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5072u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5076u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5078u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5080u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5084u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd30_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5086u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_saddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5088u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_soff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5092u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_attr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5094u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_nbytes_mlno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5096u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_slast> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_doff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5108u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_citer_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5110u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_dlastsga> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma0_tcd31_biter_elinkno> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400E8000u;
  static constexpr std::uint32_t kOffsetBytes = 5118u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dmamux1_chcfg__s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400EC000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_eir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_eimr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rdar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tdar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ecr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_mmfr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_mscr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_mibc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_palr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_paur> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_opd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 236u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_txic0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 240u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rxic0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_iaur> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ialr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 284u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_gaur> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_galr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 292u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tfwr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 324u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_mrbr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rsfl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rsem> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_raem> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 408u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rafl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 412u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tsem> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 416u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_taem> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 420u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tafl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tipg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ftrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tacc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_racc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 452u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_packets> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 516u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_bc_pkt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 520u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_mc_pkt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 524u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_crc_align> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 528u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_undersize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 532u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_oversize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 536u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_frag> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 540u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_jab> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 544u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_col> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 548u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_p64> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 552u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_p65to127> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 556u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_p128to255> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 560u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_p256to511> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 564u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_p512to1023> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 568u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_p1024to2047> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 572u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_p_gte2048> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 576u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_t_octets> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 580u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_frame_ok> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 588u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_1col> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 592u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_mcol> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 596u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_def> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 600u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_lcol> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 604u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_excol> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 608u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_macerr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 612u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_cserr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 616u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_sqe> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 620u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_fdxfc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 624u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_t_octets_ok> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 628u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_packets> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 644u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_bc_pkt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 648u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_mc_pkt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 652u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_crc_align> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 656u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_undersize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 660u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_oversize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 664u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_frag> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 668u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_jab> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 672u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_p64> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 680u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_p65to127> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 684u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_p128to255> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 688u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_p256to511> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 692u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_p512to1023> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 696u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_p1024to2047> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 700u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_p_gte2048> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 704u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_rmon_r_octets> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 708u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_r_drop> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 712u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_r_frame_ok> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 716u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_r_crc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 720u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_r_align> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 724u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_r_macerr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 728u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_r_fdxfc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 732u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_ieee_r_octets_ok> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 736u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_atcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1024u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_atvr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1028u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_atoff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1032u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_atper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1036u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_atcor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1040u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_atinc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1044u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_atstmp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1048u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tgsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1540u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tcsr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1544u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tccr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1548u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tcsr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1552u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1556u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tcsr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1560u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1564u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tcsr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1568u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet_tccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D8000u;
  static constexpr std::uint32_t kOffsetBytes = 1572u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_eir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_eimr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rdar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tdar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ecr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_mmfr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_mscr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_mibc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_palr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_paur> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_opd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 236u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_txic0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 240u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rxic0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_iaur> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ialr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 284u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_gaur> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_galr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 292u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tfwr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 324u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tdsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_mrbr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rsfl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rsem> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_raem> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 408u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rafl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 412u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tsem> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 416u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_taem> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 420u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tafl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tipg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ftrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tacc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_racc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 452u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_packets> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 516u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_bc_pkt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 520u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_mc_pkt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 524u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_crc_align> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 528u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_undersize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 532u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_oversize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 536u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_frag> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 540u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_jab> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 544u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_col> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 548u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_p64> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 552u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_p65to127> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 556u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_p128to255> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 560u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_p256to511> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 564u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_p512to1023> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 568u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_p1024to2047> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 572u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_p_gte2048> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 576u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_t_octets> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 580u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_frame_ok> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 588u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_1col> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 592u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_mcol> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 596u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_def> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 600u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_lcol> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 604u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_excol> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 608u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_macerr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 612u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_cserr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 616u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_sqe> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 620u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_fdxfc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 624u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_t_octets_ok> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 628u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_packets> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 644u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_bc_pkt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 648u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_mc_pkt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 652u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_crc_align> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 656u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_undersize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 660u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_oversize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 664u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_frag> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 668u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_jab> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 672u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_p64> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 680u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_p65to127> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 684u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_p128to255> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 688u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_p256to511> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 692u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_p512to1023> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 696u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_p1024to2047> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 700u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_p_gte2048> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 704u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_rmon_r_octets> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 708u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_r_drop> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 712u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_r_frame_ok> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 716u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_r_crc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 720u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_r_align> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 724u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_r_macerr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 728u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_r_fdxfc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 732u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_ieee_r_octets_ok> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 736u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_atcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1024u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_atvr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1028u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_atoff> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1032u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_atper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1036u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_atcor> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1040u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_atinc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1044u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_atstmp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1048u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tgsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1540u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tcsr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1544u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tccr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1548u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tcsr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1552u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1556u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tcsr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1560u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1564u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tcsr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1568u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_enet2_tccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402D4000u;
  static constexpr std::uint32_t kOffsetBytes = 1572u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio1_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401B8000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio10_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C8000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio2_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401BC000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio3_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C0000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio4_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401C4000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio5_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400C0000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio6_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42000000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio7_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42004000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio8_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x42008000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_gdir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_icr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_icr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_imr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpio9_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4200C000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt1_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401EC000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt1_pr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401EC000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401EC000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt1_ir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401EC000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt1_ocr_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401EC000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt1_icr_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401EC000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt1_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401EC000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt2_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401F0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt2_pr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401F0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401F0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt2_ir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401F0000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt2_ocr_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401F0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt2_icr_s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401F0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpt2_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401F0000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_der> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_cfgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_cfgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_dmr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_dmr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_fsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_rsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi1_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40394000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_der> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_cfgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_cfgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_dmr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_dmr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_fsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_rsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi2_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40398000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_der> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_cfgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_cfgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_dmr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_dmr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_fsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_rsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi3_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4039C000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_der> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_cfgr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_cfgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_dmr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_dmr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_fsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_tdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_rsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpspi4_rdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403A0000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart1_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40184000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart2_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40188000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart3_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4018C000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart4_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40190000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart5_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40194000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart6_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40198000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart7_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4019C000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_verid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_param> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_global> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_baud> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_stat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_match> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_modir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_lpuart8_water> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x401A0000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pit_mcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40084000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pit_ltmr64h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40084000u;
  static constexpr std::uint32_t kOffsetBytes = 224u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pit_ltmr64l> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40084000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_outen> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 386u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_swcout> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_dtsrcsel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 390u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_mctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_mctrl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 394u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_fctrl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_fsts0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 398u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_ffilt0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_ftst0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 402u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm1_fctrl20> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403DC000u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_outen> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 386u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_swcout> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_dtsrcsel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 390u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_mctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_mctrl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 394u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_fctrl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_fsts0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 398u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_ffilt0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_ftst0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 402u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm2_fctrl20> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E0000u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_outen> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 386u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_swcout> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_dtsrcsel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 390u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_mctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_mctrl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 394u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_fctrl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_fsts0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 398u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_ffilt0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_ftst0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 402u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm3_fctrl20> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E4000u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_outen> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_mask> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 386u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_swcout> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_dtsrcsel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 390u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_mctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_mctrl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 394u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_fctrl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_fsts0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 398u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_ffilt0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_ftst0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 402u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_pwm4_fctrl20> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x403E8000u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtwdog_cs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400BC000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtwdog_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400BC000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtwdog_toval> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400BC000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtwdog_win> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400BC000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_id> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_hwgeneral> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_hwhost> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_hwdevice> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_hwtxbuf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_hwrxbuf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_gptimer0ld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_gptimer0ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_gptimer1ld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_gptimer1ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_sbuscfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_caplength> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_hciversion> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 258u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_hcsparams> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 260u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_hccparams> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_dciversion> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_dccparams> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 292u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_usbcmd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 320u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_usbsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 324u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_usbintr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 328u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_frindex> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 332u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_deviceaddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 340u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_asynclistaddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 344u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_burstsize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_txfilltuning> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 356u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptnak> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 376u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptnaken> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 380u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_configflag> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_portsc1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_otgsc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 420u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_usbmode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptsetupstat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptprime> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptflush> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 436u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptstat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 440u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptcomplete> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 444u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptctrl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptctrl1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 452u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptctrl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 456u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptctrl3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 460u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptctrl4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 464u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptctrl5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 468u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptctrl6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 472u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb1_endptctrl7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0000u;
  static constexpr std::uint32_t kOffsetBytes = 476u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_id> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_hwgeneral> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_hwhost> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_hwdevice> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_hwtxbuf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_hwrxbuf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_gptimer0ld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_gptimer0ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_gptimer1ld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_gptimer1ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_sbuscfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_caplength> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 8;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_hciversion> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 258u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_hcsparams> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 260u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_hccparams> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_dciversion> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_dccparams> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 292u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_usbcmd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 320u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_usbsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 324u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_usbintr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 328u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_frindex> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 332u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_deviceaddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 340u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_asynclistaddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 344u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_burstsize> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_txfilltuning> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 356u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptnak> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 376u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptnaken> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 380u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_configflag> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_portsc1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_otgsc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 420u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_usbmode> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptsetupstat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptprime> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptflush> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 436u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptstat> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 440u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptcomplete> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 444u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptctrl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptctrl1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 452u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptctrl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 456u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptctrl3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 460u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptctrl4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 464u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptctrl5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 468u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptctrl6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 472u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usb2_endptctrl7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x402E0200u;
  static constexpr std::uint32_t kOffsetBytes = 476u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog1_wcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400B8000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog1_wsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400B8000u;
  static constexpr std::uint32_t kOffsetBytes = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog1_wrsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400B8000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog1_wicr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400B8000u;
  static constexpr std::uint32_t kOffsetBytes = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog1_wmcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400B8000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog2_wcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400D0000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog2_wsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400D0000u;
  static constexpr std::uint32_t kOffsetBytes = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog2_wrsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400D0000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog2_wicr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400D0000u;
  static constexpr std::uint32_t kOffsetBytes = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wdog2_wmcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x400D0000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 16;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

inline constexpr std::array<RegisterId, 1395> kRegisters = {{
  RegisterId::register_adc1_hc0,
  RegisterId::register_adc1_hc_s,
  RegisterId::register_adc1_hs,
  RegisterId::register_adc1_r0,
  RegisterId::register_adc1_r_s,
  RegisterId::register_adc1_cfg,
  RegisterId::register_adc1_gc,
  RegisterId::register_adc1_gs,
  RegisterId::register_adc1_cv,
  RegisterId::register_adc1_ofs,
  RegisterId::register_adc1_cal,
  RegisterId::register_adc2_hc0,
  RegisterId::register_adc2_hc_s,
  RegisterId::register_adc2_hs,
  RegisterId::register_adc2_r0,
  RegisterId::register_adc2_r_s,
  RegisterId::register_adc2_cfg,
  RegisterId::register_adc2_gc,
  RegisterId::register_adc2_gs,
  RegisterId::register_adc2_cv,
  RegisterId::register_adc2_ofs,
  RegisterId::register_adc2_cal,
  RegisterId::register_can1_mcr,
  RegisterId::register_can1_ctrl1,
  RegisterId::register_can1_timer,
  RegisterId::register_can1_rxmgmask,
  RegisterId::register_can1_rx14mask,
  RegisterId::register_can1_rx15mask,
  RegisterId::register_can1_ecr,
  RegisterId::register_can1_esr1,
  RegisterId::register_can1_imask2,
  RegisterId::register_can1_imask1,
  RegisterId::register_can1_iflag2,
  RegisterId::register_can1_iflag1,
  RegisterId::register_can1_ctrl2,
  RegisterId::register_can1_esr2,
  RegisterId::register_can1_crcr,
  RegisterId::register_can1_rxfgmask,
  RegisterId::register_can1_rxfir,
  RegisterId::register_can1_dbg1,
  RegisterId::register_can1_dbg2,
  RegisterId::register_can1_rximr_s,
  RegisterId::register_can1_gfwr,
  RegisterId::register_can2_mcr,
  RegisterId::register_can2_ctrl1,
  RegisterId::register_can2_timer,
  RegisterId::register_can2_rxmgmask,
  RegisterId::register_can2_rx14mask,
  RegisterId::register_can2_rx15mask,
  RegisterId::register_can2_ecr,
  RegisterId::register_can2_esr1,
  RegisterId::register_can2_imask2,
  RegisterId::register_can2_imask1,
  RegisterId::register_can2_iflag2,
  RegisterId::register_can2_iflag1,
  RegisterId::register_can2_ctrl2,
  RegisterId::register_can2_esr2,
  RegisterId::register_can2_crcr,
  RegisterId::register_can2_rxfgmask,
  RegisterId::register_can2_rxfir,
  RegisterId::register_can2_dbg1,
  RegisterId::register_can2_dbg2,
  RegisterId::register_can2_rximr_s,
  RegisterId::register_can2_gfwr,
  RegisterId::register_can3_mcr,
  RegisterId::register_can3_ctrl1,
  RegisterId::register_can3_timer,
  RegisterId::register_can3_rxmgmask,
  RegisterId::register_can3_rx14mask,
  RegisterId::register_can3_rx15mask,
  RegisterId::register_can3_ecr,
  RegisterId::register_can3_esr1,
  RegisterId::register_can3_imask2,
  RegisterId::register_can3_imask1,
  RegisterId::register_can3_iflag2,
  RegisterId::register_can3_iflag1,
  RegisterId::register_can3_ctrl2,
  RegisterId::register_can3_esr2,
  RegisterId::register_can3_crcr,
  RegisterId::register_can3_rxfgmask,
  RegisterId::register_can3_rxfir,
  RegisterId::register_can3_cbt,
  RegisterId::register_can3_cs0,
  RegisterId::register_can3_id0,
  RegisterId::register_can3_mb0_16b_word0_l,
  RegisterId::register_can3_mb0_16b_word1_l,
  RegisterId::register_can3_cs1,
  RegisterId::register_can3_id1,
  RegisterId::register_can3_mb0_32b_word4_l,
  RegisterId::register_can3_mb0_32b_word5_l,
  RegisterId::register_can3_cs2,
  RegisterId::register_can3_id2,
  RegisterId::register_can3_mb0_64b_word8_l,
  RegisterId::register_can3_mb0_64b_word9_l,
  RegisterId::register_can3_cs3,
  RegisterId::register_can3_id3,
  RegisterId::register_can3_mb0_64b_word12_l,
  RegisterId::register_can3_mb0_64b_word13_l,
  RegisterId::register_can3_cs4,
  RegisterId::register_can3_id4,
  RegisterId::register_can3_mb1_32b_word6_l,
  RegisterId::register_can3_mb1_32b_word7_l,
  RegisterId::register_can3_cs5,
  RegisterId::register_can3_id5,
  RegisterId::register_can3_mb1_64b_word2_l,
  RegisterId::register_can3_mb1_64b_word3_l,
  RegisterId::register_can3_cs6,
  RegisterId::register_can3_id6,
  RegisterId::register_can3_mb1_64b_word6_l,
  RegisterId::register_can3_mb1_64b_word7_l,
  RegisterId::register_can3_cs7,
  RegisterId::register_can3_id7,
  RegisterId::register_can3_mb1_64b_word10_l,
  RegisterId::register_can3_mb1_64b_word11_l,
  RegisterId::register_can3_cs8,
  RegisterId::register_can3_id8,
  RegisterId::register_can3_mb1_64b_word14_l,
  RegisterId::register_can3_mb1_64b_word15_l,
  RegisterId::register_can3_cs9,
  RegisterId::register_can3_id9,
  RegisterId::register_can3_mb2_64b_word0_l,
  RegisterId::register_can3_mb2_64b_word1_l,
  RegisterId::register_can3_cs10,
  RegisterId::register_can3_id10,
  RegisterId::register_can3_mb10_8b_word0,
  RegisterId::register_can3_mb10_8b_word1,
  RegisterId::register_can3_cs11,
  RegisterId::register_can3_id11,
  RegisterId::register_can3_mb11_8b_word0,
  RegisterId::register_can3_mb11_8b_word1,
  RegisterId::register_can3_cs12,
  RegisterId::register_can3_id12,
  RegisterId::register_can3_mb12_8b_word0,
  RegisterId::register_can3_mb12_8b_word1,
  RegisterId::register_can3_cs13,
  RegisterId::register_can3_id13,
  RegisterId::register_can3_mb13_8b_word0,
  RegisterId::register_can3_mb13_8b_word1,
  RegisterId::register_can3_cs14,
  RegisterId::register_can3_id14,
  RegisterId::register_can3_mb14_8b_word0,
  RegisterId::register_can3_mb14_8b_word1,
  RegisterId::register_can3_cs15,
  RegisterId::register_can3_id15,
  RegisterId::register_can3_mb10_16b_word0_l,
  RegisterId::register_can3_mb10_16b_word1_l,
  RegisterId::register_can3_cs16,
  RegisterId::register_can3_id16,
  RegisterId::register_can3_mb11_16b_cs_l,
  RegisterId::register_can3_mb11_16b_id_l,
  RegisterId::register_can3_cs17,
  RegisterId::register_can3_id17,
  RegisterId::register_can3_mb11_16b_word2_l,
  RegisterId::register_can3_mb11_16b_word3_l,
  RegisterId::register_can3_cs18,
  RegisterId::register_can3_id18,
  RegisterId::register_can3_mb12_16b_word0_l,
  RegisterId::register_can3_mb12_16b_word1_l,
  RegisterId::register_can3_cs19,
  RegisterId::register_can3_id19,
  RegisterId::register_can3_mb13_16b_cs_l,
  RegisterId::register_can3_mb13_16b_id_l,
  RegisterId::register_can3_cs20,
  RegisterId::register_can3_id20,
  RegisterId::register_can3_mb13_16b_word2_l,
  RegisterId::register_can3_mb13_16b_word3_l,
  RegisterId::register_can3_cs21,
  RegisterId::register_can3_id21,
  RegisterId::register_can3_mb14_16b_word0_l,
  RegisterId::register_can3_mb14_16b_word1_l,
  RegisterId::register_can3_cs22,
  RegisterId::register_can3_id22,
  RegisterId::register_can3_mb15_16b_cs_l,
  RegisterId::register_can3_mb15_16b_id_l,
  RegisterId::register_can3_cs23,
  RegisterId::register_can3_id23,
  RegisterId::register_can3_mb15_16b_word2_l,
  RegisterId::register_can3_mb15_16b_word3_l,
  RegisterId::register_can3_cs24,
  RegisterId::register_can3_id24,
  RegisterId::register_can3_mb16_16b_word0_l,
  RegisterId::register_can3_mb16_16b_word1_l,
  RegisterId::register_can3_cs25,
  RegisterId::register_can3_id25,
  RegisterId::register_can3_mb10_32b_word0_l,
  RegisterId::register_can3_mb10_32b_word1_l,
  RegisterId::register_can3_cs26,
  RegisterId::register_can3_id26,
  RegisterId::register_can3_mb10_32b_word4_l,
  RegisterId::register_can3_mb10_32b_word5_l,
  RegisterId::register_can3_cs27,
  RegisterId::register_can3_id27,
  RegisterId::register_can3_mb11_32b_cs_l,
  RegisterId::register_can3_mb11_32b_id_l,
  RegisterId::register_can3_cs28,
  RegisterId::register_can3_id28,
  RegisterId::register_can3_mb11_32b_word2_l,
  RegisterId::register_can3_mb11_32b_word3_l,
  RegisterId::register_can3_cs29,
  RegisterId::register_can3_id29,
  RegisterId::register_can3_mb11_32b_word6_l,
  RegisterId::register_can3_mb11_32b_word7_l,
  RegisterId::register_can3_cs30,
  RegisterId::register_can3_id30,
  RegisterId::register_can3_mb20_16b_word0_l,
  RegisterId::register_can3_mb20_16b_word1_l,
  RegisterId::register_can3_cs31,
  RegisterId::register_can3_id31,
  RegisterId::register_can3_mb31_8b_word0,
  RegisterId::register_can3_mb31_8b_word1,
  RegisterId::register_can3_cs32,
  RegisterId::register_can3_id32,
  RegisterId::register_can3_mb0_16b_word0_h,
  RegisterId::register_can3_mb0_16b_word1_h,
  RegisterId::register_can3_cs33,
  RegisterId::register_can3_id33,
  RegisterId::register_can3_mb0_32b_word4_h,
  RegisterId::register_can3_mb0_32b_word5_h,
  RegisterId::register_can3_cs34,
  RegisterId::register_can3_id34,
  RegisterId::register_can3_mb0_64b_word8_h,
  RegisterId::register_can3_mb0_64b_word9_h,
  RegisterId::register_can3_cs35,
  RegisterId::register_can3_id35,
  RegisterId::register_can3_mb0_64b_word12_h,
  RegisterId::register_can3_mb0_64b_word13_h,
  RegisterId::register_can3_cs36,
  RegisterId::register_can3_id36,
  RegisterId::register_can3_mb1_32b_word6_h,
  RegisterId::register_can3_mb1_32b_word7_h,
  RegisterId::register_can3_cs37,
  RegisterId::register_can3_id37,
  RegisterId::register_can3_mb1_64b_word2_h,
  RegisterId::register_can3_mb1_64b_word3_h,
  RegisterId::register_can3_cs38,
  RegisterId::register_can3_id38,
  RegisterId::register_can3_mb1_64b_word6_h,
  RegisterId::register_can3_mb1_64b_word7_h,
  RegisterId::register_can3_cs39,
  RegisterId::register_can3_id39,
  RegisterId::register_can3_mb1_64b_word10_h,
  RegisterId::register_can3_mb1_64b_word11_h,
  RegisterId::register_can3_cs40,
  RegisterId::register_can3_id40,
  RegisterId::register_can3_mb1_64b_word14_h,
  RegisterId::register_can3_mb1_64b_word15_h,
  RegisterId::register_can3_cs41,
  RegisterId::register_can3_id41,
  RegisterId::register_can3_mb2_64b_word0_h,
  RegisterId::register_can3_mb2_64b_word1_h,
  RegisterId::register_can3_cs42,
  RegisterId::register_can3_id42,
  RegisterId::register_can3_mb2_64b_word4_h,
  RegisterId::register_can3_mb2_64b_word5_h,
  RegisterId::register_can3_cs43,
  RegisterId::register_can3_id43,
  RegisterId::register_can3_mb2_64b_word8_h,
  RegisterId::register_can3_mb2_64b_word9_h,
  RegisterId::register_can3_cs44,
  RegisterId::register_can3_id44,
  RegisterId::register_can3_mb2_64b_word12_h,
  RegisterId::register_can3_mb2_64b_word13_h,
  RegisterId::register_can3_cs45,
  RegisterId::register_can3_id45,
  RegisterId::register_can3_mb3_64b_cs_h,
  RegisterId::register_can3_mb3_64b_id_h,
  RegisterId::register_can3_cs46,
  RegisterId::register_can3_id46,
  RegisterId::register_can3_mb3_64b_word2_h,
  RegisterId::register_can3_mb3_64b_word3_h,
  RegisterId::register_can3_cs47,
  RegisterId::register_can3_id47,
  RegisterId::register_can3_mb10_16b_word0_h,
  RegisterId::register_can3_mb10_16b_word1_h,
  RegisterId::register_can3_cs48,
  RegisterId::register_can3_id48,
  RegisterId::register_can3_mb11_16b_cs_h,
  RegisterId::register_can3_mb11_16b_id_h,
  RegisterId::register_can3_cs49,
  RegisterId::register_can3_id49,
  RegisterId::register_can3_mb11_16b_word2_h,
  RegisterId::register_can3_mb11_16b_word3_h,
  RegisterId::register_can3_cs50,
  RegisterId::register_can3_id50,
  RegisterId::register_can3_mb12_16b_word0_h,
  RegisterId::register_can3_mb12_16b_word1_h,
  RegisterId::register_can3_cs51,
  RegisterId::register_can3_id51,
  RegisterId::register_can3_mb13_16b_cs_h,
  RegisterId::register_can3_mb13_16b_id_h,
  RegisterId::register_can3_cs52,
  RegisterId::register_can3_id52,
  RegisterId::register_can3_mb13_16b_word2_h,
  RegisterId::register_can3_mb13_16b_word3_h,
  RegisterId::register_can3_cs53,
  RegisterId::register_can3_id53,
  RegisterId::register_can3_mb14_16b_word0_h,
  RegisterId::register_can3_mb14_16b_word1_h,
  RegisterId::register_can3_cs54,
  RegisterId::register_can3_id54,
  RegisterId::register_can3_mb15_16b_cs_h,
  RegisterId::register_can3_mb15_16b_id_h,
  RegisterId::register_can3_cs55,
  RegisterId::register_can3_id55,
  RegisterId::register_can3_mb15_16b_word2_h,
  RegisterId::register_can3_mb15_16b_word3_h,
  RegisterId::register_can3_cs56,
  RegisterId::register_can3_id56,
  RegisterId::register_can3_mb16_16b_word0_h,
  RegisterId::register_can3_mb16_16b_word1_h,
  RegisterId::register_can3_cs57,
  RegisterId::register_can3_id57,
  RegisterId::register_can3_mb10_32b_word0_h,
  RegisterId::register_can3_mb10_32b_word1_h,
  RegisterId::register_can3_cs58,
  RegisterId::register_can3_id58,
  RegisterId::register_can3_mb10_32b_word4_h,
  RegisterId::register_can3_mb10_32b_word5_h,
  RegisterId::register_can3_cs59,
  RegisterId::register_can3_id59,
  RegisterId::register_can3_mb11_32b_cs_h,
  RegisterId::register_can3_mb11_32b_id_h,
  RegisterId::register_can3_cs60,
  RegisterId::register_can3_id60,
  RegisterId::register_can3_mb11_32b_word2_h,
  RegisterId::register_can3_mb11_32b_word3_h,
  RegisterId::register_can3_cs61,
  RegisterId::register_can3_id61,
  RegisterId::register_can3_mb11_32b_word6_h,
  RegisterId::register_can3_mb11_32b_word7_h,
  RegisterId::register_can3_cs62,
  RegisterId::register_can3_id62,
  RegisterId::register_can3_mb20_16b_word0_h,
  RegisterId::register_can3_mb20_16b_word1_h,
  RegisterId::register_can3_cs63,
  RegisterId::register_can3_id63,
  RegisterId::register_can3_mb63_8b_word0,
  RegisterId::register_can3_mb63_8b_word1,
  RegisterId::register_can3_rximr__s,
  RegisterId::register_can3_fdctrl,
  RegisterId::register_can3_fdcbt,
  RegisterId::register_can3_fdcrc,
  RegisterId::register_ccm_cacrr,
  RegisterId::register_ccm_cbcdr,
  RegisterId::register_ccm_cbcmr,
  RegisterId::register_ccm_cscdr1,
  RegisterId::register_ccm_cdhipr,
  RegisterId::register_ccm_ccgr0,
  RegisterId::register_ccm_ccgr1,
  RegisterId::register_ccm_ccgr2,
  RegisterId::register_ccm_ccgr3,
  RegisterId::register_ccm_ccgr5,
  RegisterId::register_ccm_ccgr6,
  RegisterId::register_dcdc_reg0,
  RegisterId::register_dcdc_reg3,
  RegisterId::register_dma0_cr,
  RegisterId::register_dma0_es,
  RegisterId::register_dma0_erq,
  RegisterId::register_dma0_eei,
  RegisterId::register_dma0_ceei,
  RegisterId::register_dma0_seei,
  RegisterId::register_dma0_cerq,
  RegisterId::register_dma0_serq,
  RegisterId::register_dma0_cdne,
  RegisterId::register_dma0_ssrt,
  RegisterId::register_dma0_cerr,
  RegisterId::register_dma0_cint,
  RegisterId::register_dma0_int,
  RegisterId::register_dma0_err,
  RegisterId::register_dma0_hrs,
  RegisterId::register_dma0_ears,
  RegisterId::register_dma0_dchpri3,
  RegisterId::register_dma0_dchpri2,
  RegisterId::register_dma0_dchpri1,
  RegisterId::register_dma0_dchpri0,
  RegisterId::register_dma0_dchpri7,
  RegisterId::register_dma0_dchpri6,
  RegisterId::register_dma0_dchpri5,
  RegisterId::register_dma0_dchpri4,
  RegisterId::register_dma0_dchpri11,
  RegisterId::register_dma0_dchpri10,
  RegisterId::register_dma0_dchpri9,
  RegisterId::register_dma0_dchpri8,
  RegisterId::register_dma0_dchpri15,
  RegisterId::register_dma0_dchpri14,
  RegisterId::register_dma0_dchpri13,
  RegisterId::register_dma0_dchpri12,
  RegisterId::register_dma0_dchpri19,
  RegisterId::register_dma0_dchpri18,
  RegisterId::register_dma0_dchpri17,
  RegisterId::register_dma0_dchpri16,
  RegisterId::register_dma0_dchpri23,
  RegisterId::register_dma0_dchpri22,
  RegisterId::register_dma0_dchpri21,
  RegisterId::register_dma0_dchpri20,
  RegisterId::register_dma0_dchpri27,
  RegisterId::register_dma0_dchpri26,
  RegisterId::register_dma0_dchpri25,
  RegisterId::register_dma0_dchpri24,
  RegisterId::register_dma0_dchpri31,
  RegisterId::register_dma0_dchpri30,
  RegisterId::register_dma0_dchpri29,
  RegisterId::register_dma0_dchpri28,
  RegisterId::register_dma0_tcd0_saddr,
  RegisterId::register_dma0_tcd0_soff,
  RegisterId::register_dma0_tcd0_attr,
  RegisterId::register_dma0_tcd0_nbytes_mlno,
  RegisterId::register_dma0_tcd0_slast,
  RegisterId::register_dma0_tcd0_daddr,
  RegisterId::register_dma0_tcd0_doff,
  RegisterId::register_dma0_tcd0_citer_elinkno,
  RegisterId::register_dma0_tcd0_dlastsga,
  RegisterId::register_dma0_tcd0_csr,
  RegisterId::register_dma0_tcd0_biter_elinkno,
  RegisterId::register_dma0_tcd1_saddr,
  RegisterId::register_dma0_tcd1_soff,
  RegisterId::register_dma0_tcd1_attr,
  RegisterId::register_dma0_tcd1_nbytes_mlno,
  RegisterId::register_dma0_tcd1_slast,
  RegisterId::register_dma0_tcd1_daddr,
  RegisterId::register_dma0_tcd1_doff,
  RegisterId::register_dma0_tcd1_citer_elinkno,
  RegisterId::register_dma0_tcd1_dlastsga,
  RegisterId::register_dma0_tcd1_csr,
  RegisterId::register_dma0_tcd1_biter_elinkno,
  RegisterId::register_dma0_tcd2_saddr,
  RegisterId::register_dma0_tcd2_soff,
  RegisterId::register_dma0_tcd2_attr,
  RegisterId::register_dma0_tcd2_nbytes_mlno,
  RegisterId::register_dma0_tcd2_slast,
  RegisterId::register_dma0_tcd2_daddr,
  RegisterId::register_dma0_tcd2_doff,
  RegisterId::register_dma0_tcd2_citer_elinkno,
  RegisterId::register_dma0_tcd2_dlastsga,
  RegisterId::register_dma0_tcd2_csr,
  RegisterId::register_dma0_tcd2_biter_elinkno,
  RegisterId::register_dma0_tcd3_saddr,
  RegisterId::register_dma0_tcd3_soff,
  RegisterId::register_dma0_tcd3_attr,
  RegisterId::register_dma0_tcd3_nbytes_mlno,
  RegisterId::register_dma0_tcd3_slast,
  RegisterId::register_dma0_tcd3_daddr,
  RegisterId::register_dma0_tcd3_doff,
  RegisterId::register_dma0_tcd3_citer_elinkno,
  RegisterId::register_dma0_tcd3_dlastsga,
  RegisterId::register_dma0_tcd3_csr,
  RegisterId::register_dma0_tcd3_biter_elinkno,
  RegisterId::register_dma0_tcd4_saddr,
  RegisterId::register_dma0_tcd4_soff,
  RegisterId::register_dma0_tcd4_attr,
  RegisterId::register_dma0_tcd4_nbytes_mlno,
  RegisterId::register_dma0_tcd4_slast,
  RegisterId::register_dma0_tcd4_daddr,
  RegisterId::register_dma0_tcd4_doff,
  RegisterId::register_dma0_tcd4_citer_elinkno,
  RegisterId::register_dma0_tcd4_dlastsga,
  RegisterId::register_dma0_tcd4_csr,
  RegisterId::register_dma0_tcd4_biter_elinkno,
  RegisterId::register_dma0_tcd5_saddr,
  RegisterId::register_dma0_tcd5_soff,
  RegisterId::register_dma0_tcd5_attr,
  RegisterId::register_dma0_tcd5_nbytes_mlno,
  RegisterId::register_dma0_tcd5_slast,
  RegisterId::register_dma0_tcd5_daddr,
  RegisterId::register_dma0_tcd5_doff,
  RegisterId::register_dma0_tcd5_citer_elinkno,
  RegisterId::register_dma0_tcd5_dlastsga,
  RegisterId::register_dma0_tcd5_csr,
  RegisterId::register_dma0_tcd5_biter_elinkno,
  RegisterId::register_dma0_tcd6_saddr,
  RegisterId::register_dma0_tcd6_soff,
  RegisterId::register_dma0_tcd6_attr,
  RegisterId::register_dma0_tcd6_nbytes_mlno,
  RegisterId::register_dma0_tcd6_slast,
  RegisterId::register_dma0_tcd6_daddr,
  RegisterId::register_dma0_tcd6_doff,
  RegisterId::register_dma0_tcd6_citer_elinkno,
  RegisterId::register_dma0_tcd6_dlastsga,
  RegisterId::register_dma0_tcd6_csr,
  RegisterId::register_dma0_tcd6_biter_elinkno,
  RegisterId::register_dma0_tcd7_saddr,
  RegisterId::register_dma0_tcd7_soff,
  RegisterId::register_dma0_tcd7_attr,
  RegisterId::register_dma0_tcd7_nbytes_mlno,
  RegisterId::register_dma0_tcd7_slast,
  RegisterId::register_dma0_tcd7_daddr,
  RegisterId::register_dma0_tcd7_doff,
  RegisterId::register_dma0_tcd7_citer_elinkno,
  RegisterId::register_dma0_tcd7_dlastsga,
  RegisterId::register_dma0_tcd7_csr,
  RegisterId::register_dma0_tcd7_biter_elinkno,
  RegisterId::register_dma0_tcd8_saddr,
  RegisterId::register_dma0_tcd8_soff,
  RegisterId::register_dma0_tcd8_attr,
  RegisterId::register_dma0_tcd8_nbytes_mlno,
  RegisterId::register_dma0_tcd8_slast,
  RegisterId::register_dma0_tcd8_daddr,
  RegisterId::register_dma0_tcd8_doff,
  RegisterId::register_dma0_tcd8_citer_elinkno,
  RegisterId::register_dma0_tcd8_dlastsga,
  RegisterId::register_dma0_tcd8_csr,
  RegisterId::register_dma0_tcd8_biter_elinkno,
  RegisterId::register_dma0_tcd9_saddr,
  RegisterId::register_dma0_tcd9_soff,
  RegisterId::register_dma0_tcd9_attr,
  RegisterId::register_dma0_tcd9_nbytes_mlno,
  RegisterId::register_dma0_tcd9_slast,
  RegisterId::register_dma0_tcd9_daddr,
  RegisterId::register_dma0_tcd9_doff,
  RegisterId::register_dma0_tcd9_citer_elinkno,
  RegisterId::register_dma0_tcd9_dlastsga,
  RegisterId::register_dma0_tcd9_csr,
  RegisterId::register_dma0_tcd9_biter_elinkno,
  RegisterId::register_dma0_tcd10_saddr,
  RegisterId::register_dma0_tcd10_soff,
  RegisterId::register_dma0_tcd10_attr,
  RegisterId::register_dma0_tcd10_nbytes_mlno,
  RegisterId::register_dma0_tcd10_slast,
  RegisterId::register_dma0_tcd10_daddr,
  RegisterId::register_dma0_tcd10_doff,
  RegisterId::register_dma0_tcd10_citer_elinkno,
  RegisterId::register_dma0_tcd10_dlastsga,
  RegisterId::register_dma0_tcd10_csr,
  RegisterId::register_dma0_tcd10_biter_elinkno,
  RegisterId::register_dma0_tcd11_saddr,
  RegisterId::register_dma0_tcd11_soff,
  RegisterId::register_dma0_tcd11_attr,
  RegisterId::register_dma0_tcd11_nbytes_mlno,
  RegisterId::register_dma0_tcd11_slast,
  RegisterId::register_dma0_tcd11_daddr,
  RegisterId::register_dma0_tcd11_doff,
  RegisterId::register_dma0_tcd11_citer_elinkno,
  RegisterId::register_dma0_tcd11_dlastsga,
  RegisterId::register_dma0_tcd11_csr,
  RegisterId::register_dma0_tcd11_biter_elinkno,
  RegisterId::register_dma0_tcd12_saddr,
  RegisterId::register_dma0_tcd12_soff,
  RegisterId::register_dma0_tcd12_attr,
  RegisterId::register_dma0_tcd12_nbytes_mlno,
  RegisterId::register_dma0_tcd12_slast,
  RegisterId::register_dma0_tcd12_daddr,
  RegisterId::register_dma0_tcd12_doff,
  RegisterId::register_dma0_tcd12_citer_elinkno,
  RegisterId::register_dma0_tcd12_dlastsga,
  RegisterId::register_dma0_tcd12_csr,
  RegisterId::register_dma0_tcd12_biter_elinkno,
  RegisterId::register_dma0_tcd13_saddr,
  RegisterId::register_dma0_tcd13_soff,
  RegisterId::register_dma0_tcd13_attr,
  RegisterId::register_dma0_tcd13_nbytes_mlno,
  RegisterId::register_dma0_tcd13_slast,
  RegisterId::register_dma0_tcd13_daddr,
  RegisterId::register_dma0_tcd13_doff,
  RegisterId::register_dma0_tcd13_citer_elinkno,
  RegisterId::register_dma0_tcd13_dlastsga,
  RegisterId::register_dma0_tcd13_csr,
  RegisterId::register_dma0_tcd13_biter_elinkno,
  RegisterId::register_dma0_tcd14_saddr,
  RegisterId::register_dma0_tcd14_soff,
  RegisterId::register_dma0_tcd14_attr,
  RegisterId::register_dma0_tcd14_nbytes_mlno,
  RegisterId::register_dma0_tcd14_slast,
  RegisterId::register_dma0_tcd14_daddr,
  RegisterId::register_dma0_tcd14_doff,
  RegisterId::register_dma0_tcd14_citer_elinkno,
  RegisterId::register_dma0_tcd14_dlastsga,
  RegisterId::register_dma0_tcd14_csr,
  RegisterId::register_dma0_tcd14_biter_elinkno,
  RegisterId::register_dma0_tcd15_saddr,
  RegisterId::register_dma0_tcd15_soff,
  RegisterId::register_dma0_tcd15_attr,
  RegisterId::register_dma0_tcd15_nbytes_mlno,
  RegisterId::register_dma0_tcd15_slast,
  RegisterId::register_dma0_tcd15_daddr,
  RegisterId::register_dma0_tcd15_doff,
  RegisterId::register_dma0_tcd15_citer_elinkno,
  RegisterId::register_dma0_tcd15_dlastsga,
  RegisterId::register_dma0_tcd15_csr,
  RegisterId::register_dma0_tcd15_biter_elinkno,
  RegisterId::register_dma0_tcd16_saddr,
  RegisterId::register_dma0_tcd16_soff,
  RegisterId::register_dma0_tcd16_attr,
  RegisterId::register_dma0_tcd16_nbytes_mlno,
  RegisterId::register_dma0_tcd16_slast,
  RegisterId::register_dma0_tcd16_daddr,
  RegisterId::register_dma0_tcd16_doff,
  RegisterId::register_dma0_tcd16_citer_elinkno,
  RegisterId::register_dma0_tcd16_dlastsga,
  RegisterId::register_dma0_tcd16_csr,
  RegisterId::register_dma0_tcd16_biter_elinkno,
  RegisterId::register_dma0_tcd17_saddr,
  RegisterId::register_dma0_tcd17_soff,
  RegisterId::register_dma0_tcd17_attr,
  RegisterId::register_dma0_tcd17_nbytes_mlno,
  RegisterId::register_dma0_tcd17_slast,
  RegisterId::register_dma0_tcd17_daddr,
  RegisterId::register_dma0_tcd17_doff,
  RegisterId::register_dma0_tcd17_citer_elinkno,
  RegisterId::register_dma0_tcd17_dlastsga,
  RegisterId::register_dma0_tcd17_csr,
  RegisterId::register_dma0_tcd17_biter_elinkno,
  RegisterId::register_dma0_tcd18_saddr,
  RegisterId::register_dma0_tcd18_soff,
  RegisterId::register_dma0_tcd18_attr,
  RegisterId::register_dma0_tcd18_nbytes_mlno,
  RegisterId::register_dma0_tcd18_slast,
  RegisterId::register_dma0_tcd18_daddr,
  RegisterId::register_dma0_tcd18_doff,
  RegisterId::register_dma0_tcd18_citer_elinkno,
  RegisterId::register_dma0_tcd18_dlastsga,
  RegisterId::register_dma0_tcd18_csr,
  RegisterId::register_dma0_tcd18_biter_elinkno,
  RegisterId::register_dma0_tcd19_saddr,
  RegisterId::register_dma0_tcd19_soff,
  RegisterId::register_dma0_tcd19_attr,
  RegisterId::register_dma0_tcd19_nbytes_mlno,
  RegisterId::register_dma0_tcd19_slast,
  RegisterId::register_dma0_tcd19_daddr,
  RegisterId::register_dma0_tcd19_doff,
  RegisterId::register_dma0_tcd19_citer_elinkno,
  RegisterId::register_dma0_tcd19_dlastsga,
  RegisterId::register_dma0_tcd19_csr,
  RegisterId::register_dma0_tcd19_biter_elinkno,
  RegisterId::register_dma0_tcd20_saddr,
  RegisterId::register_dma0_tcd20_soff,
  RegisterId::register_dma0_tcd20_attr,
  RegisterId::register_dma0_tcd20_nbytes_mlno,
  RegisterId::register_dma0_tcd20_slast,
  RegisterId::register_dma0_tcd20_daddr,
  RegisterId::register_dma0_tcd20_doff,
  RegisterId::register_dma0_tcd20_citer_elinkno,
  RegisterId::register_dma0_tcd20_dlastsga,
  RegisterId::register_dma0_tcd20_csr,
  RegisterId::register_dma0_tcd20_biter_elinkno,
  RegisterId::register_dma0_tcd21_saddr,
  RegisterId::register_dma0_tcd21_soff,
  RegisterId::register_dma0_tcd21_attr,
  RegisterId::register_dma0_tcd21_nbytes_mlno,
  RegisterId::register_dma0_tcd21_slast,
  RegisterId::register_dma0_tcd21_daddr,
  RegisterId::register_dma0_tcd21_doff,
  RegisterId::register_dma0_tcd21_citer_elinkno,
  RegisterId::register_dma0_tcd21_dlastsga,
  RegisterId::register_dma0_tcd21_csr,
  RegisterId::register_dma0_tcd21_biter_elinkno,
  RegisterId::register_dma0_tcd22_saddr,
  RegisterId::register_dma0_tcd22_soff,
  RegisterId::register_dma0_tcd22_attr,
  RegisterId::register_dma0_tcd22_nbytes_mlno,
  RegisterId::register_dma0_tcd22_slast,
  RegisterId::register_dma0_tcd22_daddr,
  RegisterId::register_dma0_tcd22_doff,
  RegisterId::register_dma0_tcd22_citer_elinkno,
  RegisterId::register_dma0_tcd22_dlastsga,
  RegisterId::register_dma0_tcd22_csr,
  RegisterId::register_dma0_tcd22_biter_elinkno,
  RegisterId::register_dma0_tcd23_saddr,
  RegisterId::register_dma0_tcd23_soff,
  RegisterId::register_dma0_tcd23_attr,
  RegisterId::register_dma0_tcd23_nbytes_mlno,
  RegisterId::register_dma0_tcd23_slast,
  RegisterId::register_dma0_tcd23_daddr,
  RegisterId::register_dma0_tcd23_doff,
  RegisterId::register_dma0_tcd23_citer_elinkno,
  RegisterId::register_dma0_tcd23_dlastsga,
  RegisterId::register_dma0_tcd23_csr,
  RegisterId::register_dma0_tcd23_biter_elinkno,
  RegisterId::register_dma0_tcd24_saddr,
  RegisterId::register_dma0_tcd24_soff,
  RegisterId::register_dma0_tcd24_attr,
  RegisterId::register_dma0_tcd24_nbytes_mlno,
  RegisterId::register_dma0_tcd24_slast,
  RegisterId::register_dma0_tcd24_daddr,
  RegisterId::register_dma0_tcd24_doff,
  RegisterId::register_dma0_tcd24_citer_elinkno,
  RegisterId::register_dma0_tcd24_dlastsga,
  RegisterId::register_dma0_tcd24_csr,
  RegisterId::register_dma0_tcd24_biter_elinkno,
  RegisterId::register_dma0_tcd25_saddr,
  RegisterId::register_dma0_tcd25_soff,
  RegisterId::register_dma0_tcd25_attr,
  RegisterId::register_dma0_tcd25_nbytes_mlno,
  RegisterId::register_dma0_tcd25_slast,
  RegisterId::register_dma0_tcd25_daddr,
  RegisterId::register_dma0_tcd25_doff,
  RegisterId::register_dma0_tcd25_citer_elinkno,
  RegisterId::register_dma0_tcd25_dlastsga,
  RegisterId::register_dma0_tcd25_csr,
  RegisterId::register_dma0_tcd25_biter_elinkno,
  RegisterId::register_dma0_tcd26_saddr,
  RegisterId::register_dma0_tcd26_soff,
  RegisterId::register_dma0_tcd26_attr,
  RegisterId::register_dma0_tcd26_nbytes_mlno,
  RegisterId::register_dma0_tcd26_slast,
  RegisterId::register_dma0_tcd26_daddr,
  RegisterId::register_dma0_tcd26_doff,
  RegisterId::register_dma0_tcd26_citer_elinkno,
  RegisterId::register_dma0_tcd26_dlastsga,
  RegisterId::register_dma0_tcd26_csr,
  RegisterId::register_dma0_tcd26_biter_elinkno,
  RegisterId::register_dma0_tcd27_saddr,
  RegisterId::register_dma0_tcd27_soff,
  RegisterId::register_dma0_tcd27_attr,
  RegisterId::register_dma0_tcd27_nbytes_mlno,
  RegisterId::register_dma0_tcd27_slast,
  RegisterId::register_dma0_tcd27_daddr,
  RegisterId::register_dma0_tcd27_doff,
  RegisterId::register_dma0_tcd27_citer_elinkno,
  RegisterId::register_dma0_tcd27_dlastsga,
  RegisterId::register_dma0_tcd27_csr,
  RegisterId::register_dma0_tcd27_biter_elinkno,
  RegisterId::register_dma0_tcd28_saddr,
  RegisterId::register_dma0_tcd28_soff,
  RegisterId::register_dma0_tcd28_attr,
  RegisterId::register_dma0_tcd28_nbytes_mlno,
  RegisterId::register_dma0_tcd28_slast,
  RegisterId::register_dma0_tcd28_daddr,
  RegisterId::register_dma0_tcd28_doff,
  RegisterId::register_dma0_tcd28_citer_elinkno,
  RegisterId::register_dma0_tcd28_dlastsga,
  RegisterId::register_dma0_tcd28_csr,
  RegisterId::register_dma0_tcd28_biter_elinkno,
  RegisterId::register_dma0_tcd29_saddr,
  RegisterId::register_dma0_tcd29_soff,
  RegisterId::register_dma0_tcd29_attr,
  RegisterId::register_dma0_tcd29_nbytes_mlno,
  RegisterId::register_dma0_tcd29_slast,
  RegisterId::register_dma0_tcd29_daddr,
  RegisterId::register_dma0_tcd29_doff,
  RegisterId::register_dma0_tcd29_citer_elinkno,
  RegisterId::register_dma0_tcd29_dlastsga,
  RegisterId::register_dma0_tcd29_csr,
  RegisterId::register_dma0_tcd29_biter_elinkno,
  RegisterId::register_dma0_tcd30_saddr,
  RegisterId::register_dma0_tcd30_soff,
  RegisterId::register_dma0_tcd30_attr,
  RegisterId::register_dma0_tcd30_nbytes_mlno,
  RegisterId::register_dma0_tcd30_slast,
  RegisterId::register_dma0_tcd30_daddr,
  RegisterId::register_dma0_tcd30_doff,
  RegisterId::register_dma0_tcd30_citer_elinkno,
  RegisterId::register_dma0_tcd30_dlastsga,
  RegisterId::register_dma0_tcd30_csr,
  RegisterId::register_dma0_tcd30_biter_elinkno,
  RegisterId::register_dma0_tcd31_saddr,
  RegisterId::register_dma0_tcd31_soff,
  RegisterId::register_dma0_tcd31_attr,
  RegisterId::register_dma0_tcd31_nbytes_mlno,
  RegisterId::register_dma0_tcd31_slast,
  RegisterId::register_dma0_tcd31_daddr,
  RegisterId::register_dma0_tcd31_doff,
  RegisterId::register_dma0_tcd31_citer_elinkno,
  RegisterId::register_dma0_tcd31_dlastsga,
  RegisterId::register_dma0_tcd31_csr,
  RegisterId::register_dma0_tcd31_biter_elinkno,
  RegisterId::register_dmamux1_chcfg__s,
  RegisterId::register_enet_eir,
  RegisterId::register_enet_eimr,
  RegisterId::register_enet_rdar,
  RegisterId::register_enet_tdar,
  RegisterId::register_enet_ecr,
  RegisterId::register_enet_mmfr,
  RegisterId::register_enet_mscr,
  RegisterId::register_enet_mibc,
  RegisterId::register_enet_rcr,
  RegisterId::register_enet_tcr,
  RegisterId::register_enet_palr,
  RegisterId::register_enet_paur,
  RegisterId::register_enet_opd,
  RegisterId::register_enet_txic0,
  RegisterId::register_enet_rxic0,
  RegisterId::register_enet_iaur,
  RegisterId::register_enet_ialr,
  RegisterId::register_enet_gaur,
  RegisterId::register_enet_galr,
  RegisterId::register_enet_tfwr,
  RegisterId::register_enet_rdsr,
  RegisterId::register_enet_tdsr,
  RegisterId::register_enet_mrbr,
  RegisterId::register_enet_rsfl,
  RegisterId::register_enet_rsem,
  RegisterId::register_enet_raem,
  RegisterId::register_enet_rafl,
  RegisterId::register_enet_tsem,
  RegisterId::register_enet_taem,
  RegisterId::register_enet_tafl,
  RegisterId::register_enet_tipg,
  RegisterId::register_enet_ftrl,
  RegisterId::register_enet_tacc,
  RegisterId::register_enet_racc,
  RegisterId::register_enet_rmon_t_packets,
  RegisterId::register_enet_rmon_t_bc_pkt,
  RegisterId::register_enet_rmon_t_mc_pkt,
  RegisterId::register_enet_rmon_t_crc_align,
  RegisterId::register_enet_rmon_t_undersize,
  RegisterId::register_enet_rmon_t_oversize,
  RegisterId::register_enet_rmon_t_frag,
  RegisterId::register_enet_rmon_t_jab,
  RegisterId::register_enet_rmon_t_col,
  RegisterId::register_enet_rmon_t_p64,
  RegisterId::register_enet_rmon_t_p65to127,
  RegisterId::register_enet_rmon_t_p128to255,
  RegisterId::register_enet_rmon_t_p256to511,
  RegisterId::register_enet_rmon_t_p512to1023,
  RegisterId::register_enet_rmon_t_p1024to2047,
  RegisterId::register_enet_rmon_t_p_gte2048,
  RegisterId::register_enet_rmon_t_octets,
  RegisterId::register_enet_ieee_t_frame_ok,
  RegisterId::register_enet_ieee_t_1col,
  RegisterId::register_enet_ieee_t_mcol,
  RegisterId::register_enet_ieee_t_def,
  RegisterId::register_enet_ieee_t_lcol,
  RegisterId::register_enet_ieee_t_excol,
  RegisterId::register_enet_ieee_t_macerr,
  RegisterId::register_enet_ieee_t_cserr,
  RegisterId::register_enet_ieee_t_sqe,
  RegisterId::register_enet_ieee_t_fdxfc,
  RegisterId::register_enet_ieee_t_octets_ok,
  RegisterId::register_enet_rmon_r_packets,
  RegisterId::register_enet_rmon_r_bc_pkt,
  RegisterId::register_enet_rmon_r_mc_pkt,
  RegisterId::register_enet_rmon_r_crc_align,
  RegisterId::register_enet_rmon_r_undersize,
  RegisterId::register_enet_rmon_r_oversize,
  RegisterId::register_enet_rmon_r_frag,
  RegisterId::register_enet_rmon_r_jab,
  RegisterId::register_enet_rmon_r_p64,
  RegisterId::register_enet_rmon_r_p65to127,
  RegisterId::register_enet_rmon_r_p128to255,
  RegisterId::register_enet_rmon_r_p256to511,
  RegisterId::register_enet_rmon_r_p512to1023,
  RegisterId::register_enet_rmon_r_p1024to2047,
  RegisterId::register_enet_rmon_r_p_gte2048,
  RegisterId::register_enet_rmon_r_octets,
  RegisterId::register_enet_ieee_r_drop,
  RegisterId::register_enet_ieee_r_frame_ok,
  RegisterId::register_enet_ieee_r_crc,
  RegisterId::register_enet_ieee_r_align,
  RegisterId::register_enet_ieee_r_macerr,
  RegisterId::register_enet_ieee_r_fdxfc,
  RegisterId::register_enet_ieee_r_octets_ok,
  RegisterId::register_enet_atcr,
  RegisterId::register_enet_atvr,
  RegisterId::register_enet_atoff,
  RegisterId::register_enet_atper,
  RegisterId::register_enet_atcor,
  RegisterId::register_enet_atinc,
  RegisterId::register_enet_atstmp,
  RegisterId::register_enet_tgsr,
  RegisterId::register_enet_tcsr0,
  RegisterId::register_enet_tccr0,
  RegisterId::register_enet_tcsr1,
  RegisterId::register_enet_tccr1,
  RegisterId::register_enet_tcsr2,
  RegisterId::register_enet_tccr2,
  RegisterId::register_enet_tcsr3,
  RegisterId::register_enet_tccr3,
  RegisterId::register_enet2_eir,
  RegisterId::register_enet2_eimr,
  RegisterId::register_enet2_rdar,
  RegisterId::register_enet2_tdar,
  RegisterId::register_enet2_ecr,
  RegisterId::register_enet2_mmfr,
  RegisterId::register_enet2_mscr,
  RegisterId::register_enet2_mibc,
  RegisterId::register_enet2_rcr,
  RegisterId::register_enet2_tcr,
  RegisterId::register_enet2_palr,
  RegisterId::register_enet2_paur,
  RegisterId::register_enet2_opd,
  RegisterId::register_enet2_txic0,
  RegisterId::register_enet2_rxic0,
  RegisterId::register_enet2_iaur,
  RegisterId::register_enet2_ialr,
  RegisterId::register_enet2_gaur,
  RegisterId::register_enet2_galr,
  RegisterId::register_enet2_tfwr,
  RegisterId::register_enet2_rdsr,
  RegisterId::register_enet2_tdsr,
  RegisterId::register_enet2_mrbr,
  RegisterId::register_enet2_rsfl,
  RegisterId::register_enet2_rsem,
  RegisterId::register_enet2_raem,
  RegisterId::register_enet2_rafl,
  RegisterId::register_enet2_tsem,
  RegisterId::register_enet2_taem,
  RegisterId::register_enet2_tafl,
  RegisterId::register_enet2_tipg,
  RegisterId::register_enet2_ftrl,
  RegisterId::register_enet2_tacc,
  RegisterId::register_enet2_racc,
  RegisterId::register_enet2_rmon_t_packets,
  RegisterId::register_enet2_rmon_t_bc_pkt,
  RegisterId::register_enet2_rmon_t_mc_pkt,
  RegisterId::register_enet2_rmon_t_crc_align,
  RegisterId::register_enet2_rmon_t_undersize,
  RegisterId::register_enet2_rmon_t_oversize,
  RegisterId::register_enet2_rmon_t_frag,
  RegisterId::register_enet2_rmon_t_jab,
  RegisterId::register_enet2_rmon_t_col,
  RegisterId::register_enet2_rmon_t_p64,
  RegisterId::register_enet2_rmon_t_p65to127,
  RegisterId::register_enet2_rmon_t_p128to255,
  RegisterId::register_enet2_rmon_t_p256to511,
  RegisterId::register_enet2_rmon_t_p512to1023,
  RegisterId::register_enet2_rmon_t_p1024to2047,
  RegisterId::register_enet2_rmon_t_p_gte2048,
  RegisterId::register_enet2_rmon_t_octets,
  RegisterId::register_enet2_ieee_t_frame_ok,
  RegisterId::register_enet2_ieee_t_1col,
  RegisterId::register_enet2_ieee_t_mcol,
  RegisterId::register_enet2_ieee_t_def,
  RegisterId::register_enet2_ieee_t_lcol,
  RegisterId::register_enet2_ieee_t_excol,
  RegisterId::register_enet2_ieee_t_macerr,
  RegisterId::register_enet2_ieee_t_cserr,
  RegisterId::register_enet2_ieee_t_sqe,
  RegisterId::register_enet2_ieee_t_fdxfc,
  RegisterId::register_enet2_ieee_t_octets_ok,
  RegisterId::register_enet2_rmon_r_packets,
  RegisterId::register_enet2_rmon_r_bc_pkt,
  RegisterId::register_enet2_rmon_r_mc_pkt,
  RegisterId::register_enet2_rmon_r_crc_align,
  RegisterId::register_enet2_rmon_r_undersize,
  RegisterId::register_enet2_rmon_r_oversize,
  RegisterId::register_enet2_rmon_r_frag,
  RegisterId::register_enet2_rmon_r_jab,
  RegisterId::register_enet2_rmon_r_p64,
  RegisterId::register_enet2_rmon_r_p65to127,
  RegisterId::register_enet2_rmon_r_p128to255,
  RegisterId::register_enet2_rmon_r_p256to511,
  RegisterId::register_enet2_rmon_r_p512to1023,
  RegisterId::register_enet2_rmon_r_p1024to2047,
  RegisterId::register_enet2_rmon_r_p_gte2048,
  RegisterId::register_enet2_rmon_r_octets,
  RegisterId::register_enet2_ieee_r_drop,
  RegisterId::register_enet2_ieee_r_frame_ok,
  RegisterId::register_enet2_ieee_r_crc,
  RegisterId::register_enet2_ieee_r_align,
  RegisterId::register_enet2_ieee_r_macerr,
  RegisterId::register_enet2_ieee_r_fdxfc,
  RegisterId::register_enet2_ieee_r_octets_ok,
  RegisterId::register_enet2_atcr,
  RegisterId::register_enet2_atvr,
  RegisterId::register_enet2_atoff,
  RegisterId::register_enet2_atper,
  RegisterId::register_enet2_atcor,
  RegisterId::register_enet2_atinc,
  RegisterId::register_enet2_atstmp,
  RegisterId::register_enet2_tgsr,
  RegisterId::register_enet2_tcsr0,
  RegisterId::register_enet2_tccr0,
  RegisterId::register_enet2_tcsr1,
  RegisterId::register_enet2_tccr1,
  RegisterId::register_enet2_tcsr2,
  RegisterId::register_enet2_tccr2,
  RegisterId::register_enet2_tcsr3,
  RegisterId::register_enet2_tccr3,
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
  RegisterId::register_gpt1_cr,
  RegisterId::register_gpt1_pr,
  RegisterId::register_gpt1_sr,
  RegisterId::register_gpt1_ir,
  RegisterId::register_gpt1_ocr_s,
  RegisterId::register_gpt1_icr_s,
  RegisterId::register_gpt1_cnt,
  RegisterId::register_gpt2_cr,
  RegisterId::register_gpt2_pr,
  RegisterId::register_gpt2_sr,
  RegisterId::register_gpt2_ir,
  RegisterId::register_gpt2_ocr_s,
  RegisterId::register_gpt2_icr_s,
  RegisterId::register_gpt2_cnt,
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
  RegisterId::register_pit_mcr,
  RegisterId::register_pit_ltmr64h,
  RegisterId::register_pit_ltmr64l,
  RegisterId::register_pwm1_outen,
  RegisterId::register_pwm1_mask,
  RegisterId::register_pwm1_swcout,
  RegisterId::register_pwm1_dtsrcsel,
  RegisterId::register_pwm1_mctrl,
  RegisterId::register_pwm1_mctrl2,
  RegisterId::register_pwm1_fctrl0,
  RegisterId::register_pwm1_fsts0,
  RegisterId::register_pwm1_ffilt0,
  RegisterId::register_pwm1_ftst0,
  RegisterId::register_pwm1_fctrl20,
  RegisterId::register_pwm2_outen,
  RegisterId::register_pwm2_mask,
  RegisterId::register_pwm2_swcout,
  RegisterId::register_pwm2_dtsrcsel,
  RegisterId::register_pwm2_mctrl,
  RegisterId::register_pwm2_mctrl2,
  RegisterId::register_pwm2_fctrl0,
  RegisterId::register_pwm2_fsts0,
  RegisterId::register_pwm2_ffilt0,
  RegisterId::register_pwm2_ftst0,
  RegisterId::register_pwm2_fctrl20,
  RegisterId::register_pwm3_outen,
  RegisterId::register_pwm3_mask,
  RegisterId::register_pwm3_swcout,
  RegisterId::register_pwm3_dtsrcsel,
  RegisterId::register_pwm3_mctrl,
  RegisterId::register_pwm3_mctrl2,
  RegisterId::register_pwm3_fctrl0,
  RegisterId::register_pwm3_fsts0,
  RegisterId::register_pwm3_ffilt0,
  RegisterId::register_pwm3_ftst0,
  RegisterId::register_pwm3_fctrl20,
  RegisterId::register_pwm4_outen,
  RegisterId::register_pwm4_mask,
  RegisterId::register_pwm4_swcout,
  RegisterId::register_pwm4_dtsrcsel,
  RegisterId::register_pwm4_mctrl,
  RegisterId::register_pwm4_mctrl2,
  RegisterId::register_pwm4_fctrl0,
  RegisterId::register_pwm4_fsts0,
  RegisterId::register_pwm4_ffilt0,
  RegisterId::register_pwm4_ftst0,
  RegisterId::register_pwm4_fctrl20,
  RegisterId::register_rtwdog_cs,
  RegisterId::register_rtwdog_cnt,
  RegisterId::register_rtwdog_toval,
  RegisterId::register_rtwdog_win,
  RegisterId::register_usb1_id,
  RegisterId::register_usb1_hwgeneral,
  RegisterId::register_usb1_hwhost,
  RegisterId::register_usb1_hwdevice,
  RegisterId::register_usb1_hwtxbuf,
  RegisterId::register_usb1_hwrxbuf,
  RegisterId::register_usb1_gptimer0ld,
  RegisterId::register_usb1_gptimer0ctrl,
  RegisterId::register_usb1_gptimer1ld,
  RegisterId::register_usb1_gptimer1ctrl,
  RegisterId::register_usb1_sbuscfg,
  RegisterId::register_usb1_caplength,
  RegisterId::register_usb1_hciversion,
  RegisterId::register_usb1_hcsparams,
  RegisterId::register_usb1_hccparams,
  RegisterId::register_usb1_dciversion,
  RegisterId::register_usb1_dccparams,
  RegisterId::register_usb1_usbcmd,
  RegisterId::register_usb1_usbsts,
  RegisterId::register_usb1_usbintr,
  RegisterId::register_usb1_frindex,
  RegisterId::register_usb1_deviceaddr,
  RegisterId::register_usb1_asynclistaddr,
  RegisterId::register_usb1_burstsize,
  RegisterId::register_usb1_txfilltuning,
  RegisterId::register_usb1_endptnak,
  RegisterId::register_usb1_endptnaken,
  RegisterId::register_usb1_configflag,
  RegisterId::register_usb1_portsc1,
  RegisterId::register_usb1_otgsc,
  RegisterId::register_usb1_usbmode,
  RegisterId::register_usb1_endptsetupstat,
  RegisterId::register_usb1_endptprime,
  RegisterId::register_usb1_endptflush,
  RegisterId::register_usb1_endptstat,
  RegisterId::register_usb1_endptcomplete,
  RegisterId::register_usb1_endptctrl0,
  RegisterId::register_usb1_endptctrl1,
  RegisterId::register_usb1_endptctrl2,
  RegisterId::register_usb1_endptctrl3,
  RegisterId::register_usb1_endptctrl4,
  RegisterId::register_usb1_endptctrl5,
  RegisterId::register_usb1_endptctrl6,
  RegisterId::register_usb1_endptctrl7,
  RegisterId::register_usb2_id,
  RegisterId::register_usb2_hwgeneral,
  RegisterId::register_usb2_hwhost,
  RegisterId::register_usb2_hwdevice,
  RegisterId::register_usb2_hwtxbuf,
  RegisterId::register_usb2_hwrxbuf,
  RegisterId::register_usb2_gptimer0ld,
  RegisterId::register_usb2_gptimer0ctrl,
  RegisterId::register_usb2_gptimer1ld,
  RegisterId::register_usb2_gptimer1ctrl,
  RegisterId::register_usb2_sbuscfg,
  RegisterId::register_usb2_caplength,
  RegisterId::register_usb2_hciversion,
  RegisterId::register_usb2_hcsparams,
  RegisterId::register_usb2_hccparams,
  RegisterId::register_usb2_dciversion,
  RegisterId::register_usb2_dccparams,
  RegisterId::register_usb2_usbcmd,
  RegisterId::register_usb2_usbsts,
  RegisterId::register_usb2_usbintr,
  RegisterId::register_usb2_frindex,
  RegisterId::register_usb2_deviceaddr,
  RegisterId::register_usb2_asynclistaddr,
  RegisterId::register_usb2_burstsize,
  RegisterId::register_usb2_txfilltuning,
  RegisterId::register_usb2_endptnak,
  RegisterId::register_usb2_endptnaken,
  RegisterId::register_usb2_configflag,
  RegisterId::register_usb2_portsc1,
  RegisterId::register_usb2_otgsc,
  RegisterId::register_usb2_usbmode,
  RegisterId::register_usb2_endptsetupstat,
  RegisterId::register_usb2_endptprime,
  RegisterId::register_usb2_endptflush,
  RegisterId::register_usb2_endptstat,
  RegisterId::register_usb2_endptcomplete,
  RegisterId::register_usb2_endptctrl0,
  RegisterId::register_usb2_endptctrl1,
  RegisterId::register_usb2_endptctrl2,
  RegisterId::register_usb2_endptctrl3,
  RegisterId::register_usb2_endptctrl4,
  RegisterId::register_usb2_endptctrl5,
  RegisterId::register_usb2_endptctrl6,
  RegisterId::register_usb2_endptctrl7,
  RegisterId::register_wdog1_wcr,
  RegisterId::register_wdog1_wsr,
  RegisterId::register_wdog1_wrsr,
  RegisterId::register_wdog1_wicr,
  RegisterId::register_wdog1_wmcr,
  RegisterId::register_wdog2_wcr,
  RegisterId::register_wdog2_wsr,
  RegisterId::register_wdog2_wrsr,
  RegisterId::register_wdog2_wicr,
  RegisterId::register_wdog2_wmcr,
}};
}
}
}
}
}
}
