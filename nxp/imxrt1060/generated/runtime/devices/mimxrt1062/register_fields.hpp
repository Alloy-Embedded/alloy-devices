#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "registers.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1062 {
enum class FieldId : std::uint16_t {
  none,
  field_ccm_cbcmr_lpspi_clk_sel,
  field_ccm_ccgr0_cg6,
  field_ccm_ccgr0_cg14,
  field_ccm_ccgr0_cg15,
  field_ccm_ccgr1_cg0,
  field_ccm_ccgr1_cg1,
  field_ccm_ccgr1_cg2,
  field_ccm_ccgr1_cg3,
  field_ccm_ccgr1_cg12,
  field_ccm_ccgr1_cg13,
  field_ccm_ccgr1_cg15,
  field_ccm_ccgr2_cg13,
  field_ccm_ccgr3_cg1,
  field_ccm_ccgr3_cg3,
  field_ccm_ccgr3_cg13,
  field_ccm_ccgr5_cg12,
  field_ccm_ccgr5_cg13,
  field_ccm_ccgr6_cg7,
  field_ccm_cscdr1_uart_clk_sel,
  field_gpio1_dr_dr,
  field_gpio1_dr_clear_dr_clear,
  field_gpio1_dr_set_dr_set,
  field_gpio1_dr_toggle_dr_toggle,
  field_gpio1_edge_sel_gpio_edge_sel,
  field_gpio1_gdir_gdir,
  field_gpio1_icr1_icr0,
  field_gpio1_icr1_icr1,
  field_gpio1_icr1_icr2,
  field_gpio1_icr1_icr3,
  field_gpio1_icr1_icr4,
  field_gpio1_icr1_icr5,
  field_gpio1_icr1_icr6,
  field_gpio1_icr1_icr7,
  field_gpio1_icr1_icr8,
  field_gpio1_icr1_icr9,
  field_gpio1_icr1_icr10,
  field_gpio1_icr1_icr11,
  field_gpio1_icr1_icr12,
  field_gpio1_icr1_icr13,
  field_gpio1_icr1_icr14,
  field_gpio1_icr1_icr15,
  field_gpio1_icr2_icr16,
  field_gpio1_icr2_icr17,
  field_gpio1_icr2_icr18,
  field_gpio1_icr2_icr19,
  field_gpio1_icr2_icr20,
  field_gpio1_icr2_icr21,
  field_gpio1_icr2_icr22,
  field_gpio1_icr2_icr23,
  field_gpio1_icr2_icr24,
  field_gpio1_icr2_icr25,
  field_gpio1_icr2_icr26,
  field_gpio1_icr2_icr27,
  field_gpio1_icr2_icr28,
  field_gpio1_icr2_icr29,
  field_gpio1_icr2_icr30,
  field_gpio1_icr2_icr31,
  field_gpio1_imr_imr,
  field_gpio1_isr_isr,
  field_gpio1_psr_psr,
  field_gpio10_dr_dr,
  field_gpio10_dr_clear_dr_clear,
  field_gpio10_dr_set_dr_set,
  field_gpio10_dr_toggle_dr_toggle,
  field_gpio10_edge_sel_gpio_edge_sel,
  field_gpio10_gdir_gdir,
  field_gpio10_icr1_icr0,
  field_gpio10_icr1_icr1,
  field_gpio10_icr1_icr2,
  field_gpio10_icr1_icr3,
  field_gpio10_icr1_icr4,
  field_gpio10_icr1_icr5,
  field_gpio10_icr1_icr6,
  field_gpio10_icr1_icr7,
  field_gpio10_icr1_icr8,
  field_gpio10_icr1_icr9,
  field_gpio10_icr1_icr10,
  field_gpio10_icr1_icr11,
  field_gpio10_icr1_icr12,
  field_gpio10_icr1_icr13,
  field_gpio10_icr1_icr14,
  field_gpio10_icr1_icr15,
  field_gpio10_icr2_icr16,
  field_gpio10_icr2_icr17,
  field_gpio10_icr2_icr18,
  field_gpio10_icr2_icr19,
  field_gpio10_icr2_icr20,
  field_gpio10_icr2_icr21,
  field_gpio10_icr2_icr22,
  field_gpio10_icr2_icr23,
  field_gpio10_icr2_icr24,
  field_gpio10_icr2_icr25,
  field_gpio10_icr2_icr26,
  field_gpio10_icr2_icr27,
  field_gpio10_icr2_icr28,
  field_gpio10_icr2_icr29,
  field_gpio10_icr2_icr30,
  field_gpio10_icr2_icr31,
  field_gpio10_imr_imr,
  field_gpio10_isr_isr,
  field_gpio10_psr_psr,
  field_gpio2_dr_dr,
  field_gpio2_dr_clear_dr_clear,
  field_gpio2_dr_set_dr_set,
  field_gpio2_dr_toggle_dr_toggle,
  field_gpio2_edge_sel_gpio_edge_sel,
  field_gpio2_gdir_gdir,
  field_gpio2_icr1_icr0,
  field_gpio2_icr1_icr1,
  field_gpio2_icr1_icr2,
  field_gpio2_icr1_icr3,
  field_gpio2_icr1_icr4,
  field_gpio2_icr1_icr5,
  field_gpio2_icr1_icr6,
  field_gpio2_icr1_icr7,
  field_gpio2_icr1_icr8,
  field_gpio2_icr1_icr9,
  field_gpio2_icr1_icr10,
  field_gpio2_icr1_icr11,
  field_gpio2_icr1_icr12,
  field_gpio2_icr1_icr13,
  field_gpio2_icr1_icr14,
  field_gpio2_icr1_icr15,
  field_gpio2_icr2_icr16,
  field_gpio2_icr2_icr17,
  field_gpio2_icr2_icr18,
  field_gpio2_icr2_icr19,
  field_gpio2_icr2_icr20,
  field_gpio2_icr2_icr21,
  field_gpio2_icr2_icr22,
  field_gpio2_icr2_icr23,
  field_gpio2_icr2_icr24,
  field_gpio2_icr2_icr25,
  field_gpio2_icr2_icr26,
  field_gpio2_icr2_icr27,
  field_gpio2_icr2_icr28,
  field_gpio2_icr2_icr29,
  field_gpio2_icr2_icr30,
  field_gpio2_icr2_icr31,
  field_gpio2_imr_imr,
  field_gpio2_isr_isr,
  field_gpio2_psr_psr,
  field_gpio3_dr_dr,
  field_gpio3_dr_clear_dr_clear,
  field_gpio3_dr_set_dr_set,
  field_gpio3_dr_toggle_dr_toggle,
  field_gpio3_edge_sel_gpio_edge_sel,
  field_gpio3_gdir_gdir,
  field_gpio3_icr1_icr0,
  field_gpio3_icr1_icr1,
  field_gpio3_icr1_icr2,
  field_gpio3_icr1_icr3,
  field_gpio3_icr1_icr4,
  field_gpio3_icr1_icr5,
  field_gpio3_icr1_icr6,
  field_gpio3_icr1_icr7,
  field_gpio3_icr1_icr8,
  field_gpio3_icr1_icr9,
  field_gpio3_icr1_icr10,
  field_gpio3_icr1_icr11,
  field_gpio3_icr1_icr12,
  field_gpio3_icr1_icr13,
  field_gpio3_icr1_icr14,
  field_gpio3_icr1_icr15,
  field_gpio3_icr2_icr16,
  field_gpio3_icr2_icr17,
  field_gpio3_icr2_icr18,
  field_gpio3_icr2_icr19,
  field_gpio3_icr2_icr20,
  field_gpio3_icr2_icr21,
  field_gpio3_icr2_icr22,
  field_gpio3_icr2_icr23,
  field_gpio3_icr2_icr24,
  field_gpio3_icr2_icr25,
  field_gpio3_icr2_icr26,
  field_gpio3_icr2_icr27,
  field_gpio3_icr2_icr28,
  field_gpio3_icr2_icr29,
  field_gpio3_icr2_icr30,
  field_gpio3_icr2_icr31,
  field_gpio3_imr_imr,
  field_gpio3_isr_isr,
  field_gpio3_psr_psr,
  field_gpio4_dr_dr,
  field_gpio4_dr_clear_dr_clear,
  field_gpio4_dr_set_dr_set,
  field_gpio4_dr_toggle_dr_toggle,
  field_gpio4_edge_sel_gpio_edge_sel,
  field_gpio4_gdir_gdir,
  field_gpio4_icr1_icr0,
  field_gpio4_icr1_icr1,
  field_gpio4_icr1_icr2,
  field_gpio4_icr1_icr3,
  field_gpio4_icr1_icr4,
  field_gpio4_icr1_icr5,
  field_gpio4_icr1_icr6,
  field_gpio4_icr1_icr7,
  field_gpio4_icr1_icr8,
  field_gpio4_icr1_icr9,
  field_gpio4_icr1_icr10,
  field_gpio4_icr1_icr11,
  field_gpio4_icr1_icr12,
  field_gpio4_icr1_icr13,
  field_gpio4_icr1_icr14,
  field_gpio4_icr1_icr15,
  field_gpio4_icr2_icr16,
  field_gpio4_icr2_icr17,
  field_gpio4_icr2_icr18,
  field_gpio4_icr2_icr19,
  field_gpio4_icr2_icr20,
  field_gpio4_icr2_icr21,
  field_gpio4_icr2_icr22,
  field_gpio4_icr2_icr23,
  field_gpio4_icr2_icr24,
  field_gpio4_icr2_icr25,
  field_gpio4_icr2_icr26,
  field_gpio4_icr2_icr27,
  field_gpio4_icr2_icr28,
  field_gpio4_icr2_icr29,
  field_gpio4_icr2_icr30,
  field_gpio4_icr2_icr31,
  field_gpio4_imr_imr,
  field_gpio4_isr_isr,
  field_gpio4_psr_psr,
  field_gpio5_dr_dr,
  field_gpio5_dr_clear_dr_clear,
  field_gpio5_dr_set_dr_set,
  field_gpio5_dr_toggle_dr_toggle,
  field_gpio5_edge_sel_gpio_edge_sel,
  field_gpio5_gdir_gdir,
  field_gpio5_icr1_icr0,
  field_gpio5_icr1_icr1,
  field_gpio5_icr1_icr2,
  field_gpio5_icr1_icr3,
  field_gpio5_icr1_icr4,
  field_gpio5_icr1_icr5,
  field_gpio5_icr1_icr6,
  field_gpio5_icr1_icr7,
  field_gpio5_icr1_icr8,
  field_gpio5_icr1_icr9,
  field_gpio5_icr1_icr10,
  field_gpio5_icr1_icr11,
  field_gpio5_icr1_icr12,
  field_gpio5_icr1_icr13,
  field_gpio5_icr1_icr14,
  field_gpio5_icr1_icr15,
  field_gpio5_icr2_icr16,
  field_gpio5_icr2_icr17,
  field_gpio5_icr2_icr18,
  field_gpio5_icr2_icr19,
  field_gpio5_icr2_icr20,
  field_gpio5_icr2_icr21,
  field_gpio5_icr2_icr22,
  field_gpio5_icr2_icr23,
  field_gpio5_icr2_icr24,
  field_gpio5_icr2_icr25,
  field_gpio5_icr2_icr26,
  field_gpio5_icr2_icr27,
  field_gpio5_icr2_icr28,
  field_gpio5_icr2_icr29,
  field_gpio5_icr2_icr30,
  field_gpio5_icr2_icr31,
  field_gpio5_imr_imr,
  field_gpio5_isr_isr,
  field_gpio5_psr_psr,
  field_gpio6_dr_dr,
  field_gpio6_dr_clear_dr_clear,
  field_gpio6_dr_set_dr_set,
  field_gpio6_dr_toggle_dr_toggle,
  field_gpio6_edge_sel_gpio_edge_sel,
  field_gpio6_gdir_gdir,
  field_gpio6_icr1_icr0,
  field_gpio6_icr1_icr1,
  field_gpio6_icr1_icr2,
  field_gpio6_icr1_icr3,
  field_gpio6_icr1_icr4,
  field_gpio6_icr1_icr5,
  field_gpio6_icr1_icr6,
  field_gpio6_icr1_icr7,
  field_gpio6_icr1_icr8,
  field_gpio6_icr1_icr9,
  field_gpio6_icr1_icr10,
  field_gpio6_icr1_icr11,
  field_gpio6_icr1_icr12,
  field_gpio6_icr1_icr13,
  field_gpio6_icr1_icr14,
  field_gpio6_icr1_icr15,
  field_gpio6_icr2_icr16,
  field_gpio6_icr2_icr17,
  field_gpio6_icr2_icr18,
  field_gpio6_icr2_icr19,
  field_gpio6_icr2_icr20,
  field_gpio6_icr2_icr21,
  field_gpio6_icr2_icr22,
  field_gpio6_icr2_icr23,
  field_gpio6_icr2_icr24,
  field_gpio6_icr2_icr25,
  field_gpio6_icr2_icr26,
  field_gpio6_icr2_icr27,
  field_gpio6_icr2_icr28,
  field_gpio6_icr2_icr29,
  field_gpio6_icr2_icr30,
  field_gpio6_icr2_icr31,
  field_gpio6_imr_imr,
  field_gpio6_isr_isr,
  field_gpio6_psr_psr,
  field_gpio7_dr_dr,
  field_gpio7_dr_clear_dr_clear,
  field_gpio7_dr_set_dr_set,
  field_gpio7_dr_toggle_dr_toggle,
  field_gpio7_edge_sel_gpio_edge_sel,
  field_gpio7_gdir_gdir,
  field_gpio7_icr1_icr0,
  field_gpio7_icr1_icr1,
  field_gpio7_icr1_icr2,
  field_gpio7_icr1_icr3,
  field_gpio7_icr1_icr4,
  field_gpio7_icr1_icr5,
  field_gpio7_icr1_icr6,
  field_gpio7_icr1_icr7,
  field_gpio7_icr1_icr8,
  field_gpio7_icr1_icr9,
  field_gpio7_icr1_icr10,
  field_gpio7_icr1_icr11,
  field_gpio7_icr1_icr12,
  field_gpio7_icr1_icr13,
  field_gpio7_icr1_icr14,
  field_gpio7_icr1_icr15,
  field_gpio7_icr2_icr16,
  field_gpio7_icr2_icr17,
  field_gpio7_icr2_icr18,
  field_gpio7_icr2_icr19,
  field_gpio7_icr2_icr20,
  field_gpio7_icr2_icr21,
  field_gpio7_icr2_icr22,
  field_gpio7_icr2_icr23,
  field_gpio7_icr2_icr24,
  field_gpio7_icr2_icr25,
  field_gpio7_icr2_icr26,
  field_gpio7_icr2_icr27,
  field_gpio7_icr2_icr28,
  field_gpio7_icr2_icr29,
  field_gpio7_icr2_icr30,
  field_gpio7_icr2_icr31,
  field_gpio7_imr_imr,
  field_gpio7_isr_isr,
  field_gpio7_psr_psr,
  field_gpio8_dr_dr,
  field_gpio8_dr_clear_dr_clear,
  field_gpio8_dr_set_dr_set,
  field_gpio8_dr_toggle_dr_toggle,
  field_gpio8_edge_sel_gpio_edge_sel,
  field_gpio8_gdir_gdir,
  field_gpio8_icr1_icr0,
  field_gpio8_icr1_icr1,
  field_gpio8_icr1_icr2,
  field_gpio8_icr1_icr3,
  field_gpio8_icr1_icr4,
  field_gpio8_icr1_icr5,
  field_gpio8_icr1_icr6,
  field_gpio8_icr1_icr7,
  field_gpio8_icr1_icr8,
  field_gpio8_icr1_icr9,
  field_gpio8_icr1_icr10,
  field_gpio8_icr1_icr11,
  field_gpio8_icr1_icr12,
  field_gpio8_icr1_icr13,
  field_gpio8_icr1_icr14,
  field_gpio8_icr1_icr15,
  field_gpio8_icr2_icr16,
  field_gpio8_icr2_icr17,
  field_gpio8_icr2_icr18,
  field_gpio8_icr2_icr19,
  field_gpio8_icr2_icr20,
  field_gpio8_icr2_icr21,
  field_gpio8_icr2_icr22,
  field_gpio8_icr2_icr23,
  field_gpio8_icr2_icr24,
  field_gpio8_icr2_icr25,
  field_gpio8_icr2_icr26,
  field_gpio8_icr2_icr27,
  field_gpio8_icr2_icr28,
  field_gpio8_icr2_icr29,
  field_gpio8_icr2_icr30,
  field_gpio8_icr2_icr31,
  field_gpio8_imr_imr,
  field_gpio8_isr_isr,
  field_gpio8_psr_psr,
  field_gpio9_dr_dr,
  field_gpio9_dr_clear_dr_clear,
  field_gpio9_dr_set_dr_set,
  field_gpio9_dr_toggle_dr_toggle,
  field_gpio9_edge_sel_gpio_edge_sel,
  field_gpio9_gdir_gdir,
  field_gpio9_icr1_icr0,
  field_gpio9_icr1_icr1,
  field_gpio9_icr1_icr2,
  field_gpio9_icr1_icr3,
  field_gpio9_icr1_icr4,
  field_gpio9_icr1_icr5,
  field_gpio9_icr1_icr6,
  field_gpio9_icr1_icr7,
  field_gpio9_icr1_icr8,
  field_gpio9_icr1_icr9,
  field_gpio9_icr1_icr10,
  field_gpio9_icr1_icr11,
  field_gpio9_icr1_icr12,
  field_gpio9_icr1_icr13,
  field_gpio9_icr1_icr14,
  field_gpio9_icr1_icr15,
  field_gpio9_icr2_icr16,
  field_gpio9_icr2_icr17,
  field_gpio9_icr2_icr18,
  field_gpio9_icr2_icr19,
  field_gpio9_icr2_icr20,
  field_gpio9_icr2_icr21,
  field_gpio9_icr2_icr22,
  field_gpio9_icr2_icr23,
  field_gpio9_icr2_icr24,
  field_gpio9_icr2_icr25,
  field_gpio9_icr2_icr26,
  field_gpio9_icr2_icr27,
  field_gpio9_icr2_icr28,
  field_gpio9_icr2_icr29,
  field_gpio9_icr2_icr30,
  field_gpio9_icr2_icr31,
  field_gpio9_imr_imr,
  field_gpio9_isr_isr,
  field_gpio9_psr_psr,
  field_lpspi1_ccr_sckdiv,
  field_lpspi1_ccr_dbt,
  field_lpspi1_ccr_pcssck,
  field_lpspi1_ccr_sckpcs,
  field_lpspi1_cfgr0_hren,
  field_lpspi1_cfgr0_hrpol,
  field_lpspi1_cfgr0_hrsel,
  field_lpspi1_cfgr0_cirfifo,
  field_lpspi1_cfgr0_rdmo,
  field_lpspi1_cfgr1_master,
  field_lpspi1_cfgr1_sample,
  field_lpspi1_cfgr1_autopcs,
  field_lpspi1_cfgr1_nostall,
  field_lpspi1_cfgr1_pcspol,
  field_lpspi1_cfgr1_matcfg,
  field_lpspi1_cfgr1_pincfg,
  field_lpspi1_cfgr1_outcfg,
  field_lpspi1_cfgr1_pcscfg,
  field_lpspi1_cr_men,
  field_lpspi1_cr_rst,
  field_lpspi1_cr_dozen,
  field_lpspi1_cr_dbgen,
  field_lpspi1_cr_rtf,
  field_lpspi1_cr_rrf,
  field_lpspi1_der_tdde,
  field_lpspi1_der_rdde,
  field_lpspi1_dmr0_match0,
  field_lpspi1_dmr1_match1,
  field_lpspi1_fcr_txwater,
  field_lpspi1_fcr_rxwater,
  field_lpspi1_fsr_txcount,
  field_lpspi1_fsr_rxcount,
  field_lpspi1_ier_tdie,
  field_lpspi1_ier_rdie,
  field_lpspi1_ier_wcie,
  field_lpspi1_ier_fcie,
  field_lpspi1_ier_tcie,
  field_lpspi1_ier_teie,
  field_lpspi1_ier_reie,
  field_lpspi1_ier_dmie,
  field_lpspi1_param_txfifo,
  field_lpspi1_param_rxfifo,
  field_lpspi1_param_pcsnum,
  field_lpspi1_rdr_data,
  field_lpspi1_rsr_sof,
  field_lpspi1_rsr_rxempty,
  field_lpspi1_sr_tdf,
  field_lpspi1_sr_rdf,
  field_lpspi1_sr_wcf,
  field_lpspi1_sr_fcf,
  field_lpspi1_sr_tcf,
  field_lpspi1_sr_tef,
  field_lpspi1_sr_ref,
  field_lpspi1_sr_dmf,
  field_lpspi1_sr_mbf,
  field_lpspi1_tcr_framesz,
  field_lpspi1_tcr_width,
  field_lpspi1_tcr_txmsk,
  field_lpspi1_tcr_rxmsk,
  field_lpspi1_tcr_contc,
  field_lpspi1_tcr_cont,
  field_lpspi1_tcr_bysw,
  field_lpspi1_tcr_lsbf,
  field_lpspi1_tcr_pcs,
  field_lpspi1_tcr_prescale,
  field_lpspi1_tcr_cpha,
  field_lpspi1_tcr_cpol,
  field_lpspi1_tdr_data,
  field_lpspi1_verid_feature,
  field_lpspi1_verid_minor,
  field_lpspi1_verid_major,
  field_lpspi2_ccr_sckdiv,
  field_lpspi2_ccr_dbt,
  field_lpspi2_ccr_pcssck,
  field_lpspi2_ccr_sckpcs,
  field_lpspi2_cfgr0_hren,
  field_lpspi2_cfgr0_hrpol,
  field_lpspi2_cfgr0_hrsel,
  field_lpspi2_cfgr0_cirfifo,
  field_lpspi2_cfgr0_rdmo,
  field_lpspi2_cfgr1_master,
  field_lpspi2_cfgr1_sample,
  field_lpspi2_cfgr1_autopcs,
  field_lpspi2_cfgr1_nostall,
  field_lpspi2_cfgr1_pcspol,
  field_lpspi2_cfgr1_matcfg,
  field_lpspi2_cfgr1_pincfg,
  field_lpspi2_cfgr1_outcfg,
  field_lpspi2_cfgr1_pcscfg,
  field_lpspi2_cr_men,
  field_lpspi2_cr_rst,
  field_lpspi2_cr_dozen,
  field_lpspi2_cr_dbgen,
  field_lpspi2_cr_rtf,
  field_lpspi2_cr_rrf,
  field_lpspi2_der_tdde,
  field_lpspi2_der_rdde,
  field_lpspi2_dmr0_match0,
  field_lpspi2_dmr1_match1,
  field_lpspi2_fcr_txwater,
  field_lpspi2_fcr_rxwater,
  field_lpspi2_fsr_txcount,
  field_lpspi2_fsr_rxcount,
  field_lpspi2_ier_tdie,
  field_lpspi2_ier_rdie,
  field_lpspi2_ier_wcie,
  field_lpspi2_ier_fcie,
  field_lpspi2_ier_tcie,
  field_lpspi2_ier_teie,
  field_lpspi2_ier_reie,
  field_lpspi2_ier_dmie,
  field_lpspi2_param_txfifo,
  field_lpspi2_param_rxfifo,
  field_lpspi2_param_pcsnum,
  field_lpspi2_rdr_data,
  field_lpspi2_rsr_sof,
  field_lpspi2_rsr_rxempty,
  field_lpspi2_sr_tdf,
  field_lpspi2_sr_rdf,
  field_lpspi2_sr_wcf,
  field_lpspi2_sr_fcf,
  field_lpspi2_sr_tcf,
  field_lpspi2_sr_tef,
  field_lpspi2_sr_ref,
  field_lpspi2_sr_dmf,
  field_lpspi2_sr_mbf,
  field_lpspi2_tcr_framesz,
  field_lpspi2_tcr_width,
  field_lpspi2_tcr_txmsk,
  field_lpspi2_tcr_rxmsk,
  field_lpspi2_tcr_contc,
  field_lpspi2_tcr_cont,
  field_lpspi2_tcr_bysw,
  field_lpspi2_tcr_lsbf,
  field_lpspi2_tcr_pcs,
  field_lpspi2_tcr_prescale,
  field_lpspi2_tcr_cpha,
  field_lpspi2_tcr_cpol,
  field_lpspi2_tdr_data,
  field_lpspi2_verid_feature,
  field_lpspi2_verid_minor,
  field_lpspi2_verid_major,
  field_lpspi3_ccr_sckdiv,
  field_lpspi3_ccr_dbt,
  field_lpspi3_ccr_pcssck,
  field_lpspi3_ccr_sckpcs,
  field_lpspi3_cfgr0_hren,
  field_lpspi3_cfgr0_hrpol,
  field_lpspi3_cfgr0_hrsel,
  field_lpspi3_cfgr0_cirfifo,
  field_lpspi3_cfgr0_rdmo,
  field_lpspi3_cfgr1_master,
  field_lpspi3_cfgr1_sample,
  field_lpspi3_cfgr1_autopcs,
  field_lpspi3_cfgr1_nostall,
  field_lpspi3_cfgr1_pcspol,
  field_lpspi3_cfgr1_matcfg,
  field_lpspi3_cfgr1_pincfg,
  field_lpspi3_cfgr1_outcfg,
  field_lpspi3_cfgr1_pcscfg,
  field_lpspi3_cr_men,
  field_lpspi3_cr_rst,
  field_lpspi3_cr_dozen,
  field_lpspi3_cr_dbgen,
  field_lpspi3_cr_rtf,
  field_lpspi3_cr_rrf,
  field_lpspi3_der_tdde,
  field_lpspi3_der_rdde,
  field_lpspi3_dmr0_match0,
  field_lpspi3_dmr1_match1,
  field_lpspi3_fcr_txwater,
  field_lpspi3_fcr_rxwater,
  field_lpspi3_fsr_txcount,
  field_lpspi3_fsr_rxcount,
  field_lpspi3_ier_tdie,
  field_lpspi3_ier_rdie,
  field_lpspi3_ier_wcie,
  field_lpspi3_ier_fcie,
  field_lpspi3_ier_tcie,
  field_lpspi3_ier_teie,
  field_lpspi3_ier_reie,
  field_lpspi3_ier_dmie,
  field_lpspi3_param_txfifo,
  field_lpspi3_param_rxfifo,
  field_lpspi3_param_pcsnum,
  field_lpspi3_rdr_data,
  field_lpspi3_rsr_sof,
  field_lpspi3_rsr_rxempty,
  field_lpspi3_sr_tdf,
  field_lpspi3_sr_rdf,
  field_lpspi3_sr_wcf,
  field_lpspi3_sr_fcf,
  field_lpspi3_sr_tcf,
  field_lpspi3_sr_tef,
  field_lpspi3_sr_ref,
  field_lpspi3_sr_dmf,
  field_lpspi3_sr_mbf,
  field_lpspi3_tcr_framesz,
  field_lpspi3_tcr_width,
  field_lpspi3_tcr_txmsk,
  field_lpspi3_tcr_rxmsk,
  field_lpspi3_tcr_contc,
  field_lpspi3_tcr_cont,
  field_lpspi3_tcr_bysw,
  field_lpspi3_tcr_lsbf,
  field_lpspi3_tcr_pcs,
  field_lpspi3_tcr_prescale,
  field_lpspi3_tcr_cpha,
  field_lpspi3_tcr_cpol,
  field_lpspi3_tdr_data,
  field_lpspi3_verid_feature,
  field_lpspi3_verid_minor,
  field_lpspi3_verid_major,
  field_lpspi4_ccr_sckdiv,
  field_lpspi4_ccr_dbt,
  field_lpspi4_ccr_pcssck,
  field_lpspi4_ccr_sckpcs,
  field_lpspi4_cfgr0_hren,
  field_lpspi4_cfgr0_hrpol,
  field_lpspi4_cfgr0_hrsel,
  field_lpspi4_cfgr0_cirfifo,
  field_lpspi4_cfgr0_rdmo,
  field_lpspi4_cfgr1_master,
  field_lpspi4_cfgr1_sample,
  field_lpspi4_cfgr1_autopcs,
  field_lpspi4_cfgr1_nostall,
  field_lpspi4_cfgr1_pcspol,
  field_lpspi4_cfgr1_matcfg,
  field_lpspi4_cfgr1_pincfg,
  field_lpspi4_cfgr1_outcfg,
  field_lpspi4_cfgr1_pcscfg,
  field_lpspi4_cr_men,
  field_lpspi4_cr_rst,
  field_lpspi4_cr_dozen,
  field_lpspi4_cr_dbgen,
  field_lpspi4_cr_rtf,
  field_lpspi4_cr_rrf,
  field_lpspi4_der_tdde,
  field_lpspi4_der_rdde,
  field_lpspi4_dmr0_match0,
  field_lpspi4_dmr1_match1,
  field_lpspi4_fcr_txwater,
  field_lpspi4_fcr_rxwater,
  field_lpspi4_fsr_txcount,
  field_lpspi4_fsr_rxcount,
  field_lpspi4_ier_tdie,
  field_lpspi4_ier_rdie,
  field_lpspi4_ier_wcie,
  field_lpspi4_ier_fcie,
  field_lpspi4_ier_tcie,
  field_lpspi4_ier_teie,
  field_lpspi4_ier_reie,
  field_lpspi4_ier_dmie,
  field_lpspi4_param_txfifo,
  field_lpspi4_param_rxfifo,
  field_lpspi4_param_pcsnum,
  field_lpspi4_rdr_data,
  field_lpspi4_rsr_sof,
  field_lpspi4_rsr_rxempty,
  field_lpspi4_sr_tdf,
  field_lpspi4_sr_rdf,
  field_lpspi4_sr_wcf,
  field_lpspi4_sr_fcf,
  field_lpspi4_sr_tcf,
  field_lpspi4_sr_tef,
  field_lpspi4_sr_ref,
  field_lpspi4_sr_dmf,
  field_lpspi4_sr_mbf,
  field_lpspi4_tcr_framesz,
  field_lpspi4_tcr_width,
  field_lpspi4_tcr_txmsk,
  field_lpspi4_tcr_rxmsk,
  field_lpspi4_tcr_contc,
  field_lpspi4_tcr_cont,
  field_lpspi4_tcr_bysw,
  field_lpspi4_tcr_lsbf,
  field_lpspi4_tcr_pcs,
  field_lpspi4_tcr_prescale,
  field_lpspi4_tcr_cpha,
  field_lpspi4_tcr_cpol,
  field_lpspi4_tdr_data,
  field_lpspi4_verid_feature,
  field_lpspi4_verid_minor,
  field_lpspi4_verid_major,
  field_lpuart1_baud_sbr,
  field_lpuart1_baud_sbns,
  field_lpuart1_baud_rxedgie,
  field_lpuart1_baud_lbkdie,
  field_lpuart1_baud_resyncdis,
  field_lpuart1_baud_bothedge,
  field_lpuart1_baud_matcfg,
  field_lpuart1_baud_rdmae,
  field_lpuart1_baud_tdmae,
  field_lpuart1_baud_osr,
  field_lpuart1_baud_m10,
  field_lpuart1_baud_maen2,
  field_lpuart1_baud_maen1,
  field_lpuart1_ctrl_pt,
  field_lpuart1_ctrl_pe,
  field_lpuart1_ctrl_ilt,
  field_lpuart1_ctrl_wake,
  field_lpuart1_ctrl_m,
  field_lpuart1_ctrl_rsrc,
  field_lpuart1_ctrl_dozeen,
  field_lpuart1_ctrl_loops,
  field_lpuart1_ctrl_idlecfg,
  field_lpuart1_ctrl_m7,
  field_lpuart1_ctrl_ma2ie,
  field_lpuart1_ctrl_ma1ie,
  field_lpuart1_ctrl_sbk,
  field_lpuart1_ctrl_rwu,
  field_lpuart1_ctrl_re,
  field_lpuart1_ctrl_te,
  field_lpuart1_ctrl_ilie,
  field_lpuart1_ctrl_rie,
  field_lpuart1_ctrl_tcie,
  field_lpuart1_ctrl_tie,
  field_lpuart1_ctrl_peie,
  field_lpuart1_ctrl_feie,
  field_lpuart1_ctrl_neie,
  field_lpuart1_ctrl_orie,
  field_lpuart1_ctrl_txinv,
  field_lpuart1_ctrl_txdir,
  field_lpuart1_ctrl_r9t8,
  field_lpuart1_ctrl_r8t9,
  field_lpuart1_data_r0t0,
  field_lpuart1_data_r1t1,
  field_lpuart1_data_r2t2,
  field_lpuart1_data_r3t3,
  field_lpuart1_data_r4t4,
  field_lpuart1_data_r5t5,
  field_lpuart1_data_r6t6,
  field_lpuart1_data_r7t7,
  field_lpuart1_data_r8t8,
  field_lpuart1_data_r9t9,
  field_lpuart1_data_idline,
  field_lpuart1_data_rxempt,
  field_lpuart1_data_fretsc,
  field_lpuart1_data_paritye,
  field_lpuart1_data_noisy,
  field_lpuart1_fifo_rxfifosize,
  field_lpuart1_fifo_rxfe,
  field_lpuart1_fifo_txfifosize,
  field_lpuart1_fifo_txfe,
  field_lpuart1_fifo_rxufe,
  field_lpuart1_fifo_txofe,
  field_lpuart1_fifo_rxiden,
  field_lpuart1_fifo_rxflush,
  field_lpuart1_fifo_txflush,
  field_lpuart1_fifo_rxuf,
  field_lpuart1_fifo_txof,
  field_lpuart1_fifo_rxempt,
  field_lpuart1_fifo_txempt,
  field_lpuart1_global_rst,
  field_lpuart1_match_ma1,
  field_lpuart1_match_ma2,
  field_lpuart1_modir_txctse,
  field_lpuart1_modir_txrtse,
  field_lpuart1_modir_txrtspol,
  field_lpuart1_modir_rxrtse,
  field_lpuart1_modir_txctsc,
  field_lpuart1_modir_txctssrc,
  field_lpuart1_modir_rtswater,
  field_lpuart1_modir_tnp,
  field_lpuart1_modir_iren,
  field_lpuart1_param_txfifo,
  field_lpuart1_param_rxfifo,
  field_lpuart1_pincfg_trgsel,
  field_lpuart1_stat_ma2f,
  field_lpuart1_stat_ma1f,
  field_lpuart1_stat_pf,
  field_lpuart1_stat_fe,
  field_lpuart1_stat_nf,
  field_lpuart1_stat_or,
  field_lpuart1_stat_idle,
  field_lpuart1_stat_rdrf,
  field_lpuart1_stat_tc,
  field_lpuart1_stat_tdre,
  field_lpuart1_stat_raf,
  field_lpuart1_stat_lbkde,
  field_lpuart1_stat_brk13,
  field_lpuart1_stat_rwuid,
  field_lpuart1_stat_rxinv,
  field_lpuart1_stat_msbf,
  field_lpuart1_stat_rxedgif,
  field_lpuart1_stat_lbkdif,
  field_lpuart1_verid_feature,
  field_lpuart1_verid_minor,
  field_lpuart1_verid_major,
  field_lpuart1_water_txwater,
  field_lpuart1_water_txcount,
  field_lpuart1_water_rxwater,
  field_lpuart1_water_rxcount,
  field_lpuart2_baud_sbr,
  field_lpuart2_baud_sbns,
  field_lpuart2_baud_rxedgie,
  field_lpuart2_baud_lbkdie,
  field_lpuart2_baud_resyncdis,
  field_lpuart2_baud_bothedge,
  field_lpuart2_baud_matcfg,
  field_lpuart2_baud_rdmae,
  field_lpuart2_baud_tdmae,
  field_lpuart2_baud_osr,
  field_lpuart2_baud_m10,
  field_lpuart2_baud_maen2,
  field_lpuart2_baud_maen1,
  field_lpuart2_ctrl_pt,
  field_lpuart2_ctrl_pe,
  field_lpuart2_ctrl_ilt,
  field_lpuart2_ctrl_wake,
  field_lpuart2_ctrl_m,
  field_lpuart2_ctrl_rsrc,
  field_lpuart2_ctrl_dozeen,
  field_lpuart2_ctrl_loops,
  field_lpuart2_ctrl_idlecfg,
  field_lpuart2_ctrl_m7,
  field_lpuart2_ctrl_ma2ie,
  field_lpuart2_ctrl_ma1ie,
  field_lpuart2_ctrl_sbk,
  field_lpuart2_ctrl_rwu,
  field_lpuart2_ctrl_re,
  field_lpuart2_ctrl_te,
  field_lpuart2_ctrl_ilie,
  field_lpuart2_ctrl_rie,
  field_lpuart2_ctrl_tcie,
  field_lpuart2_ctrl_tie,
  field_lpuart2_ctrl_peie,
  field_lpuart2_ctrl_feie,
  field_lpuart2_ctrl_neie,
  field_lpuart2_ctrl_orie,
  field_lpuart2_ctrl_txinv,
  field_lpuart2_ctrl_txdir,
  field_lpuart2_ctrl_r9t8,
  field_lpuart2_ctrl_r8t9,
  field_lpuart2_data_r0t0,
  field_lpuart2_data_r1t1,
  field_lpuart2_data_r2t2,
  field_lpuart2_data_r3t3,
  field_lpuart2_data_r4t4,
  field_lpuart2_data_r5t5,
  field_lpuart2_data_r6t6,
  field_lpuart2_data_r7t7,
  field_lpuart2_data_r8t8,
  field_lpuart2_data_r9t9,
  field_lpuart2_data_idline,
  field_lpuart2_data_rxempt,
  field_lpuart2_data_fretsc,
  field_lpuart2_data_paritye,
  field_lpuart2_data_noisy,
  field_lpuart2_fifo_rxfifosize,
  field_lpuart2_fifo_rxfe,
  field_lpuart2_fifo_txfifosize,
  field_lpuart2_fifo_txfe,
  field_lpuart2_fifo_rxufe,
  field_lpuart2_fifo_txofe,
  field_lpuart2_fifo_rxiden,
  field_lpuart2_fifo_rxflush,
  field_lpuart2_fifo_txflush,
  field_lpuart2_fifo_rxuf,
  field_lpuart2_fifo_txof,
  field_lpuart2_fifo_rxempt,
  field_lpuart2_fifo_txempt,
  field_lpuart2_global_rst,
  field_lpuart2_match_ma1,
  field_lpuart2_match_ma2,
  field_lpuart2_modir_txctse,
  field_lpuart2_modir_txrtse,
  field_lpuart2_modir_txrtspol,
  field_lpuart2_modir_rxrtse,
  field_lpuart2_modir_txctsc,
  field_lpuart2_modir_txctssrc,
  field_lpuart2_modir_rtswater,
  field_lpuart2_modir_tnp,
  field_lpuart2_modir_iren,
  field_lpuart2_param_txfifo,
  field_lpuart2_param_rxfifo,
  field_lpuart2_pincfg_trgsel,
  field_lpuart2_stat_ma2f,
  field_lpuart2_stat_ma1f,
  field_lpuart2_stat_pf,
  field_lpuart2_stat_fe,
  field_lpuart2_stat_nf,
  field_lpuart2_stat_or,
  field_lpuart2_stat_idle,
  field_lpuart2_stat_rdrf,
  field_lpuart2_stat_tc,
  field_lpuart2_stat_tdre,
  field_lpuart2_stat_raf,
  field_lpuart2_stat_lbkde,
  field_lpuart2_stat_brk13,
  field_lpuart2_stat_rwuid,
  field_lpuart2_stat_rxinv,
  field_lpuart2_stat_msbf,
  field_lpuart2_stat_rxedgif,
  field_lpuart2_stat_lbkdif,
  field_lpuart2_verid_feature,
  field_lpuart2_verid_minor,
  field_lpuart2_verid_major,
  field_lpuart2_water_txwater,
  field_lpuart2_water_txcount,
  field_lpuart2_water_rxwater,
  field_lpuart2_water_rxcount,
  field_lpuart3_baud_sbr,
  field_lpuart3_baud_sbns,
  field_lpuart3_baud_rxedgie,
  field_lpuart3_baud_lbkdie,
  field_lpuart3_baud_resyncdis,
  field_lpuart3_baud_bothedge,
  field_lpuart3_baud_matcfg,
  field_lpuart3_baud_rdmae,
  field_lpuart3_baud_tdmae,
  field_lpuart3_baud_osr,
  field_lpuart3_baud_m10,
  field_lpuart3_baud_maen2,
  field_lpuart3_baud_maen1,
  field_lpuart3_ctrl_pt,
  field_lpuart3_ctrl_pe,
  field_lpuart3_ctrl_ilt,
  field_lpuart3_ctrl_wake,
  field_lpuart3_ctrl_m,
  field_lpuart3_ctrl_rsrc,
  field_lpuart3_ctrl_dozeen,
  field_lpuart3_ctrl_loops,
  field_lpuart3_ctrl_idlecfg,
  field_lpuart3_ctrl_m7,
  field_lpuart3_ctrl_ma2ie,
  field_lpuart3_ctrl_ma1ie,
  field_lpuart3_ctrl_sbk,
  field_lpuart3_ctrl_rwu,
  field_lpuart3_ctrl_re,
  field_lpuart3_ctrl_te,
  field_lpuart3_ctrl_ilie,
  field_lpuart3_ctrl_rie,
  field_lpuart3_ctrl_tcie,
  field_lpuart3_ctrl_tie,
  field_lpuart3_ctrl_peie,
  field_lpuart3_ctrl_feie,
  field_lpuart3_ctrl_neie,
  field_lpuart3_ctrl_orie,
  field_lpuart3_ctrl_txinv,
  field_lpuart3_ctrl_txdir,
  field_lpuart3_ctrl_r9t8,
  field_lpuart3_ctrl_r8t9,
  field_lpuart3_data_r0t0,
  field_lpuart3_data_r1t1,
  field_lpuart3_data_r2t2,
  field_lpuart3_data_r3t3,
  field_lpuart3_data_r4t4,
  field_lpuart3_data_r5t5,
  field_lpuart3_data_r6t6,
  field_lpuart3_data_r7t7,
  field_lpuart3_data_r8t8,
  field_lpuart3_data_r9t9,
  field_lpuart3_data_idline,
  field_lpuart3_data_rxempt,
  field_lpuart3_data_fretsc,
  field_lpuart3_data_paritye,
  field_lpuart3_data_noisy,
  field_lpuart3_fifo_rxfifosize,
  field_lpuart3_fifo_rxfe,
  field_lpuart3_fifo_txfifosize,
  field_lpuart3_fifo_txfe,
  field_lpuart3_fifo_rxufe,
  field_lpuart3_fifo_txofe,
  field_lpuart3_fifo_rxiden,
  field_lpuart3_fifo_rxflush,
  field_lpuart3_fifo_txflush,
  field_lpuart3_fifo_rxuf,
  field_lpuart3_fifo_txof,
  field_lpuart3_fifo_rxempt,
  field_lpuart3_fifo_txempt,
  field_lpuart3_global_rst,
  field_lpuart3_match_ma1,
  field_lpuart3_match_ma2,
  field_lpuart3_modir_txctse,
  field_lpuart3_modir_txrtse,
  field_lpuart3_modir_txrtspol,
  field_lpuart3_modir_rxrtse,
  field_lpuart3_modir_txctsc,
  field_lpuart3_modir_txctssrc,
  field_lpuart3_modir_rtswater,
  field_lpuart3_modir_tnp,
  field_lpuart3_modir_iren,
  field_lpuart3_param_txfifo,
  field_lpuart3_param_rxfifo,
  field_lpuart3_pincfg_trgsel,
  field_lpuart3_stat_ma2f,
  field_lpuart3_stat_ma1f,
  field_lpuart3_stat_pf,
  field_lpuart3_stat_fe,
  field_lpuart3_stat_nf,
  field_lpuart3_stat_or,
  field_lpuart3_stat_idle,
  field_lpuart3_stat_rdrf,
  field_lpuart3_stat_tc,
  field_lpuart3_stat_tdre,
  field_lpuart3_stat_raf,
  field_lpuart3_stat_lbkde,
  field_lpuart3_stat_brk13,
  field_lpuart3_stat_rwuid,
  field_lpuart3_stat_rxinv,
  field_lpuart3_stat_msbf,
  field_lpuart3_stat_rxedgif,
  field_lpuart3_stat_lbkdif,
  field_lpuart3_verid_feature,
  field_lpuart3_verid_minor,
  field_lpuart3_verid_major,
  field_lpuart3_water_txwater,
  field_lpuart3_water_txcount,
  field_lpuart3_water_rxwater,
  field_lpuart3_water_rxcount,
  field_lpuart4_baud_sbr,
  field_lpuart4_baud_sbns,
  field_lpuart4_baud_rxedgie,
  field_lpuart4_baud_lbkdie,
  field_lpuart4_baud_resyncdis,
  field_lpuart4_baud_bothedge,
  field_lpuart4_baud_matcfg,
  field_lpuart4_baud_rdmae,
  field_lpuart4_baud_tdmae,
  field_lpuart4_baud_osr,
  field_lpuart4_baud_m10,
  field_lpuart4_baud_maen2,
  field_lpuart4_baud_maen1,
  field_lpuart4_ctrl_pt,
  field_lpuart4_ctrl_pe,
  field_lpuart4_ctrl_ilt,
  field_lpuart4_ctrl_wake,
  field_lpuart4_ctrl_m,
  field_lpuart4_ctrl_rsrc,
  field_lpuart4_ctrl_dozeen,
  field_lpuart4_ctrl_loops,
  field_lpuart4_ctrl_idlecfg,
  field_lpuart4_ctrl_m7,
  field_lpuart4_ctrl_ma2ie,
  field_lpuart4_ctrl_ma1ie,
  field_lpuart4_ctrl_sbk,
  field_lpuart4_ctrl_rwu,
  field_lpuart4_ctrl_re,
  field_lpuart4_ctrl_te,
  field_lpuart4_ctrl_ilie,
  field_lpuart4_ctrl_rie,
  field_lpuart4_ctrl_tcie,
  field_lpuart4_ctrl_tie,
  field_lpuart4_ctrl_peie,
  field_lpuart4_ctrl_feie,
  field_lpuart4_ctrl_neie,
  field_lpuart4_ctrl_orie,
  field_lpuart4_ctrl_txinv,
  field_lpuart4_ctrl_txdir,
  field_lpuart4_ctrl_r9t8,
  field_lpuart4_ctrl_r8t9,
  field_lpuart4_data_r0t0,
  field_lpuart4_data_r1t1,
  field_lpuart4_data_r2t2,
  field_lpuart4_data_r3t3,
  field_lpuart4_data_r4t4,
  field_lpuart4_data_r5t5,
  field_lpuart4_data_r6t6,
  field_lpuart4_data_r7t7,
  field_lpuart4_data_r8t8,
  field_lpuart4_data_r9t9,
  field_lpuart4_data_idline,
  field_lpuart4_data_rxempt,
  field_lpuart4_data_fretsc,
  field_lpuart4_data_paritye,
  field_lpuart4_data_noisy,
  field_lpuart4_fifo_rxfifosize,
  field_lpuart4_fifo_rxfe,
  field_lpuart4_fifo_txfifosize,
  field_lpuart4_fifo_txfe,
  field_lpuart4_fifo_rxufe,
  field_lpuart4_fifo_txofe,
  field_lpuart4_fifo_rxiden,
  field_lpuart4_fifo_rxflush,
  field_lpuart4_fifo_txflush,
  field_lpuart4_fifo_rxuf,
  field_lpuart4_fifo_txof,
  field_lpuart4_fifo_rxempt,
  field_lpuart4_fifo_txempt,
  field_lpuart4_global_rst,
  field_lpuart4_match_ma1,
  field_lpuart4_match_ma2,
  field_lpuart4_modir_txctse,
  field_lpuart4_modir_txrtse,
  field_lpuart4_modir_txrtspol,
  field_lpuart4_modir_rxrtse,
  field_lpuart4_modir_txctsc,
  field_lpuart4_modir_txctssrc,
  field_lpuart4_modir_rtswater,
  field_lpuart4_modir_tnp,
  field_lpuart4_modir_iren,
  field_lpuart4_param_txfifo,
  field_lpuart4_param_rxfifo,
  field_lpuart4_pincfg_trgsel,
  field_lpuart4_stat_ma2f,
  field_lpuart4_stat_ma1f,
  field_lpuart4_stat_pf,
  field_lpuart4_stat_fe,
  field_lpuart4_stat_nf,
  field_lpuart4_stat_or,
  field_lpuart4_stat_idle,
  field_lpuart4_stat_rdrf,
  field_lpuart4_stat_tc,
  field_lpuart4_stat_tdre,
  field_lpuart4_stat_raf,
  field_lpuart4_stat_lbkde,
  field_lpuart4_stat_brk13,
  field_lpuart4_stat_rwuid,
  field_lpuart4_stat_rxinv,
  field_lpuart4_stat_msbf,
  field_lpuart4_stat_rxedgif,
  field_lpuart4_stat_lbkdif,
  field_lpuart4_verid_feature,
  field_lpuart4_verid_minor,
  field_lpuart4_verid_major,
  field_lpuart4_water_txwater,
  field_lpuart4_water_txcount,
  field_lpuart4_water_rxwater,
  field_lpuart4_water_rxcount,
  field_lpuart5_baud_sbr,
  field_lpuart5_baud_sbns,
  field_lpuart5_baud_rxedgie,
  field_lpuart5_baud_lbkdie,
  field_lpuart5_baud_resyncdis,
  field_lpuart5_baud_bothedge,
  field_lpuart5_baud_matcfg,
  field_lpuart5_baud_rdmae,
  field_lpuart5_baud_tdmae,
  field_lpuart5_baud_osr,
  field_lpuart5_baud_m10,
  field_lpuart5_baud_maen2,
  field_lpuart5_baud_maen1,
  field_lpuart5_ctrl_pt,
  field_lpuart5_ctrl_pe,
  field_lpuart5_ctrl_ilt,
  field_lpuart5_ctrl_wake,
  field_lpuart5_ctrl_m,
  field_lpuart5_ctrl_rsrc,
  field_lpuart5_ctrl_dozeen,
  field_lpuart5_ctrl_loops,
  field_lpuart5_ctrl_idlecfg,
  field_lpuart5_ctrl_m7,
  field_lpuart5_ctrl_ma2ie,
  field_lpuart5_ctrl_ma1ie,
  field_lpuart5_ctrl_sbk,
  field_lpuart5_ctrl_rwu,
  field_lpuart5_ctrl_re,
  field_lpuart5_ctrl_te,
  field_lpuart5_ctrl_ilie,
  field_lpuart5_ctrl_rie,
  field_lpuart5_ctrl_tcie,
  field_lpuart5_ctrl_tie,
  field_lpuart5_ctrl_peie,
  field_lpuart5_ctrl_feie,
  field_lpuart5_ctrl_neie,
  field_lpuart5_ctrl_orie,
  field_lpuart5_ctrl_txinv,
  field_lpuart5_ctrl_txdir,
  field_lpuart5_ctrl_r9t8,
  field_lpuart5_ctrl_r8t9,
  field_lpuart5_data_r0t0,
  field_lpuart5_data_r1t1,
  field_lpuart5_data_r2t2,
  field_lpuart5_data_r3t3,
  field_lpuart5_data_r4t4,
  field_lpuart5_data_r5t5,
  field_lpuart5_data_r6t6,
  field_lpuart5_data_r7t7,
  field_lpuart5_data_r8t8,
  field_lpuart5_data_r9t9,
  field_lpuart5_data_idline,
  field_lpuart5_data_rxempt,
  field_lpuart5_data_fretsc,
  field_lpuart5_data_paritye,
  field_lpuart5_data_noisy,
  field_lpuart5_fifo_rxfifosize,
  field_lpuart5_fifo_rxfe,
  field_lpuart5_fifo_txfifosize,
  field_lpuart5_fifo_txfe,
  field_lpuart5_fifo_rxufe,
  field_lpuart5_fifo_txofe,
  field_lpuart5_fifo_rxiden,
  field_lpuart5_fifo_rxflush,
  field_lpuart5_fifo_txflush,
  field_lpuart5_fifo_rxuf,
  field_lpuart5_fifo_txof,
  field_lpuart5_fifo_rxempt,
  field_lpuart5_fifo_txempt,
  field_lpuart5_global_rst,
  field_lpuart5_match_ma1,
  field_lpuart5_match_ma2,
  field_lpuart5_modir_txctse,
  field_lpuart5_modir_txrtse,
  field_lpuart5_modir_txrtspol,
  field_lpuart5_modir_rxrtse,
  field_lpuart5_modir_txctsc,
  field_lpuart5_modir_txctssrc,
  field_lpuart5_modir_rtswater,
  field_lpuart5_modir_tnp,
  field_lpuart5_modir_iren,
  field_lpuart5_param_txfifo,
  field_lpuart5_param_rxfifo,
  field_lpuart5_pincfg_trgsel,
  field_lpuart5_stat_ma2f,
  field_lpuart5_stat_ma1f,
  field_lpuart5_stat_pf,
  field_lpuart5_stat_fe,
  field_lpuart5_stat_nf,
  field_lpuart5_stat_or,
  field_lpuart5_stat_idle,
  field_lpuart5_stat_rdrf,
  field_lpuart5_stat_tc,
  field_lpuart5_stat_tdre,
  field_lpuart5_stat_raf,
  field_lpuart5_stat_lbkde,
  field_lpuart5_stat_brk13,
  field_lpuart5_stat_rwuid,
  field_lpuart5_stat_rxinv,
  field_lpuart5_stat_msbf,
  field_lpuart5_stat_rxedgif,
  field_lpuart5_stat_lbkdif,
  field_lpuart5_verid_feature,
  field_lpuart5_verid_minor,
  field_lpuart5_verid_major,
  field_lpuart5_water_txwater,
  field_lpuart5_water_txcount,
  field_lpuart5_water_rxwater,
  field_lpuart5_water_rxcount,
  field_lpuart6_baud_sbr,
  field_lpuart6_baud_sbns,
  field_lpuart6_baud_rxedgie,
  field_lpuart6_baud_lbkdie,
  field_lpuart6_baud_resyncdis,
  field_lpuart6_baud_bothedge,
  field_lpuart6_baud_matcfg,
  field_lpuart6_baud_rdmae,
  field_lpuart6_baud_tdmae,
  field_lpuart6_baud_osr,
  field_lpuart6_baud_m10,
  field_lpuart6_baud_maen2,
  field_lpuart6_baud_maen1,
  field_lpuart6_ctrl_pt,
  field_lpuart6_ctrl_pe,
  field_lpuart6_ctrl_ilt,
  field_lpuart6_ctrl_wake,
  field_lpuart6_ctrl_m,
  field_lpuart6_ctrl_rsrc,
  field_lpuart6_ctrl_dozeen,
  field_lpuart6_ctrl_loops,
  field_lpuart6_ctrl_idlecfg,
  field_lpuart6_ctrl_m7,
  field_lpuart6_ctrl_ma2ie,
  field_lpuart6_ctrl_ma1ie,
  field_lpuart6_ctrl_sbk,
  field_lpuart6_ctrl_rwu,
  field_lpuart6_ctrl_re,
  field_lpuart6_ctrl_te,
  field_lpuart6_ctrl_ilie,
  field_lpuart6_ctrl_rie,
  field_lpuart6_ctrl_tcie,
  field_lpuart6_ctrl_tie,
  field_lpuart6_ctrl_peie,
  field_lpuart6_ctrl_feie,
  field_lpuart6_ctrl_neie,
  field_lpuart6_ctrl_orie,
  field_lpuart6_ctrl_txinv,
  field_lpuart6_ctrl_txdir,
  field_lpuart6_ctrl_r9t8,
  field_lpuart6_ctrl_r8t9,
  field_lpuart6_data_r0t0,
  field_lpuart6_data_r1t1,
  field_lpuart6_data_r2t2,
  field_lpuart6_data_r3t3,
  field_lpuart6_data_r4t4,
  field_lpuart6_data_r5t5,
  field_lpuart6_data_r6t6,
  field_lpuart6_data_r7t7,
  field_lpuart6_data_r8t8,
  field_lpuart6_data_r9t9,
  field_lpuart6_data_idline,
  field_lpuart6_data_rxempt,
  field_lpuart6_data_fretsc,
  field_lpuart6_data_paritye,
  field_lpuart6_data_noisy,
  field_lpuart6_fifo_rxfifosize,
  field_lpuart6_fifo_rxfe,
  field_lpuart6_fifo_txfifosize,
  field_lpuart6_fifo_txfe,
  field_lpuart6_fifo_rxufe,
  field_lpuart6_fifo_txofe,
  field_lpuart6_fifo_rxiden,
  field_lpuart6_fifo_rxflush,
  field_lpuart6_fifo_txflush,
  field_lpuart6_fifo_rxuf,
  field_lpuart6_fifo_txof,
  field_lpuart6_fifo_rxempt,
  field_lpuart6_fifo_txempt,
  field_lpuart6_global_rst,
  field_lpuart6_match_ma1,
  field_lpuart6_match_ma2,
  field_lpuart6_modir_txctse,
  field_lpuart6_modir_txrtse,
  field_lpuart6_modir_txrtspol,
  field_lpuart6_modir_rxrtse,
  field_lpuart6_modir_txctsc,
  field_lpuart6_modir_txctssrc,
  field_lpuart6_modir_rtswater,
  field_lpuart6_modir_tnp,
  field_lpuart6_modir_iren,
  field_lpuart6_param_txfifo,
  field_lpuart6_param_rxfifo,
  field_lpuart6_pincfg_trgsel,
  field_lpuart6_stat_ma2f,
  field_lpuart6_stat_ma1f,
  field_lpuart6_stat_pf,
  field_lpuart6_stat_fe,
  field_lpuart6_stat_nf,
  field_lpuart6_stat_or,
  field_lpuart6_stat_idle,
  field_lpuart6_stat_rdrf,
  field_lpuart6_stat_tc,
  field_lpuart6_stat_tdre,
  field_lpuart6_stat_raf,
  field_lpuart6_stat_lbkde,
  field_lpuart6_stat_brk13,
  field_lpuart6_stat_rwuid,
  field_lpuart6_stat_rxinv,
  field_lpuart6_stat_msbf,
  field_lpuart6_stat_rxedgif,
  field_lpuart6_stat_lbkdif,
  field_lpuart6_verid_feature,
  field_lpuart6_verid_minor,
  field_lpuart6_verid_major,
  field_lpuart6_water_txwater,
  field_lpuart6_water_txcount,
  field_lpuart6_water_rxwater,
  field_lpuart6_water_rxcount,
  field_lpuart7_baud_sbr,
  field_lpuart7_baud_sbns,
  field_lpuart7_baud_rxedgie,
  field_lpuart7_baud_lbkdie,
  field_lpuart7_baud_resyncdis,
  field_lpuart7_baud_bothedge,
  field_lpuart7_baud_matcfg,
  field_lpuart7_baud_rdmae,
  field_lpuart7_baud_tdmae,
  field_lpuart7_baud_osr,
  field_lpuart7_baud_m10,
  field_lpuart7_baud_maen2,
  field_lpuart7_baud_maen1,
  field_lpuart7_ctrl_pt,
  field_lpuart7_ctrl_pe,
  field_lpuart7_ctrl_ilt,
  field_lpuart7_ctrl_wake,
  field_lpuart7_ctrl_m,
  field_lpuart7_ctrl_rsrc,
  field_lpuart7_ctrl_dozeen,
  field_lpuart7_ctrl_loops,
  field_lpuart7_ctrl_idlecfg,
  field_lpuart7_ctrl_m7,
  field_lpuart7_ctrl_ma2ie,
  field_lpuart7_ctrl_ma1ie,
  field_lpuart7_ctrl_sbk,
  field_lpuart7_ctrl_rwu,
  field_lpuart7_ctrl_re,
  field_lpuart7_ctrl_te,
  field_lpuart7_ctrl_ilie,
  field_lpuart7_ctrl_rie,
  field_lpuart7_ctrl_tcie,
  field_lpuart7_ctrl_tie,
  field_lpuart7_ctrl_peie,
  field_lpuart7_ctrl_feie,
  field_lpuart7_ctrl_neie,
  field_lpuart7_ctrl_orie,
  field_lpuart7_ctrl_txinv,
  field_lpuart7_ctrl_txdir,
  field_lpuart7_ctrl_r9t8,
  field_lpuart7_ctrl_r8t9,
  field_lpuart7_data_r0t0,
  field_lpuart7_data_r1t1,
  field_lpuart7_data_r2t2,
  field_lpuart7_data_r3t3,
  field_lpuart7_data_r4t4,
  field_lpuart7_data_r5t5,
  field_lpuart7_data_r6t6,
  field_lpuart7_data_r7t7,
  field_lpuart7_data_r8t8,
  field_lpuart7_data_r9t9,
  field_lpuart7_data_idline,
  field_lpuart7_data_rxempt,
  field_lpuart7_data_fretsc,
  field_lpuart7_data_paritye,
  field_lpuart7_data_noisy,
  field_lpuart7_fifo_rxfifosize,
  field_lpuart7_fifo_rxfe,
  field_lpuart7_fifo_txfifosize,
  field_lpuart7_fifo_txfe,
  field_lpuart7_fifo_rxufe,
  field_lpuart7_fifo_txofe,
  field_lpuart7_fifo_rxiden,
  field_lpuart7_fifo_rxflush,
  field_lpuart7_fifo_txflush,
  field_lpuart7_fifo_rxuf,
  field_lpuart7_fifo_txof,
  field_lpuart7_fifo_rxempt,
  field_lpuart7_fifo_txempt,
  field_lpuart7_global_rst,
  field_lpuart7_match_ma1,
  field_lpuart7_match_ma2,
  field_lpuart7_modir_txctse,
  field_lpuart7_modir_txrtse,
  field_lpuart7_modir_txrtspol,
  field_lpuart7_modir_rxrtse,
  field_lpuart7_modir_txctsc,
  field_lpuart7_modir_txctssrc,
  field_lpuart7_modir_rtswater,
  field_lpuart7_modir_tnp,
  field_lpuart7_modir_iren,
  field_lpuart7_param_txfifo,
  field_lpuart7_param_rxfifo,
  field_lpuart7_pincfg_trgsel,
  field_lpuart7_stat_ma2f,
  field_lpuart7_stat_ma1f,
  field_lpuart7_stat_pf,
  field_lpuart7_stat_fe,
  field_lpuart7_stat_nf,
  field_lpuart7_stat_or,
  field_lpuart7_stat_idle,
  field_lpuart7_stat_rdrf,
  field_lpuart7_stat_tc,
  field_lpuart7_stat_tdre,
  field_lpuart7_stat_raf,
  field_lpuart7_stat_lbkde,
  field_lpuart7_stat_brk13,
  field_lpuart7_stat_rwuid,
  field_lpuart7_stat_rxinv,
  field_lpuart7_stat_msbf,
  field_lpuart7_stat_rxedgif,
  field_lpuart7_stat_lbkdif,
  field_lpuart7_verid_feature,
  field_lpuart7_verid_minor,
  field_lpuart7_verid_major,
  field_lpuart7_water_txwater,
  field_lpuart7_water_txcount,
  field_lpuart7_water_rxwater,
  field_lpuart7_water_rxcount,
  field_lpuart8_baud_sbr,
  field_lpuart8_baud_sbns,
  field_lpuart8_baud_rxedgie,
  field_lpuart8_baud_lbkdie,
  field_lpuart8_baud_resyncdis,
  field_lpuart8_baud_bothedge,
  field_lpuart8_baud_matcfg,
  field_lpuart8_baud_rdmae,
  field_lpuart8_baud_tdmae,
  field_lpuart8_baud_osr,
  field_lpuart8_baud_m10,
  field_lpuart8_baud_maen2,
  field_lpuart8_baud_maen1,
  field_lpuart8_ctrl_pt,
  field_lpuart8_ctrl_pe,
  field_lpuart8_ctrl_ilt,
  field_lpuart8_ctrl_wake,
  field_lpuart8_ctrl_m,
  field_lpuart8_ctrl_rsrc,
  field_lpuart8_ctrl_dozeen,
  field_lpuart8_ctrl_loops,
  field_lpuart8_ctrl_idlecfg,
  field_lpuart8_ctrl_m7,
  field_lpuart8_ctrl_ma2ie,
  field_lpuart8_ctrl_ma1ie,
  field_lpuart8_ctrl_sbk,
  field_lpuart8_ctrl_rwu,
  field_lpuart8_ctrl_re,
  field_lpuart8_ctrl_te,
  field_lpuart8_ctrl_ilie,
  field_lpuart8_ctrl_rie,
  field_lpuart8_ctrl_tcie,
  field_lpuart8_ctrl_tie,
  field_lpuart8_ctrl_peie,
  field_lpuart8_ctrl_feie,
  field_lpuart8_ctrl_neie,
  field_lpuart8_ctrl_orie,
  field_lpuart8_ctrl_txinv,
  field_lpuart8_ctrl_txdir,
  field_lpuart8_ctrl_r9t8,
  field_lpuart8_ctrl_r8t9,
  field_lpuart8_data_r0t0,
  field_lpuart8_data_r1t1,
  field_lpuart8_data_r2t2,
  field_lpuart8_data_r3t3,
  field_lpuart8_data_r4t4,
  field_lpuart8_data_r5t5,
  field_lpuart8_data_r6t6,
  field_lpuart8_data_r7t7,
  field_lpuart8_data_r8t8,
  field_lpuart8_data_r9t9,
  field_lpuart8_data_idline,
  field_lpuart8_data_rxempt,
  field_lpuart8_data_fretsc,
  field_lpuart8_data_paritye,
  field_lpuart8_data_noisy,
  field_lpuart8_fifo_rxfifosize,
  field_lpuart8_fifo_rxfe,
  field_lpuart8_fifo_txfifosize,
  field_lpuart8_fifo_txfe,
  field_lpuart8_fifo_rxufe,
  field_lpuart8_fifo_txofe,
  field_lpuart8_fifo_rxiden,
  field_lpuart8_fifo_rxflush,
  field_lpuart8_fifo_txflush,
  field_lpuart8_fifo_rxuf,
  field_lpuart8_fifo_txof,
  field_lpuart8_fifo_rxempt,
  field_lpuart8_fifo_txempt,
  field_lpuart8_global_rst,
  field_lpuart8_match_ma1,
  field_lpuart8_match_ma2,
  field_lpuart8_modir_txctse,
  field_lpuart8_modir_txrtse,
  field_lpuart8_modir_txrtspol,
  field_lpuart8_modir_rxrtse,
  field_lpuart8_modir_txctsc,
  field_lpuart8_modir_txctssrc,
  field_lpuart8_modir_rtswater,
  field_lpuart8_modir_tnp,
  field_lpuart8_modir_iren,
  field_lpuart8_param_txfifo,
  field_lpuart8_param_rxfifo,
  field_lpuart8_pincfg_trgsel,
  field_lpuart8_stat_ma2f,
  field_lpuart8_stat_ma1f,
  field_lpuart8_stat_pf,
  field_lpuart8_stat_fe,
  field_lpuart8_stat_nf,
  field_lpuart8_stat_or,
  field_lpuart8_stat_idle,
  field_lpuart8_stat_rdrf,
  field_lpuart8_stat_tc,
  field_lpuart8_stat_tdre,
  field_lpuart8_stat_raf,
  field_lpuart8_stat_lbkde,
  field_lpuart8_stat_brk13,
  field_lpuart8_stat_rwuid,
  field_lpuart8_stat_rxinv,
  field_lpuart8_stat_msbf,
  field_lpuart8_stat_rxedgif,
  field_lpuart8_stat_lbkdif,
  field_lpuart8_verid_feature,
  field_lpuart8_verid_minor,
  field_lpuart8_verid_major,
  field_lpuart8_water_txwater,
  field_lpuart8_water_txcount,
  field_lpuart8_water_rxwater,
  field_lpuart8_water_rxcount,
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
struct RegisterFieldTraits<FieldId::field_ccm_cbcmr_lpspi_clk_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_cbcmr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr0_cg6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr0;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr0_cg14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr0;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr0_cg15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr0;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr1_cg0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr1_cg1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr1_cg2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr1_cg3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr1_cg12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr1_cg13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr1_cg15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr2_cg13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr3_cg1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr3;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr3_cg3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr3;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr3_cg13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr3;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr5_cg12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr5;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr5_cg13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr5;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_ccgr6_cg7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_ccgr6;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_ccm_cscdr1_uart_clk_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_ccm_cscdr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio1_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio1_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio10_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio10_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio2_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio2_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio3_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio3_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio4_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio4_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio5_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio5_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio6_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio6_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio7_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio7_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio8_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio8_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_dr_clear_dr_clear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_dr_clear;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_dr_set_dr_set> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_dr_set;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_dr_toggle_dr_toggle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_dr_toggle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_edge_sel_gpio_edge_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_edge_sel;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_gdir_gdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_gdir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr1_icr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr28> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr29> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr30> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_icr2_icr31> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_icr2;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_imr_imr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_imr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_isr_isr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpio9_psr_psr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpio9_psr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ccr_sckdiv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ccr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ccr_dbt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ccr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ccr_pcssck> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ccr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ccr_sckpcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ccr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr0_hren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr0_hrpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr0;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr0_hrsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr0;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr0_cirfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr0;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr0_rdmo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr0;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr1_master> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr1_sample> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr1_autopcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr1_nostall> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr1_pcspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr1_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr1_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr1_outcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cfgr1_pcscfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cfgr1;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cr_men> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cr_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cr_dozen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cr_dbgen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cr_rtf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_cr_rrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_der_tdde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_der;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_der_rdde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_der;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_dmr0_match0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_dmr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_dmr1_match1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_dmr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_fcr_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_fcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_fcr_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_fcr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_fsr_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_fsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_fsr_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_fsr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ier_tdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ier;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ier_rdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ier;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ier_wcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ier;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ier_fcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ier;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ier_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ier;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ier_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ier;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ier_reie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ier;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_ier_dmie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_ier;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_param_pcsnum> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_param;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_rdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_rdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_rsr_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_rsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_rsr_rxempty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_rsr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_sr_tdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_sr_rdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_sr_wcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_sr_fcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_sr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_sr_tcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_sr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_sr_tef> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_sr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_sr_ref> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_sr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_sr_dmf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_sr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_sr_mbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_sr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_framesz> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_width> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_txmsk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_rxmsk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_contc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_cont> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_bysw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_lsbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_pcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_prescale> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tcr_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tcr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_tdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_tdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi1_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi1_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ccr_sckdiv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ccr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ccr_dbt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ccr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ccr_pcssck> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ccr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ccr_sckpcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ccr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr0_hren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr0_hrpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr0;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr0_hrsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr0;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr0_cirfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr0;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr0_rdmo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr0;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr1_master> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr1_sample> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr1_autopcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr1_nostall> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr1_pcspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr1_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr1_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr1_outcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cfgr1_pcscfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cfgr1;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cr_men> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cr_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cr_dozen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cr_dbgen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cr_rtf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_cr_rrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_der_tdde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_der;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_der_rdde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_der;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_dmr0_match0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_dmr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_dmr1_match1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_dmr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_fcr_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_fcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_fcr_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_fcr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_fsr_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_fsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_fsr_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_fsr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ier_tdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ier;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ier_rdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ier;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ier_wcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ier;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ier_fcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ier;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ier_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ier;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ier_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ier;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ier_reie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ier;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_ier_dmie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_ier;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_param_pcsnum> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_param;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_rdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_rdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_rsr_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_rsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_rsr_rxempty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_rsr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_sr_tdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_sr_rdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_sr_wcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_sr_fcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_sr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_sr_tcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_sr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_sr_tef> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_sr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_sr_ref> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_sr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_sr_dmf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_sr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_sr_mbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_sr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_framesz> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_width> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_txmsk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_rxmsk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_contc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_cont> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_bysw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_lsbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_pcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_prescale> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tcr_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tcr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_tdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_tdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi2_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi2_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ccr_sckdiv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ccr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ccr_dbt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ccr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ccr_pcssck> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ccr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ccr_sckpcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ccr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr0_hren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr0_hrpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr0;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr0_hrsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr0;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr0_cirfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr0;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr0_rdmo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr0;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr1_master> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr1_sample> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr1_autopcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr1_nostall> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr1_pcspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr1_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr1_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr1_outcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cfgr1_pcscfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cfgr1;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cr_men> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cr_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cr_dozen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cr_dbgen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cr_rtf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_cr_rrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_der_tdde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_der;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_der_rdde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_der;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_dmr0_match0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_dmr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_dmr1_match1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_dmr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_fcr_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_fcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_fcr_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_fcr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_fsr_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_fsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_fsr_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_fsr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ier_tdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ier;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ier_rdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ier;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ier_wcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ier;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ier_fcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ier;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ier_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ier;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ier_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ier;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ier_reie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ier;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_ier_dmie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_ier;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_param_pcsnum> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_param;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_rdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_rdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_rsr_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_rsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_rsr_rxempty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_rsr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_sr_tdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_sr_rdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_sr_wcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_sr_fcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_sr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_sr_tcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_sr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_sr_tef> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_sr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_sr_ref> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_sr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_sr_dmf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_sr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_sr_mbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_sr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_framesz> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_width> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_txmsk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_rxmsk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_contc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_cont> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_bysw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_lsbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_pcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_prescale> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tcr_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tcr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_tdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_tdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi3_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi3_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ccr_sckdiv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ccr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ccr_dbt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ccr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ccr_pcssck> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ccr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ccr_sckpcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ccr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr0_hren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr0_hrpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr0;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr0_hrsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr0;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr0_cirfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr0;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr0_rdmo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr0;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr1_master> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr1_sample> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr1_autopcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr1_nostall> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr1_pcspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr1_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr1_pincfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr1_outcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cfgr1_pcscfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cfgr1;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cr_men> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cr_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cr_dozen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cr_dbgen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cr_rtf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_cr_rrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_der_tdde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_der;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_der_rdde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_der;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_dmr0_match0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_dmr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_dmr1_match1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_dmr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_fcr_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_fcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_fcr_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_fcr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_fsr_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_fsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_fsr_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_fsr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ier_tdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ier;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ier_rdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ier;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ier_wcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ier;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ier_fcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ier;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ier_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ier;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ier_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ier;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ier_reie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ier;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_ier_dmie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_ier;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_param_pcsnum> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_param;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_rdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_rdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_rsr_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_rsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_rsr_rxempty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_rsr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_sr_tdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_sr_rdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_sr_wcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_sr_fcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_sr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_sr_tcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_sr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_sr_tef> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_sr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_sr_ref> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_sr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_sr_dmf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_sr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_sr_mbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_sr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_framesz> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_width> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_txmsk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_rxmsk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_contc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_cont> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_bysw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_lsbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_pcs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_prescale> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tcr_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tcr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_tdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_tdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpspi4_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpspi4_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_sbr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_sbns> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_rxedgie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_lbkdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_resyncdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_bothedge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_osr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_m10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_maen2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_baud_maen1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_baud;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_pt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_ilt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_rsrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_dozeen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_loops> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_idlecfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_m7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_ma2ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_ma1ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_ilie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_rie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_tie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_feie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_neie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_orie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_txdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_r9t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ctrl_r8t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r0t0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r1t1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r2t2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r3t3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r4t4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r5t5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r6t6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r7t7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r8t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_r9t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_idline> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_fretsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_paritye> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_data_noisy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_data;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_rxfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_txfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_rxufe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_txofe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_rxiden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_rxflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_txflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_rxuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_txof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_fifo_txempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_fifo;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_global_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_global;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_match_ma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_match;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_match_ma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_match;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_modir_txctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_modir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_modir_txrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_modir;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_modir_txrtspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_modir;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_modir_rxrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_modir;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_modir_txctsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_modir;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_modir_txctssrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_modir;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_modir_rtswater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_modir;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_modir_tnp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_modir;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_modir_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_modir;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_pincfg_trgsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_pincfg;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_ma2f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_ma1f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_pf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_or> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_rdrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_tdre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_raf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_lbkde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_brk13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_rwuid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_msbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_rxedgif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_stat_lbkdif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_stat;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_water_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_water;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_water_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_water;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_water_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_water;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_water_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_water;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_sbr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_sbns> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_rxedgie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_lbkdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_resyncdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_bothedge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_osr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_m10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_maen2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_baud_maen1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_baud;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_pt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_ilt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_rsrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_dozeen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_loops> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_idlecfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_m7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_ma2ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_ma1ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_ilie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_rie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_tie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_feie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_neie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_orie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_txdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_r9t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_ctrl_r8t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r0t0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r1t1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r2t2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r3t3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r4t4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r5t5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r6t6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r7t7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r8t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_r9t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_idline> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_fretsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_paritye> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_data_noisy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_data;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_rxfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_txfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_rxufe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_txofe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_rxiden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_rxflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_txflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_rxuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_txof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_fifo_txempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_fifo;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_global_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_global;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_match_ma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_match;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_match_ma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_match;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_modir_txctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_modir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_modir_txrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_modir;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_modir_txrtspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_modir;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_modir_rxrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_modir;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_modir_txctsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_modir;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_modir_txctssrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_modir;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_modir_rtswater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_modir;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_modir_tnp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_modir;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_modir_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_modir;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_pincfg_trgsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_pincfg;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_ma2f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_ma1f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_pf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_or> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_rdrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_tdre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_raf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_lbkde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_brk13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_rwuid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_msbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_rxedgif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_stat_lbkdif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_stat;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_water_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_water;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_water_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_water;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_water_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_water;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart2_water_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart2_water;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_sbr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_sbns> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_rxedgie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_lbkdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_resyncdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_bothedge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_osr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_m10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_maen2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_baud_maen1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_baud;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_pt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_ilt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_rsrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_dozeen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_loops> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_idlecfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_m7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_ma2ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_ma1ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_ilie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_rie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_tie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_feie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_neie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_orie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_txdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_r9t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_ctrl_r8t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r0t0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r1t1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r2t2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r3t3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r4t4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r5t5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r6t6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r7t7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r8t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_r9t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_idline> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_fretsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_paritye> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_data_noisy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_data;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_rxfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_txfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_rxufe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_txofe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_rxiden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_rxflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_txflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_rxuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_txof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_fifo_txempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_fifo;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_global_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_global;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_match_ma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_match;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_match_ma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_match;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_modir_txctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_modir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_modir_txrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_modir;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_modir_txrtspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_modir;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_modir_rxrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_modir;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_modir_txctsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_modir;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_modir_txctssrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_modir;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_modir_rtswater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_modir;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_modir_tnp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_modir;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_modir_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_modir;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_pincfg_trgsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_pincfg;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_ma2f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_ma1f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_pf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_or> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_rdrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_tdre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_raf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_lbkde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_brk13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_rwuid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_msbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_rxedgif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_stat_lbkdif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_stat;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_water_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_water;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_water_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_water;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_water_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_water;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart3_water_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart3_water;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_sbr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_sbns> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_rxedgie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_lbkdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_resyncdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_bothedge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_osr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_m10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_maen2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_baud_maen1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_baud;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_pt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_ilt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_rsrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_dozeen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_loops> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_idlecfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_m7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_ma2ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_ma1ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_ilie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_rie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_tie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_feie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_neie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_orie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_txdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_r9t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_ctrl_r8t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r0t0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r1t1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r2t2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r3t3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r4t4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r5t5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r6t6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r7t7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r8t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_r9t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_idline> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_fretsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_paritye> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_data_noisy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_data;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_rxfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_txfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_rxufe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_txofe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_rxiden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_rxflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_txflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_rxuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_txof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_fifo_txempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_fifo;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_global_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_global;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_match_ma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_match;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_match_ma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_match;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_modir_txctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_modir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_modir_txrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_modir;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_modir_txrtspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_modir;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_modir_rxrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_modir;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_modir_txctsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_modir;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_modir_txctssrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_modir;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_modir_rtswater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_modir;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_modir_tnp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_modir;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_modir_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_modir;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_pincfg_trgsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_pincfg;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_ma2f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_ma1f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_pf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_or> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_rdrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_tdre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_raf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_lbkde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_brk13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_rwuid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_msbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_rxedgif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_stat_lbkdif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_stat;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_water_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_water;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_water_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_water;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_water_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_water;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart4_water_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart4_water;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_sbr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_sbns> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_rxedgie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_lbkdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_resyncdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_bothedge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_osr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_m10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_maen2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_baud_maen1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_baud;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_pt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_ilt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_rsrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_dozeen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_loops> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_idlecfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_m7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_ma2ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_ma1ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_ilie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_rie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_tie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_feie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_neie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_orie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_txdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_r9t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_ctrl_r8t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r0t0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r1t1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r2t2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r3t3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r4t4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r5t5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r6t6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r7t7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r8t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_r9t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_idline> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_fretsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_paritye> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_data_noisy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_data;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_rxfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_txfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_rxufe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_txofe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_rxiden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_rxflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_txflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_rxuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_txof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_fifo_txempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_fifo;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_global_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_global;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_match_ma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_match;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_match_ma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_match;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_modir_txctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_modir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_modir_txrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_modir;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_modir_txrtspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_modir;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_modir_rxrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_modir;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_modir_txctsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_modir;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_modir_txctssrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_modir;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_modir_rtswater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_modir;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_modir_tnp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_modir;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_modir_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_modir;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_pincfg_trgsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_pincfg;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_ma2f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_ma1f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_pf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_or> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_rdrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_tdre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_raf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_lbkde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_brk13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_rwuid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_msbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_rxedgif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_stat_lbkdif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_stat;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_water_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_water;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_water_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_water;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_water_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_water;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart5_water_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart5_water;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_sbr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_sbns> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_rxedgie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_lbkdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_resyncdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_bothedge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_osr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_m10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_maen2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_baud_maen1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_baud;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_pt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_ilt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_rsrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_dozeen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_loops> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_idlecfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_m7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_ma2ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_ma1ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_ilie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_rie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_tie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_feie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_neie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_orie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_txdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_r9t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_ctrl_r8t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r0t0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r1t1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r2t2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r3t3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r4t4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r5t5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r6t6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r7t7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r8t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_r9t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_idline> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_fretsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_paritye> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_data_noisy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_data;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_rxfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_txfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_rxufe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_txofe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_rxiden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_rxflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_txflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_rxuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_txof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_fifo_txempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_fifo;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_global_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_global;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_match_ma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_match;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_match_ma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_match;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_modir_txctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_modir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_modir_txrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_modir;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_modir_txrtspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_modir;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_modir_rxrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_modir;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_modir_txctsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_modir;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_modir_txctssrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_modir;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_modir_rtswater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_modir;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_modir_tnp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_modir;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_modir_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_modir;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_pincfg_trgsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_pincfg;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_ma2f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_ma1f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_pf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_or> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_rdrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_tdre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_raf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_lbkde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_brk13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_rwuid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_msbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_rxedgif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_stat_lbkdif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_stat;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_water_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_water;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_water_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_water;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_water_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_water;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart6_water_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart6_water;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_sbr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_sbns> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_rxedgie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_lbkdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_resyncdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_bothedge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_osr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_m10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_maen2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_baud_maen1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_baud;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_pt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_ilt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_rsrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_dozeen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_loops> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_idlecfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_m7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_ma2ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_ma1ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_ilie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_rie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_tie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_feie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_neie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_orie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_txdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_r9t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_ctrl_r8t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r0t0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r1t1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r2t2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r3t3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r4t4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r5t5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r6t6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r7t7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r8t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_r9t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_idline> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_fretsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_paritye> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_data_noisy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_data;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_rxfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_txfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_rxufe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_txofe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_rxiden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_rxflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_txflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_rxuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_txof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_fifo_txempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_fifo;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_global_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_global;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_match_ma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_match;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_match_ma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_match;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_modir_txctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_modir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_modir_txrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_modir;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_modir_txrtspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_modir;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_modir_rxrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_modir;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_modir_txctsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_modir;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_modir_txctssrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_modir;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_modir_rtswater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_modir;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_modir_tnp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_modir;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_modir_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_modir;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_pincfg_trgsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_pincfg;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_ma2f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_ma1f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_pf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_or> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_rdrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_tdre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_raf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_lbkde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_brk13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_rwuid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_msbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_rxedgif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_stat_lbkdif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_stat;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_water_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_water;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_water_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_water;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_water_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_water;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart7_water_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart7_water;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_sbr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 13u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_sbns> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_rxedgie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_lbkdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_resyncdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_bothedge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_matcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_osr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_m10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_maen2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_baud_maen1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_baud;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_pt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_ilt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_rsrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_dozeen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_loops> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_idlecfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_m7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_ma2ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_ma1ie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_ilie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_rie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_tie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_feie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_neie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_orie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_txdir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_r9t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_ctrl_r8t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r0t0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r1t1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r2t2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r3t3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r4t4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r5t5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r6t6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r7t7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r8t8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_r9t9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_idline> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_fretsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_paritye> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_data_noisy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_data;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_rxfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_txfifosize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_rxufe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_txofe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_rxiden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_rxflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_txflush> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_rxuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_txof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_rxempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_fifo_txempt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_fifo;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_global_rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_global;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_match_ma1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_match;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_match_ma2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_match;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_modir_txctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_modir;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_modir_txrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_modir;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_modir_txrtspol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_modir;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_modir_rxrtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_modir;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_modir_txctsc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_modir;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_modir_txctssrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_modir;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_modir_rtswater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_modir;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_modir_tnp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_modir;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_modir_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_modir;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_param_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_param;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_param_rxfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_param;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_pincfg_trgsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_pincfg;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_ma2f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_ma1f> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_pf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_or> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_rdrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_tdre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_raf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_lbkde> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_brk13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_rwuid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_msbf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_rxedgif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_stat_lbkdif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_stat;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_verid_feature> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_verid;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_verid_minor> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_verid;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_verid_major> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_verid;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_water_txwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_water;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_water_txcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_water;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_water_rxwater> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_water;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart8_water_rxcount> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart8_water;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

inline constexpr std::array<FieldId, 1585> kRegisterFields = {{
  FieldId::field_ccm_cbcmr_lpspi_clk_sel,
  FieldId::field_ccm_ccgr0_cg6,
  FieldId::field_ccm_ccgr0_cg14,
  FieldId::field_ccm_ccgr0_cg15,
  FieldId::field_ccm_ccgr1_cg0,
  FieldId::field_ccm_ccgr1_cg1,
  FieldId::field_ccm_ccgr1_cg2,
  FieldId::field_ccm_ccgr1_cg3,
  FieldId::field_ccm_ccgr1_cg12,
  FieldId::field_ccm_ccgr1_cg13,
  FieldId::field_ccm_ccgr1_cg15,
  FieldId::field_ccm_ccgr2_cg13,
  FieldId::field_ccm_ccgr3_cg1,
  FieldId::field_ccm_ccgr3_cg3,
  FieldId::field_ccm_ccgr3_cg13,
  FieldId::field_ccm_ccgr5_cg12,
  FieldId::field_ccm_ccgr5_cg13,
  FieldId::field_ccm_ccgr6_cg7,
  FieldId::field_ccm_cscdr1_uart_clk_sel,
  FieldId::field_gpio1_dr_dr,
  FieldId::field_gpio1_dr_clear_dr_clear,
  FieldId::field_gpio1_dr_set_dr_set,
  FieldId::field_gpio1_dr_toggle_dr_toggle,
  FieldId::field_gpio1_edge_sel_gpio_edge_sel,
  FieldId::field_gpio1_gdir_gdir,
  FieldId::field_gpio1_icr1_icr0,
  FieldId::field_gpio1_icr1_icr1,
  FieldId::field_gpio1_icr1_icr2,
  FieldId::field_gpio1_icr1_icr3,
  FieldId::field_gpio1_icr1_icr4,
  FieldId::field_gpio1_icr1_icr5,
  FieldId::field_gpio1_icr1_icr6,
  FieldId::field_gpio1_icr1_icr7,
  FieldId::field_gpio1_icr1_icr8,
  FieldId::field_gpio1_icr1_icr9,
  FieldId::field_gpio1_icr1_icr10,
  FieldId::field_gpio1_icr1_icr11,
  FieldId::field_gpio1_icr1_icr12,
  FieldId::field_gpio1_icr1_icr13,
  FieldId::field_gpio1_icr1_icr14,
  FieldId::field_gpio1_icr1_icr15,
  FieldId::field_gpio1_icr2_icr16,
  FieldId::field_gpio1_icr2_icr17,
  FieldId::field_gpio1_icr2_icr18,
  FieldId::field_gpio1_icr2_icr19,
  FieldId::field_gpio1_icr2_icr20,
  FieldId::field_gpio1_icr2_icr21,
  FieldId::field_gpio1_icr2_icr22,
  FieldId::field_gpio1_icr2_icr23,
  FieldId::field_gpio1_icr2_icr24,
  FieldId::field_gpio1_icr2_icr25,
  FieldId::field_gpio1_icr2_icr26,
  FieldId::field_gpio1_icr2_icr27,
  FieldId::field_gpio1_icr2_icr28,
  FieldId::field_gpio1_icr2_icr29,
  FieldId::field_gpio1_icr2_icr30,
  FieldId::field_gpio1_icr2_icr31,
  FieldId::field_gpio1_imr_imr,
  FieldId::field_gpio1_isr_isr,
  FieldId::field_gpio1_psr_psr,
  FieldId::field_gpio10_dr_dr,
  FieldId::field_gpio10_dr_clear_dr_clear,
  FieldId::field_gpio10_dr_set_dr_set,
  FieldId::field_gpio10_dr_toggle_dr_toggle,
  FieldId::field_gpio10_edge_sel_gpio_edge_sel,
  FieldId::field_gpio10_gdir_gdir,
  FieldId::field_gpio10_icr1_icr0,
  FieldId::field_gpio10_icr1_icr1,
  FieldId::field_gpio10_icr1_icr2,
  FieldId::field_gpio10_icr1_icr3,
  FieldId::field_gpio10_icr1_icr4,
  FieldId::field_gpio10_icr1_icr5,
  FieldId::field_gpio10_icr1_icr6,
  FieldId::field_gpio10_icr1_icr7,
  FieldId::field_gpio10_icr1_icr8,
  FieldId::field_gpio10_icr1_icr9,
  FieldId::field_gpio10_icr1_icr10,
  FieldId::field_gpio10_icr1_icr11,
  FieldId::field_gpio10_icr1_icr12,
  FieldId::field_gpio10_icr1_icr13,
  FieldId::field_gpio10_icr1_icr14,
  FieldId::field_gpio10_icr1_icr15,
  FieldId::field_gpio10_icr2_icr16,
  FieldId::field_gpio10_icr2_icr17,
  FieldId::field_gpio10_icr2_icr18,
  FieldId::field_gpio10_icr2_icr19,
  FieldId::field_gpio10_icr2_icr20,
  FieldId::field_gpio10_icr2_icr21,
  FieldId::field_gpio10_icr2_icr22,
  FieldId::field_gpio10_icr2_icr23,
  FieldId::field_gpio10_icr2_icr24,
  FieldId::field_gpio10_icr2_icr25,
  FieldId::field_gpio10_icr2_icr26,
  FieldId::field_gpio10_icr2_icr27,
  FieldId::field_gpio10_icr2_icr28,
  FieldId::field_gpio10_icr2_icr29,
  FieldId::field_gpio10_icr2_icr30,
  FieldId::field_gpio10_icr2_icr31,
  FieldId::field_gpio10_imr_imr,
  FieldId::field_gpio10_isr_isr,
  FieldId::field_gpio10_psr_psr,
  FieldId::field_gpio2_dr_dr,
  FieldId::field_gpio2_dr_clear_dr_clear,
  FieldId::field_gpio2_dr_set_dr_set,
  FieldId::field_gpio2_dr_toggle_dr_toggle,
  FieldId::field_gpio2_edge_sel_gpio_edge_sel,
  FieldId::field_gpio2_gdir_gdir,
  FieldId::field_gpio2_icr1_icr0,
  FieldId::field_gpio2_icr1_icr1,
  FieldId::field_gpio2_icr1_icr2,
  FieldId::field_gpio2_icr1_icr3,
  FieldId::field_gpio2_icr1_icr4,
  FieldId::field_gpio2_icr1_icr5,
  FieldId::field_gpio2_icr1_icr6,
  FieldId::field_gpio2_icr1_icr7,
  FieldId::field_gpio2_icr1_icr8,
  FieldId::field_gpio2_icr1_icr9,
  FieldId::field_gpio2_icr1_icr10,
  FieldId::field_gpio2_icr1_icr11,
  FieldId::field_gpio2_icr1_icr12,
  FieldId::field_gpio2_icr1_icr13,
  FieldId::field_gpio2_icr1_icr14,
  FieldId::field_gpio2_icr1_icr15,
  FieldId::field_gpio2_icr2_icr16,
  FieldId::field_gpio2_icr2_icr17,
  FieldId::field_gpio2_icr2_icr18,
  FieldId::field_gpio2_icr2_icr19,
  FieldId::field_gpio2_icr2_icr20,
  FieldId::field_gpio2_icr2_icr21,
  FieldId::field_gpio2_icr2_icr22,
  FieldId::field_gpio2_icr2_icr23,
  FieldId::field_gpio2_icr2_icr24,
  FieldId::field_gpio2_icr2_icr25,
  FieldId::field_gpio2_icr2_icr26,
  FieldId::field_gpio2_icr2_icr27,
  FieldId::field_gpio2_icr2_icr28,
  FieldId::field_gpio2_icr2_icr29,
  FieldId::field_gpio2_icr2_icr30,
  FieldId::field_gpio2_icr2_icr31,
  FieldId::field_gpio2_imr_imr,
  FieldId::field_gpio2_isr_isr,
  FieldId::field_gpio2_psr_psr,
  FieldId::field_gpio3_dr_dr,
  FieldId::field_gpio3_dr_clear_dr_clear,
  FieldId::field_gpio3_dr_set_dr_set,
  FieldId::field_gpio3_dr_toggle_dr_toggle,
  FieldId::field_gpio3_edge_sel_gpio_edge_sel,
  FieldId::field_gpio3_gdir_gdir,
  FieldId::field_gpio3_icr1_icr0,
  FieldId::field_gpio3_icr1_icr1,
  FieldId::field_gpio3_icr1_icr2,
  FieldId::field_gpio3_icr1_icr3,
  FieldId::field_gpio3_icr1_icr4,
  FieldId::field_gpio3_icr1_icr5,
  FieldId::field_gpio3_icr1_icr6,
  FieldId::field_gpio3_icr1_icr7,
  FieldId::field_gpio3_icr1_icr8,
  FieldId::field_gpio3_icr1_icr9,
  FieldId::field_gpio3_icr1_icr10,
  FieldId::field_gpio3_icr1_icr11,
  FieldId::field_gpio3_icr1_icr12,
  FieldId::field_gpio3_icr1_icr13,
  FieldId::field_gpio3_icr1_icr14,
  FieldId::field_gpio3_icr1_icr15,
  FieldId::field_gpio3_icr2_icr16,
  FieldId::field_gpio3_icr2_icr17,
  FieldId::field_gpio3_icr2_icr18,
  FieldId::field_gpio3_icr2_icr19,
  FieldId::field_gpio3_icr2_icr20,
  FieldId::field_gpio3_icr2_icr21,
  FieldId::field_gpio3_icr2_icr22,
  FieldId::field_gpio3_icr2_icr23,
  FieldId::field_gpio3_icr2_icr24,
  FieldId::field_gpio3_icr2_icr25,
  FieldId::field_gpio3_icr2_icr26,
  FieldId::field_gpio3_icr2_icr27,
  FieldId::field_gpio3_icr2_icr28,
  FieldId::field_gpio3_icr2_icr29,
  FieldId::field_gpio3_icr2_icr30,
  FieldId::field_gpio3_icr2_icr31,
  FieldId::field_gpio3_imr_imr,
  FieldId::field_gpio3_isr_isr,
  FieldId::field_gpio3_psr_psr,
  FieldId::field_gpio4_dr_dr,
  FieldId::field_gpio4_dr_clear_dr_clear,
  FieldId::field_gpio4_dr_set_dr_set,
  FieldId::field_gpio4_dr_toggle_dr_toggle,
  FieldId::field_gpio4_edge_sel_gpio_edge_sel,
  FieldId::field_gpio4_gdir_gdir,
  FieldId::field_gpio4_icr1_icr0,
  FieldId::field_gpio4_icr1_icr1,
  FieldId::field_gpio4_icr1_icr2,
  FieldId::field_gpio4_icr1_icr3,
  FieldId::field_gpio4_icr1_icr4,
  FieldId::field_gpio4_icr1_icr5,
  FieldId::field_gpio4_icr1_icr6,
  FieldId::field_gpio4_icr1_icr7,
  FieldId::field_gpio4_icr1_icr8,
  FieldId::field_gpio4_icr1_icr9,
  FieldId::field_gpio4_icr1_icr10,
  FieldId::field_gpio4_icr1_icr11,
  FieldId::field_gpio4_icr1_icr12,
  FieldId::field_gpio4_icr1_icr13,
  FieldId::field_gpio4_icr1_icr14,
  FieldId::field_gpio4_icr1_icr15,
  FieldId::field_gpio4_icr2_icr16,
  FieldId::field_gpio4_icr2_icr17,
  FieldId::field_gpio4_icr2_icr18,
  FieldId::field_gpio4_icr2_icr19,
  FieldId::field_gpio4_icr2_icr20,
  FieldId::field_gpio4_icr2_icr21,
  FieldId::field_gpio4_icr2_icr22,
  FieldId::field_gpio4_icr2_icr23,
  FieldId::field_gpio4_icr2_icr24,
  FieldId::field_gpio4_icr2_icr25,
  FieldId::field_gpio4_icr2_icr26,
  FieldId::field_gpio4_icr2_icr27,
  FieldId::field_gpio4_icr2_icr28,
  FieldId::field_gpio4_icr2_icr29,
  FieldId::field_gpio4_icr2_icr30,
  FieldId::field_gpio4_icr2_icr31,
  FieldId::field_gpio4_imr_imr,
  FieldId::field_gpio4_isr_isr,
  FieldId::field_gpio4_psr_psr,
  FieldId::field_gpio5_dr_dr,
  FieldId::field_gpio5_dr_clear_dr_clear,
  FieldId::field_gpio5_dr_set_dr_set,
  FieldId::field_gpio5_dr_toggle_dr_toggle,
  FieldId::field_gpio5_edge_sel_gpio_edge_sel,
  FieldId::field_gpio5_gdir_gdir,
  FieldId::field_gpio5_icr1_icr0,
  FieldId::field_gpio5_icr1_icr1,
  FieldId::field_gpio5_icr1_icr2,
  FieldId::field_gpio5_icr1_icr3,
  FieldId::field_gpio5_icr1_icr4,
  FieldId::field_gpio5_icr1_icr5,
  FieldId::field_gpio5_icr1_icr6,
  FieldId::field_gpio5_icr1_icr7,
  FieldId::field_gpio5_icr1_icr8,
  FieldId::field_gpio5_icr1_icr9,
  FieldId::field_gpio5_icr1_icr10,
  FieldId::field_gpio5_icr1_icr11,
  FieldId::field_gpio5_icr1_icr12,
  FieldId::field_gpio5_icr1_icr13,
  FieldId::field_gpio5_icr1_icr14,
  FieldId::field_gpio5_icr1_icr15,
  FieldId::field_gpio5_icr2_icr16,
  FieldId::field_gpio5_icr2_icr17,
  FieldId::field_gpio5_icr2_icr18,
  FieldId::field_gpio5_icr2_icr19,
  FieldId::field_gpio5_icr2_icr20,
  FieldId::field_gpio5_icr2_icr21,
  FieldId::field_gpio5_icr2_icr22,
  FieldId::field_gpio5_icr2_icr23,
  FieldId::field_gpio5_icr2_icr24,
  FieldId::field_gpio5_icr2_icr25,
  FieldId::field_gpio5_icr2_icr26,
  FieldId::field_gpio5_icr2_icr27,
  FieldId::field_gpio5_icr2_icr28,
  FieldId::field_gpio5_icr2_icr29,
  FieldId::field_gpio5_icr2_icr30,
  FieldId::field_gpio5_icr2_icr31,
  FieldId::field_gpio5_imr_imr,
  FieldId::field_gpio5_isr_isr,
  FieldId::field_gpio5_psr_psr,
  FieldId::field_gpio6_dr_dr,
  FieldId::field_gpio6_dr_clear_dr_clear,
  FieldId::field_gpio6_dr_set_dr_set,
  FieldId::field_gpio6_dr_toggle_dr_toggle,
  FieldId::field_gpio6_edge_sel_gpio_edge_sel,
  FieldId::field_gpio6_gdir_gdir,
  FieldId::field_gpio6_icr1_icr0,
  FieldId::field_gpio6_icr1_icr1,
  FieldId::field_gpio6_icr1_icr2,
  FieldId::field_gpio6_icr1_icr3,
  FieldId::field_gpio6_icr1_icr4,
  FieldId::field_gpio6_icr1_icr5,
  FieldId::field_gpio6_icr1_icr6,
  FieldId::field_gpio6_icr1_icr7,
  FieldId::field_gpio6_icr1_icr8,
  FieldId::field_gpio6_icr1_icr9,
  FieldId::field_gpio6_icr1_icr10,
  FieldId::field_gpio6_icr1_icr11,
  FieldId::field_gpio6_icr1_icr12,
  FieldId::field_gpio6_icr1_icr13,
  FieldId::field_gpio6_icr1_icr14,
  FieldId::field_gpio6_icr1_icr15,
  FieldId::field_gpio6_icr2_icr16,
  FieldId::field_gpio6_icr2_icr17,
  FieldId::field_gpio6_icr2_icr18,
  FieldId::field_gpio6_icr2_icr19,
  FieldId::field_gpio6_icr2_icr20,
  FieldId::field_gpio6_icr2_icr21,
  FieldId::field_gpio6_icr2_icr22,
  FieldId::field_gpio6_icr2_icr23,
  FieldId::field_gpio6_icr2_icr24,
  FieldId::field_gpio6_icr2_icr25,
  FieldId::field_gpio6_icr2_icr26,
  FieldId::field_gpio6_icr2_icr27,
  FieldId::field_gpio6_icr2_icr28,
  FieldId::field_gpio6_icr2_icr29,
  FieldId::field_gpio6_icr2_icr30,
  FieldId::field_gpio6_icr2_icr31,
  FieldId::field_gpio6_imr_imr,
  FieldId::field_gpio6_isr_isr,
  FieldId::field_gpio6_psr_psr,
  FieldId::field_gpio7_dr_dr,
  FieldId::field_gpio7_dr_clear_dr_clear,
  FieldId::field_gpio7_dr_set_dr_set,
  FieldId::field_gpio7_dr_toggle_dr_toggle,
  FieldId::field_gpio7_edge_sel_gpio_edge_sel,
  FieldId::field_gpio7_gdir_gdir,
  FieldId::field_gpio7_icr1_icr0,
  FieldId::field_gpio7_icr1_icr1,
  FieldId::field_gpio7_icr1_icr2,
  FieldId::field_gpio7_icr1_icr3,
  FieldId::field_gpio7_icr1_icr4,
  FieldId::field_gpio7_icr1_icr5,
  FieldId::field_gpio7_icr1_icr6,
  FieldId::field_gpio7_icr1_icr7,
  FieldId::field_gpio7_icr1_icr8,
  FieldId::field_gpio7_icr1_icr9,
  FieldId::field_gpio7_icr1_icr10,
  FieldId::field_gpio7_icr1_icr11,
  FieldId::field_gpio7_icr1_icr12,
  FieldId::field_gpio7_icr1_icr13,
  FieldId::field_gpio7_icr1_icr14,
  FieldId::field_gpio7_icr1_icr15,
  FieldId::field_gpio7_icr2_icr16,
  FieldId::field_gpio7_icr2_icr17,
  FieldId::field_gpio7_icr2_icr18,
  FieldId::field_gpio7_icr2_icr19,
  FieldId::field_gpio7_icr2_icr20,
  FieldId::field_gpio7_icr2_icr21,
  FieldId::field_gpio7_icr2_icr22,
  FieldId::field_gpio7_icr2_icr23,
  FieldId::field_gpio7_icr2_icr24,
  FieldId::field_gpio7_icr2_icr25,
  FieldId::field_gpio7_icr2_icr26,
  FieldId::field_gpio7_icr2_icr27,
  FieldId::field_gpio7_icr2_icr28,
  FieldId::field_gpio7_icr2_icr29,
  FieldId::field_gpio7_icr2_icr30,
  FieldId::field_gpio7_icr2_icr31,
  FieldId::field_gpio7_imr_imr,
  FieldId::field_gpio7_isr_isr,
  FieldId::field_gpio7_psr_psr,
  FieldId::field_gpio8_dr_dr,
  FieldId::field_gpio8_dr_clear_dr_clear,
  FieldId::field_gpio8_dr_set_dr_set,
  FieldId::field_gpio8_dr_toggle_dr_toggle,
  FieldId::field_gpio8_edge_sel_gpio_edge_sel,
  FieldId::field_gpio8_gdir_gdir,
  FieldId::field_gpio8_icr1_icr0,
  FieldId::field_gpio8_icr1_icr1,
  FieldId::field_gpio8_icr1_icr2,
  FieldId::field_gpio8_icr1_icr3,
  FieldId::field_gpio8_icr1_icr4,
  FieldId::field_gpio8_icr1_icr5,
  FieldId::field_gpio8_icr1_icr6,
  FieldId::field_gpio8_icr1_icr7,
  FieldId::field_gpio8_icr1_icr8,
  FieldId::field_gpio8_icr1_icr9,
  FieldId::field_gpio8_icr1_icr10,
  FieldId::field_gpio8_icr1_icr11,
  FieldId::field_gpio8_icr1_icr12,
  FieldId::field_gpio8_icr1_icr13,
  FieldId::field_gpio8_icr1_icr14,
  FieldId::field_gpio8_icr1_icr15,
  FieldId::field_gpio8_icr2_icr16,
  FieldId::field_gpio8_icr2_icr17,
  FieldId::field_gpio8_icr2_icr18,
  FieldId::field_gpio8_icr2_icr19,
  FieldId::field_gpio8_icr2_icr20,
  FieldId::field_gpio8_icr2_icr21,
  FieldId::field_gpio8_icr2_icr22,
  FieldId::field_gpio8_icr2_icr23,
  FieldId::field_gpio8_icr2_icr24,
  FieldId::field_gpio8_icr2_icr25,
  FieldId::field_gpio8_icr2_icr26,
  FieldId::field_gpio8_icr2_icr27,
  FieldId::field_gpio8_icr2_icr28,
  FieldId::field_gpio8_icr2_icr29,
  FieldId::field_gpio8_icr2_icr30,
  FieldId::field_gpio8_icr2_icr31,
  FieldId::field_gpio8_imr_imr,
  FieldId::field_gpio8_isr_isr,
  FieldId::field_gpio8_psr_psr,
  FieldId::field_gpio9_dr_dr,
  FieldId::field_gpio9_dr_clear_dr_clear,
  FieldId::field_gpio9_dr_set_dr_set,
  FieldId::field_gpio9_dr_toggle_dr_toggle,
  FieldId::field_gpio9_edge_sel_gpio_edge_sel,
  FieldId::field_gpio9_gdir_gdir,
  FieldId::field_gpio9_icr1_icr0,
  FieldId::field_gpio9_icr1_icr1,
  FieldId::field_gpio9_icr1_icr2,
  FieldId::field_gpio9_icr1_icr3,
  FieldId::field_gpio9_icr1_icr4,
  FieldId::field_gpio9_icr1_icr5,
  FieldId::field_gpio9_icr1_icr6,
  FieldId::field_gpio9_icr1_icr7,
  FieldId::field_gpio9_icr1_icr8,
  FieldId::field_gpio9_icr1_icr9,
  FieldId::field_gpio9_icr1_icr10,
  FieldId::field_gpio9_icr1_icr11,
  FieldId::field_gpio9_icr1_icr12,
  FieldId::field_gpio9_icr1_icr13,
  FieldId::field_gpio9_icr1_icr14,
  FieldId::field_gpio9_icr1_icr15,
  FieldId::field_gpio9_icr2_icr16,
  FieldId::field_gpio9_icr2_icr17,
  FieldId::field_gpio9_icr2_icr18,
  FieldId::field_gpio9_icr2_icr19,
  FieldId::field_gpio9_icr2_icr20,
  FieldId::field_gpio9_icr2_icr21,
  FieldId::field_gpio9_icr2_icr22,
  FieldId::field_gpio9_icr2_icr23,
  FieldId::field_gpio9_icr2_icr24,
  FieldId::field_gpio9_icr2_icr25,
  FieldId::field_gpio9_icr2_icr26,
  FieldId::field_gpio9_icr2_icr27,
  FieldId::field_gpio9_icr2_icr28,
  FieldId::field_gpio9_icr2_icr29,
  FieldId::field_gpio9_icr2_icr30,
  FieldId::field_gpio9_icr2_icr31,
  FieldId::field_gpio9_imr_imr,
  FieldId::field_gpio9_isr_isr,
  FieldId::field_gpio9_psr_psr,
  FieldId::field_lpspi1_ccr_sckdiv,
  FieldId::field_lpspi1_ccr_dbt,
  FieldId::field_lpspi1_ccr_pcssck,
  FieldId::field_lpspi1_ccr_sckpcs,
  FieldId::field_lpspi1_cfgr0_hren,
  FieldId::field_lpspi1_cfgr0_hrpol,
  FieldId::field_lpspi1_cfgr0_hrsel,
  FieldId::field_lpspi1_cfgr0_cirfifo,
  FieldId::field_lpspi1_cfgr0_rdmo,
  FieldId::field_lpspi1_cfgr1_master,
  FieldId::field_lpspi1_cfgr1_sample,
  FieldId::field_lpspi1_cfgr1_autopcs,
  FieldId::field_lpspi1_cfgr1_nostall,
  FieldId::field_lpspi1_cfgr1_pcspol,
  FieldId::field_lpspi1_cfgr1_matcfg,
  FieldId::field_lpspi1_cfgr1_pincfg,
  FieldId::field_lpspi1_cfgr1_outcfg,
  FieldId::field_lpspi1_cfgr1_pcscfg,
  FieldId::field_lpspi1_cr_men,
  FieldId::field_lpspi1_cr_rst,
  FieldId::field_lpspi1_cr_dozen,
  FieldId::field_lpspi1_cr_dbgen,
  FieldId::field_lpspi1_cr_rtf,
  FieldId::field_lpspi1_cr_rrf,
  FieldId::field_lpspi1_der_tdde,
  FieldId::field_lpspi1_der_rdde,
  FieldId::field_lpspi1_dmr0_match0,
  FieldId::field_lpspi1_dmr1_match1,
  FieldId::field_lpspi1_fcr_txwater,
  FieldId::field_lpspi1_fcr_rxwater,
  FieldId::field_lpspi1_fsr_txcount,
  FieldId::field_lpspi1_fsr_rxcount,
  FieldId::field_lpspi1_ier_tdie,
  FieldId::field_lpspi1_ier_rdie,
  FieldId::field_lpspi1_ier_wcie,
  FieldId::field_lpspi1_ier_fcie,
  FieldId::field_lpspi1_ier_tcie,
  FieldId::field_lpspi1_ier_teie,
  FieldId::field_lpspi1_ier_reie,
  FieldId::field_lpspi1_ier_dmie,
  FieldId::field_lpspi1_param_txfifo,
  FieldId::field_lpspi1_param_rxfifo,
  FieldId::field_lpspi1_param_pcsnum,
  FieldId::field_lpspi1_rdr_data,
  FieldId::field_lpspi1_rsr_sof,
  FieldId::field_lpspi1_rsr_rxempty,
  FieldId::field_lpspi1_sr_tdf,
  FieldId::field_lpspi1_sr_rdf,
  FieldId::field_lpspi1_sr_wcf,
  FieldId::field_lpspi1_sr_fcf,
  FieldId::field_lpspi1_sr_tcf,
  FieldId::field_lpspi1_sr_tef,
  FieldId::field_lpspi1_sr_ref,
  FieldId::field_lpspi1_sr_dmf,
  FieldId::field_lpspi1_sr_mbf,
  FieldId::field_lpspi1_tcr_framesz,
  FieldId::field_lpspi1_tcr_width,
  FieldId::field_lpspi1_tcr_txmsk,
  FieldId::field_lpspi1_tcr_rxmsk,
  FieldId::field_lpspi1_tcr_contc,
  FieldId::field_lpspi1_tcr_cont,
  FieldId::field_lpspi1_tcr_bysw,
  FieldId::field_lpspi1_tcr_lsbf,
  FieldId::field_lpspi1_tcr_pcs,
  FieldId::field_lpspi1_tcr_prescale,
  FieldId::field_lpspi1_tcr_cpha,
  FieldId::field_lpspi1_tcr_cpol,
  FieldId::field_lpspi1_tdr_data,
  FieldId::field_lpspi1_verid_feature,
  FieldId::field_lpspi1_verid_minor,
  FieldId::field_lpspi1_verid_major,
  FieldId::field_lpspi2_ccr_sckdiv,
  FieldId::field_lpspi2_ccr_dbt,
  FieldId::field_lpspi2_ccr_pcssck,
  FieldId::field_lpspi2_ccr_sckpcs,
  FieldId::field_lpspi2_cfgr0_hren,
  FieldId::field_lpspi2_cfgr0_hrpol,
  FieldId::field_lpspi2_cfgr0_hrsel,
  FieldId::field_lpspi2_cfgr0_cirfifo,
  FieldId::field_lpspi2_cfgr0_rdmo,
  FieldId::field_lpspi2_cfgr1_master,
  FieldId::field_lpspi2_cfgr1_sample,
  FieldId::field_lpspi2_cfgr1_autopcs,
  FieldId::field_lpspi2_cfgr1_nostall,
  FieldId::field_lpspi2_cfgr1_pcspol,
  FieldId::field_lpspi2_cfgr1_matcfg,
  FieldId::field_lpspi2_cfgr1_pincfg,
  FieldId::field_lpspi2_cfgr1_outcfg,
  FieldId::field_lpspi2_cfgr1_pcscfg,
  FieldId::field_lpspi2_cr_men,
  FieldId::field_lpspi2_cr_rst,
  FieldId::field_lpspi2_cr_dozen,
  FieldId::field_lpspi2_cr_dbgen,
  FieldId::field_lpspi2_cr_rtf,
  FieldId::field_lpspi2_cr_rrf,
  FieldId::field_lpspi2_der_tdde,
  FieldId::field_lpspi2_der_rdde,
  FieldId::field_lpspi2_dmr0_match0,
  FieldId::field_lpspi2_dmr1_match1,
  FieldId::field_lpspi2_fcr_txwater,
  FieldId::field_lpspi2_fcr_rxwater,
  FieldId::field_lpspi2_fsr_txcount,
  FieldId::field_lpspi2_fsr_rxcount,
  FieldId::field_lpspi2_ier_tdie,
  FieldId::field_lpspi2_ier_rdie,
  FieldId::field_lpspi2_ier_wcie,
  FieldId::field_lpspi2_ier_fcie,
  FieldId::field_lpspi2_ier_tcie,
  FieldId::field_lpspi2_ier_teie,
  FieldId::field_lpspi2_ier_reie,
  FieldId::field_lpspi2_ier_dmie,
  FieldId::field_lpspi2_param_txfifo,
  FieldId::field_lpspi2_param_rxfifo,
  FieldId::field_lpspi2_param_pcsnum,
  FieldId::field_lpspi2_rdr_data,
  FieldId::field_lpspi2_rsr_sof,
  FieldId::field_lpspi2_rsr_rxempty,
  FieldId::field_lpspi2_sr_tdf,
  FieldId::field_lpspi2_sr_rdf,
  FieldId::field_lpspi2_sr_wcf,
  FieldId::field_lpspi2_sr_fcf,
  FieldId::field_lpspi2_sr_tcf,
  FieldId::field_lpspi2_sr_tef,
  FieldId::field_lpspi2_sr_ref,
  FieldId::field_lpspi2_sr_dmf,
  FieldId::field_lpspi2_sr_mbf,
  FieldId::field_lpspi2_tcr_framesz,
  FieldId::field_lpspi2_tcr_width,
  FieldId::field_lpspi2_tcr_txmsk,
  FieldId::field_lpspi2_tcr_rxmsk,
  FieldId::field_lpspi2_tcr_contc,
  FieldId::field_lpspi2_tcr_cont,
  FieldId::field_lpspi2_tcr_bysw,
  FieldId::field_lpspi2_tcr_lsbf,
  FieldId::field_lpspi2_tcr_pcs,
  FieldId::field_lpspi2_tcr_prescale,
  FieldId::field_lpspi2_tcr_cpha,
  FieldId::field_lpspi2_tcr_cpol,
  FieldId::field_lpspi2_tdr_data,
  FieldId::field_lpspi2_verid_feature,
  FieldId::field_lpspi2_verid_minor,
  FieldId::field_lpspi2_verid_major,
  FieldId::field_lpspi3_ccr_sckdiv,
  FieldId::field_lpspi3_ccr_dbt,
  FieldId::field_lpspi3_ccr_pcssck,
  FieldId::field_lpspi3_ccr_sckpcs,
  FieldId::field_lpspi3_cfgr0_hren,
  FieldId::field_lpspi3_cfgr0_hrpol,
  FieldId::field_lpspi3_cfgr0_hrsel,
  FieldId::field_lpspi3_cfgr0_cirfifo,
  FieldId::field_lpspi3_cfgr0_rdmo,
  FieldId::field_lpspi3_cfgr1_master,
  FieldId::field_lpspi3_cfgr1_sample,
  FieldId::field_lpspi3_cfgr1_autopcs,
  FieldId::field_lpspi3_cfgr1_nostall,
  FieldId::field_lpspi3_cfgr1_pcspol,
  FieldId::field_lpspi3_cfgr1_matcfg,
  FieldId::field_lpspi3_cfgr1_pincfg,
  FieldId::field_lpspi3_cfgr1_outcfg,
  FieldId::field_lpspi3_cfgr1_pcscfg,
  FieldId::field_lpspi3_cr_men,
  FieldId::field_lpspi3_cr_rst,
  FieldId::field_lpspi3_cr_dozen,
  FieldId::field_lpspi3_cr_dbgen,
  FieldId::field_lpspi3_cr_rtf,
  FieldId::field_lpspi3_cr_rrf,
  FieldId::field_lpspi3_der_tdde,
  FieldId::field_lpspi3_der_rdde,
  FieldId::field_lpspi3_dmr0_match0,
  FieldId::field_lpspi3_dmr1_match1,
  FieldId::field_lpspi3_fcr_txwater,
  FieldId::field_lpspi3_fcr_rxwater,
  FieldId::field_lpspi3_fsr_txcount,
  FieldId::field_lpspi3_fsr_rxcount,
  FieldId::field_lpspi3_ier_tdie,
  FieldId::field_lpspi3_ier_rdie,
  FieldId::field_lpspi3_ier_wcie,
  FieldId::field_lpspi3_ier_fcie,
  FieldId::field_lpspi3_ier_tcie,
  FieldId::field_lpspi3_ier_teie,
  FieldId::field_lpspi3_ier_reie,
  FieldId::field_lpspi3_ier_dmie,
  FieldId::field_lpspi3_param_txfifo,
  FieldId::field_lpspi3_param_rxfifo,
  FieldId::field_lpspi3_param_pcsnum,
  FieldId::field_lpspi3_rdr_data,
  FieldId::field_lpspi3_rsr_sof,
  FieldId::field_lpspi3_rsr_rxempty,
  FieldId::field_lpspi3_sr_tdf,
  FieldId::field_lpspi3_sr_rdf,
  FieldId::field_lpspi3_sr_wcf,
  FieldId::field_lpspi3_sr_fcf,
  FieldId::field_lpspi3_sr_tcf,
  FieldId::field_lpspi3_sr_tef,
  FieldId::field_lpspi3_sr_ref,
  FieldId::field_lpspi3_sr_dmf,
  FieldId::field_lpspi3_sr_mbf,
  FieldId::field_lpspi3_tcr_framesz,
  FieldId::field_lpspi3_tcr_width,
  FieldId::field_lpspi3_tcr_txmsk,
  FieldId::field_lpspi3_tcr_rxmsk,
  FieldId::field_lpspi3_tcr_contc,
  FieldId::field_lpspi3_tcr_cont,
  FieldId::field_lpspi3_tcr_bysw,
  FieldId::field_lpspi3_tcr_lsbf,
  FieldId::field_lpspi3_tcr_pcs,
  FieldId::field_lpspi3_tcr_prescale,
  FieldId::field_lpspi3_tcr_cpha,
  FieldId::field_lpspi3_tcr_cpol,
  FieldId::field_lpspi3_tdr_data,
  FieldId::field_lpspi3_verid_feature,
  FieldId::field_lpspi3_verid_minor,
  FieldId::field_lpspi3_verid_major,
  FieldId::field_lpspi4_ccr_sckdiv,
  FieldId::field_lpspi4_ccr_dbt,
  FieldId::field_lpspi4_ccr_pcssck,
  FieldId::field_lpspi4_ccr_sckpcs,
  FieldId::field_lpspi4_cfgr0_hren,
  FieldId::field_lpspi4_cfgr0_hrpol,
  FieldId::field_lpspi4_cfgr0_hrsel,
  FieldId::field_lpspi4_cfgr0_cirfifo,
  FieldId::field_lpspi4_cfgr0_rdmo,
  FieldId::field_lpspi4_cfgr1_master,
  FieldId::field_lpspi4_cfgr1_sample,
  FieldId::field_lpspi4_cfgr1_autopcs,
  FieldId::field_lpspi4_cfgr1_nostall,
  FieldId::field_lpspi4_cfgr1_pcspol,
  FieldId::field_lpspi4_cfgr1_matcfg,
  FieldId::field_lpspi4_cfgr1_pincfg,
  FieldId::field_lpspi4_cfgr1_outcfg,
  FieldId::field_lpspi4_cfgr1_pcscfg,
  FieldId::field_lpspi4_cr_men,
  FieldId::field_lpspi4_cr_rst,
  FieldId::field_lpspi4_cr_dozen,
  FieldId::field_lpspi4_cr_dbgen,
  FieldId::field_lpspi4_cr_rtf,
  FieldId::field_lpspi4_cr_rrf,
  FieldId::field_lpspi4_der_tdde,
  FieldId::field_lpspi4_der_rdde,
  FieldId::field_lpspi4_dmr0_match0,
  FieldId::field_lpspi4_dmr1_match1,
  FieldId::field_lpspi4_fcr_txwater,
  FieldId::field_lpspi4_fcr_rxwater,
  FieldId::field_lpspi4_fsr_txcount,
  FieldId::field_lpspi4_fsr_rxcount,
  FieldId::field_lpspi4_ier_tdie,
  FieldId::field_lpspi4_ier_rdie,
  FieldId::field_lpspi4_ier_wcie,
  FieldId::field_lpspi4_ier_fcie,
  FieldId::field_lpspi4_ier_tcie,
  FieldId::field_lpspi4_ier_teie,
  FieldId::field_lpspi4_ier_reie,
  FieldId::field_lpspi4_ier_dmie,
  FieldId::field_lpspi4_param_txfifo,
  FieldId::field_lpspi4_param_rxfifo,
  FieldId::field_lpspi4_param_pcsnum,
  FieldId::field_lpspi4_rdr_data,
  FieldId::field_lpspi4_rsr_sof,
  FieldId::field_lpspi4_rsr_rxempty,
  FieldId::field_lpspi4_sr_tdf,
  FieldId::field_lpspi4_sr_rdf,
  FieldId::field_lpspi4_sr_wcf,
  FieldId::field_lpspi4_sr_fcf,
  FieldId::field_lpspi4_sr_tcf,
  FieldId::field_lpspi4_sr_tef,
  FieldId::field_lpspi4_sr_ref,
  FieldId::field_lpspi4_sr_dmf,
  FieldId::field_lpspi4_sr_mbf,
  FieldId::field_lpspi4_tcr_framesz,
  FieldId::field_lpspi4_tcr_width,
  FieldId::field_lpspi4_tcr_txmsk,
  FieldId::field_lpspi4_tcr_rxmsk,
  FieldId::field_lpspi4_tcr_contc,
  FieldId::field_lpspi4_tcr_cont,
  FieldId::field_lpspi4_tcr_bysw,
  FieldId::field_lpspi4_tcr_lsbf,
  FieldId::field_lpspi4_tcr_pcs,
  FieldId::field_lpspi4_tcr_prescale,
  FieldId::field_lpspi4_tcr_cpha,
  FieldId::field_lpspi4_tcr_cpol,
  FieldId::field_lpspi4_tdr_data,
  FieldId::field_lpspi4_verid_feature,
  FieldId::field_lpspi4_verid_minor,
  FieldId::field_lpspi4_verid_major,
  FieldId::field_lpuart1_baud_sbr,
  FieldId::field_lpuart1_baud_sbns,
  FieldId::field_lpuart1_baud_rxedgie,
  FieldId::field_lpuart1_baud_lbkdie,
  FieldId::field_lpuart1_baud_resyncdis,
  FieldId::field_lpuart1_baud_bothedge,
  FieldId::field_lpuart1_baud_matcfg,
  FieldId::field_lpuart1_baud_rdmae,
  FieldId::field_lpuart1_baud_tdmae,
  FieldId::field_lpuart1_baud_osr,
  FieldId::field_lpuart1_baud_m10,
  FieldId::field_lpuart1_baud_maen2,
  FieldId::field_lpuart1_baud_maen1,
  FieldId::field_lpuart1_ctrl_pt,
  FieldId::field_lpuart1_ctrl_pe,
  FieldId::field_lpuart1_ctrl_ilt,
  FieldId::field_lpuart1_ctrl_wake,
  FieldId::field_lpuart1_ctrl_m,
  FieldId::field_lpuart1_ctrl_rsrc,
  FieldId::field_lpuart1_ctrl_dozeen,
  FieldId::field_lpuart1_ctrl_loops,
  FieldId::field_lpuart1_ctrl_idlecfg,
  FieldId::field_lpuart1_ctrl_m7,
  FieldId::field_lpuart1_ctrl_ma2ie,
  FieldId::field_lpuart1_ctrl_ma1ie,
  FieldId::field_lpuart1_ctrl_sbk,
  FieldId::field_lpuart1_ctrl_rwu,
  FieldId::field_lpuart1_ctrl_re,
  FieldId::field_lpuart1_ctrl_te,
  FieldId::field_lpuart1_ctrl_ilie,
  FieldId::field_lpuart1_ctrl_rie,
  FieldId::field_lpuart1_ctrl_tcie,
  FieldId::field_lpuart1_ctrl_tie,
  FieldId::field_lpuart1_ctrl_peie,
  FieldId::field_lpuart1_ctrl_feie,
  FieldId::field_lpuart1_ctrl_neie,
  FieldId::field_lpuart1_ctrl_orie,
  FieldId::field_lpuart1_ctrl_txinv,
  FieldId::field_lpuart1_ctrl_txdir,
  FieldId::field_lpuart1_ctrl_r9t8,
  FieldId::field_lpuart1_ctrl_r8t9,
  FieldId::field_lpuart1_data_r0t0,
  FieldId::field_lpuart1_data_r1t1,
  FieldId::field_lpuart1_data_r2t2,
  FieldId::field_lpuart1_data_r3t3,
  FieldId::field_lpuart1_data_r4t4,
  FieldId::field_lpuart1_data_r5t5,
  FieldId::field_lpuart1_data_r6t6,
  FieldId::field_lpuart1_data_r7t7,
  FieldId::field_lpuart1_data_r8t8,
  FieldId::field_lpuart1_data_r9t9,
  FieldId::field_lpuart1_data_idline,
  FieldId::field_lpuart1_data_rxempt,
  FieldId::field_lpuart1_data_fretsc,
  FieldId::field_lpuart1_data_paritye,
  FieldId::field_lpuart1_data_noisy,
  FieldId::field_lpuart1_fifo_rxfifosize,
  FieldId::field_lpuart1_fifo_rxfe,
  FieldId::field_lpuart1_fifo_txfifosize,
  FieldId::field_lpuart1_fifo_txfe,
  FieldId::field_lpuart1_fifo_rxufe,
  FieldId::field_lpuart1_fifo_txofe,
  FieldId::field_lpuart1_fifo_rxiden,
  FieldId::field_lpuart1_fifo_rxflush,
  FieldId::field_lpuart1_fifo_txflush,
  FieldId::field_lpuart1_fifo_rxuf,
  FieldId::field_lpuart1_fifo_txof,
  FieldId::field_lpuart1_fifo_rxempt,
  FieldId::field_lpuart1_fifo_txempt,
  FieldId::field_lpuart1_global_rst,
  FieldId::field_lpuart1_match_ma1,
  FieldId::field_lpuart1_match_ma2,
  FieldId::field_lpuart1_modir_txctse,
  FieldId::field_lpuart1_modir_txrtse,
  FieldId::field_lpuart1_modir_txrtspol,
  FieldId::field_lpuart1_modir_rxrtse,
  FieldId::field_lpuart1_modir_txctsc,
  FieldId::field_lpuart1_modir_txctssrc,
  FieldId::field_lpuart1_modir_rtswater,
  FieldId::field_lpuart1_modir_tnp,
  FieldId::field_lpuart1_modir_iren,
  FieldId::field_lpuart1_param_txfifo,
  FieldId::field_lpuart1_param_rxfifo,
  FieldId::field_lpuart1_pincfg_trgsel,
  FieldId::field_lpuart1_stat_ma2f,
  FieldId::field_lpuart1_stat_ma1f,
  FieldId::field_lpuart1_stat_pf,
  FieldId::field_lpuart1_stat_fe,
  FieldId::field_lpuart1_stat_nf,
  FieldId::field_lpuart1_stat_or,
  FieldId::field_lpuart1_stat_idle,
  FieldId::field_lpuart1_stat_rdrf,
  FieldId::field_lpuart1_stat_tc,
  FieldId::field_lpuart1_stat_tdre,
  FieldId::field_lpuart1_stat_raf,
  FieldId::field_lpuart1_stat_lbkde,
  FieldId::field_lpuart1_stat_brk13,
  FieldId::field_lpuart1_stat_rwuid,
  FieldId::field_lpuart1_stat_rxinv,
  FieldId::field_lpuart1_stat_msbf,
  FieldId::field_lpuart1_stat_rxedgif,
  FieldId::field_lpuart1_stat_lbkdif,
  FieldId::field_lpuart1_verid_feature,
  FieldId::field_lpuart1_verid_minor,
  FieldId::field_lpuart1_verid_major,
  FieldId::field_lpuart1_water_txwater,
  FieldId::field_lpuart1_water_txcount,
  FieldId::field_lpuart1_water_rxwater,
  FieldId::field_lpuart1_water_rxcount,
  FieldId::field_lpuart2_baud_sbr,
  FieldId::field_lpuart2_baud_sbns,
  FieldId::field_lpuart2_baud_rxedgie,
  FieldId::field_lpuart2_baud_lbkdie,
  FieldId::field_lpuart2_baud_resyncdis,
  FieldId::field_lpuart2_baud_bothedge,
  FieldId::field_lpuart2_baud_matcfg,
  FieldId::field_lpuart2_baud_rdmae,
  FieldId::field_lpuart2_baud_tdmae,
  FieldId::field_lpuart2_baud_osr,
  FieldId::field_lpuart2_baud_m10,
  FieldId::field_lpuart2_baud_maen2,
  FieldId::field_lpuart2_baud_maen1,
  FieldId::field_lpuart2_ctrl_pt,
  FieldId::field_lpuart2_ctrl_pe,
  FieldId::field_lpuart2_ctrl_ilt,
  FieldId::field_lpuart2_ctrl_wake,
  FieldId::field_lpuart2_ctrl_m,
  FieldId::field_lpuart2_ctrl_rsrc,
  FieldId::field_lpuart2_ctrl_dozeen,
  FieldId::field_lpuart2_ctrl_loops,
  FieldId::field_lpuart2_ctrl_idlecfg,
  FieldId::field_lpuart2_ctrl_m7,
  FieldId::field_lpuart2_ctrl_ma2ie,
  FieldId::field_lpuart2_ctrl_ma1ie,
  FieldId::field_lpuart2_ctrl_sbk,
  FieldId::field_lpuart2_ctrl_rwu,
  FieldId::field_lpuart2_ctrl_re,
  FieldId::field_lpuart2_ctrl_te,
  FieldId::field_lpuart2_ctrl_ilie,
  FieldId::field_lpuart2_ctrl_rie,
  FieldId::field_lpuart2_ctrl_tcie,
  FieldId::field_lpuart2_ctrl_tie,
  FieldId::field_lpuart2_ctrl_peie,
  FieldId::field_lpuart2_ctrl_feie,
  FieldId::field_lpuart2_ctrl_neie,
  FieldId::field_lpuart2_ctrl_orie,
  FieldId::field_lpuart2_ctrl_txinv,
  FieldId::field_lpuart2_ctrl_txdir,
  FieldId::field_lpuart2_ctrl_r9t8,
  FieldId::field_lpuart2_ctrl_r8t9,
  FieldId::field_lpuart2_data_r0t0,
  FieldId::field_lpuart2_data_r1t1,
  FieldId::field_lpuart2_data_r2t2,
  FieldId::field_lpuart2_data_r3t3,
  FieldId::field_lpuart2_data_r4t4,
  FieldId::field_lpuart2_data_r5t5,
  FieldId::field_lpuart2_data_r6t6,
  FieldId::field_lpuart2_data_r7t7,
  FieldId::field_lpuart2_data_r8t8,
  FieldId::field_lpuart2_data_r9t9,
  FieldId::field_lpuart2_data_idline,
  FieldId::field_lpuart2_data_rxempt,
  FieldId::field_lpuart2_data_fretsc,
  FieldId::field_lpuart2_data_paritye,
  FieldId::field_lpuart2_data_noisy,
  FieldId::field_lpuart2_fifo_rxfifosize,
  FieldId::field_lpuart2_fifo_rxfe,
  FieldId::field_lpuart2_fifo_txfifosize,
  FieldId::field_lpuart2_fifo_txfe,
  FieldId::field_lpuart2_fifo_rxufe,
  FieldId::field_lpuart2_fifo_txofe,
  FieldId::field_lpuart2_fifo_rxiden,
  FieldId::field_lpuart2_fifo_rxflush,
  FieldId::field_lpuart2_fifo_txflush,
  FieldId::field_lpuart2_fifo_rxuf,
  FieldId::field_lpuart2_fifo_txof,
  FieldId::field_lpuart2_fifo_rxempt,
  FieldId::field_lpuart2_fifo_txempt,
  FieldId::field_lpuart2_global_rst,
  FieldId::field_lpuart2_match_ma1,
  FieldId::field_lpuart2_match_ma2,
  FieldId::field_lpuart2_modir_txctse,
  FieldId::field_lpuart2_modir_txrtse,
  FieldId::field_lpuart2_modir_txrtspol,
  FieldId::field_lpuart2_modir_rxrtse,
  FieldId::field_lpuart2_modir_txctsc,
  FieldId::field_lpuart2_modir_txctssrc,
  FieldId::field_lpuart2_modir_rtswater,
  FieldId::field_lpuart2_modir_tnp,
  FieldId::field_lpuart2_modir_iren,
  FieldId::field_lpuart2_param_txfifo,
  FieldId::field_lpuart2_param_rxfifo,
  FieldId::field_lpuart2_pincfg_trgsel,
  FieldId::field_lpuart2_stat_ma2f,
  FieldId::field_lpuart2_stat_ma1f,
  FieldId::field_lpuart2_stat_pf,
  FieldId::field_lpuart2_stat_fe,
  FieldId::field_lpuart2_stat_nf,
  FieldId::field_lpuart2_stat_or,
  FieldId::field_lpuart2_stat_idle,
  FieldId::field_lpuart2_stat_rdrf,
  FieldId::field_lpuart2_stat_tc,
  FieldId::field_lpuart2_stat_tdre,
  FieldId::field_lpuart2_stat_raf,
  FieldId::field_lpuart2_stat_lbkde,
  FieldId::field_lpuart2_stat_brk13,
  FieldId::field_lpuart2_stat_rwuid,
  FieldId::field_lpuart2_stat_rxinv,
  FieldId::field_lpuart2_stat_msbf,
  FieldId::field_lpuart2_stat_rxedgif,
  FieldId::field_lpuart2_stat_lbkdif,
  FieldId::field_lpuart2_verid_feature,
  FieldId::field_lpuart2_verid_minor,
  FieldId::field_lpuart2_verid_major,
  FieldId::field_lpuart2_water_txwater,
  FieldId::field_lpuart2_water_txcount,
  FieldId::field_lpuart2_water_rxwater,
  FieldId::field_lpuart2_water_rxcount,
  FieldId::field_lpuart3_baud_sbr,
  FieldId::field_lpuart3_baud_sbns,
  FieldId::field_lpuart3_baud_rxedgie,
  FieldId::field_lpuart3_baud_lbkdie,
  FieldId::field_lpuart3_baud_resyncdis,
  FieldId::field_lpuart3_baud_bothedge,
  FieldId::field_lpuart3_baud_matcfg,
  FieldId::field_lpuart3_baud_rdmae,
  FieldId::field_lpuart3_baud_tdmae,
  FieldId::field_lpuart3_baud_osr,
  FieldId::field_lpuart3_baud_m10,
  FieldId::field_lpuart3_baud_maen2,
  FieldId::field_lpuart3_baud_maen1,
  FieldId::field_lpuart3_ctrl_pt,
  FieldId::field_lpuart3_ctrl_pe,
  FieldId::field_lpuart3_ctrl_ilt,
  FieldId::field_lpuart3_ctrl_wake,
  FieldId::field_lpuart3_ctrl_m,
  FieldId::field_lpuart3_ctrl_rsrc,
  FieldId::field_lpuart3_ctrl_dozeen,
  FieldId::field_lpuart3_ctrl_loops,
  FieldId::field_lpuart3_ctrl_idlecfg,
  FieldId::field_lpuart3_ctrl_m7,
  FieldId::field_lpuart3_ctrl_ma2ie,
  FieldId::field_lpuart3_ctrl_ma1ie,
  FieldId::field_lpuart3_ctrl_sbk,
  FieldId::field_lpuart3_ctrl_rwu,
  FieldId::field_lpuart3_ctrl_re,
  FieldId::field_lpuart3_ctrl_te,
  FieldId::field_lpuart3_ctrl_ilie,
  FieldId::field_lpuart3_ctrl_rie,
  FieldId::field_lpuart3_ctrl_tcie,
  FieldId::field_lpuart3_ctrl_tie,
  FieldId::field_lpuart3_ctrl_peie,
  FieldId::field_lpuart3_ctrl_feie,
  FieldId::field_lpuart3_ctrl_neie,
  FieldId::field_lpuart3_ctrl_orie,
  FieldId::field_lpuart3_ctrl_txinv,
  FieldId::field_lpuart3_ctrl_txdir,
  FieldId::field_lpuart3_ctrl_r9t8,
  FieldId::field_lpuart3_ctrl_r8t9,
  FieldId::field_lpuart3_data_r0t0,
  FieldId::field_lpuart3_data_r1t1,
  FieldId::field_lpuart3_data_r2t2,
  FieldId::field_lpuart3_data_r3t3,
  FieldId::field_lpuart3_data_r4t4,
  FieldId::field_lpuart3_data_r5t5,
  FieldId::field_lpuart3_data_r6t6,
  FieldId::field_lpuart3_data_r7t7,
  FieldId::field_lpuart3_data_r8t8,
  FieldId::field_lpuart3_data_r9t9,
  FieldId::field_lpuart3_data_idline,
  FieldId::field_lpuart3_data_rxempt,
  FieldId::field_lpuart3_data_fretsc,
  FieldId::field_lpuart3_data_paritye,
  FieldId::field_lpuart3_data_noisy,
  FieldId::field_lpuart3_fifo_rxfifosize,
  FieldId::field_lpuart3_fifo_rxfe,
  FieldId::field_lpuart3_fifo_txfifosize,
  FieldId::field_lpuart3_fifo_txfe,
  FieldId::field_lpuart3_fifo_rxufe,
  FieldId::field_lpuart3_fifo_txofe,
  FieldId::field_lpuart3_fifo_rxiden,
  FieldId::field_lpuart3_fifo_rxflush,
  FieldId::field_lpuart3_fifo_txflush,
  FieldId::field_lpuart3_fifo_rxuf,
  FieldId::field_lpuart3_fifo_txof,
  FieldId::field_lpuart3_fifo_rxempt,
  FieldId::field_lpuart3_fifo_txempt,
  FieldId::field_lpuart3_global_rst,
  FieldId::field_lpuart3_match_ma1,
  FieldId::field_lpuart3_match_ma2,
  FieldId::field_lpuart3_modir_txctse,
  FieldId::field_lpuart3_modir_txrtse,
  FieldId::field_lpuart3_modir_txrtspol,
  FieldId::field_lpuart3_modir_rxrtse,
  FieldId::field_lpuart3_modir_txctsc,
  FieldId::field_lpuart3_modir_txctssrc,
  FieldId::field_lpuart3_modir_rtswater,
  FieldId::field_lpuart3_modir_tnp,
  FieldId::field_lpuart3_modir_iren,
  FieldId::field_lpuart3_param_txfifo,
  FieldId::field_lpuart3_param_rxfifo,
  FieldId::field_lpuart3_pincfg_trgsel,
  FieldId::field_lpuart3_stat_ma2f,
  FieldId::field_lpuart3_stat_ma1f,
  FieldId::field_lpuart3_stat_pf,
  FieldId::field_lpuart3_stat_fe,
  FieldId::field_lpuart3_stat_nf,
  FieldId::field_lpuart3_stat_or,
  FieldId::field_lpuart3_stat_idle,
  FieldId::field_lpuart3_stat_rdrf,
  FieldId::field_lpuart3_stat_tc,
  FieldId::field_lpuart3_stat_tdre,
  FieldId::field_lpuart3_stat_raf,
  FieldId::field_lpuart3_stat_lbkde,
  FieldId::field_lpuart3_stat_brk13,
  FieldId::field_lpuart3_stat_rwuid,
  FieldId::field_lpuart3_stat_rxinv,
  FieldId::field_lpuart3_stat_msbf,
  FieldId::field_lpuart3_stat_rxedgif,
  FieldId::field_lpuart3_stat_lbkdif,
  FieldId::field_lpuart3_verid_feature,
  FieldId::field_lpuart3_verid_minor,
  FieldId::field_lpuart3_verid_major,
  FieldId::field_lpuart3_water_txwater,
  FieldId::field_lpuart3_water_txcount,
  FieldId::field_lpuart3_water_rxwater,
  FieldId::field_lpuart3_water_rxcount,
  FieldId::field_lpuart4_baud_sbr,
  FieldId::field_lpuart4_baud_sbns,
  FieldId::field_lpuart4_baud_rxedgie,
  FieldId::field_lpuart4_baud_lbkdie,
  FieldId::field_lpuart4_baud_resyncdis,
  FieldId::field_lpuart4_baud_bothedge,
  FieldId::field_lpuart4_baud_matcfg,
  FieldId::field_lpuart4_baud_rdmae,
  FieldId::field_lpuart4_baud_tdmae,
  FieldId::field_lpuart4_baud_osr,
  FieldId::field_lpuart4_baud_m10,
  FieldId::field_lpuart4_baud_maen2,
  FieldId::field_lpuart4_baud_maen1,
  FieldId::field_lpuart4_ctrl_pt,
  FieldId::field_lpuart4_ctrl_pe,
  FieldId::field_lpuart4_ctrl_ilt,
  FieldId::field_lpuart4_ctrl_wake,
  FieldId::field_lpuart4_ctrl_m,
  FieldId::field_lpuart4_ctrl_rsrc,
  FieldId::field_lpuart4_ctrl_dozeen,
  FieldId::field_lpuart4_ctrl_loops,
  FieldId::field_lpuart4_ctrl_idlecfg,
  FieldId::field_lpuart4_ctrl_m7,
  FieldId::field_lpuart4_ctrl_ma2ie,
  FieldId::field_lpuart4_ctrl_ma1ie,
  FieldId::field_lpuart4_ctrl_sbk,
  FieldId::field_lpuart4_ctrl_rwu,
  FieldId::field_lpuart4_ctrl_re,
  FieldId::field_lpuart4_ctrl_te,
  FieldId::field_lpuart4_ctrl_ilie,
  FieldId::field_lpuart4_ctrl_rie,
  FieldId::field_lpuart4_ctrl_tcie,
  FieldId::field_lpuart4_ctrl_tie,
  FieldId::field_lpuart4_ctrl_peie,
  FieldId::field_lpuart4_ctrl_feie,
  FieldId::field_lpuart4_ctrl_neie,
  FieldId::field_lpuart4_ctrl_orie,
  FieldId::field_lpuart4_ctrl_txinv,
  FieldId::field_lpuart4_ctrl_txdir,
  FieldId::field_lpuart4_ctrl_r9t8,
  FieldId::field_lpuart4_ctrl_r8t9,
  FieldId::field_lpuart4_data_r0t0,
  FieldId::field_lpuart4_data_r1t1,
  FieldId::field_lpuart4_data_r2t2,
  FieldId::field_lpuart4_data_r3t3,
  FieldId::field_lpuart4_data_r4t4,
  FieldId::field_lpuart4_data_r5t5,
  FieldId::field_lpuart4_data_r6t6,
  FieldId::field_lpuart4_data_r7t7,
  FieldId::field_lpuart4_data_r8t8,
  FieldId::field_lpuart4_data_r9t9,
  FieldId::field_lpuart4_data_idline,
  FieldId::field_lpuart4_data_rxempt,
  FieldId::field_lpuart4_data_fretsc,
  FieldId::field_lpuart4_data_paritye,
  FieldId::field_lpuart4_data_noisy,
  FieldId::field_lpuart4_fifo_rxfifosize,
  FieldId::field_lpuart4_fifo_rxfe,
  FieldId::field_lpuart4_fifo_txfifosize,
  FieldId::field_lpuart4_fifo_txfe,
  FieldId::field_lpuart4_fifo_rxufe,
  FieldId::field_lpuart4_fifo_txofe,
  FieldId::field_lpuart4_fifo_rxiden,
  FieldId::field_lpuart4_fifo_rxflush,
  FieldId::field_lpuart4_fifo_txflush,
  FieldId::field_lpuart4_fifo_rxuf,
  FieldId::field_lpuart4_fifo_txof,
  FieldId::field_lpuart4_fifo_rxempt,
  FieldId::field_lpuart4_fifo_txempt,
  FieldId::field_lpuart4_global_rst,
  FieldId::field_lpuart4_match_ma1,
  FieldId::field_lpuart4_match_ma2,
  FieldId::field_lpuart4_modir_txctse,
  FieldId::field_lpuart4_modir_txrtse,
  FieldId::field_lpuart4_modir_txrtspol,
  FieldId::field_lpuart4_modir_rxrtse,
  FieldId::field_lpuart4_modir_txctsc,
  FieldId::field_lpuart4_modir_txctssrc,
  FieldId::field_lpuart4_modir_rtswater,
  FieldId::field_lpuart4_modir_tnp,
  FieldId::field_lpuart4_modir_iren,
  FieldId::field_lpuart4_param_txfifo,
  FieldId::field_lpuart4_param_rxfifo,
  FieldId::field_lpuart4_pincfg_trgsel,
  FieldId::field_lpuart4_stat_ma2f,
  FieldId::field_lpuart4_stat_ma1f,
  FieldId::field_lpuart4_stat_pf,
  FieldId::field_lpuart4_stat_fe,
  FieldId::field_lpuart4_stat_nf,
  FieldId::field_lpuart4_stat_or,
  FieldId::field_lpuart4_stat_idle,
  FieldId::field_lpuart4_stat_rdrf,
  FieldId::field_lpuart4_stat_tc,
  FieldId::field_lpuart4_stat_tdre,
  FieldId::field_lpuart4_stat_raf,
  FieldId::field_lpuart4_stat_lbkde,
  FieldId::field_lpuart4_stat_brk13,
  FieldId::field_lpuart4_stat_rwuid,
  FieldId::field_lpuart4_stat_rxinv,
  FieldId::field_lpuart4_stat_msbf,
  FieldId::field_lpuart4_stat_rxedgif,
  FieldId::field_lpuart4_stat_lbkdif,
  FieldId::field_lpuart4_verid_feature,
  FieldId::field_lpuart4_verid_minor,
  FieldId::field_lpuart4_verid_major,
  FieldId::field_lpuart4_water_txwater,
  FieldId::field_lpuart4_water_txcount,
  FieldId::field_lpuart4_water_rxwater,
  FieldId::field_lpuart4_water_rxcount,
  FieldId::field_lpuart5_baud_sbr,
  FieldId::field_lpuart5_baud_sbns,
  FieldId::field_lpuart5_baud_rxedgie,
  FieldId::field_lpuart5_baud_lbkdie,
  FieldId::field_lpuart5_baud_resyncdis,
  FieldId::field_lpuart5_baud_bothedge,
  FieldId::field_lpuart5_baud_matcfg,
  FieldId::field_lpuart5_baud_rdmae,
  FieldId::field_lpuart5_baud_tdmae,
  FieldId::field_lpuart5_baud_osr,
  FieldId::field_lpuart5_baud_m10,
  FieldId::field_lpuart5_baud_maen2,
  FieldId::field_lpuart5_baud_maen1,
  FieldId::field_lpuart5_ctrl_pt,
  FieldId::field_lpuart5_ctrl_pe,
  FieldId::field_lpuart5_ctrl_ilt,
  FieldId::field_lpuart5_ctrl_wake,
  FieldId::field_lpuart5_ctrl_m,
  FieldId::field_lpuart5_ctrl_rsrc,
  FieldId::field_lpuart5_ctrl_dozeen,
  FieldId::field_lpuart5_ctrl_loops,
  FieldId::field_lpuart5_ctrl_idlecfg,
  FieldId::field_lpuart5_ctrl_m7,
  FieldId::field_lpuart5_ctrl_ma2ie,
  FieldId::field_lpuart5_ctrl_ma1ie,
  FieldId::field_lpuart5_ctrl_sbk,
  FieldId::field_lpuart5_ctrl_rwu,
  FieldId::field_lpuart5_ctrl_re,
  FieldId::field_lpuart5_ctrl_te,
  FieldId::field_lpuart5_ctrl_ilie,
  FieldId::field_lpuart5_ctrl_rie,
  FieldId::field_lpuart5_ctrl_tcie,
  FieldId::field_lpuart5_ctrl_tie,
  FieldId::field_lpuart5_ctrl_peie,
  FieldId::field_lpuart5_ctrl_feie,
  FieldId::field_lpuart5_ctrl_neie,
  FieldId::field_lpuart5_ctrl_orie,
  FieldId::field_lpuart5_ctrl_txinv,
  FieldId::field_lpuart5_ctrl_txdir,
  FieldId::field_lpuart5_ctrl_r9t8,
  FieldId::field_lpuart5_ctrl_r8t9,
  FieldId::field_lpuart5_data_r0t0,
  FieldId::field_lpuart5_data_r1t1,
  FieldId::field_lpuart5_data_r2t2,
  FieldId::field_lpuart5_data_r3t3,
  FieldId::field_lpuart5_data_r4t4,
  FieldId::field_lpuart5_data_r5t5,
  FieldId::field_lpuart5_data_r6t6,
  FieldId::field_lpuart5_data_r7t7,
  FieldId::field_lpuart5_data_r8t8,
  FieldId::field_lpuart5_data_r9t9,
  FieldId::field_lpuart5_data_idline,
  FieldId::field_lpuart5_data_rxempt,
  FieldId::field_lpuart5_data_fretsc,
  FieldId::field_lpuart5_data_paritye,
  FieldId::field_lpuart5_data_noisy,
  FieldId::field_lpuart5_fifo_rxfifosize,
  FieldId::field_lpuart5_fifo_rxfe,
  FieldId::field_lpuart5_fifo_txfifosize,
  FieldId::field_lpuart5_fifo_txfe,
  FieldId::field_lpuart5_fifo_rxufe,
  FieldId::field_lpuart5_fifo_txofe,
  FieldId::field_lpuart5_fifo_rxiden,
  FieldId::field_lpuart5_fifo_rxflush,
  FieldId::field_lpuart5_fifo_txflush,
  FieldId::field_lpuart5_fifo_rxuf,
  FieldId::field_lpuart5_fifo_txof,
  FieldId::field_lpuart5_fifo_rxempt,
  FieldId::field_lpuart5_fifo_txempt,
  FieldId::field_lpuart5_global_rst,
  FieldId::field_lpuart5_match_ma1,
  FieldId::field_lpuart5_match_ma2,
  FieldId::field_lpuart5_modir_txctse,
  FieldId::field_lpuart5_modir_txrtse,
  FieldId::field_lpuart5_modir_txrtspol,
  FieldId::field_lpuart5_modir_rxrtse,
  FieldId::field_lpuart5_modir_txctsc,
  FieldId::field_lpuart5_modir_txctssrc,
  FieldId::field_lpuart5_modir_rtswater,
  FieldId::field_lpuart5_modir_tnp,
  FieldId::field_lpuart5_modir_iren,
  FieldId::field_lpuart5_param_txfifo,
  FieldId::field_lpuart5_param_rxfifo,
  FieldId::field_lpuart5_pincfg_trgsel,
  FieldId::field_lpuart5_stat_ma2f,
  FieldId::field_lpuart5_stat_ma1f,
  FieldId::field_lpuart5_stat_pf,
  FieldId::field_lpuart5_stat_fe,
  FieldId::field_lpuart5_stat_nf,
  FieldId::field_lpuart5_stat_or,
  FieldId::field_lpuart5_stat_idle,
  FieldId::field_lpuart5_stat_rdrf,
  FieldId::field_lpuart5_stat_tc,
  FieldId::field_lpuart5_stat_tdre,
  FieldId::field_lpuart5_stat_raf,
  FieldId::field_lpuart5_stat_lbkde,
  FieldId::field_lpuart5_stat_brk13,
  FieldId::field_lpuart5_stat_rwuid,
  FieldId::field_lpuart5_stat_rxinv,
  FieldId::field_lpuart5_stat_msbf,
  FieldId::field_lpuart5_stat_rxedgif,
  FieldId::field_lpuart5_stat_lbkdif,
  FieldId::field_lpuart5_verid_feature,
  FieldId::field_lpuart5_verid_minor,
  FieldId::field_lpuart5_verid_major,
  FieldId::field_lpuart5_water_txwater,
  FieldId::field_lpuart5_water_txcount,
  FieldId::field_lpuart5_water_rxwater,
  FieldId::field_lpuart5_water_rxcount,
  FieldId::field_lpuart6_baud_sbr,
  FieldId::field_lpuart6_baud_sbns,
  FieldId::field_lpuart6_baud_rxedgie,
  FieldId::field_lpuart6_baud_lbkdie,
  FieldId::field_lpuart6_baud_resyncdis,
  FieldId::field_lpuart6_baud_bothedge,
  FieldId::field_lpuart6_baud_matcfg,
  FieldId::field_lpuart6_baud_rdmae,
  FieldId::field_lpuart6_baud_tdmae,
  FieldId::field_lpuart6_baud_osr,
  FieldId::field_lpuart6_baud_m10,
  FieldId::field_lpuart6_baud_maen2,
  FieldId::field_lpuart6_baud_maen1,
  FieldId::field_lpuart6_ctrl_pt,
  FieldId::field_lpuart6_ctrl_pe,
  FieldId::field_lpuart6_ctrl_ilt,
  FieldId::field_lpuart6_ctrl_wake,
  FieldId::field_lpuart6_ctrl_m,
  FieldId::field_lpuart6_ctrl_rsrc,
  FieldId::field_lpuart6_ctrl_dozeen,
  FieldId::field_lpuart6_ctrl_loops,
  FieldId::field_lpuart6_ctrl_idlecfg,
  FieldId::field_lpuart6_ctrl_m7,
  FieldId::field_lpuart6_ctrl_ma2ie,
  FieldId::field_lpuart6_ctrl_ma1ie,
  FieldId::field_lpuart6_ctrl_sbk,
  FieldId::field_lpuart6_ctrl_rwu,
  FieldId::field_lpuart6_ctrl_re,
  FieldId::field_lpuart6_ctrl_te,
  FieldId::field_lpuart6_ctrl_ilie,
  FieldId::field_lpuart6_ctrl_rie,
  FieldId::field_lpuart6_ctrl_tcie,
  FieldId::field_lpuart6_ctrl_tie,
  FieldId::field_lpuart6_ctrl_peie,
  FieldId::field_lpuart6_ctrl_feie,
  FieldId::field_lpuart6_ctrl_neie,
  FieldId::field_lpuart6_ctrl_orie,
  FieldId::field_lpuart6_ctrl_txinv,
  FieldId::field_lpuart6_ctrl_txdir,
  FieldId::field_lpuart6_ctrl_r9t8,
  FieldId::field_lpuart6_ctrl_r8t9,
  FieldId::field_lpuart6_data_r0t0,
  FieldId::field_lpuart6_data_r1t1,
  FieldId::field_lpuart6_data_r2t2,
  FieldId::field_lpuart6_data_r3t3,
  FieldId::field_lpuart6_data_r4t4,
  FieldId::field_lpuart6_data_r5t5,
  FieldId::field_lpuart6_data_r6t6,
  FieldId::field_lpuart6_data_r7t7,
  FieldId::field_lpuart6_data_r8t8,
  FieldId::field_lpuart6_data_r9t9,
  FieldId::field_lpuart6_data_idline,
  FieldId::field_lpuart6_data_rxempt,
  FieldId::field_lpuart6_data_fretsc,
  FieldId::field_lpuart6_data_paritye,
  FieldId::field_lpuart6_data_noisy,
  FieldId::field_lpuart6_fifo_rxfifosize,
  FieldId::field_lpuart6_fifo_rxfe,
  FieldId::field_lpuart6_fifo_txfifosize,
  FieldId::field_lpuart6_fifo_txfe,
  FieldId::field_lpuart6_fifo_rxufe,
  FieldId::field_lpuart6_fifo_txofe,
  FieldId::field_lpuart6_fifo_rxiden,
  FieldId::field_lpuart6_fifo_rxflush,
  FieldId::field_lpuart6_fifo_txflush,
  FieldId::field_lpuart6_fifo_rxuf,
  FieldId::field_lpuart6_fifo_txof,
  FieldId::field_lpuart6_fifo_rxempt,
  FieldId::field_lpuart6_fifo_txempt,
  FieldId::field_lpuart6_global_rst,
  FieldId::field_lpuart6_match_ma1,
  FieldId::field_lpuart6_match_ma2,
  FieldId::field_lpuart6_modir_txctse,
  FieldId::field_lpuart6_modir_txrtse,
  FieldId::field_lpuart6_modir_txrtspol,
  FieldId::field_lpuart6_modir_rxrtse,
  FieldId::field_lpuart6_modir_txctsc,
  FieldId::field_lpuart6_modir_txctssrc,
  FieldId::field_lpuart6_modir_rtswater,
  FieldId::field_lpuart6_modir_tnp,
  FieldId::field_lpuart6_modir_iren,
  FieldId::field_lpuart6_param_txfifo,
  FieldId::field_lpuart6_param_rxfifo,
  FieldId::field_lpuart6_pincfg_trgsel,
  FieldId::field_lpuart6_stat_ma2f,
  FieldId::field_lpuart6_stat_ma1f,
  FieldId::field_lpuart6_stat_pf,
  FieldId::field_lpuart6_stat_fe,
  FieldId::field_lpuart6_stat_nf,
  FieldId::field_lpuart6_stat_or,
  FieldId::field_lpuart6_stat_idle,
  FieldId::field_lpuart6_stat_rdrf,
  FieldId::field_lpuart6_stat_tc,
  FieldId::field_lpuart6_stat_tdre,
  FieldId::field_lpuart6_stat_raf,
  FieldId::field_lpuart6_stat_lbkde,
  FieldId::field_lpuart6_stat_brk13,
  FieldId::field_lpuart6_stat_rwuid,
  FieldId::field_lpuart6_stat_rxinv,
  FieldId::field_lpuart6_stat_msbf,
  FieldId::field_lpuart6_stat_rxedgif,
  FieldId::field_lpuart6_stat_lbkdif,
  FieldId::field_lpuart6_verid_feature,
  FieldId::field_lpuart6_verid_minor,
  FieldId::field_lpuart6_verid_major,
  FieldId::field_lpuart6_water_txwater,
  FieldId::field_lpuart6_water_txcount,
  FieldId::field_lpuart6_water_rxwater,
  FieldId::field_lpuart6_water_rxcount,
  FieldId::field_lpuart7_baud_sbr,
  FieldId::field_lpuart7_baud_sbns,
  FieldId::field_lpuart7_baud_rxedgie,
  FieldId::field_lpuart7_baud_lbkdie,
  FieldId::field_lpuart7_baud_resyncdis,
  FieldId::field_lpuart7_baud_bothedge,
  FieldId::field_lpuart7_baud_matcfg,
  FieldId::field_lpuart7_baud_rdmae,
  FieldId::field_lpuart7_baud_tdmae,
  FieldId::field_lpuart7_baud_osr,
  FieldId::field_lpuart7_baud_m10,
  FieldId::field_lpuart7_baud_maen2,
  FieldId::field_lpuart7_baud_maen1,
  FieldId::field_lpuart7_ctrl_pt,
  FieldId::field_lpuart7_ctrl_pe,
  FieldId::field_lpuart7_ctrl_ilt,
  FieldId::field_lpuart7_ctrl_wake,
  FieldId::field_lpuart7_ctrl_m,
  FieldId::field_lpuart7_ctrl_rsrc,
  FieldId::field_lpuart7_ctrl_dozeen,
  FieldId::field_lpuart7_ctrl_loops,
  FieldId::field_lpuart7_ctrl_idlecfg,
  FieldId::field_lpuart7_ctrl_m7,
  FieldId::field_lpuart7_ctrl_ma2ie,
  FieldId::field_lpuart7_ctrl_ma1ie,
  FieldId::field_lpuart7_ctrl_sbk,
  FieldId::field_lpuart7_ctrl_rwu,
  FieldId::field_lpuart7_ctrl_re,
  FieldId::field_lpuart7_ctrl_te,
  FieldId::field_lpuart7_ctrl_ilie,
  FieldId::field_lpuart7_ctrl_rie,
  FieldId::field_lpuart7_ctrl_tcie,
  FieldId::field_lpuart7_ctrl_tie,
  FieldId::field_lpuart7_ctrl_peie,
  FieldId::field_lpuart7_ctrl_feie,
  FieldId::field_lpuart7_ctrl_neie,
  FieldId::field_lpuart7_ctrl_orie,
  FieldId::field_lpuart7_ctrl_txinv,
  FieldId::field_lpuart7_ctrl_txdir,
  FieldId::field_lpuart7_ctrl_r9t8,
  FieldId::field_lpuart7_ctrl_r8t9,
  FieldId::field_lpuart7_data_r0t0,
  FieldId::field_lpuart7_data_r1t1,
  FieldId::field_lpuart7_data_r2t2,
  FieldId::field_lpuart7_data_r3t3,
  FieldId::field_lpuart7_data_r4t4,
  FieldId::field_lpuart7_data_r5t5,
  FieldId::field_lpuart7_data_r6t6,
  FieldId::field_lpuart7_data_r7t7,
  FieldId::field_lpuart7_data_r8t8,
  FieldId::field_lpuart7_data_r9t9,
  FieldId::field_lpuart7_data_idline,
  FieldId::field_lpuart7_data_rxempt,
  FieldId::field_lpuart7_data_fretsc,
  FieldId::field_lpuart7_data_paritye,
  FieldId::field_lpuart7_data_noisy,
  FieldId::field_lpuart7_fifo_rxfifosize,
  FieldId::field_lpuart7_fifo_rxfe,
  FieldId::field_lpuart7_fifo_txfifosize,
  FieldId::field_lpuart7_fifo_txfe,
  FieldId::field_lpuart7_fifo_rxufe,
  FieldId::field_lpuart7_fifo_txofe,
  FieldId::field_lpuart7_fifo_rxiden,
  FieldId::field_lpuart7_fifo_rxflush,
  FieldId::field_lpuart7_fifo_txflush,
  FieldId::field_lpuart7_fifo_rxuf,
  FieldId::field_lpuart7_fifo_txof,
  FieldId::field_lpuart7_fifo_rxempt,
  FieldId::field_lpuart7_fifo_txempt,
  FieldId::field_lpuart7_global_rst,
  FieldId::field_lpuart7_match_ma1,
  FieldId::field_lpuart7_match_ma2,
  FieldId::field_lpuart7_modir_txctse,
  FieldId::field_lpuart7_modir_txrtse,
  FieldId::field_lpuart7_modir_txrtspol,
  FieldId::field_lpuart7_modir_rxrtse,
  FieldId::field_lpuart7_modir_txctsc,
  FieldId::field_lpuart7_modir_txctssrc,
  FieldId::field_lpuart7_modir_rtswater,
  FieldId::field_lpuart7_modir_tnp,
  FieldId::field_lpuart7_modir_iren,
  FieldId::field_lpuart7_param_txfifo,
  FieldId::field_lpuart7_param_rxfifo,
  FieldId::field_lpuart7_pincfg_trgsel,
  FieldId::field_lpuart7_stat_ma2f,
  FieldId::field_lpuart7_stat_ma1f,
  FieldId::field_lpuart7_stat_pf,
  FieldId::field_lpuart7_stat_fe,
  FieldId::field_lpuart7_stat_nf,
  FieldId::field_lpuart7_stat_or,
  FieldId::field_lpuart7_stat_idle,
  FieldId::field_lpuart7_stat_rdrf,
  FieldId::field_lpuart7_stat_tc,
  FieldId::field_lpuart7_stat_tdre,
  FieldId::field_lpuart7_stat_raf,
  FieldId::field_lpuart7_stat_lbkde,
  FieldId::field_lpuart7_stat_brk13,
  FieldId::field_lpuart7_stat_rwuid,
  FieldId::field_lpuart7_stat_rxinv,
  FieldId::field_lpuart7_stat_msbf,
  FieldId::field_lpuart7_stat_rxedgif,
  FieldId::field_lpuart7_stat_lbkdif,
  FieldId::field_lpuart7_verid_feature,
  FieldId::field_lpuart7_verid_minor,
  FieldId::field_lpuart7_verid_major,
  FieldId::field_lpuart7_water_txwater,
  FieldId::field_lpuart7_water_txcount,
  FieldId::field_lpuart7_water_rxwater,
  FieldId::field_lpuart7_water_rxcount,
  FieldId::field_lpuart8_baud_sbr,
  FieldId::field_lpuart8_baud_sbns,
  FieldId::field_lpuart8_baud_rxedgie,
  FieldId::field_lpuart8_baud_lbkdie,
  FieldId::field_lpuart8_baud_resyncdis,
  FieldId::field_lpuart8_baud_bothedge,
  FieldId::field_lpuart8_baud_matcfg,
  FieldId::field_lpuart8_baud_rdmae,
  FieldId::field_lpuart8_baud_tdmae,
  FieldId::field_lpuart8_baud_osr,
  FieldId::field_lpuart8_baud_m10,
  FieldId::field_lpuart8_baud_maen2,
  FieldId::field_lpuart8_baud_maen1,
  FieldId::field_lpuart8_ctrl_pt,
  FieldId::field_lpuart8_ctrl_pe,
  FieldId::field_lpuart8_ctrl_ilt,
  FieldId::field_lpuart8_ctrl_wake,
  FieldId::field_lpuart8_ctrl_m,
  FieldId::field_lpuart8_ctrl_rsrc,
  FieldId::field_lpuart8_ctrl_dozeen,
  FieldId::field_lpuart8_ctrl_loops,
  FieldId::field_lpuart8_ctrl_idlecfg,
  FieldId::field_lpuart8_ctrl_m7,
  FieldId::field_lpuart8_ctrl_ma2ie,
  FieldId::field_lpuart8_ctrl_ma1ie,
  FieldId::field_lpuart8_ctrl_sbk,
  FieldId::field_lpuart8_ctrl_rwu,
  FieldId::field_lpuart8_ctrl_re,
  FieldId::field_lpuart8_ctrl_te,
  FieldId::field_lpuart8_ctrl_ilie,
  FieldId::field_lpuart8_ctrl_rie,
  FieldId::field_lpuart8_ctrl_tcie,
  FieldId::field_lpuart8_ctrl_tie,
  FieldId::field_lpuart8_ctrl_peie,
  FieldId::field_lpuart8_ctrl_feie,
  FieldId::field_lpuart8_ctrl_neie,
  FieldId::field_lpuart8_ctrl_orie,
  FieldId::field_lpuart8_ctrl_txinv,
  FieldId::field_lpuart8_ctrl_txdir,
  FieldId::field_lpuart8_ctrl_r9t8,
  FieldId::field_lpuart8_ctrl_r8t9,
  FieldId::field_lpuart8_data_r0t0,
  FieldId::field_lpuart8_data_r1t1,
  FieldId::field_lpuart8_data_r2t2,
  FieldId::field_lpuart8_data_r3t3,
  FieldId::field_lpuart8_data_r4t4,
  FieldId::field_lpuart8_data_r5t5,
  FieldId::field_lpuart8_data_r6t6,
  FieldId::field_lpuart8_data_r7t7,
  FieldId::field_lpuart8_data_r8t8,
  FieldId::field_lpuart8_data_r9t9,
  FieldId::field_lpuart8_data_idline,
  FieldId::field_lpuart8_data_rxempt,
  FieldId::field_lpuart8_data_fretsc,
  FieldId::field_lpuart8_data_paritye,
  FieldId::field_lpuart8_data_noisy,
  FieldId::field_lpuart8_fifo_rxfifosize,
  FieldId::field_lpuart8_fifo_rxfe,
  FieldId::field_lpuart8_fifo_txfifosize,
  FieldId::field_lpuart8_fifo_txfe,
  FieldId::field_lpuart8_fifo_rxufe,
  FieldId::field_lpuart8_fifo_txofe,
  FieldId::field_lpuart8_fifo_rxiden,
  FieldId::field_lpuart8_fifo_rxflush,
  FieldId::field_lpuart8_fifo_txflush,
  FieldId::field_lpuart8_fifo_rxuf,
  FieldId::field_lpuart8_fifo_txof,
  FieldId::field_lpuart8_fifo_rxempt,
  FieldId::field_lpuart8_fifo_txempt,
  FieldId::field_lpuart8_global_rst,
  FieldId::field_lpuart8_match_ma1,
  FieldId::field_lpuart8_match_ma2,
  FieldId::field_lpuart8_modir_txctse,
  FieldId::field_lpuart8_modir_txrtse,
  FieldId::field_lpuart8_modir_txrtspol,
  FieldId::field_lpuart8_modir_rxrtse,
  FieldId::field_lpuart8_modir_txctsc,
  FieldId::field_lpuart8_modir_txctssrc,
  FieldId::field_lpuart8_modir_rtswater,
  FieldId::field_lpuart8_modir_tnp,
  FieldId::field_lpuart8_modir_iren,
  FieldId::field_lpuart8_param_txfifo,
  FieldId::field_lpuart8_param_rxfifo,
  FieldId::field_lpuart8_pincfg_trgsel,
  FieldId::field_lpuart8_stat_ma2f,
  FieldId::field_lpuart8_stat_ma1f,
  FieldId::field_lpuart8_stat_pf,
  FieldId::field_lpuart8_stat_fe,
  FieldId::field_lpuart8_stat_nf,
  FieldId::field_lpuart8_stat_or,
  FieldId::field_lpuart8_stat_idle,
  FieldId::field_lpuart8_stat_rdrf,
  FieldId::field_lpuart8_stat_tc,
  FieldId::field_lpuart8_stat_tdre,
  FieldId::field_lpuart8_stat_raf,
  FieldId::field_lpuart8_stat_lbkde,
  FieldId::field_lpuart8_stat_brk13,
  FieldId::field_lpuart8_stat_rwuid,
  FieldId::field_lpuart8_stat_rxinv,
  FieldId::field_lpuart8_stat_msbf,
  FieldId::field_lpuart8_stat_rxedgif,
  FieldId::field_lpuart8_stat_lbkdif,
  FieldId::field_lpuart8_verid_feature,
  FieldId::field_lpuart8_verid_minor,
  FieldId::field_lpuart8_verid_major,
  FieldId::field_lpuart8_water_txwater,
  FieldId::field_lpuart8_water_txcount,
  FieldId::field_lpuart8_water_rxwater,
  FieldId::field_lpuart8_water_rxcount,
}};
}
}
}
}
}
}
