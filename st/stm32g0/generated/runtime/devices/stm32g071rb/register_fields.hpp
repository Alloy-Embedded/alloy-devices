#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "registers.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g071rb {
enum class FieldId : std::uint16_t {
  none,
  field_dma1_ccr1_en,
  field_dma1_ccr1_tcie,
  field_dma1_ccr1_htie,
  field_dma1_ccr1_teie,
  field_dma1_ccr1_dir,
  field_dma1_ccr1_circ,
  field_dma1_ccr1_pinc,
  field_dma1_ccr1_minc,
  field_dma1_ccr1_psize,
  field_dma1_ccr1_msize,
  field_dma1_ccr1_pl,
  field_dma1_ccr1_mem2mem,
  field_dma1_ccr2_en,
  field_dma1_ccr2_tcie,
  field_dma1_ccr2_htie,
  field_dma1_ccr2_teie,
  field_dma1_ccr2_dir,
  field_dma1_ccr2_circ,
  field_dma1_ccr2_pinc,
  field_dma1_ccr2_minc,
  field_dma1_ccr2_psize,
  field_dma1_ccr2_msize,
  field_dma1_ccr2_pl,
  field_dma1_ccr2_mem2mem,
  field_dma1_ccr3_en,
  field_dma1_ccr3_tcie,
  field_dma1_ccr3_htie,
  field_dma1_ccr3_teie,
  field_dma1_ccr3_dir,
  field_dma1_ccr3_circ,
  field_dma1_ccr3_pinc,
  field_dma1_ccr3_minc,
  field_dma1_ccr3_psize,
  field_dma1_ccr3_msize,
  field_dma1_ccr3_pl,
  field_dma1_ccr3_mem2mem,
  field_dma1_ccr4_en,
  field_dma1_ccr4_tcie,
  field_dma1_ccr4_htie,
  field_dma1_ccr4_teie,
  field_dma1_ccr4_dir,
  field_dma1_ccr4_circ,
  field_dma1_ccr4_pinc,
  field_dma1_ccr4_minc,
  field_dma1_ccr4_psize,
  field_dma1_ccr4_msize,
  field_dma1_ccr4_pl,
  field_dma1_ccr4_mem2mem,
  field_dma1_ccr5_en,
  field_dma1_ccr5_tcie,
  field_dma1_ccr5_htie,
  field_dma1_ccr5_teie,
  field_dma1_ccr5_dir,
  field_dma1_ccr5_circ,
  field_dma1_ccr5_pinc,
  field_dma1_ccr5_minc,
  field_dma1_ccr5_psize,
  field_dma1_ccr5_msize,
  field_dma1_ccr5_pl,
  field_dma1_ccr5_mem2mem,
  field_dma1_ccr6_en,
  field_dma1_ccr6_tcie,
  field_dma1_ccr6_htie,
  field_dma1_ccr6_teie,
  field_dma1_ccr6_dir,
  field_dma1_ccr6_circ,
  field_dma1_ccr6_pinc,
  field_dma1_ccr6_minc,
  field_dma1_ccr6_psize,
  field_dma1_ccr6_msize,
  field_dma1_ccr6_pl,
  field_dma1_ccr6_mem2mem,
  field_dma1_ccr7_en,
  field_dma1_ccr7_tcie,
  field_dma1_ccr7_htie,
  field_dma1_ccr7_teie,
  field_dma1_ccr7_dir,
  field_dma1_ccr7_circ,
  field_dma1_ccr7_pinc,
  field_dma1_ccr7_minc,
  field_dma1_ccr7_psize,
  field_dma1_ccr7_msize,
  field_dma1_ccr7_pl,
  field_dma1_ccr7_mem2mem,
  field_dma1_cmar1_ma,
  field_dma1_cmar2_ma,
  field_dma1_cmar3_ma,
  field_dma1_cmar4_ma,
  field_dma1_cmar5_ma,
  field_dma1_cmar6_ma,
  field_dma1_cmar7_ma,
  field_dma1_cndtr1_ndt,
  field_dma1_cndtr2_ndt,
  field_dma1_cndtr3_ndt,
  field_dma1_cndtr4_ndt,
  field_dma1_cndtr5_ndt,
  field_dma1_cndtr6_ndt,
  field_dma1_cndtr7_ndt,
  field_dma1_cpar1_pa,
  field_dma1_cpar2_pa,
  field_dma1_cpar3_pa,
  field_dma1_cpar4_pa,
  field_dma1_cpar5_pa,
  field_dma1_cpar6_pa,
  field_dma1_cpar7_pa,
  field_dma1_ifcr_cgif0,
  field_dma1_ifcr_ctcif1,
  field_dma1_ifcr_chtif2,
  field_dma1_ifcr_cteif3,
  field_dma1_ifcr_cgif4,
  field_dma1_ifcr_ctcif5,
  field_dma1_ifcr_chtif6,
  field_dma1_ifcr_cteif7,
  field_dma1_ifcr_cgif8,
  field_dma1_ifcr_ctcif9,
  field_dma1_ifcr_chtif10,
  field_dma1_ifcr_cteif11,
  field_dma1_ifcr_cgif12,
  field_dma1_ifcr_ctcif13,
  field_dma1_ifcr_chtif14,
  field_dma1_ifcr_cteif15,
  field_dma1_ifcr_cgif16,
  field_dma1_ifcr_ctcif17,
  field_dma1_ifcr_chtif18,
  field_dma1_ifcr_cteif19,
  field_dma1_ifcr_cgif20,
  field_dma1_ifcr_ctcif21,
  field_dma1_ifcr_chtif22,
  field_dma1_ifcr_cteif23,
  field_dma1_ifcr_cgif24,
  field_dma1_ifcr_ctcif25,
  field_dma1_ifcr_chtif26,
  field_dma1_ifcr_cteif27,
  field_dma1_isr_gif1,
  field_dma1_isr_tcif1,
  field_dma1_isr_htif1,
  field_dma1_isr_teif1,
  field_dma1_isr_gif2,
  field_dma1_isr_tcif2,
  field_dma1_isr_htif2,
  field_dma1_isr_teif2,
  field_dma1_isr_gif3,
  field_dma1_isr_tcif3,
  field_dma1_isr_htif3,
  field_dma1_isr_teif3,
  field_dma1_isr_gif4,
  field_dma1_isr_tcif4,
  field_dma1_isr_htif4,
  field_dma1_isr_teif4,
  field_dma1_isr_gif5,
  field_dma1_isr_tcif5,
  field_dma1_isr_htif5,
  field_dma1_isr_teif5,
  field_dma1_isr_gif6,
  field_dma1_isr_tcif6,
  field_dma1_isr_htif6,
  field_dma1_isr_teif6,
  field_dma1_isr_gif7,
  field_dma1_isr_tcif7,
  field_dma1_isr_htif7,
  field_dma1_isr_teif7,
  field_dmamux1_dmamux_c0cr_dmareq_id,
  field_dmamux1_dmamux_c0cr_soie,
  field_dmamux1_dmamux_c0cr_ege,
  field_dmamux1_dmamux_c0cr_se,
  field_dmamux1_dmamux_c0cr_spol,
  field_dmamux1_dmamux_c0cr_nbreq,
  field_dmamux1_dmamux_c0cr_sync_id,
  field_dmamux1_dmamux_c1cr_dmareq_id,
  field_dmamux1_dmamux_c1cr_soie,
  field_dmamux1_dmamux_c1cr_ege,
  field_dmamux1_dmamux_c1cr_se,
  field_dmamux1_dmamux_c1cr_spol,
  field_dmamux1_dmamux_c1cr_nbreq,
  field_dmamux1_dmamux_c1cr_sync_id,
  field_dmamux1_dmamux_c2cr_dmareq_id,
  field_dmamux1_dmamux_c2cr_soie,
  field_dmamux1_dmamux_c2cr_ege,
  field_dmamux1_dmamux_c2cr_se,
  field_dmamux1_dmamux_c2cr_spol,
  field_dmamux1_dmamux_c2cr_nbreq,
  field_dmamux1_dmamux_c2cr_sync_id,
  field_dmamux1_dmamux_c3cr_dmareq_id,
  field_dmamux1_dmamux_c3cr_soie,
  field_dmamux1_dmamux_c3cr_ege,
  field_dmamux1_dmamux_c3cr_se,
  field_dmamux1_dmamux_c3cr_spol,
  field_dmamux1_dmamux_c3cr_nbreq,
  field_dmamux1_dmamux_c3cr_sync_id,
  field_dmamux1_dmamux_c4cr_dmareq_id,
  field_dmamux1_dmamux_c4cr_soie,
  field_dmamux1_dmamux_c4cr_ege,
  field_dmamux1_dmamux_c4cr_se,
  field_dmamux1_dmamux_c4cr_spol,
  field_dmamux1_dmamux_c4cr_nbreq,
  field_dmamux1_dmamux_c4cr_sync_id,
  field_dmamux1_dmamux_c5cr_dmareq_id,
  field_dmamux1_dmamux_c5cr_soie,
  field_dmamux1_dmamux_c5cr_ege,
  field_dmamux1_dmamux_c5cr_se,
  field_dmamux1_dmamux_c5cr_spol,
  field_dmamux1_dmamux_c5cr_nbreq,
  field_dmamux1_dmamux_c5cr_sync_id,
  field_dmamux1_dmamux_c6cr_dmareq_id,
  field_dmamux1_dmamux_c6cr_soie,
  field_dmamux1_dmamux_c6cr_ege,
  field_dmamux1_dmamux_c6cr_se,
  field_dmamux1_dmamux_c6cr_spol,
  field_dmamux1_dmamux_c6cr_nbreq,
  field_dmamux1_dmamux_c6cr_sync_id,
  field_dmamux1_dmamux_cfr_csof,
  field_dmamux1_dmamux_csr_sof,
  field_dmamux1_dmamux_hwcfgr1_num_dma_streams,
  field_dmamux1_dmamux_hwcfgr1_num_dma_periph_req,
  field_dmamux1_dmamux_hwcfgr1_num_dma_trig,
  field_dmamux1_dmamux_hwcfgr1_num_dma_reqgen,
  field_dmamux1_dmamux_hwcfgr2_num_dma_ext_req,
  field_dmamux1_dmamux_ipidr_id,
  field_dmamux1_dmamux_rg0cr_sig_id,
  field_dmamux1_dmamux_rg0cr_oie,
  field_dmamux1_dmamux_rg0cr_ge,
  field_dmamux1_dmamux_rg0cr_gpol,
  field_dmamux1_dmamux_rg0cr_gnbreq,
  field_dmamux1_dmamux_rg1cr_sig_id,
  field_dmamux1_dmamux_rg1cr_oie,
  field_dmamux1_dmamux_rg1cr_ge,
  field_dmamux1_dmamux_rg1cr_gpol,
  field_dmamux1_dmamux_rg1cr_gnbreq,
  field_dmamux1_dmamux_rg2cr_sig_id,
  field_dmamux1_dmamux_rg2cr_oie,
  field_dmamux1_dmamux_rg2cr_ge,
  field_dmamux1_dmamux_rg2cr_gpol,
  field_dmamux1_dmamux_rg2cr_gnbreq,
  field_dmamux1_dmamux_rg3cr_sig_id,
  field_dmamux1_dmamux_rg3cr_oie,
  field_dmamux1_dmamux_rg3cr_ge,
  field_dmamux1_dmamux_rg3cr_gpol,
  field_dmamux1_dmamux_rg3cr_gnbreq,
  field_dmamux1_dmamux_rgcfr_cof,
  field_dmamux1_dmamux_rgsr_of,
  field_dmamux1_dmamux_sidr_sid,
  field_dmamux1_dmamux_verr_minrev,
  field_dmamux1_dmamux_verr_majrev,
  field_gpioa_afrh_afsel8,
  field_gpioa_afrh_afsel9,
  field_gpioa_afrh_afsel10,
  field_gpioa_afrh_afsel11,
  field_gpioa_afrh_afsel12,
  field_gpioa_afrh_afsel13,
  field_gpioa_afrh_afsel14,
  field_gpioa_afrh_afsel15,
  field_gpioa_afrl_afsel0,
  field_gpioa_afrl_afsel1,
  field_gpioa_afrl_afsel2,
  field_gpioa_afrl_afsel3,
  field_gpioa_afrl_afsel4,
  field_gpioa_afrl_afsel5,
  field_gpioa_afrl_afsel6,
  field_gpioa_afrl_afsel7,
  field_gpioa_brr_br0,
  field_gpioa_brr_br1,
  field_gpioa_brr_br2,
  field_gpioa_brr_br3,
  field_gpioa_brr_br4,
  field_gpioa_brr_br5,
  field_gpioa_brr_br6,
  field_gpioa_brr_br7,
  field_gpioa_brr_br8,
  field_gpioa_brr_br9,
  field_gpioa_brr_br10,
  field_gpioa_brr_br11,
  field_gpioa_brr_br12,
  field_gpioa_brr_br13,
  field_gpioa_brr_br14,
  field_gpioa_brr_br15,
  field_gpioa_bsrr_bs0,
  field_gpioa_bsrr_bs1,
  field_gpioa_bsrr_bs2,
  field_gpioa_bsrr_bs3,
  field_gpioa_bsrr_bs4,
  field_gpioa_bsrr_bs5,
  field_gpioa_bsrr_bs6,
  field_gpioa_bsrr_bs7,
  field_gpioa_bsrr_bs8,
  field_gpioa_bsrr_bs9,
  field_gpioa_bsrr_bs10,
  field_gpioa_bsrr_bs11,
  field_gpioa_bsrr_bs12,
  field_gpioa_bsrr_bs13,
  field_gpioa_bsrr_bs14,
  field_gpioa_bsrr_bs15,
  field_gpioa_bsrr_br0,
  field_gpioa_bsrr_br1,
  field_gpioa_bsrr_br2,
  field_gpioa_bsrr_br3,
  field_gpioa_bsrr_br4,
  field_gpioa_bsrr_br5,
  field_gpioa_bsrr_br6,
  field_gpioa_bsrr_br7,
  field_gpioa_bsrr_br8,
  field_gpioa_bsrr_br9,
  field_gpioa_bsrr_br10,
  field_gpioa_bsrr_br11,
  field_gpioa_bsrr_br12,
  field_gpioa_bsrr_br13,
  field_gpioa_bsrr_br14,
  field_gpioa_bsrr_br15,
  field_gpioa_idr_idr0,
  field_gpioa_idr_idr1,
  field_gpioa_idr_idr2,
  field_gpioa_idr_idr3,
  field_gpioa_idr_idr4,
  field_gpioa_idr_idr5,
  field_gpioa_idr_idr6,
  field_gpioa_idr_idr7,
  field_gpioa_idr_idr8,
  field_gpioa_idr_idr9,
  field_gpioa_idr_idr10,
  field_gpioa_idr_idr11,
  field_gpioa_idr_idr12,
  field_gpioa_idr_idr13,
  field_gpioa_idr_idr14,
  field_gpioa_idr_idr15,
  field_gpioa_lckr_lck0,
  field_gpioa_lckr_lck1,
  field_gpioa_lckr_lck2,
  field_gpioa_lckr_lck3,
  field_gpioa_lckr_lck4,
  field_gpioa_lckr_lck5,
  field_gpioa_lckr_lck6,
  field_gpioa_lckr_lck7,
  field_gpioa_lckr_lck8,
  field_gpioa_lckr_lck9,
  field_gpioa_lckr_lck10,
  field_gpioa_lckr_lck11,
  field_gpioa_lckr_lck12,
  field_gpioa_lckr_lck13,
  field_gpioa_lckr_lck14,
  field_gpioa_lckr_lck15,
  field_gpioa_lckr_lckk,
  field_gpioa_moder_moder0,
  field_gpioa_moder_moder1,
  field_gpioa_moder_moder2,
  field_gpioa_moder_moder3,
  field_gpioa_moder_moder4,
  field_gpioa_moder_moder5,
  field_gpioa_moder_moder6,
  field_gpioa_moder_moder7,
  field_gpioa_moder_moder8,
  field_gpioa_moder_moder9,
  field_gpioa_moder_moder10,
  field_gpioa_moder_moder11,
  field_gpioa_moder_moder12,
  field_gpioa_moder_moder13,
  field_gpioa_moder_moder14,
  field_gpioa_moder_moder15,
  field_gpioa_odr_odr0,
  field_gpioa_odr_odr1,
  field_gpioa_odr_odr2,
  field_gpioa_odr_odr3,
  field_gpioa_odr_odr4,
  field_gpioa_odr_odr5,
  field_gpioa_odr_odr6,
  field_gpioa_odr_odr7,
  field_gpioa_odr_odr8,
  field_gpioa_odr_odr9,
  field_gpioa_odr_odr10,
  field_gpioa_odr_odr11,
  field_gpioa_odr_odr12,
  field_gpioa_odr_odr13,
  field_gpioa_odr_odr14,
  field_gpioa_odr_odr15,
  field_gpioa_ospeedr_ospeedr0,
  field_gpioa_ospeedr_ospeedr1,
  field_gpioa_ospeedr_ospeedr2,
  field_gpioa_ospeedr_ospeedr3,
  field_gpioa_ospeedr_ospeedr4,
  field_gpioa_ospeedr_ospeedr5,
  field_gpioa_ospeedr_ospeedr6,
  field_gpioa_ospeedr_ospeedr7,
  field_gpioa_ospeedr_ospeedr8,
  field_gpioa_ospeedr_ospeedr9,
  field_gpioa_ospeedr_ospeedr10,
  field_gpioa_ospeedr_ospeedr11,
  field_gpioa_ospeedr_ospeedr12,
  field_gpioa_ospeedr_ospeedr13,
  field_gpioa_ospeedr_ospeedr14,
  field_gpioa_ospeedr_ospeedr15,
  field_gpioa_otyper_ot0,
  field_gpioa_otyper_ot1,
  field_gpioa_otyper_ot2,
  field_gpioa_otyper_ot3,
  field_gpioa_otyper_ot4,
  field_gpioa_otyper_ot5,
  field_gpioa_otyper_ot6,
  field_gpioa_otyper_ot7,
  field_gpioa_otyper_ot8,
  field_gpioa_otyper_ot9,
  field_gpioa_otyper_ot10,
  field_gpioa_otyper_ot11,
  field_gpioa_otyper_ot12,
  field_gpioa_otyper_ot13,
  field_gpioa_otyper_ot14,
  field_gpioa_otyper_ot15,
  field_gpioa_pupdr_pupdr0,
  field_gpioa_pupdr_pupdr1,
  field_gpioa_pupdr_pupdr2,
  field_gpioa_pupdr_pupdr3,
  field_gpioa_pupdr_pupdr4,
  field_gpioa_pupdr_pupdr5,
  field_gpioa_pupdr_pupdr6,
  field_gpioa_pupdr_pupdr7,
  field_gpioa_pupdr_pupdr8,
  field_gpioa_pupdr_pupdr9,
  field_gpioa_pupdr_pupdr10,
  field_gpioa_pupdr_pupdr11,
  field_gpioa_pupdr_pupdr12,
  field_gpioa_pupdr_pupdr13,
  field_gpioa_pupdr_pupdr14,
  field_gpioa_pupdr_pupdr15,
  field_gpiob_afrh_afsel8,
  field_gpiob_afrh_afsel9,
  field_gpiob_afrh_afsel10,
  field_gpiob_afrh_afsel11,
  field_gpiob_afrh_afsel12,
  field_gpiob_afrh_afsel13,
  field_gpiob_afrh_afsel14,
  field_gpiob_afrh_afsel15,
  field_gpiob_afrl_afsel0,
  field_gpiob_afrl_afsel1,
  field_gpiob_afrl_afsel2,
  field_gpiob_afrl_afsel3,
  field_gpiob_afrl_afsel4,
  field_gpiob_afrl_afsel5,
  field_gpiob_afrl_afsel6,
  field_gpiob_afrl_afsel7,
  field_gpiob_brr_br0,
  field_gpiob_brr_br1,
  field_gpiob_brr_br2,
  field_gpiob_brr_br3,
  field_gpiob_brr_br4,
  field_gpiob_brr_br5,
  field_gpiob_brr_br6,
  field_gpiob_brr_br7,
  field_gpiob_brr_br8,
  field_gpiob_brr_br9,
  field_gpiob_brr_br10,
  field_gpiob_brr_br11,
  field_gpiob_brr_br12,
  field_gpiob_brr_br13,
  field_gpiob_brr_br14,
  field_gpiob_brr_br15,
  field_gpiob_bsrr_bs0,
  field_gpiob_bsrr_bs1,
  field_gpiob_bsrr_bs2,
  field_gpiob_bsrr_bs3,
  field_gpiob_bsrr_bs4,
  field_gpiob_bsrr_bs5,
  field_gpiob_bsrr_bs6,
  field_gpiob_bsrr_bs7,
  field_gpiob_bsrr_bs8,
  field_gpiob_bsrr_bs9,
  field_gpiob_bsrr_bs10,
  field_gpiob_bsrr_bs11,
  field_gpiob_bsrr_bs12,
  field_gpiob_bsrr_bs13,
  field_gpiob_bsrr_bs14,
  field_gpiob_bsrr_bs15,
  field_gpiob_bsrr_br0,
  field_gpiob_bsrr_br1,
  field_gpiob_bsrr_br2,
  field_gpiob_bsrr_br3,
  field_gpiob_bsrr_br4,
  field_gpiob_bsrr_br5,
  field_gpiob_bsrr_br6,
  field_gpiob_bsrr_br7,
  field_gpiob_bsrr_br8,
  field_gpiob_bsrr_br9,
  field_gpiob_bsrr_br10,
  field_gpiob_bsrr_br11,
  field_gpiob_bsrr_br12,
  field_gpiob_bsrr_br13,
  field_gpiob_bsrr_br14,
  field_gpiob_bsrr_br15,
  field_gpiob_idr_idr0,
  field_gpiob_idr_idr1,
  field_gpiob_idr_idr2,
  field_gpiob_idr_idr3,
  field_gpiob_idr_idr4,
  field_gpiob_idr_idr5,
  field_gpiob_idr_idr6,
  field_gpiob_idr_idr7,
  field_gpiob_idr_idr8,
  field_gpiob_idr_idr9,
  field_gpiob_idr_idr10,
  field_gpiob_idr_idr11,
  field_gpiob_idr_idr12,
  field_gpiob_idr_idr13,
  field_gpiob_idr_idr14,
  field_gpiob_idr_idr15,
  field_gpiob_lckr_lck0,
  field_gpiob_lckr_lck1,
  field_gpiob_lckr_lck2,
  field_gpiob_lckr_lck3,
  field_gpiob_lckr_lck4,
  field_gpiob_lckr_lck5,
  field_gpiob_lckr_lck6,
  field_gpiob_lckr_lck7,
  field_gpiob_lckr_lck8,
  field_gpiob_lckr_lck9,
  field_gpiob_lckr_lck10,
  field_gpiob_lckr_lck11,
  field_gpiob_lckr_lck12,
  field_gpiob_lckr_lck13,
  field_gpiob_lckr_lck14,
  field_gpiob_lckr_lck15,
  field_gpiob_lckr_lckk,
  field_gpiob_moder_moder0,
  field_gpiob_moder_moder1,
  field_gpiob_moder_moder2,
  field_gpiob_moder_moder3,
  field_gpiob_moder_moder4,
  field_gpiob_moder_moder5,
  field_gpiob_moder_moder6,
  field_gpiob_moder_moder7,
  field_gpiob_moder_moder8,
  field_gpiob_moder_moder9,
  field_gpiob_moder_moder10,
  field_gpiob_moder_moder11,
  field_gpiob_moder_moder12,
  field_gpiob_moder_moder13,
  field_gpiob_moder_moder14,
  field_gpiob_moder_moder15,
  field_gpiob_odr_odr0,
  field_gpiob_odr_odr1,
  field_gpiob_odr_odr2,
  field_gpiob_odr_odr3,
  field_gpiob_odr_odr4,
  field_gpiob_odr_odr5,
  field_gpiob_odr_odr6,
  field_gpiob_odr_odr7,
  field_gpiob_odr_odr8,
  field_gpiob_odr_odr9,
  field_gpiob_odr_odr10,
  field_gpiob_odr_odr11,
  field_gpiob_odr_odr12,
  field_gpiob_odr_odr13,
  field_gpiob_odr_odr14,
  field_gpiob_odr_odr15,
  field_gpiob_ospeedr_ospeedr0,
  field_gpiob_ospeedr_ospeedr1,
  field_gpiob_ospeedr_ospeedr2,
  field_gpiob_ospeedr_ospeedr3,
  field_gpiob_ospeedr_ospeedr4,
  field_gpiob_ospeedr_ospeedr5,
  field_gpiob_ospeedr_ospeedr6,
  field_gpiob_ospeedr_ospeedr7,
  field_gpiob_ospeedr_ospeedr8,
  field_gpiob_ospeedr_ospeedr9,
  field_gpiob_ospeedr_ospeedr10,
  field_gpiob_ospeedr_ospeedr11,
  field_gpiob_ospeedr_ospeedr12,
  field_gpiob_ospeedr_ospeedr13,
  field_gpiob_ospeedr_ospeedr14,
  field_gpiob_ospeedr_ospeedr15,
  field_gpiob_otyper_ot0,
  field_gpiob_otyper_ot1,
  field_gpiob_otyper_ot2,
  field_gpiob_otyper_ot3,
  field_gpiob_otyper_ot4,
  field_gpiob_otyper_ot5,
  field_gpiob_otyper_ot6,
  field_gpiob_otyper_ot7,
  field_gpiob_otyper_ot8,
  field_gpiob_otyper_ot9,
  field_gpiob_otyper_ot10,
  field_gpiob_otyper_ot11,
  field_gpiob_otyper_ot12,
  field_gpiob_otyper_ot13,
  field_gpiob_otyper_ot14,
  field_gpiob_otyper_ot15,
  field_gpiob_pupdr_pupdr0,
  field_gpiob_pupdr_pupdr1,
  field_gpiob_pupdr_pupdr2,
  field_gpiob_pupdr_pupdr3,
  field_gpiob_pupdr_pupdr4,
  field_gpiob_pupdr_pupdr5,
  field_gpiob_pupdr_pupdr6,
  field_gpiob_pupdr_pupdr7,
  field_gpiob_pupdr_pupdr8,
  field_gpiob_pupdr_pupdr9,
  field_gpiob_pupdr_pupdr10,
  field_gpiob_pupdr_pupdr11,
  field_gpiob_pupdr_pupdr12,
  field_gpiob_pupdr_pupdr13,
  field_gpiob_pupdr_pupdr14,
  field_gpiob_pupdr_pupdr15,
  field_gpioc_afrh_afsel8,
  field_gpioc_afrh_afsel9,
  field_gpioc_afrh_afsel10,
  field_gpioc_afrh_afsel11,
  field_gpioc_afrh_afsel12,
  field_gpioc_afrh_afsel13,
  field_gpioc_afrh_afsel14,
  field_gpioc_afrh_afsel15,
  field_gpioc_afrl_afsel0,
  field_gpioc_afrl_afsel1,
  field_gpioc_afrl_afsel2,
  field_gpioc_afrl_afsel3,
  field_gpioc_afrl_afsel4,
  field_gpioc_afrl_afsel5,
  field_gpioc_afrl_afsel6,
  field_gpioc_afrl_afsel7,
  field_gpioc_brr_br0,
  field_gpioc_brr_br1,
  field_gpioc_brr_br2,
  field_gpioc_brr_br3,
  field_gpioc_brr_br4,
  field_gpioc_brr_br5,
  field_gpioc_brr_br6,
  field_gpioc_brr_br7,
  field_gpioc_brr_br8,
  field_gpioc_brr_br9,
  field_gpioc_brr_br10,
  field_gpioc_brr_br11,
  field_gpioc_brr_br12,
  field_gpioc_brr_br13,
  field_gpioc_brr_br14,
  field_gpioc_brr_br15,
  field_gpioc_bsrr_bs0,
  field_gpioc_bsrr_bs1,
  field_gpioc_bsrr_bs2,
  field_gpioc_bsrr_bs3,
  field_gpioc_bsrr_bs4,
  field_gpioc_bsrr_bs5,
  field_gpioc_bsrr_bs6,
  field_gpioc_bsrr_bs7,
  field_gpioc_bsrr_bs8,
  field_gpioc_bsrr_bs9,
  field_gpioc_bsrr_bs10,
  field_gpioc_bsrr_bs11,
  field_gpioc_bsrr_bs12,
  field_gpioc_bsrr_bs13,
  field_gpioc_bsrr_bs14,
  field_gpioc_bsrr_bs15,
  field_gpioc_bsrr_br0,
  field_gpioc_bsrr_br1,
  field_gpioc_bsrr_br2,
  field_gpioc_bsrr_br3,
  field_gpioc_bsrr_br4,
  field_gpioc_bsrr_br5,
  field_gpioc_bsrr_br6,
  field_gpioc_bsrr_br7,
  field_gpioc_bsrr_br8,
  field_gpioc_bsrr_br9,
  field_gpioc_bsrr_br10,
  field_gpioc_bsrr_br11,
  field_gpioc_bsrr_br12,
  field_gpioc_bsrr_br13,
  field_gpioc_bsrr_br14,
  field_gpioc_bsrr_br15,
  field_gpioc_idr_idr0,
  field_gpioc_idr_idr1,
  field_gpioc_idr_idr2,
  field_gpioc_idr_idr3,
  field_gpioc_idr_idr4,
  field_gpioc_idr_idr5,
  field_gpioc_idr_idr6,
  field_gpioc_idr_idr7,
  field_gpioc_idr_idr8,
  field_gpioc_idr_idr9,
  field_gpioc_idr_idr10,
  field_gpioc_idr_idr11,
  field_gpioc_idr_idr12,
  field_gpioc_idr_idr13,
  field_gpioc_idr_idr14,
  field_gpioc_idr_idr15,
  field_gpioc_lckr_lck0,
  field_gpioc_lckr_lck1,
  field_gpioc_lckr_lck2,
  field_gpioc_lckr_lck3,
  field_gpioc_lckr_lck4,
  field_gpioc_lckr_lck5,
  field_gpioc_lckr_lck6,
  field_gpioc_lckr_lck7,
  field_gpioc_lckr_lck8,
  field_gpioc_lckr_lck9,
  field_gpioc_lckr_lck10,
  field_gpioc_lckr_lck11,
  field_gpioc_lckr_lck12,
  field_gpioc_lckr_lck13,
  field_gpioc_lckr_lck14,
  field_gpioc_lckr_lck15,
  field_gpioc_lckr_lckk,
  field_gpioc_moder_moder0,
  field_gpioc_moder_moder1,
  field_gpioc_moder_moder2,
  field_gpioc_moder_moder3,
  field_gpioc_moder_moder4,
  field_gpioc_moder_moder5,
  field_gpioc_moder_moder6,
  field_gpioc_moder_moder7,
  field_gpioc_moder_moder8,
  field_gpioc_moder_moder9,
  field_gpioc_moder_moder10,
  field_gpioc_moder_moder11,
  field_gpioc_moder_moder12,
  field_gpioc_moder_moder13,
  field_gpioc_moder_moder14,
  field_gpioc_moder_moder15,
  field_gpioc_odr_odr0,
  field_gpioc_odr_odr1,
  field_gpioc_odr_odr2,
  field_gpioc_odr_odr3,
  field_gpioc_odr_odr4,
  field_gpioc_odr_odr5,
  field_gpioc_odr_odr6,
  field_gpioc_odr_odr7,
  field_gpioc_odr_odr8,
  field_gpioc_odr_odr9,
  field_gpioc_odr_odr10,
  field_gpioc_odr_odr11,
  field_gpioc_odr_odr12,
  field_gpioc_odr_odr13,
  field_gpioc_odr_odr14,
  field_gpioc_odr_odr15,
  field_gpioc_ospeedr_ospeedr0,
  field_gpioc_ospeedr_ospeedr1,
  field_gpioc_ospeedr_ospeedr2,
  field_gpioc_ospeedr_ospeedr3,
  field_gpioc_ospeedr_ospeedr4,
  field_gpioc_ospeedr_ospeedr5,
  field_gpioc_ospeedr_ospeedr6,
  field_gpioc_ospeedr_ospeedr7,
  field_gpioc_ospeedr_ospeedr8,
  field_gpioc_ospeedr_ospeedr9,
  field_gpioc_ospeedr_ospeedr10,
  field_gpioc_ospeedr_ospeedr11,
  field_gpioc_ospeedr_ospeedr12,
  field_gpioc_ospeedr_ospeedr13,
  field_gpioc_ospeedr_ospeedr14,
  field_gpioc_ospeedr_ospeedr15,
  field_gpioc_otyper_ot0,
  field_gpioc_otyper_ot1,
  field_gpioc_otyper_ot2,
  field_gpioc_otyper_ot3,
  field_gpioc_otyper_ot4,
  field_gpioc_otyper_ot5,
  field_gpioc_otyper_ot6,
  field_gpioc_otyper_ot7,
  field_gpioc_otyper_ot8,
  field_gpioc_otyper_ot9,
  field_gpioc_otyper_ot10,
  field_gpioc_otyper_ot11,
  field_gpioc_otyper_ot12,
  field_gpioc_otyper_ot13,
  field_gpioc_otyper_ot14,
  field_gpioc_otyper_ot15,
  field_gpioc_pupdr_pupdr0,
  field_gpioc_pupdr_pupdr1,
  field_gpioc_pupdr_pupdr2,
  field_gpioc_pupdr_pupdr3,
  field_gpioc_pupdr_pupdr4,
  field_gpioc_pupdr_pupdr5,
  field_gpioc_pupdr_pupdr6,
  field_gpioc_pupdr_pupdr7,
  field_gpioc_pupdr_pupdr8,
  field_gpioc_pupdr_pupdr9,
  field_gpioc_pupdr_pupdr10,
  field_gpioc_pupdr_pupdr11,
  field_gpioc_pupdr_pupdr12,
  field_gpioc_pupdr_pupdr13,
  field_gpioc_pupdr_pupdr14,
  field_gpioc_pupdr_pupdr15,
  field_gpiod_afrh_afsel8,
  field_gpiod_afrh_afsel9,
  field_gpiod_afrh_afsel10,
  field_gpiod_afrh_afsel11,
  field_gpiod_afrh_afsel12,
  field_gpiod_afrh_afsel13,
  field_gpiod_afrh_afsel14,
  field_gpiod_afrh_afsel15,
  field_gpiod_afrl_afsel0,
  field_gpiod_afrl_afsel1,
  field_gpiod_afrl_afsel2,
  field_gpiod_afrl_afsel3,
  field_gpiod_afrl_afsel4,
  field_gpiod_afrl_afsel5,
  field_gpiod_afrl_afsel6,
  field_gpiod_afrl_afsel7,
  field_gpiod_brr_br0,
  field_gpiod_brr_br1,
  field_gpiod_brr_br2,
  field_gpiod_brr_br3,
  field_gpiod_brr_br4,
  field_gpiod_brr_br5,
  field_gpiod_brr_br6,
  field_gpiod_brr_br7,
  field_gpiod_brr_br8,
  field_gpiod_brr_br9,
  field_gpiod_brr_br10,
  field_gpiod_brr_br11,
  field_gpiod_brr_br12,
  field_gpiod_brr_br13,
  field_gpiod_brr_br14,
  field_gpiod_brr_br15,
  field_gpiod_bsrr_bs0,
  field_gpiod_bsrr_bs1,
  field_gpiod_bsrr_bs2,
  field_gpiod_bsrr_bs3,
  field_gpiod_bsrr_bs4,
  field_gpiod_bsrr_bs5,
  field_gpiod_bsrr_bs6,
  field_gpiod_bsrr_bs7,
  field_gpiod_bsrr_bs8,
  field_gpiod_bsrr_bs9,
  field_gpiod_bsrr_bs10,
  field_gpiod_bsrr_bs11,
  field_gpiod_bsrr_bs12,
  field_gpiod_bsrr_bs13,
  field_gpiod_bsrr_bs14,
  field_gpiod_bsrr_bs15,
  field_gpiod_bsrr_br0,
  field_gpiod_bsrr_br1,
  field_gpiod_bsrr_br2,
  field_gpiod_bsrr_br3,
  field_gpiod_bsrr_br4,
  field_gpiod_bsrr_br5,
  field_gpiod_bsrr_br6,
  field_gpiod_bsrr_br7,
  field_gpiod_bsrr_br8,
  field_gpiod_bsrr_br9,
  field_gpiod_bsrr_br10,
  field_gpiod_bsrr_br11,
  field_gpiod_bsrr_br12,
  field_gpiod_bsrr_br13,
  field_gpiod_bsrr_br14,
  field_gpiod_bsrr_br15,
  field_gpiod_idr_idr0,
  field_gpiod_idr_idr1,
  field_gpiod_idr_idr2,
  field_gpiod_idr_idr3,
  field_gpiod_idr_idr4,
  field_gpiod_idr_idr5,
  field_gpiod_idr_idr6,
  field_gpiod_idr_idr7,
  field_gpiod_idr_idr8,
  field_gpiod_idr_idr9,
  field_gpiod_idr_idr10,
  field_gpiod_idr_idr11,
  field_gpiod_idr_idr12,
  field_gpiod_idr_idr13,
  field_gpiod_idr_idr14,
  field_gpiod_idr_idr15,
  field_gpiod_lckr_lck0,
  field_gpiod_lckr_lck1,
  field_gpiod_lckr_lck2,
  field_gpiod_lckr_lck3,
  field_gpiod_lckr_lck4,
  field_gpiod_lckr_lck5,
  field_gpiod_lckr_lck6,
  field_gpiod_lckr_lck7,
  field_gpiod_lckr_lck8,
  field_gpiod_lckr_lck9,
  field_gpiod_lckr_lck10,
  field_gpiod_lckr_lck11,
  field_gpiod_lckr_lck12,
  field_gpiod_lckr_lck13,
  field_gpiod_lckr_lck14,
  field_gpiod_lckr_lck15,
  field_gpiod_lckr_lckk,
  field_gpiod_moder_moder0,
  field_gpiod_moder_moder1,
  field_gpiod_moder_moder2,
  field_gpiod_moder_moder3,
  field_gpiod_moder_moder4,
  field_gpiod_moder_moder5,
  field_gpiod_moder_moder6,
  field_gpiod_moder_moder7,
  field_gpiod_moder_moder8,
  field_gpiod_moder_moder9,
  field_gpiod_moder_moder10,
  field_gpiod_moder_moder11,
  field_gpiod_moder_moder12,
  field_gpiod_moder_moder13,
  field_gpiod_moder_moder14,
  field_gpiod_moder_moder15,
  field_gpiod_odr_odr0,
  field_gpiod_odr_odr1,
  field_gpiod_odr_odr2,
  field_gpiod_odr_odr3,
  field_gpiod_odr_odr4,
  field_gpiod_odr_odr5,
  field_gpiod_odr_odr6,
  field_gpiod_odr_odr7,
  field_gpiod_odr_odr8,
  field_gpiod_odr_odr9,
  field_gpiod_odr_odr10,
  field_gpiod_odr_odr11,
  field_gpiod_odr_odr12,
  field_gpiod_odr_odr13,
  field_gpiod_odr_odr14,
  field_gpiod_odr_odr15,
  field_gpiod_ospeedr_ospeedr0,
  field_gpiod_ospeedr_ospeedr1,
  field_gpiod_ospeedr_ospeedr2,
  field_gpiod_ospeedr_ospeedr3,
  field_gpiod_ospeedr_ospeedr4,
  field_gpiod_ospeedr_ospeedr5,
  field_gpiod_ospeedr_ospeedr6,
  field_gpiod_ospeedr_ospeedr7,
  field_gpiod_ospeedr_ospeedr8,
  field_gpiod_ospeedr_ospeedr9,
  field_gpiod_ospeedr_ospeedr10,
  field_gpiod_ospeedr_ospeedr11,
  field_gpiod_ospeedr_ospeedr12,
  field_gpiod_ospeedr_ospeedr13,
  field_gpiod_ospeedr_ospeedr14,
  field_gpiod_ospeedr_ospeedr15,
  field_gpiod_otyper_ot0,
  field_gpiod_otyper_ot1,
  field_gpiod_otyper_ot2,
  field_gpiod_otyper_ot3,
  field_gpiod_otyper_ot4,
  field_gpiod_otyper_ot5,
  field_gpiod_otyper_ot6,
  field_gpiod_otyper_ot7,
  field_gpiod_otyper_ot8,
  field_gpiod_otyper_ot9,
  field_gpiod_otyper_ot10,
  field_gpiod_otyper_ot11,
  field_gpiod_otyper_ot12,
  field_gpiod_otyper_ot13,
  field_gpiod_otyper_ot14,
  field_gpiod_otyper_ot15,
  field_gpiod_pupdr_pupdr0,
  field_gpiod_pupdr_pupdr1,
  field_gpiod_pupdr_pupdr2,
  field_gpiod_pupdr_pupdr3,
  field_gpiod_pupdr_pupdr4,
  field_gpiod_pupdr_pupdr5,
  field_gpiod_pupdr_pupdr6,
  field_gpiod_pupdr_pupdr7,
  field_gpiod_pupdr_pupdr8,
  field_gpiod_pupdr_pupdr9,
  field_gpiod_pupdr_pupdr10,
  field_gpiod_pupdr_pupdr11,
  field_gpiod_pupdr_pupdr12,
  field_gpiod_pupdr_pupdr13,
  field_gpiod_pupdr_pupdr14,
  field_gpiod_pupdr_pupdr15,
  field_gpiof_afrh_afsel8,
  field_gpiof_afrh_afsel9,
  field_gpiof_afrh_afsel10,
  field_gpiof_afrh_afsel11,
  field_gpiof_afrh_afsel12,
  field_gpiof_afrh_afsel13,
  field_gpiof_afrh_afsel14,
  field_gpiof_afrh_afsel15,
  field_gpiof_afrl_afsel0,
  field_gpiof_afrl_afsel1,
  field_gpiof_afrl_afsel2,
  field_gpiof_afrl_afsel3,
  field_gpiof_afrl_afsel4,
  field_gpiof_afrl_afsel5,
  field_gpiof_afrl_afsel6,
  field_gpiof_afrl_afsel7,
  field_gpiof_brr_br0,
  field_gpiof_brr_br1,
  field_gpiof_brr_br2,
  field_gpiof_brr_br3,
  field_gpiof_brr_br4,
  field_gpiof_brr_br5,
  field_gpiof_brr_br6,
  field_gpiof_brr_br7,
  field_gpiof_brr_br8,
  field_gpiof_brr_br9,
  field_gpiof_brr_br10,
  field_gpiof_brr_br11,
  field_gpiof_brr_br12,
  field_gpiof_brr_br13,
  field_gpiof_brr_br14,
  field_gpiof_brr_br15,
  field_gpiof_bsrr_bs0,
  field_gpiof_bsrr_bs1,
  field_gpiof_bsrr_bs2,
  field_gpiof_bsrr_bs3,
  field_gpiof_bsrr_bs4,
  field_gpiof_bsrr_bs5,
  field_gpiof_bsrr_bs6,
  field_gpiof_bsrr_bs7,
  field_gpiof_bsrr_bs8,
  field_gpiof_bsrr_bs9,
  field_gpiof_bsrr_bs10,
  field_gpiof_bsrr_bs11,
  field_gpiof_bsrr_bs12,
  field_gpiof_bsrr_bs13,
  field_gpiof_bsrr_bs14,
  field_gpiof_bsrr_bs15,
  field_gpiof_bsrr_br0,
  field_gpiof_bsrr_br1,
  field_gpiof_bsrr_br2,
  field_gpiof_bsrr_br3,
  field_gpiof_bsrr_br4,
  field_gpiof_bsrr_br5,
  field_gpiof_bsrr_br6,
  field_gpiof_bsrr_br7,
  field_gpiof_bsrr_br8,
  field_gpiof_bsrr_br9,
  field_gpiof_bsrr_br10,
  field_gpiof_bsrr_br11,
  field_gpiof_bsrr_br12,
  field_gpiof_bsrr_br13,
  field_gpiof_bsrr_br14,
  field_gpiof_bsrr_br15,
  field_gpiof_idr_idr0,
  field_gpiof_idr_idr1,
  field_gpiof_idr_idr2,
  field_gpiof_idr_idr3,
  field_gpiof_idr_idr4,
  field_gpiof_idr_idr5,
  field_gpiof_idr_idr6,
  field_gpiof_idr_idr7,
  field_gpiof_idr_idr8,
  field_gpiof_idr_idr9,
  field_gpiof_idr_idr10,
  field_gpiof_idr_idr11,
  field_gpiof_idr_idr12,
  field_gpiof_idr_idr13,
  field_gpiof_idr_idr14,
  field_gpiof_idr_idr15,
  field_gpiof_lckr_lck0,
  field_gpiof_lckr_lck1,
  field_gpiof_lckr_lck2,
  field_gpiof_lckr_lck3,
  field_gpiof_lckr_lck4,
  field_gpiof_lckr_lck5,
  field_gpiof_lckr_lck6,
  field_gpiof_lckr_lck7,
  field_gpiof_lckr_lck8,
  field_gpiof_lckr_lck9,
  field_gpiof_lckr_lck10,
  field_gpiof_lckr_lck11,
  field_gpiof_lckr_lck12,
  field_gpiof_lckr_lck13,
  field_gpiof_lckr_lck14,
  field_gpiof_lckr_lck15,
  field_gpiof_lckr_lckk,
  field_gpiof_moder_moder0,
  field_gpiof_moder_moder1,
  field_gpiof_moder_moder2,
  field_gpiof_moder_moder3,
  field_gpiof_moder_moder4,
  field_gpiof_moder_moder5,
  field_gpiof_moder_moder6,
  field_gpiof_moder_moder7,
  field_gpiof_moder_moder8,
  field_gpiof_moder_moder9,
  field_gpiof_moder_moder10,
  field_gpiof_moder_moder11,
  field_gpiof_moder_moder12,
  field_gpiof_moder_moder13,
  field_gpiof_moder_moder14,
  field_gpiof_moder_moder15,
  field_gpiof_odr_odr0,
  field_gpiof_odr_odr1,
  field_gpiof_odr_odr2,
  field_gpiof_odr_odr3,
  field_gpiof_odr_odr4,
  field_gpiof_odr_odr5,
  field_gpiof_odr_odr6,
  field_gpiof_odr_odr7,
  field_gpiof_odr_odr8,
  field_gpiof_odr_odr9,
  field_gpiof_odr_odr10,
  field_gpiof_odr_odr11,
  field_gpiof_odr_odr12,
  field_gpiof_odr_odr13,
  field_gpiof_odr_odr14,
  field_gpiof_odr_odr15,
  field_gpiof_ospeedr_ospeedr0,
  field_gpiof_ospeedr_ospeedr1,
  field_gpiof_ospeedr_ospeedr2,
  field_gpiof_ospeedr_ospeedr3,
  field_gpiof_ospeedr_ospeedr4,
  field_gpiof_ospeedr_ospeedr5,
  field_gpiof_ospeedr_ospeedr6,
  field_gpiof_ospeedr_ospeedr7,
  field_gpiof_ospeedr_ospeedr8,
  field_gpiof_ospeedr_ospeedr9,
  field_gpiof_ospeedr_ospeedr10,
  field_gpiof_ospeedr_ospeedr11,
  field_gpiof_ospeedr_ospeedr12,
  field_gpiof_ospeedr_ospeedr13,
  field_gpiof_ospeedr_ospeedr14,
  field_gpiof_ospeedr_ospeedr15,
  field_gpiof_otyper_ot0,
  field_gpiof_otyper_ot1,
  field_gpiof_otyper_ot2,
  field_gpiof_otyper_ot3,
  field_gpiof_otyper_ot4,
  field_gpiof_otyper_ot5,
  field_gpiof_otyper_ot6,
  field_gpiof_otyper_ot7,
  field_gpiof_otyper_ot8,
  field_gpiof_otyper_ot9,
  field_gpiof_otyper_ot10,
  field_gpiof_otyper_ot11,
  field_gpiof_otyper_ot12,
  field_gpiof_otyper_ot13,
  field_gpiof_otyper_ot14,
  field_gpiof_otyper_ot15,
  field_gpiof_pupdr_pupdr0,
  field_gpiof_pupdr_pupdr1,
  field_gpiof_pupdr_pupdr2,
  field_gpiof_pupdr_pupdr3,
  field_gpiof_pupdr_pupdr4,
  field_gpiof_pupdr_pupdr5,
  field_gpiof_pupdr_pupdr6,
  field_gpiof_pupdr_pupdr7,
  field_gpiof_pupdr_pupdr8,
  field_gpiof_pupdr_pupdr9,
  field_gpiof_pupdr_pupdr10,
  field_gpiof_pupdr_pupdr11,
  field_gpiof_pupdr_pupdr12,
  field_gpiof_pupdr_pupdr13,
  field_gpiof_pupdr_pupdr14,
  field_gpiof_pupdr_pupdr15,
  field_lpuart1_brr_brr,
  field_lpuart1_cr1_ue,
  field_lpuart1_cr1_uesm,
  field_lpuart1_cr1_re,
  field_lpuart1_cr1_te,
  field_lpuart1_cr1_idleie,
  field_lpuart1_cr1_rxneie,
  field_lpuart1_cr1_tcie,
  field_lpuart1_cr1_txeie,
  field_lpuart1_cr1_peie,
  field_lpuart1_cr1_ps,
  field_lpuart1_cr1_pce,
  field_lpuart1_cr1_wake,
  field_lpuart1_cr1_m0,
  field_lpuart1_cr1_mme,
  field_lpuart1_cr1_cmie,
  field_lpuart1_cr1_dedt0,
  field_lpuart1_cr1_deat,
  field_lpuart1_cr1_m1,
  field_lpuart1_cr1_fifoen,
  field_lpuart1_cr1_txfeie,
  field_lpuart1_cr1_rxffie,
  field_lpuart1_cr2_addm7,
  field_lpuart1_cr2_stop,
  field_lpuart1_cr2_swap,
  field_lpuart1_cr2_rxinv,
  field_lpuart1_cr2_txinv,
  field_lpuart1_cr2_tainv,
  field_lpuart1_cr2_msbfirst,
  field_lpuart1_cr2_add0_3,
  field_lpuart1_cr2_add4_7,
  field_lpuart1_cr3_eie,
  field_lpuart1_cr3_hdsel,
  field_lpuart1_cr3_dmar,
  field_lpuart1_cr3_dmat,
  field_lpuart1_cr3_rtse,
  field_lpuart1_cr3_ctse,
  field_lpuart1_cr3_ctsie,
  field_lpuart1_cr3_ovrdis,
  field_lpuart1_cr3_ddre,
  field_lpuart1_cr3_dem,
  field_lpuart1_cr3_dep,
  field_lpuart1_cr3_wus,
  field_lpuart1_cr3_wufie,
  field_lpuart1_cr3_txftie,
  field_lpuart1_cr3_rxftcfg,
  field_lpuart1_cr3_rxftie,
  field_lpuart1_cr3_txftcfg,
  field_lpuart1_hwcfgr1_cfg1,
  field_lpuart1_hwcfgr1_cfg2,
  field_lpuart1_hwcfgr1_cfg3,
  field_lpuart1_hwcfgr1_cfg4,
  field_lpuart1_hwcfgr1_cfg5,
  field_lpuart1_hwcfgr1_cfg6,
  field_lpuart1_hwcfgr1_cfg7,
  field_lpuart1_hwcfgr1_cfg8,
  field_lpuart1_hwcfgr2_cfg1,
  field_lpuart1_hwcfgr2_cfg2,
  field_lpuart1_icr_pecf,
  field_lpuart1_icr_fecf,
  field_lpuart1_icr_ncf,
  field_lpuart1_icr_orecf,
  field_lpuart1_icr_idlecf,
  field_lpuart1_icr_tccf,
  field_lpuart1_icr_ctscf,
  field_lpuart1_icr_cmcf,
  field_lpuart1_icr_wucf,
  field_lpuart1_ipidr_ipid,
  field_lpuart1_isr_pe,
  field_lpuart1_isr_fe,
  field_lpuart1_isr_nf,
  field_lpuart1_isr_ore,
  field_lpuart1_isr_idle,
  field_lpuart1_isr_rxne,
  field_lpuart1_isr_tc,
  field_lpuart1_isr_txe,
  field_lpuart1_isr_ctsif,
  field_lpuart1_isr_cts,
  field_lpuart1_isr_busy,
  field_lpuart1_isr_cmf,
  field_lpuart1_isr_sbkf,
  field_lpuart1_isr_rwu,
  field_lpuart1_isr_wuf,
  field_lpuart1_isr_teack,
  field_lpuart1_isr_reack,
  field_lpuart1_isr_txfe,
  field_lpuart1_isr_rxff,
  field_lpuart1_isr_rxft,
  field_lpuart1_isr_txft,
  field_lpuart1_presc_prescaler,
  field_lpuart1_rdr_rdr,
  field_lpuart1_rqr_abrrq,
  field_lpuart1_rqr_sbkrq,
  field_lpuart1_rqr_mmrq,
  field_lpuart1_rqr_rxfrq,
  field_lpuart1_rqr_txfrq,
  field_lpuart1_sidr_sid,
  field_lpuart1_tdr_tdr,
  field_lpuart1_verr_minrev,
  field_lpuart1_verr_majrev,
  field_rcc_ahbenr_dma1en,
  field_rcc_ahbrstr_dma1rst,
  field_rcc_apbenr1_spi2en,
  field_rcc_apbenr1_usart2en,
  field_rcc_apbenr1_usart3en,
  field_rcc_apbenr1_usart4en,
  field_rcc_apbenr1_lpuart1en,
  field_rcc_apbenr2_spi1en,
  field_rcc_apbenr2_usart1en,
  field_rcc_apbrstr1_spi2rst,
  field_rcc_apbrstr1_usart2rst,
  field_rcc_apbrstr1_usart3rst,
  field_rcc_apbrstr1_usart4rst,
  field_rcc_apbrstr1_lpuart1rst,
  field_rcc_apbrstr2_spi1rst,
  field_rcc_apbrstr2_usart1rst,
  field_rcc_ccipr_usart1sel,
  field_rcc_ccipr_lpuart1sel,
  field_rcc_iopenr_gpioaen,
  field_rcc_iopenr_gpioben,
  field_rcc_iopenr_gpiocen,
  field_rcc_iopenr_gpioden,
  field_rcc_iopenr_gpiofen,
  field_rcc_ioprstr_gpioarst,
  field_rcc_ioprstr_gpiobrst,
  field_rcc_ioprstr_gpiocrst,
  field_rcc_ioprstr_gpiodrst,
  field_rcc_ioprstr_gpiofrst,
  field_spi1_cr1_cpha,
  field_spi1_cr1_cpol,
  field_spi1_cr1_mstr,
  field_spi1_cr1_br,
  field_spi1_cr1_spe,
  field_spi1_cr1_lsbfirst,
  field_spi1_cr1_ssi,
  field_spi1_cr1_ssm,
  field_spi1_cr1_rxonly,
  field_spi1_cr1_dff,
  field_spi1_cr1_crcnext,
  field_spi1_cr1_crcen,
  field_spi1_cr1_bidioe,
  field_spi1_cr1_bidimode,
  field_spi1_cr2_rxdmaen,
  field_spi1_cr2_txdmaen,
  field_spi1_cr2_ssoe,
  field_spi1_cr2_nssp,
  field_spi1_cr2_frf,
  field_spi1_cr2_errie,
  field_spi1_cr2_rxneie,
  field_spi1_cr2_txeie,
  field_spi1_cr2_ds,
  field_spi1_cr2_frxth,
  field_spi1_cr2_ldma_rx,
  field_spi1_cr2_ldma_tx,
  field_spi1_crcpr_crcpoly,
  field_spi1_dr_dr,
  field_spi1_hwcfgr_crccfg,
  field_spi1_hwcfgr_i2scfg,
  field_spi1_hwcfgr_i2sckcfg,
  field_spi1_hwcfgr_dscfg,
  field_spi1_hwcfgr_nsscfg,
  field_spi1_i2scfgr_chlen,
  field_spi1_i2scfgr_datlen,
  field_spi1_i2scfgr_ckpol,
  field_spi1_i2scfgr_i2sstd,
  field_spi1_i2scfgr_pcmsync,
  field_spi1_i2scfgr_i2scfg,
  field_spi1_i2scfgr_se2,
  field_spi1_i2scfgr_i2smod,
  field_spi1_i2spr_i2sdiv,
  field_spi1_i2spr_odd,
  field_spi1_i2spr_mckoe,
  field_spi1_ipidr_ipid,
  field_spi1_rxcrcr_rxcrc,
  field_spi1_sidr_sid,
  field_spi1_sr_rxne,
  field_spi1_sr_txe,
  field_spi1_sr_chside,
  field_spi1_sr_udr,
  field_spi1_sr_crcerr,
  field_spi1_sr_modf,
  field_spi1_sr_ovr,
  field_spi1_sr_bsy,
  field_spi1_sr_tifrfe,
  field_spi1_sr_frlvl,
  field_spi1_sr_ftlvl,
  field_spi1_txcrcr_txcrc,
  field_spi1_verr_minrev,
  field_spi1_verr_majrev,
  field_spi2_cr1_cpha,
  field_spi2_cr1_cpol,
  field_spi2_cr1_mstr,
  field_spi2_cr1_br,
  field_spi2_cr1_spe,
  field_spi2_cr1_lsbfirst,
  field_spi2_cr1_ssi,
  field_spi2_cr1_ssm,
  field_spi2_cr1_rxonly,
  field_spi2_cr1_dff,
  field_spi2_cr1_crcnext,
  field_spi2_cr1_crcen,
  field_spi2_cr1_bidioe,
  field_spi2_cr1_bidimode,
  field_spi2_cr2_rxdmaen,
  field_spi2_cr2_txdmaen,
  field_spi2_cr2_ssoe,
  field_spi2_cr2_nssp,
  field_spi2_cr2_frf,
  field_spi2_cr2_errie,
  field_spi2_cr2_rxneie,
  field_spi2_cr2_txeie,
  field_spi2_cr2_ds,
  field_spi2_cr2_frxth,
  field_spi2_cr2_ldma_rx,
  field_spi2_cr2_ldma_tx,
  field_spi2_crcpr_crcpoly,
  field_spi2_dr_dr,
  field_spi2_hwcfgr_crccfg,
  field_spi2_hwcfgr_i2scfg,
  field_spi2_hwcfgr_i2sckcfg,
  field_spi2_hwcfgr_dscfg,
  field_spi2_hwcfgr_nsscfg,
  field_spi2_i2scfgr_chlen,
  field_spi2_i2scfgr_datlen,
  field_spi2_i2scfgr_ckpol,
  field_spi2_i2scfgr_i2sstd,
  field_spi2_i2scfgr_pcmsync,
  field_spi2_i2scfgr_i2scfg,
  field_spi2_i2scfgr_se2,
  field_spi2_i2scfgr_i2smod,
  field_spi2_i2spr_i2sdiv,
  field_spi2_i2spr_odd,
  field_spi2_i2spr_mckoe,
  field_spi2_ipidr_ipid,
  field_spi2_rxcrcr_rxcrc,
  field_spi2_sidr_sid,
  field_spi2_sr_rxne,
  field_spi2_sr_txe,
  field_spi2_sr_chside,
  field_spi2_sr_udr,
  field_spi2_sr_crcerr,
  field_spi2_sr_modf,
  field_spi2_sr_ovr,
  field_spi2_sr_bsy,
  field_spi2_sr_tifrfe,
  field_spi2_sr_frlvl,
  field_spi2_sr_ftlvl,
  field_spi2_txcrcr_txcrc,
  field_spi2_verr_minrev,
  field_spi2_verr_majrev,
  field_usart1_brr_brr_0_3,
  field_usart1_brr_brr_4_15,
  field_usart1_cr1_ue,
  field_usart1_cr1_uesm,
  field_usart1_cr1_re,
  field_usart1_cr1_te,
  field_usart1_cr1_idleie,
  field_usart1_cr1_rxneie,
  field_usart1_cr1_tcie,
  field_usart1_cr1_txeie,
  field_usart1_cr1_peie,
  field_usart1_cr1_ps,
  field_usart1_cr1_pce,
  field_usart1_cr1_wake,
  field_usart1_cr1_m0,
  field_usart1_cr1_mme,
  field_usart1_cr1_cmie,
  field_usart1_cr1_over8,
  field_usart1_cr1_dedt,
  field_usart1_cr1_deat,
  field_usart1_cr1_rtoie,
  field_usart1_cr1_eobie,
  field_usart1_cr1_m1,
  field_usart1_cr1_fifoen,
  field_usart1_cr1_txfeie,
  field_usart1_cr1_rxffie,
  field_usart1_cr2_slven,
  field_usart1_cr2_dis_nss,
  field_usart1_cr2_addm7,
  field_usart1_cr2_lbdl,
  field_usart1_cr2_lbdie,
  field_usart1_cr2_lbcl,
  field_usart1_cr2_cpha,
  field_usart1_cr2_cpol,
  field_usart1_cr2_clken,
  field_usart1_cr2_stop,
  field_usart1_cr2_linen,
  field_usart1_cr2_swap,
  field_usart1_cr2_rxinv,
  field_usart1_cr2_txinv,
  field_usart1_cr2_tainv,
  field_usart1_cr2_msbfirst,
  field_usart1_cr2_abren,
  field_usart1_cr2_abrmod,
  field_usart1_cr2_rtoen,
  field_usart1_cr2_add0_3,
  field_usart1_cr2_add4_7,
  field_usart1_cr3_eie,
  field_usart1_cr3_iren,
  field_usart1_cr3_irlp,
  field_usart1_cr3_hdsel,
  field_usart1_cr3_nack,
  field_usart1_cr3_scen,
  field_usart1_cr3_dmar,
  field_usart1_cr3_dmat,
  field_usart1_cr3_rtse,
  field_usart1_cr3_ctse,
  field_usart1_cr3_ctsie,
  field_usart1_cr3_onebit,
  field_usart1_cr3_ovrdis,
  field_usart1_cr3_ddre,
  field_usart1_cr3_dem,
  field_usart1_cr3_dep,
  field_usart1_cr3_scarcnt,
  field_usart1_cr3_wus,
  field_usart1_cr3_wufie,
  field_usart1_cr3_txftie,
  field_usart1_cr3_tcbgtie,
  field_usart1_cr3_rxftcfg,
  field_usart1_cr3_rxftie,
  field_usart1_cr3_txftcfg,
  field_usart1_gtpr_psc,
  field_usart1_gtpr_gt,
  field_usart1_icr_pecf,
  field_usart1_icr_fecf,
  field_usart1_icr_ncf,
  field_usart1_icr_orecf,
  field_usart1_icr_idlecf,
  field_usart1_icr_txfecf,
  field_usart1_icr_tccf,
  field_usart1_icr_tcbgtcf,
  field_usart1_icr_lbdcf,
  field_usart1_icr_ctscf,
  field_usart1_icr_rtocf,
  field_usart1_icr_eobcf,
  field_usart1_icr_udrcf,
  field_usart1_icr_cmcf,
  field_usart1_icr_wucf,
  field_usart1_isr_pe,
  field_usart1_isr_fe,
  field_usart1_isr_nf,
  field_usart1_isr_ore,
  field_usart1_isr_idle,
  field_usart1_isr_rxne,
  field_usart1_isr_tc,
  field_usart1_isr_txe,
  field_usart1_isr_lbdf,
  field_usart1_isr_ctsif,
  field_usart1_isr_cts,
  field_usart1_isr_rtof,
  field_usart1_isr_eobf,
  field_usart1_isr_udr,
  field_usart1_isr_abre,
  field_usart1_isr_abrf,
  field_usart1_isr_busy,
  field_usart1_isr_cmf,
  field_usart1_isr_sbkf,
  field_usart1_isr_rwu,
  field_usart1_isr_wuf,
  field_usart1_isr_teack,
  field_usart1_isr_reack,
  field_usart1_isr_txfe,
  field_usart1_isr_rxff,
  field_usart1_isr_tcbgt,
  field_usart1_isr_rxft,
  field_usart1_isr_txft,
  field_usart1_presc_prescaler,
  field_usart1_rdr_rdr,
  field_usart1_rqr_abrrq,
  field_usart1_rqr_sbkrq,
  field_usart1_rqr_mmrq,
  field_usart1_rqr_rxfrq,
  field_usart1_rqr_txfrq,
  field_usart1_rtor_rto,
  field_usart1_rtor_blen,
  field_usart1_tdr_tdr,
  field_usart2_brr_brr_0_3,
  field_usart2_brr_brr_4_15,
  field_usart2_cr1_ue,
  field_usart2_cr1_uesm,
  field_usart2_cr1_re,
  field_usart2_cr1_te,
  field_usart2_cr1_idleie,
  field_usart2_cr1_rxneie,
  field_usart2_cr1_tcie,
  field_usart2_cr1_txeie,
  field_usart2_cr1_peie,
  field_usart2_cr1_ps,
  field_usart2_cr1_pce,
  field_usart2_cr1_wake,
  field_usart2_cr1_m0,
  field_usart2_cr1_mme,
  field_usart2_cr1_cmie,
  field_usart2_cr1_over8,
  field_usart2_cr1_dedt,
  field_usart2_cr1_deat,
  field_usart2_cr1_rtoie,
  field_usart2_cr1_eobie,
  field_usart2_cr1_m1,
  field_usart2_cr1_fifoen,
  field_usart2_cr1_txfeie,
  field_usart2_cr1_rxffie,
  field_usart2_cr2_slven,
  field_usart2_cr2_dis_nss,
  field_usart2_cr2_addm7,
  field_usart2_cr2_lbdl,
  field_usart2_cr2_lbdie,
  field_usart2_cr2_lbcl,
  field_usart2_cr2_cpha,
  field_usart2_cr2_cpol,
  field_usart2_cr2_clken,
  field_usart2_cr2_stop,
  field_usart2_cr2_linen,
  field_usart2_cr2_swap,
  field_usart2_cr2_rxinv,
  field_usart2_cr2_txinv,
  field_usart2_cr2_tainv,
  field_usart2_cr2_msbfirst,
  field_usart2_cr2_abren,
  field_usart2_cr2_abrmod,
  field_usart2_cr2_rtoen,
  field_usart2_cr2_add0_3,
  field_usart2_cr2_add4_7,
  field_usart2_cr3_eie,
  field_usart2_cr3_iren,
  field_usart2_cr3_irlp,
  field_usart2_cr3_hdsel,
  field_usart2_cr3_nack,
  field_usart2_cr3_scen,
  field_usart2_cr3_dmar,
  field_usart2_cr3_dmat,
  field_usart2_cr3_rtse,
  field_usart2_cr3_ctse,
  field_usart2_cr3_ctsie,
  field_usart2_cr3_onebit,
  field_usart2_cr3_ovrdis,
  field_usart2_cr3_ddre,
  field_usart2_cr3_dem,
  field_usart2_cr3_dep,
  field_usart2_cr3_scarcnt,
  field_usart2_cr3_wus,
  field_usart2_cr3_wufie,
  field_usart2_cr3_txftie,
  field_usart2_cr3_tcbgtie,
  field_usart2_cr3_rxftcfg,
  field_usart2_cr3_rxftie,
  field_usart2_cr3_txftcfg,
  field_usart2_gtpr_psc,
  field_usart2_gtpr_gt,
  field_usart2_icr_pecf,
  field_usart2_icr_fecf,
  field_usart2_icr_ncf,
  field_usart2_icr_orecf,
  field_usart2_icr_idlecf,
  field_usart2_icr_txfecf,
  field_usart2_icr_tccf,
  field_usart2_icr_tcbgtcf,
  field_usart2_icr_lbdcf,
  field_usart2_icr_ctscf,
  field_usart2_icr_rtocf,
  field_usart2_icr_eobcf,
  field_usart2_icr_udrcf,
  field_usart2_icr_cmcf,
  field_usart2_icr_wucf,
  field_usart2_isr_pe,
  field_usart2_isr_fe,
  field_usart2_isr_nf,
  field_usart2_isr_ore,
  field_usart2_isr_idle,
  field_usart2_isr_rxne,
  field_usart2_isr_tc,
  field_usart2_isr_txe,
  field_usart2_isr_lbdf,
  field_usart2_isr_ctsif,
  field_usart2_isr_cts,
  field_usart2_isr_rtof,
  field_usart2_isr_eobf,
  field_usart2_isr_udr,
  field_usart2_isr_abre,
  field_usart2_isr_abrf,
  field_usart2_isr_busy,
  field_usart2_isr_cmf,
  field_usart2_isr_sbkf,
  field_usart2_isr_rwu,
  field_usart2_isr_wuf,
  field_usart2_isr_teack,
  field_usart2_isr_reack,
  field_usart2_isr_txfe,
  field_usart2_isr_rxff,
  field_usart2_isr_tcbgt,
  field_usart2_isr_rxft,
  field_usart2_isr_txft,
  field_usart2_presc_prescaler,
  field_usart2_rdr_rdr,
  field_usart2_rqr_abrrq,
  field_usart2_rqr_sbkrq,
  field_usart2_rqr_mmrq,
  field_usart2_rqr_rxfrq,
  field_usart2_rqr_txfrq,
  field_usart2_rtor_rto,
  field_usart2_rtor_blen,
  field_usart2_tdr_tdr,
  field_usart3_brr_brr_0_3,
  field_usart3_brr_brr_4_15,
  field_usart3_cr1_ue,
  field_usart3_cr1_uesm,
  field_usart3_cr1_re,
  field_usart3_cr1_te,
  field_usart3_cr1_idleie,
  field_usart3_cr1_rxneie,
  field_usart3_cr1_tcie,
  field_usart3_cr1_txeie,
  field_usart3_cr1_peie,
  field_usart3_cr1_ps,
  field_usart3_cr1_pce,
  field_usart3_cr1_wake,
  field_usart3_cr1_m0,
  field_usart3_cr1_mme,
  field_usart3_cr1_cmie,
  field_usart3_cr1_over8,
  field_usart3_cr1_dedt,
  field_usart3_cr1_deat,
  field_usart3_cr1_rtoie,
  field_usart3_cr1_eobie,
  field_usart3_cr1_m1,
  field_usart3_cr1_fifoen,
  field_usart3_cr1_txfeie,
  field_usart3_cr1_rxffie,
  field_usart3_cr2_slven,
  field_usart3_cr2_dis_nss,
  field_usart3_cr2_addm7,
  field_usart3_cr2_lbdl,
  field_usart3_cr2_lbdie,
  field_usart3_cr2_lbcl,
  field_usart3_cr2_cpha,
  field_usart3_cr2_cpol,
  field_usart3_cr2_clken,
  field_usart3_cr2_stop,
  field_usart3_cr2_linen,
  field_usart3_cr2_swap,
  field_usart3_cr2_rxinv,
  field_usart3_cr2_txinv,
  field_usart3_cr2_tainv,
  field_usart3_cr2_msbfirst,
  field_usart3_cr2_abren,
  field_usart3_cr2_abrmod,
  field_usart3_cr2_rtoen,
  field_usart3_cr2_add0_3,
  field_usart3_cr2_add4_7,
  field_usart3_cr3_eie,
  field_usart3_cr3_iren,
  field_usart3_cr3_irlp,
  field_usart3_cr3_hdsel,
  field_usart3_cr3_nack,
  field_usart3_cr3_scen,
  field_usart3_cr3_dmar,
  field_usart3_cr3_dmat,
  field_usart3_cr3_rtse,
  field_usart3_cr3_ctse,
  field_usart3_cr3_ctsie,
  field_usart3_cr3_onebit,
  field_usart3_cr3_ovrdis,
  field_usart3_cr3_ddre,
  field_usart3_cr3_dem,
  field_usart3_cr3_dep,
  field_usart3_cr3_scarcnt,
  field_usart3_cr3_wus,
  field_usart3_cr3_wufie,
  field_usart3_cr3_txftie,
  field_usart3_cr3_tcbgtie,
  field_usart3_cr3_rxftcfg,
  field_usart3_cr3_rxftie,
  field_usart3_cr3_txftcfg,
  field_usart3_gtpr_psc,
  field_usart3_gtpr_gt,
  field_usart3_icr_pecf,
  field_usart3_icr_fecf,
  field_usart3_icr_ncf,
  field_usart3_icr_orecf,
  field_usart3_icr_idlecf,
  field_usart3_icr_txfecf,
  field_usart3_icr_tccf,
  field_usart3_icr_tcbgtcf,
  field_usart3_icr_lbdcf,
  field_usart3_icr_ctscf,
  field_usart3_icr_rtocf,
  field_usart3_icr_eobcf,
  field_usart3_icr_udrcf,
  field_usart3_icr_cmcf,
  field_usart3_icr_wucf,
  field_usart3_isr_pe,
  field_usart3_isr_fe,
  field_usart3_isr_nf,
  field_usart3_isr_ore,
  field_usart3_isr_idle,
  field_usart3_isr_rxne,
  field_usart3_isr_tc,
  field_usart3_isr_txe,
  field_usart3_isr_lbdf,
  field_usart3_isr_ctsif,
  field_usart3_isr_cts,
  field_usart3_isr_rtof,
  field_usart3_isr_eobf,
  field_usart3_isr_udr,
  field_usart3_isr_abre,
  field_usart3_isr_abrf,
  field_usart3_isr_busy,
  field_usart3_isr_cmf,
  field_usart3_isr_sbkf,
  field_usart3_isr_rwu,
  field_usart3_isr_wuf,
  field_usart3_isr_teack,
  field_usart3_isr_reack,
  field_usart3_isr_txfe,
  field_usart3_isr_rxff,
  field_usart3_isr_tcbgt,
  field_usart3_isr_rxft,
  field_usart3_isr_txft,
  field_usart3_presc_prescaler,
  field_usart3_rdr_rdr,
  field_usart3_rqr_abrrq,
  field_usart3_rqr_sbkrq,
  field_usart3_rqr_mmrq,
  field_usart3_rqr_rxfrq,
  field_usart3_rqr_txfrq,
  field_usart3_rtor_rto,
  field_usart3_rtor_blen,
  field_usart3_tdr_tdr,
  field_usart4_brr_brr_0_3,
  field_usart4_brr_brr_4_15,
  field_usart4_cr1_ue,
  field_usart4_cr1_uesm,
  field_usart4_cr1_re,
  field_usart4_cr1_te,
  field_usart4_cr1_idleie,
  field_usart4_cr1_rxneie,
  field_usart4_cr1_tcie,
  field_usart4_cr1_txeie,
  field_usart4_cr1_peie,
  field_usart4_cr1_ps,
  field_usart4_cr1_pce,
  field_usart4_cr1_wake,
  field_usart4_cr1_m0,
  field_usart4_cr1_mme,
  field_usart4_cr1_cmie,
  field_usart4_cr1_over8,
  field_usart4_cr1_dedt,
  field_usart4_cr1_deat,
  field_usart4_cr1_rtoie,
  field_usart4_cr1_eobie,
  field_usart4_cr1_m1,
  field_usart4_cr1_fifoen,
  field_usart4_cr1_txfeie,
  field_usart4_cr1_rxffie,
  field_usart4_cr2_slven,
  field_usart4_cr2_dis_nss,
  field_usart4_cr2_addm7,
  field_usart4_cr2_lbdl,
  field_usart4_cr2_lbdie,
  field_usart4_cr2_lbcl,
  field_usart4_cr2_cpha,
  field_usart4_cr2_cpol,
  field_usart4_cr2_clken,
  field_usart4_cr2_stop,
  field_usart4_cr2_linen,
  field_usart4_cr2_swap,
  field_usart4_cr2_rxinv,
  field_usart4_cr2_txinv,
  field_usart4_cr2_tainv,
  field_usart4_cr2_msbfirst,
  field_usart4_cr2_abren,
  field_usart4_cr2_abrmod,
  field_usart4_cr2_rtoen,
  field_usart4_cr2_add0_3,
  field_usart4_cr2_add4_7,
  field_usart4_cr3_eie,
  field_usart4_cr3_iren,
  field_usart4_cr3_irlp,
  field_usart4_cr3_hdsel,
  field_usart4_cr3_nack,
  field_usart4_cr3_scen,
  field_usart4_cr3_dmar,
  field_usart4_cr3_dmat,
  field_usart4_cr3_rtse,
  field_usart4_cr3_ctse,
  field_usart4_cr3_ctsie,
  field_usart4_cr3_onebit,
  field_usart4_cr3_ovrdis,
  field_usart4_cr3_ddre,
  field_usart4_cr3_dem,
  field_usart4_cr3_dep,
  field_usart4_cr3_scarcnt,
  field_usart4_cr3_wus,
  field_usart4_cr3_wufie,
  field_usart4_cr3_txftie,
  field_usart4_cr3_tcbgtie,
  field_usart4_cr3_rxftcfg,
  field_usart4_cr3_rxftie,
  field_usart4_cr3_txftcfg,
  field_usart4_gtpr_psc,
  field_usart4_gtpr_gt,
  field_usart4_icr_pecf,
  field_usart4_icr_fecf,
  field_usart4_icr_ncf,
  field_usart4_icr_orecf,
  field_usart4_icr_idlecf,
  field_usart4_icr_txfecf,
  field_usart4_icr_tccf,
  field_usart4_icr_tcbgtcf,
  field_usart4_icr_lbdcf,
  field_usart4_icr_ctscf,
  field_usart4_icr_rtocf,
  field_usart4_icr_eobcf,
  field_usart4_icr_udrcf,
  field_usart4_icr_cmcf,
  field_usart4_icr_wucf,
  field_usart4_isr_pe,
  field_usart4_isr_fe,
  field_usart4_isr_nf,
  field_usart4_isr_ore,
  field_usart4_isr_idle,
  field_usart4_isr_rxne,
  field_usart4_isr_tc,
  field_usart4_isr_txe,
  field_usart4_isr_lbdf,
  field_usart4_isr_ctsif,
  field_usart4_isr_cts,
  field_usart4_isr_rtof,
  field_usart4_isr_eobf,
  field_usart4_isr_udr,
  field_usart4_isr_abre,
  field_usart4_isr_abrf,
  field_usart4_isr_busy,
  field_usart4_isr_cmf,
  field_usart4_isr_sbkf,
  field_usart4_isr_rwu,
  field_usart4_isr_wuf,
  field_usart4_isr_teack,
  field_usart4_isr_reack,
  field_usart4_isr_txfe,
  field_usart4_isr_rxff,
  field_usart4_isr_tcbgt,
  field_usart4_isr_rxft,
  field_usart4_isr_txft,
  field_usart4_presc_prescaler,
  field_usart4_rdr_rdr,
  field_usart4_rqr_abrrq,
  field_usart4_rqr_sbkrq,
  field_usart4_rqr_mmrq,
  field_usart4_rqr_rxfrq,
  field_usart4_rqr_txfrq,
  field_usart4_rtor_rto,
  field_usart4_rtor_blen,
  field_usart4_tdr_tdr,
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
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_htie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_circ> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_pinc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_minc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_psize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_msize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_pl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr1_mem2mem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_htie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_circ> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_pinc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_minc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_psize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_msize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_pl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr2_mem2mem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_htie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_circ> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_pinc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_minc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_psize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_msize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_pl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr3_mem2mem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr3;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_htie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_circ> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_pinc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_minc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_psize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_msize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_pl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr4_mem2mem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr4;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_htie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_circ> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_pinc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_minc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_psize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_msize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_pl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr5_mem2mem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr5;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_htie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_circ> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_pinc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_minc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_psize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_msize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_pl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr6_mem2mem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr6;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_htie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_teie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_circ> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_pinc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_minc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_psize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_msize> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_pl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ccr7_mem2mem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ccr7;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cmar1_ma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cmar1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cmar2_ma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cmar2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cmar3_ma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cmar3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cmar4_ma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cmar4;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cmar5_ma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cmar5;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cmar6_ma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cmar6;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cmar7_ma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cmar7;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cndtr1_ndt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cndtr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cndtr2_ndt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cndtr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cndtr3_ndt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cndtr3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cndtr4_ndt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cndtr4;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cndtr5_ndt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cndtr5;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cndtr6_ndt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cndtr6;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cndtr7_ndt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cndtr7;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cpar1_pa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cpar1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cpar2_pa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cpar2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cpar3_pa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cpar3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cpar4_pa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cpar4;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cpar5_pa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cpar5;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cpar6_pa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cpar6;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_cpar7_pa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_cpar7;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cgif0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_ctcif1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_chtif2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cteif3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cgif4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_ctcif5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_chtif6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cteif7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cgif8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_ctcif9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_chtif10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cteif11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cgif12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_ctcif13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_chtif14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cteif15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cgif16> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_ctcif17> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_chtif18> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cteif19> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cgif20> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_ctcif21> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_chtif22> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cteif23> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cgif24> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_ctcif25> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_chtif26> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_ifcr_cteif27> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_ifcr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_gif1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_tcif1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_htif1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_teif1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_gif2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_tcif2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_htif2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_teif2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_gif3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_tcif3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_htif3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_teif3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_gif4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_tcif4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_htif4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_teif4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_gif5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_tcif5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_htif5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_teif5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_gif6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_tcif6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_htif6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_teif6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_gif7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_tcif7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_htif7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma1_isr_teif7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma1_isr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c0cr_dmareq_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c0cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c0cr_soie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c0cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c0cr_ege> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c0cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c0cr_se> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c0cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c0cr_spol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c0cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c0cr_nbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c0cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c0cr_sync_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c0cr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c1cr_dmareq_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c1cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c1cr_soie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c1cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c1cr_ege> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c1cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c1cr_se> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c1cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c1cr_spol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c1cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c1cr_nbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c1cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c1cr_sync_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c1cr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c2cr_dmareq_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c2cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c2cr_soie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c2cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c2cr_ege> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c2cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c2cr_se> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c2cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c2cr_spol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c2cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c2cr_nbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c2cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c2cr_sync_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c2cr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c3cr_dmareq_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c3cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c3cr_soie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c3cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c3cr_ege> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c3cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c3cr_se> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c3cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c3cr_spol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c3cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c3cr_nbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c3cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c3cr_sync_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c3cr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c4cr_dmareq_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c4cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c4cr_soie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c4cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c4cr_ege> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c4cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c4cr_se> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c4cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c4cr_spol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c4cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c4cr_nbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c4cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c4cr_sync_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c4cr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c5cr_dmareq_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c5cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c5cr_soie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c5cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c5cr_ege> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c5cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c5cr_se> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c5cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c5cr_spol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c5cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c5cr_nbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c5cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c5cr_sync_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c5cr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c6cr_dmareq_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c6cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c6cr_soie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c6cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c6cr_ege> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c6cr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c6cr_se> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c6cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c6cr_spol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c6cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c6cr_nbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c6cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_c6cr_sync_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_c6cr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_cfr_csof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_cfr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_csr_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_csr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_hwcfgr1_num_dma_streams> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_hwcfgr1_num_dma_periph_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_hwcfgr1_num_dma_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_hwcfgr1_num_dma_reqgen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_hwcfgr2_num_dma_ext_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_hwcfgr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_ipidr_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_ipidr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg0cr_sig_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg0cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg0cr_oie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg0cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg0cr_ge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg0cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg0cr_gpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg0cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg0cr_gnbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg0cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg1cr_sig_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg1cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg1cr_oie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg1cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg1cr_ge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg1cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg1cr_gpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg1cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg1cr_gnbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg1cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg2cr_sig_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg2cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg2cr_oie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg2cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg2cr_ge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg2cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg2cr_gpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg2cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg2cr_gnbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg2cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg3cr_sig_id> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg3cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg3cr_oie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg3cr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg3cr_ge> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg3cr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg3cr_gpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg3cr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rg3cr_gnbreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rg3cr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rgcfr_cof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rgcfr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_rgsr_of> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_rgsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_sidr_sid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_sidr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_verr_minrev> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_verr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dmamux1_dmamux_verr_majrev> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dmamux1_dmamux_verr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afsel8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afsel9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afsel10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afsel11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afsel12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afsel13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afsel14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afsel15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afsel0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afsel1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afsel2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afsel3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afsel4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afsel5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afsel6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afsel7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_brr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_brr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_bs15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_bsrr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_bsrr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_idr_idr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_idr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lck15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_lckr_lckk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_lckr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_moder_moder15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_moder;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_odr_odr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_odr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_ospeedr_ospeedr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_ospeedr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_otyper_ot15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_otyper;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_pupdr_pupdr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_pupdr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afsel8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afsel9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afsel10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afsel11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afsel12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afsel13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afsel14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afsel15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afsel0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afsel1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afsel2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afsel3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afsel4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afsel5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afsel6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afsel7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_brr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_brr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_bs15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_bsrr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_bsrr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_idr_idr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_idr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lck15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_lckr_lckk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_lckr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_moder_moder15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_moder;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_odr_odr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_odr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_ospeedr_ospeedr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_ospeedr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_otyper_ot15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_otyper;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_pupdr_pupdr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_pupdr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afsel8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afsel9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afsel10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afsel11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afsel12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afsel13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afsel14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afsel15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afsel0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afsel1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afsel2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afsel3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afsel4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afsel5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afsel6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afsel7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_brr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_brr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_bs15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_bsrr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_bsrr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_idr_idr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_idr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lck15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_lckr_lckk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_lckr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_moder_moder15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_moder;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_odr_odr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_odr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_ospeedr_ospeedr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_ospeedr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_otyper_ot15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_otyper;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_pupdr_pupdr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_pupdr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afsel8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afsel9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afsel10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afsel11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afsel12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afsel13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afsel14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afsel15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afsel0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afsel1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afsel2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afsel3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afsel4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afsel5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afsel6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afsel7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_brr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_brr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_bs15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_bsrr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_bsrr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_idr_idr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_idr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lck15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_lckr_lckk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_lckr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_moder_moder15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_moder;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_odr_odr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_odr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_ospeedr_ospeedr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_ospeedr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_otyper_ot15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_otyper;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_pupdr_pupdr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_pupdr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrh_afsel8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrh_afsel9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrh_afsel10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrh_afsel11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrh_afsel12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrh_afsel13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrh_afsel14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrh_afsel15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrl_afsel0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrl_afsel1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrl_afsel2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrl_afsel3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrl_afsel4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrl_afsel5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrl_afsel6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_afrl_afsel7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_brr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_brr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_bs15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_bsrr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_bsrr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_idr_idr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_idr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lck15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_lckr_lckk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_lckr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_moder_moder15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_moder;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_odr_odr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_odr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_ospeedr_ospeedr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_ospeedr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_otyper_ot15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_otyper;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiof_pupdr_pupdr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiof_pupdr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_brr_brr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_ue> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_uesm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_idleie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_ps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_pce> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_m0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_mme> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_cmie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_dedt0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_deat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_m1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_fifoen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_txfeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr1_rxffie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr1;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr2_addm7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr2_stop> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr2_swap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr2;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr2_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr2_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr2;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr2_tainv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr2_msbfirst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr2;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr2_add0_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr2_add4_7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_eie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_hdsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_dmar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_dmat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_rtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_ctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_ctsie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_ovrdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_ddre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_dem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_dep> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_wus> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_wufie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_txftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_rxftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_rxftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_cr3_txftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_cr3;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr1_cfg1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr1_cfg2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr1_cfg3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr1_cfg4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr1_cfg5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr1_cfg6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr1_cfg7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr1_cfg8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr2_cfg1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_hwcfgr2_cfg2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_hwcfgr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_icr_pecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_icr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_icr_fecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_icr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_icr_ncf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_icr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_icr_orecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_icr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_icr_idlecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_icr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_icr_tccf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_icr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_icr_ctscf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_icr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_icr_cmcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_icr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_icr_wucf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_icr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_ipidr_ipid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_ipidr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_ore> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_ctsif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_cmf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_sbkf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_wuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_teack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_reack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_rxff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_rxft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_isr_txft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_isr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_presc_prescaler> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_presc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_rdr_rdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_rdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_rqr_abrrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_rqr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_rqr_sbkrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_rqr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_rqr_mmrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_rqr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_rqr_rxfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_rqr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_rqr_txfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_rqr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_sidr_sid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_sidr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_tdr_tdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_tdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_verr_minrev> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_verr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_lpuart1_verr_majrev> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_lpuart1_verr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahbenr_dma1en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahbenr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahbrstr_dma1rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahbrstr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbenr1_spi2en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbenr1_usart2en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbenr1_usart3en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbenr1_usart4en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbenr1_lpuart1en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbenr2_spi1en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbenr2_usart1en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbenr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbrstr1_spi2rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbrstr1_usart2rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbrstr1_usart3rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbrstr1_usart4rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbrstr1_lpuart1rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr1;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbrstr2_spi1rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apbrstr2_usart1rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apbrstr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ccipr_usart1sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ccipr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ccipr_lpuart1sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ccipr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_iopenr_gpioaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_iopenr_gpioben> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_iopenr_gpiocen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_iopenr_gpioden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_iopenr_gpiofen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_iopenr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ioprstr_gpioarst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ioprstr_gpiobrst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ioprstr_gpiocrst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ioprstr_gpiodrst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ioprstr_gpiofrst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ioprstr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_mstr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_br> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_spe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_lsbfirst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_ssi> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_ssm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_rxonly> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_dff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_crcnext> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_crcen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_bidioe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr1_bidimode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr1;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_rxdmaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_txdmaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_ssoe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_nssp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_frf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_errie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_ds> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_frxth> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_ldma_rx> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_cr2_ldma_tx> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_cr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_crcpr_crcpoly> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_crcpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_hwcfgr_crccfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_hwcfgr_i2scfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_hwcfgr_i2sckcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_hwcfgr_dscfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_hwcfgr_nsscfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2scfgr_chlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2scfgr_datlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2scfgr_ckpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2scfgr_i2sstd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2scfgr_pcmsync> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2scfgr_i2scfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2scfgr_se2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2scfgr_i2smod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2spr_i2sdiv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2spr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2spr_odd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2spr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_i2spr_mckoe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_i2spr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_ipidr_ipid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_ipidr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_rxcrcr_rxcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_rxcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sidr_sid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sidr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_chside> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_udr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_crcerr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_modf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_ovr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_bsy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_tifrfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_frlvl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sr_ftlvl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_txcrcr_txcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_txcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_verr_minrev> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_verr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_verr_majrev> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_verr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_mstr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_br> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_spe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_lsbfirst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_ssi> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_ssm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_rxonly> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_dff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_crcnext> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_crcen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_bidioe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr1_bidimode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr1;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_rxdmaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_txdmaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_ssoe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_nssp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_frf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_errie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_ds> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_frxth> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_ldma_rx> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_cr2_ldma_tx> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_cr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_crcpr_crcpoly> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_crcpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_hwcfgr_crccfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_hwcfgr_i2scfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_hwcfgr_i2sckcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_hwcfgr_dscfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_hwcfgr_nsscfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_hwcfgr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2scfgr_chlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2scfgr_datlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2scfgr_ckpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2scfgr_i2sstd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2scfgr_pcmsync> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2scfgr_i2scfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2scfgr_se2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2scfgr_i2smod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2spr_i2sdiv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2spr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2spr_odd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2spr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_i2spr_mckoe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_i2spr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_ipidr_ipid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_ipidr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_rxcrcr_rxcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_rxcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sidr_sid> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sidr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_chside> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_udr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_crcerr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_modf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_ovr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_bsy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_tifrfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_frlvl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_sr_ftlvl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_sr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_txcrcr_txcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_txcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_verr_minrev> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_verr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi2_verr_majrev> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_verr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_brr_brr_0_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_brr_brr_4_15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_ue> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_uesm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_idleie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_ps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_pce> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_m0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_mme> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_cmie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_over8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_dedt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_deat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_rtoie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_eobie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_m1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_fifoen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_txfeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_rxffie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_slven> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_dis_nss> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_addm7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_lbdl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_lbdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_lbcl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_clken> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_stop> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_linen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_swap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_tainv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_msbfirst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_abren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_abrmod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_rtoen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_add0_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr2_add4_7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_eie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_irlp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_hdsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_nack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_scen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_dmar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_dmat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_rtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_ctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_ctsie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_onebit> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_ovrdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_ddre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_dem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_dep> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_scarcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_wus> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_wufie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_txftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_tcbgtie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_rxftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_rxftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr3_txftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr3;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_gtpr_psc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_gtpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_gtpr_gt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_gtpr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_pecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_fecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_ncf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_orecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_idlecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_txfecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_tccf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_tcbgtcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_lbdcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_ctscf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_rtocf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_eobcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_udrcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_cmcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_icr_wucf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_icr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_ore> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_lbdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_ctsif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_rtof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_eobf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_udr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_abre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_abrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_cmf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_sbkf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_wuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_teack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_reack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_rxff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_tcbgt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_rxft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_isr_txft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_isr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_presc_prescaler> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_presc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rdr_rdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rqr_abrrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rqr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rqr_sbkrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rqr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rqr_mmrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rqr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rqr_rxfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rqr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rqr_txfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rqr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rtor_rto> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rtor;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_rtor_blen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_rtor;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_tdr_tdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_tdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_brr_brr_0_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_brr_brr_4_15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_ue> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_uesm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_idleie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_ps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_pce> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_m0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_mme> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_cmie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_over8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_dedt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_deat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_rtoie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_eobie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_m1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_fifoen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_txfeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_rxffie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_slven> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_dis_nss> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_addm7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_lbdl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_lbdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_lbcl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_clken> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_stop> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_linen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_swap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_tainv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_msbfirst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_abren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_abrmod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_rtoen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_add0_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr2_add4_7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_eie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_irlp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_hdsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_nack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_scen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_dmar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_dmat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_rtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_ctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_ctsie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_onebit> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_ovrdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_ddre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_dem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_dep> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_scarcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_wus> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_wufie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_txftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_tcbgtie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_rxftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_rxftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr3_txftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr3;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_gtpr_psc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_gtpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_gtpr_gt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_gtpr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_pecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_fecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_ncf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_orecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_idlecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_txfecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_tccf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_tcbgtcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_lbdcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_ctscf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_rtocf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_eobcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_udrcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_cmcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_icr_wucf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_icr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_ore> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_lbdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_ctsif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_rtof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_eobf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_udr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_abre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_abrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_cmf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_sbkf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_wuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_teack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_reack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_rxff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_tcbgt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_rxft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_isr_txft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_isr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_presc_prescaler> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_presc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_rdr_rdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_rdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_rqr_abrrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_rqr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_rqr_sbkrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_rqr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_rqr_mmrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_rqr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_rqr_rxfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_rqr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_rqr_txfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_rqr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_rtor_rto> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_rtor;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_rtor_blen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_rtor;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_tdr_tdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_tdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_brr_brr_0_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_brr_brr_4_15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_ue> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_uesm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_idleie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_ps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_pce> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_m0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_mme> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_cmie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_over8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_dedt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_deat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_rtoie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_eobie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_m1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_fifoen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_txfeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr1_rxffie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr1;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_slven> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_dis_nss> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_addm7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_lbdl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_lbdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_lbcl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_clken> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_stop> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_linen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_swap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_tainv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_msbfirst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_abren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_abrmod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_rtoen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_add0_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr2_add4_7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_eie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_irlp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_hdsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_nack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_scen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_dmar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_dmat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_rtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_ctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_ctsie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_onebit> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_ovrdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_ddre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_dem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_dep> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_scarcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_wus> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_wufie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_txftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_tcbgtie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_rxftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_rxftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_cr3_txftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_cr3;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_gtpr_psc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_gtpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_gtpr_gt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_gtpr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_pecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_fecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_ncf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_orecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_idlecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_txfecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_tccf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_tcbgtcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_lbdcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_ctscf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_rtocf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_eobcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_udrcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_cmcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_icr_wucf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_icr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_ore> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_lbdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_ctsif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_rtof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_eobf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_udr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_abre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_abrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_cmf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_sbkf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_wuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_teack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_reack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_rxff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_tcbgt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_rxft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_isr_txft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_isr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_presc_prescaler> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_presc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_rdr_rdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_rdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_rqr_abrrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_rqr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_rqr_sbkrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_rqr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_rqr_mmrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_rqr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_rqr_rxfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_rqr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_rqr_txfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_rqr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_rtor_rto> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_rtor;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_rtor_blen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_rtor;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart3_tdr_tdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart3_tdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_brr_brr_0_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_brr_brr_4_15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_ue> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_uesm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_idleie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_ps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_pce> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_m0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_mme> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_cmie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_over8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_dedt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_deat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_rtoie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_eobie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_m1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_fifoen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_txfeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr1_rxffie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr1;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_slven> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_dis_nss> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_addm7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_lbdl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_lbdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_lbcl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_clken> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_stop> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_linen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_swap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_rxinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_txinv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_tainv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_msbfirst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_abren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_abrmod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_rtoen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_add0_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr2_add4_7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr2;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_eie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_irlp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_hdsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_nack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_scen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_dmar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_dmat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_rtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_ctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_ctsie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_onebit> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_ovrdis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_ddre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_dem> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_dep> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_scarcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_wus> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_wufie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_txftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_tcbgtie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_rxftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_rxftie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_cr3_txftcfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_cr3;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_gtpr_psc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_gtpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_gtpr_gt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_gtpr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_pecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_fecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_ncf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_orecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_idlecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_txfecf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_tccf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_tcbgtcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_lbdcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_ctscf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_rtocf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_eobcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_udrcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_cmcf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_icr_wucf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_icr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_ore> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_lbdf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_ctsif> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_rtof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_eobf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_udr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_abre> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_abrf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_cmf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_sbkf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_wuf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_teack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_reack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_rxff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_tcbgt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_rxft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_isr_txft> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_isr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_presc_prescaler> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_presc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_rdr_rdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_rdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_rqr_abrrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_rqr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_rqr_sbkrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_rqr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_rqr_mmrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_rqr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_rqr_rxfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_rqr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_rqr_txfrq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_rqr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_rtor_rto> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_rtor;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_rtor_blen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_rtor;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart4_tdr_tdr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart4_tdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

inline constexpr std::array<FieldId, 1882> kRegisterFields = {{
  FieldId::field_dma1_ccr1_en,
  FieldId::field_dma1_ccr1_tcie,
  FieldId::field_dma1_ccr1_htie,
  FieldId::field_dma1_ccr1_teie,
  FieldId::field_dma1_ccr1_dir,
  FieldId::field_dma1_ccr1_circ,
  FieldId::field_dma1_ccr1_pinc,
  FieldId::field_dma1_ccr1_minc,
  FieldId::field_dma1_ccr1_psize,
  FieldId::field_dma1_ccr1_msize,
  FieldId::field_dma1_ccr1_pl,
  FieldId::field_dma1_ccr1_mem2mem,
  FieldId::field_dma1_ccr2_en,
  FieldId::field_dma1_ccr2_tcie,
  FieldId::field_dma1_ccr2_htie,
  FieldId::field_dma1_ccr2_teie,
  FieldId::field_dma1_ccr2_dir,
  FieldId::field_dma1_ccr2_circ,
  FieldId::field_dma1_ccr2_pinc,
  FieldId::field_dma1_ccr2_minc,
  FieldId::field_dma1_ccr2_psize,
  FieldId::field_dma1_ccr2_msize,
  FieldId::field_dma1_ccr2_pl,
  FieldId::field_dma1_ccr2_mem2mem,
  FieldId::field_dma1_ccr3_en,
  FieldId::field_dma1_ccr3_tcie,
  FieldId::field_dma1_ccr3_htie,
  FieldId::field_dma1_ccr3_teie,
  FieldId::field_dma1_ccr3_dir,
  FieldId::field_dma1_ccr3_circ,
  FieldId::field_dma1_ccr3_pinc,
  FieldId::field_dma1_ccr3_minc,
  FieldId::field_dma1_ccr3_psize,
  FieldId::field_dma1_ccr3_msize,
  FieldId::field_dma1_ccr3_pl,
  FieldId::field_dma1_ccr3_mem2mem,
  FieldId::field_dma1_ccr4_en,
  FieldId::field_dma1_ccr4_tcie,
  FieldId::field_dma1_ccr4_htie,
  FieldId::field_dma1_ccr4_teie,
  FieldId::field_dma1_ccr4_dir,
  FieldId::field_dma1_ccr4_circ,
  FieldId::field_dma1_ccr4_pinc,
  FieldId::field_dma1_ccr4_minc,
  FieldId::field_dma1_ccr4_psize,
  FieldId::field_dma1_ccr4_msize,
  FieldId::field_dma1_ccr4_pl,
  FieldId::field_dma1_ccr4_mem2mem,
  FieldId::field_dma1_ccr5_en,
  FieldId::field_dma1_ccr5_tcie,
  FieldId::field_dma1_ccr5_htie,
  FieldId::field_dma1_ccr5_teie,
  FieldId::field_dma1_ccr5_dir,
  FieldId::field_dma1_ccr5_circ,
  FieldId::field_dma1_ccr5_pinc,
  FieldId::field_dma1_ccr5_minc,
  FieldId::field_dma1_ccr5_psize,
  FieldId::field_dma1_ccr5_msize,
  FieldId::field_dma1_ccr5_pl,
  FieldId::field_dma1_ccr5_mem2mem,
  FieldId::field_dma1_ccr6_en,
  FieldId::field_dma1_ccr6_tcie,
  FieldId::field_dma1_ccr6_htie,
  FieldId::field_dma1_ccr6_teie,
  FieldId::field_dma1_ccr6_dir,
  FieldId::field_dma1_ccr6_circ,
  FieldId::field_dma1_ccr6_pinc,
  FieldId::field_dma1_ccr6_minc,
  FieldId::field_dma1_ccr6_psize,
  FieldId::field_dma1_ccr6_msize,
  FieldId::field_dma1_ccr6_pl,
  FieldId::field_dma1_ccr6_mem2mem,
  FieldId::field_dma1_ccr7_en,
  FieldId::field_dma1_ccr7_tcie,
  FieldId::field_dma1_ccr7_htie,
  FieldId::field_dma1_ccr7_teie,
  FieldId::field_dma1_ccr7_dir,
  FieldId::field_dma1_ccr7_circ,
  FieldId::field_dma1_ccr7_pinc,
  FieldId::field_dma1_ccr7_minc,
  FieldId::field_dma1_ccr7_psize,
  FieldId::field_dma1_ccr7_msize,
  FieldId::field_dma1_ccr7_pl,
  FieldId::field_dma1_ccr7_mem2mem,
  FieldId::field_dma1_cmar1_ma,
  FieldId::field_dma1_cmar2_ma,
  FieldId::field_dma1_cmar3_ma,
  FieldId::field_dma1_cmar4_ma,
  FieldId::field_dma1_cmar5_ma,
  FieldId::field_dma1_cmar6_ma,
  FieldId::field_dma1_cmar7_ma,
  FieldId::field_dma1_cndtr1_ndt,
  FieldId::field_dma1_cndtr2_ndt,
  FieldId::field_dma1_cndtr3_ndt,
  FieldId::field_dma1_cndtr4_ndt,
  FieldId::field_dma1_cndtr5_ndt,
  FieldId::field_dma1_cndtr6_ndt,
  FieldId::field_dma1_cndtr7_ndt,
  FieldId::field_dma1_cpar1_pa,
  FieldId::field_dma1_cpar2_pa,
  FieldId::field_dma1_cpar3_pa,
  FieldId::field_dma1_cpar4_pa,
  FieldId::field_dma1_cpar5_pa,
  FieldId::field_dma1_cpar6_pa,
  FieldId::field_dma1_cpar7_pa,
  FieldId::field_dma1_ifcr_cgif0,
  FieldId::field_dma1_ifcr_ctcif1,
  FieldId::field_dma1_ifcr_chtif2,
  FieldId::field_dma1_ifcr_cteif3,
  FieldId::field_dma1_ifcr_cgif4,
  FieldId::field_dma1_ifcr_ctcif5,
  FieldId::field_dma1_ifcr_chtif6,
  FieldId::field_dma1_ifcr_cteif7,
  FieldId::field_dma1_ifcr_cgif8,
  FieldId::field_dma1_ifcr_ctcif9,
  FieldId::field_dma1_ifcr_chtif10,
  FieldId::field_dma1_ifcr_cteif11,
  FieldId::field_dma1_ifcr_cgif12,
  FieldId::field_dma1_ifcr_ctcif13,
  FieldId::field_dma1_ifcr_chtif14,
  FieldId::field_dma1_ifcr_cteif15,
  FieldId::field_dma1_ifcr_cgif16,
  FieldId::field_dma1_ifcr_ctcif17,
  FieldId::field_dma1_ifcr_chtif18,
  FieldId::field_dma1_ifcr_cteif19,
  FieldId::field_dma1_ifcr_cgif20,
  FieldId::field_dma1_ifcr_ctcif21,
  FieldId::field_dma1_ifcr_chtif22,
  FieldId::field_dma1_ifcr_cteif23,
  FieldId::field_dma1_ifcr_cgif24,
  FieldId::field_dma1_ifcr_ctcif25,
  FieldId::field_dma1_ifcr_chtif26,
  FieldId::field_dma1_ifcr_cteif27,
  FieldId::field_dma1_isr_gif1,
  FieldId::field_dma1_isr_tcif1,
  FieldId::field_dma1_isr_htif1,
  FieldId::field_dma1_isr_teif1,
  FieldId::field_dma1_isr_gif2,
  FieldId::field_dma1_isr_tcif2,
  FieldId::field_dma1_isr_htif2,
  FieldId::field_dma1_isr_teif2,
  FieldId::field_dma1_isr_gif3,
  FieldId::field_dma1_isr_tcif3,
  FieldId::field_dma1_isr_htif3,
  FieldId::field_dma1_isr_teif3,
  FieldId::field_dma1_isr_gif4,
  FieldId::field_dma1_isr_tcif4,
  FieldId::field_dma1_isr_htif4,
  FieldId::field_dma1_isr_teif4,
  FieldId::field_dma1_isr_gif5,
  FieldId::field_dma1_isr_tcif5,
  FieldId::field_dma1_isr_htif5,
  FieldId::field_dma1_isr_teif5,
  FieldId::field_dma1_isr_gif6,
  FieldId::field_dma1_isr_tcif6,
  FieldId::field_dma1_isr_htif6,
  FieldId::field_dma1_isr_teif6,
  FieldId::field_dma1_isr_gif7,
  FieldId::field_dma1_isr_tcif7,
  FieldId::field_dma1_isr_htif7,
  FieldId::field_dma1_isr_teif7,
  FieldId::field_dmamux1_dmamux_c0cr_dmareq_id,
  FieldId::field_dmamux1_dmamux_c0cr_soie,
  FieldId::field_dmamux1_dmamux_c0cr_ege,
  FieldId::field_dmamux1_dmamux_c0cr_se,
  FieldId::field_dmamux1_dmamux_c0cr_spol,
  FieldId::field_dmamux1_dmamux_c0cr_nbreq,
  FieldId::field_dmamux1_dmamux_c0cr_sync_id,
  FieldId::field_dmamux1_dmamux_c1cr_dmareq_id,
  FieldId::field_dmamux1_dmamux_c1cr_soie,
  FieldId::field_dmamux1_dmamux_c1cr_ege,
  FieldId::field_dmamux1_dmamux_c1cr_se,
  FieldId::field_dmamux1_dmamux_c1cr_spol,
  FieldId::field_dmamux1_dmamux_c1cr_nbreq,
  FieldId::field_dmamux1_dmamux_c1cr_sync_id,
  FieldId::field_dmamux1_dmamux_c2cr_dmareq_id,
  FieldId::field_dmamux1_dmamux_c2cr_soie,
  FieldId::field_dmamux1_dmamux_c2cr_ege,
  FieldId::field_dmamux1_dmamux_c2cr_se,
  FieldId::field_dmamux1_dmamux_c2cr_spol,
  FieldId::field_dmamux1_dmamux_c2cr_nbreq,
  FieldId::field_dmamux1_dmamux_c2cr_sync_id,
  FieldId::field_dmamux1_dmamux_c3cr_dmareq_id,
  FieldId::field_dmamux1_dmamux_c3cr_soie,
  FieldId::field_dmamux1_dmamux_c3cr_ege,
  FieldId::field_dmamux1_dmamux_c3cr_se,
  FieldId::field_dmamux1_dmamux_c3cr_spol,
  FieldId::field_dmamux1_dmamux_c3cr_nbreq,
  FieldId::field_dmamux1_dmamux_c3cr_sync_id,
  FieldId::field_dmamux1_dmamux_c4cr_dmareq_id,
  FieldId::field_dmamux1_dmamux_c4cr_soie,
  FieldId::field_dmamux1_dmamux_c4cr_ege,
  FieldId::field_dmamux1_dmamux_c4cr_se,
  FieldId::field_dmamux1_dmamux_c4cr_spol,
  FieldId::field_dmamux1_dmamux_c4cr_nbreq,
  FieldId::field_dmamux1_dmamux_c4cr_sync_id,
  FieldId::field_dmamux1_dmamux_c5cr_dmareq_id,
  FieldId::field_dmamux1_dmamux_c5cr_soie,
  FieldId::field_dmamux1_dmamux_c5cr_ege,
  FieldId::field_dmamux1_dmamux_c5cr_se,
  FieldId::field_dmamux1_dmamux_c5cr_spol,
  FieldId::field_dmamux1_dmamux_c5cr_nbreq,
  FieldId::field_dmamux1_dmamux_c5cr_sync_id,
  FieldId::field_dmamux1_dmamux_c6cr_dmareq_id,
  FieldId::field_dmamux1_dmamux_c6cr_soie,
  FieldId::field_dmamux1_dmamux_c6cr_ege,
  FieldId::field_dmamux1_dmamux_c6cr_se,
  FieldId::field_dmamux1_dmamux_c6cr_spol,
  FieldId::field_dmamux1_dmamux_c6cr_nbreq,
  FieldId::field_dmamux1_dmamux_c6cr_sync_id,
  FieldId::field_dmamux1_dmamux_cfr_csof,
  FieldId::field_dmamux1_dmamux_csr_sof,
  FieldId::field_dmamux1_dmamux_hwcfgr1_num_dma_streams,
  FieldId::field_dmamux1_dmamux_hwcfgr1_num_dma_periph_req,
  FieldId::field_dmamux1_dmamux_hwcfgr1_num_dma_trig,
  FieldId::field_dmamux1_dmamux_hwcfgr1_num_dma_reqgen,
  FieldId::field_dmamux1_dmamux_hwcfgr2_num_dma_ext_req,
  FieldId::field_dmamux1_dmamux_ipidr_id,
  FieldId::field_dmamux1_dmamux_rg0cr_sig_id,
  FieldId::field_dmamux1_dmamux_rg0cr_oie,
  FieldId::field_dmamux1_dmamux_rg0cr_ge,
  FieldId::field_dmamux1_dmamux_rg0cr_gpol,
  FieldId::field_dmamux1_dmamux_rg0cr_gnbreq,
  FieldId::field_dmamux1_dmamux_rg1cr_sig_id,
  FieldId::field_dmamux1_dmamux_rg1cr_oie,
  FieldId::field_dmamux1_dmamux_rg1cr_ge,
  FieldId::field_dmamux1_dmamux_rg1cr_gpol,
  FieldId::field_dmamux1_dmamux_rg1cr_gnbreq,
  FieldId::field_dmamux1_dmamux_rg2cr_sig_id,
  FieldId::field_dmamux1_dmamux_rg2cr_oie,
  FieldId::field_dmamux1_dmamux_rg2cr_ge,
  FieldId::field_dmamux1_dmamux_rg2cr_gpol,
  FieldId::field_dmamux1_dmamux_rg2cr_gnbreq,
  FieldId::field_dmamux1_dmamux_rg3cr_sig_id,
  FieldId::field_dmamux1_dmamux_rg3cr_oie,
  FieldId::field_dmamux1_dmamux_rg3cr_ge,
  FieldId::field_dmamux1_dmamux_rg3cr_gpol,
  FieldId::field_dmamux1_dmamux_rg3cr_gnbreq,
  FieldId::field_dmamux1_dmamux_rgcfr_cof,
  FieldId::field_dmamux1_dmamux_rgsr_of,
  FieldId::field_dmamux1_dmamux_sidr_sid,
  FieldId::field_dmamux1_dmamux_verr_minrev,
  FieldId::field_dmamux1_dmamux_verr_majrev,
  FieldId::field_gpioa_afrh_afsel8,
  FieldId::field_gpioa_afrh_afsel9,
  FieldId::field_gpioa_afrh_afsel10,
  FieldId::field_gpioa_afrh_afsel11,
  FieldId::field_gpioa_afrh_afsel12,
  FieldId::field_gpioa_afrh_afsel13,
  FieldId::field_gpioa_afrh_afsel14,
  FieldId::field_gpioa_afrh_afsel15,
  FieldId::field_gpioa_afrl_afsel0,
  FieldId::field_gpioa_afrl_afsel1,
  FieldId::field_gpioa_afrl_afsel2,
  FieldId::field_gpioa_afrl_afsel3,
  FieldId::field_gpioa_afrl_afsel4,
  FieldId::field_gpioa_afrl_afsel5,
  FieldId::field_gpioa_afrl_afsel6,
  FieldId::field_gpioa_afrl_afsel7,
  FieldId::field_gpioa_brr_br0,
  FieldId::field_gpioa_brr_br1,
  FieldId::field_gpioa_brr_br2,
  FieldId::field_gpioa_brr_br3,
  FieldId::field_gpioa_brr_br4,
  FieldId::field_gpioa_brr_br5,
  FieldId::field_gpioa_brr_br6,
  FieldId::field_gpioa_brr_br7,
  FieldId::field_gpioa_brr_br8,
  FieldId::field_gpioa_brr_br9,
  FieldId::field_gpioa_brr_br10,
  FieldId::field_gpioa_brr_br11,
  FieldId::field_gpioa_brr_br12,
  FieldId::field_gpioa_brr_br13,
  FieldId::field_gpioa_brr_br14,
  FieldId::field_gpioa_brr_br15,
  FieldId::field_gpioa_bsrr_bs0,
  FieldId::field_gpioa_bsrr_bs1,
  FieldId::field_gpioa_bsrr_bs2,
  FieldId::field_gpioa_bsrr_bs3,
  FieldId::field_gpioa_bsrr_bs4,
  FieldId::field_gpioa_bsrr_bs5,
  FieldId::field_gpioa_bsrr_bs6,
  FieldId::field_gpioa_bsrr_bs7,
  FieldId::field_gpioa_bsrr_bs8,
  FieldId::field_gpioa_bsrr_bs9,
  FieldId::field_gpioa_bsrr_bs10,
  FieldId::field_gpioa_bsrr_bs11,
  FieldId::field_gpioa_bsrr_bs12,
  FieldId::field_gpioa_bsrr_bs13,
  FieldId::field_gpioa_bsrr_bs14,
  FieldId::field_gpioa_bsrr_bs15,
  FieldId::field_gpioa_bsrr_br0,
  FieldId::field_gpioa_bsrr_br1,
  FieldId::field_gpioa_bsrr_br2,
  FieldId::field_gpioa_bsrr_br3,
  FieldId::field_gpioa_bsrr_br4,
  FieldId::field_gpioa_bsrr_br5,
  FieldId::field_gpioa_bsrr_br6,
  FieldId::field_gpioa_bsrr_br7,
  FieldId::field_gpioa_bsrr_br8,
  FieldId::field_gpioa_bsrr_br9,
  FieldId::field_gpioa_bsrr_br10,
  FieldId::field_gpioa_bsrr_br11,
  FieldId::field_gpioa_bsrr_br12,
  FieldId::field_gpioa_bsrr_br13,
  FieldId::field_gpioa_bsrr_br14,
  FieldId::field_gpioa_bsrr_br15,
  FieldId::field_gpioa_idr_idr0,
  FieldId::field_gpioa_idr_idr1,
  FieldId::field_gpioa_idr_idr2,
  FieldId::field_gpioa_idr_idr3,
  FieldId::field_gpioa_idr_idr4,
  FieldId::field_gpioa_idr_idr5,
  FieldId::field_gpioa_idr_idr6,
  FieldId::field_gpioa_idr_idr7,
  FieldId::field_gpioa_idr_idr8,
  FieldId::field_gpioa_idr_idr9,
  FieldId::field_gpioa_idr_idr10,
  FieldId::field_gpioa_idr_idr11,
  FieldId::field_gpioa_idr_idr12,
  FieldId::field_gpioa_idr_idr13,
  FieldId::field_gpioa_idr_idr14,
  FieldId::field_gpioa_idr_idr15,
  FieldId::field_gpioa_lckr_lck0,
  FieldId::field_gpioa_lckr_lck1,
  FieldId::field_gpioa_lckr_lck2,
  FieldId::field_gpioa_lckr_lck3,
  FieldId::field_gpioa_lckr_lck4,
  FieldId::field_gpioa_lckr_lck5,
  FieldId::field_gpioa_lckr_lck6,
  FieldId::field_gpioa_lckr_lck7,
  FieldId::field_gpioa_lckr_lck8,
  FieldId::field_gpioa_lckr_lck9,
  FieldId::field_gpioa_lckr_lck10,
  FieldId::field_gpioa_lckr_lck11,
  FieldId::field_gpioa_lckr_lck12,
  FieldId::field_gpioa_lckr_lck13,
  FieldId::field_gpioa_lckr_lck14,
  FieldId::field_gpioa_lckr_lck15,
  FieldId::field_gpioa_lckr_lckk,
  FieldId::field_gpioa_moder_moder0,
  FieldId::field_gpioa_moder_moder1,
  FieldId::field_gpioa_moder_moder2,
  FieldId::field_gpioa_moder_moder3,
  FieldId::field_gpioa_moder_moder4,
  FieldId::field_gpioa_moder_moder5,
  FieldId::field_gpioa_moder_moder6,
  FieldId::field_gpioa_moder_moder7,
  FieldId::field_gpioa_moder_moder8,
  FieldId::field_gpioa_moder_moder9,
  FieldId::field_gpioa_moder_moder10,
  FieldId::field_gpioa_moder_moder11,
  FieldId::field_gpioa_moder_moder12,
  FieldId::field_gpioa_moder_moder13,
  FieldId::field_gpioa_moder_moder14,
  FieldId::field_gpioa_moder_moder15,
  FieldId::field_gpioa_odr_odr0,
  FieldId::field_gpioa_odr_odr1,
  FieldId::field_gpioa_odr_odr2,
  FieldId::field_gpioa_odr_odr3,
  FieldId::field_gpioa_odr_odr4,
  FieldId::field_gpioa_odr_odr5,
  FieldId::field_gpioa_odr_odr6,
  FieldId::field_gpioa_odr_odr7,
  FieldId::field_gpioa_odr_odr8,
  FieldId::field_gpioa_odr_odr9,
  FieldId::field_gpioa_odr_odr10,
  FieldId::field_gpioa_odr_odr11,
  FieldId::field_gpioa_odr_odr12,
  FieldId::field_gpioa_odr_odr13,
  FieldId::field_gpioa_odr_odr14,
  FieldId::field_gpioa_odr_odr15,
  FieldId::field_gpioa_ospeedr_ospeedr0,
  FieldId::field_gpioa_ospeedr_ospeedr1,
  FieldId::field_gpioa_ospeedr_ospeedr2,
  FieldId::field_gpioa_ospeedr_ospeedr3,
  FieldId::field_gpioa_ospeedr_ospeedr4,
  FieldId::field_gpioa_ospeedr_ospeedr5,
  FieldId::field_gpioa_ospeedr_ospeedr6,
  FieldId::field_gpioa_ospeedr_ospeedr7,
  FieldId::field_gpioa_ospeedr_ospeedr8,
  FieldId::field_gpioa_ospeedr_ospeedr9,
  FieldId::field_gpioa_ospeedr_ospeedr10,
  FieldId::field_gpioa_ospeedr_ospeedr11,
  FieldId::field_gpioa_ospeedr_ospeedr12,
  FieldId::field_gpioa_ospeedr_ospeedr13,
  FieldId::field_gpioa_ospeedr_ospeedr14,
  FieldId::field_gpioa_ospeedr_ospeedr15,
  FieldId::field_gpioa_otyper_ot0,
  FieldId::field_gpioa_otyper_ot1,
  FieldId::field_gpioa_otyper_ot2,
  FieldId::field_gpioa_otyper_ot3,
  FieldId::field_gpioa_otyper_ot4,
  FieldId::field_gpioa_otyper_ot5,
  FieldId::field_gpioa_otyper_ot6,
  FieldId::field_gpioa_otyper_ot7,
  FieldId::field_gpioa_otyper_ot8,
  FieldId::field_gpioa_otyper_ot9,
  FieldId::field_gpioa_otyper_ot10,
  FieldId::field_gpioa_otyper_ot11,
  FieldId::field_gpioa_otyper_ot12,
  FieldId::field_gpioa_otyper_ot13,
  FieldId::field_gpioa_otyper_ot14,
  FieldId::field_gpioa_otyper_ot15,
  FieldId::field_gpioa_pupdr_pupdr0,
  FieldId::field_gpioa_pupdr_pupdr1,
  FieldId::field_gpioa_pupdr_pupdr2,
  FieldId::field_gpioa_pupdr_pupdr3,
  FieldId::field_gpioa_pupdr_pupdr4,
  FieldId::field_gpioa_pupdr_pupdr5,
  FieldId::field_gpioa_pupdr_pupdr6,
  FieldId::field_gpioa_pupdr_pupdr7,
  FieldId::field_gpioa_pupdr_pupdr8,
  FieldId::field_gpioa_pupdr_pupdr9,
  FieldId::field_gpioa_pupdr_pupdr10,
  FieldId::field_gpioa_pupdr_pupdr11,
  FieldId::field_gpioa_pupdr_pupdr12,
  FieldId::field_gpioa_pupdr_pupdr13,
  FieldId::field_gpioa_pupdr_pupdr14,
  FieldId::field_gpioa_pupdr_pupdr15,
  FieldId::field_gpiob_afrh_afsel8,
  FieldId::field_gpiob_afrh_afsel9,
  FieldId::field_gpiob_afrh_afsel10,
  FieldId::field_gpiob_afrh_afsel11,
  FieldId::field_gpiob_afrh_afsel12,
  FieldId::field_gpiob_afrh_afsel13,
  FieldId::field_gpiob_afrh_afsel14,
  FieldId::field_gpiob_afrh_afsel15,
  FieldId::field_gpiob_afrl_afsel0,
  FieldId::field_gpiob_afrl_afsel1,
  FieldId::field_gpiob_afrl_afsel2,
  FieldId::field_gpiob_afrl_afsel3,
  FieldId::field_gpiob_afrl_afsel4,
  FieldId::field_gpiob_afrl_afsel5,
  FieldId::field_gpiob_afrl_afsel6,
  FieldId::field_gpiob_afrl_afsel7,
  FieldId::field_gpiob_brr_br0,
  FieldId::field_gpiob_brr_br1,
  FieldId::field_gpiob_brr_br2,
  FieldId::field_gpiob_brr_br3,
  FieldId::field_gpiob_brr_br4,
  FieldId::field_gpiob_brr_br5,
  FieldId::field_gpiob_brr_br6,
  FieldId::field_gpiob_brr_br7,
  FieldId::field_gpiob_brr_br8,
  FieldId::field_gpiob_brr_br9,
  FieldId::field_gpiob_brr_br10,
  FieldId::field_gpiob_brr_br11,
  FieldId::field_gpiob_brr_br12,
  FieldId::field_gpiob_brr_br13,
  FieldId::field_gpiob_brr_br14,
  FieldId::field_gpiob_brr_br15,
  FieldId::field_gpiob_bsrr_bs0,
  FieldId::field_gpiob_bsrr_bs1,
  FieldId::field_gpiob_bsrr_bs2,
  FieldId::field_gpiob_bsrr_bs3,
  FieldId::field_gpiob_bsrr_bs4,
  FieldId::field_gpiob_bsrr_bs5,
  FieldId::field_gpiob_bsrr_bs6,
  FieldId::field_gpiob_bsrr_bs7,
  FieldId::field_gpiob_bsrr_bs8,
  FieldId::field_gpiob_bsrr_bs9,
  FieldId::field_gpiob_bsrr_bs10,
  FieldId::field_gpiob_bsrr_bs11,
  FieldId::field_gpiob_bsrr_bs12,
  FieldId::field_gpiob_bsrr_bs13,
  FieldId::field_gpiob_bsrr_bs14,
  FieldId::field_gpiob_bsrr_bs15,
  FieldId::field_gpiob_bsrr_br0,
  FieldId::field_gpiob_bsrr_br1,
  FieldId::field_gpiob_bsrr_br2,
  FieldId::field_gpiob_bsrr_br3,
  FieldId::field_gpiob_bsrr_br4,
  FieldId::field_gpiob_bsrr_br5,
  FieldId::field_gpiob_bsrr_br6,
  FieldId::field_gpiob_bsrr_br7,
  FieldId::field_gpiob_bsrr_br8,
  FieldId::field_gpiob_bsrr_br9,
  FieldId::field_gpiob_bsrr_br10,
  FieldId::field_gpiob_bsrr_br11,
  FieldId::field_gpiob_bsrr_br12,
  FieldId::field_gpiob_bsrr_br13,
  FieldId::field_gpiob_bsrr_br14,
  FieldId::field_gpiob_bsrr_br15,
  FieldId::field_gpiob_idr_idr0,
  FieldId::field_gpiob_idr_idr1,
  FieldId::field_gpiob_idr_idr2,
  FieldId::field_gpiob_idr_idr3,
  FieldId::field_gpiob_idr_idr4,
  FieldId::field_gpiob_idr_idr5,
  FieldId::field_gpiob_idr_idr6,
  FieldId::field_gpiob_idr_idr7,
  FieldId::field_gpiob_idr_idr8,
  FieldId::field_gpiob_idr_idr9,
  FieldId::field_gpiob_idr_idr10,
  FieldId::field_gpiob_idr_idr11,
  FieldId::field_gpiob_idr_idr12,
  FieldId::field_gpiob_idr_idr13,
  FieldId::field_gpiob_idr_idr14,
  FieldId::field_gpiob_idr_idr15,
  FieldId::field_gpiob_lckr_lck0,
  FieldId::field_gpiob_lckr_lck1,
  FieldId::field_gpiob_lckr_lck2,
  FieldId::field_gpiob_lckr_lck3,
  FieldId::field_gpiob_lckr_lck4,
  FieldId::field_gpiob_lckr_lck5,
  FieldId::field_gpiob_lckr_lck6,
  FieldId::field_gpiob_lckr_lck7,
  FieldId::field_gpiob_lckr_lck8,
  FieldId::field_gpiob_lckr_lck9,
  FieldId::field_gpiob_lckr_lck10,
  FieldId::field_gpiob_lckr_lck11,
  FieldId::field_gpiob_lckr_lck12,
  FieldId::field_gpiob_lckr_lck13,
  FieldId::field_gpiob_lckr_lck14,
  FieldId::field_gpiob_lckr_lck15,
  FieldId::field_gpiob_lckr_lckk,
  FieldId::field_gpiob_moder_moder0,
  FieldId::field_gpiob_moder_moder1,
  FieldId::field_gpiob_moder_moder2,
  FieldId::field_gpiob_moder_moder3,
  FieldId::field_gpiob_moder_moder4,
  FieldId::field_gpiob_moder_moder5,
  FieldId::field_gpiob_moder_moder6,
  FieldId::field_gpiob_moder_moder7,
  FieldId::field_gpiob_moder_moder8,
  FieldId::field_gpiob_moder_moder9,
  FieldId::field_gpiob_moder_moder10,
  FieldId::field_gpiob_moder_moder11,
  FieldId::field_gpiob_moder_moder12,
  FieldId::field_gpiob_moder_moder13,
  FieldId::field_gpiob_moder_moder14,
  FieldId::field_gpiob_moder_moder15,
  FieldId::field_gpiob_odr_odr0,
  FieldId::field_gpiob_odr_odr1,
  FieldId::field_gpiob_odr_odr2,
  FieldId::field_gpiob_odr_odr3,
  FieldId::field_gpiob_odr_odr4,
  FieldId::field_gpiob_odr_odr5,
  FieldId::field_gpiob_odr_odr6,
  FieldId::field_gpiob_odr_odr7,
  FieldId::field_gpiob_odr_odr8,
  FieldId::field_gpiob_odr_odr9,
  FieldId::field_gpiob_odr_odr10,
  FieldId::field_gpiob_odr_odr11,
  FieldId::field_gpiob_odr_odr12,
  FieldId::field_gpiob_odr_odr13,
  FieldId::field_gpiob_odr_odr14,
  FieldId::field_gpiob_odr_odr15,
  FieldId::field_gpiob_ospeedr_ospeedr0,
  FieldId::field_gpiob_ospeedr_ospeedr1,
  FieldId::field_gpiob_ospeedr_ospeedr2,
  FieldId::field_gpiob_ospeedr_ospeedr3,
  FieldId::field_gpiob_ospeedr_ospeedr4,
  FieldId::field_gpiob_ospeedr_ospeedr5,
  FieldId::field_gpiob_ospeedr_ospeedr6,
  FieldId::field_gpiob_ospeedr_ospeedr7,
  FieldId::field_gpiob_ospeedr_ospeedr8,
  FieldId::field_gpiob_ospeedr_ospeedr9,
  FieldId::field_gpiob_ospeedr_ospeedr10,
  FieldId::field_gpiob_ospeedr_ospeedr11,
  FieldId::field_gpiob_ospeedr_ospeedr12,
  FieldId::field_gpiob_ospeedr_ospeedr13,
  FieldId::field_gpiob_ospeedr_ospeedr14,
  FieldId::field_gpiob_ospeedr_ospeedr15,
  FieldId::field_gpiob_otyper_ot0,
  FieldId::field_gpiob_otyper_ot1,
  FieldId::field_gpiob_otyper_ot2,
  FieldId::field_gpiob_otyper_ot3,
  FieldId::field_gpiob_otyper_ot4,
  FieldId::field_gpiob_otyper_ot5,
  FieldId::field_gpiob_otyper_ot6,
  FieldId::field_gpiob_otyper_ot7,
  FieldId::field_gpiob_otyper_ot8,
  FieldId::field_gpiob_otyper_ot9,
  FieldId::field_gpiob_otyper_ot10,
  FieldId::field_gpiob_otyper_ot11,
  FieldId::field_gpiob_otyper_ot12,
  FieldId::field_gpiob_otyper_ot13,
  FieldId::field_gpiob_otyper_ot14,
  FieldId::field_gpiob_otyper_ot15,
  FieldId::field_gpiob_pupdr_pupdr0,
  FieldId::field_gpiob_pupdr_pupdr1,
  FieldId::field_gpiob_pupdr_pupdr2,
  FieldId::field_gpiob_pupdr_pupdr3,
  FieldId::field_gpiob_pupdr_pupdr4,
  FieldId::field_gpiob_pupdr_pupdr5,
  FieldId::field_gpiob_pupdr_pupdr6,
  FieldId::field_gpiob_pupdr_pupdr7,
  FieldId::field_gpiob_pupdr_pupdr8,
  FieldId::field_gpiob_pupdr_pupdr9,
  FieldId::field_gpiob_pupdr_pupdr10,
  FieldId::field_gpiob_pupdr_pupdr11,
  FieldId::field_gpiob_pupdr_pupdr12,
  FieldId::field_gpiob_pupdr_pupdr13,
  FieldId::field_gpiob_pupdr_pupdr14,
  FieldId::field_gpiob_pupdr_pupdr15,
  FieldId::field_gpioc_afrh_afsel8,
  FieldId::field_gpioc_afrh_afsel9,
  FieldId::field_gpioc_afrh_afsel10,
  FieldId::field_gpioc_afrh_afsel11,
  FieldId::field_gpioc_afrh_afsel12,
  FieldId::field_gpioc_afrh_afsel13,
  FieldId::field_gpioc_afrh_afsel14,
  FieldId::field_gpioc_afrh_afsel15,
  FieldId::field_gpioc_afrl_afsel0,
  FieldId::field_gpioc_afrl_afsel1,
  FieldId::field_gpioc_afrl_afsel2,
  FieldId::field_gpioc_afrl_afsel3,
  FieldId::field_gpioc_afrl_afsel4,
  FieldId::field_gpioc_afrl_afsel5,
  FieldId::field_gpioc_afrl_afsel6,
  FieldId::field_gpioc_afrl_afsel7,
  FieldId::field_gpioc_brr_br0,
  FieldId::field_gpioc_brr_br1,
  FieldId::field_gpioc_brr_br2,
  FieldId::field_gpioc_brr_br3,
  FieldId::field_gpioc_brr_br4,
  FieldId::field_gpioc_brr_br5,
  FieldId::field_gpioc_brr_br6,
  FieldId::field_gpioc_brr_br7,
  FieldId::field_gpioc_brr_br8,
  FieldId::field_gpioc_brr_br9,
  FieldId::field_gpioc_brr_br10,
  FieldId::field_gpioc_brr_br11,
  FieldId::field_gpioc_brr_br12,
  FieldId::field_gpioc_brr_br13,
  FieldId::field_gpioc_brr_br14,
  FieldId::field_gpioc_brr_br15,
  FieldId::field_gpioc_bsrr_bs0,
  FieldId::field_gpioc_bsrr_bs1,
  FieldId::field_gpioc_bsrr_bs2,
  FieldId::field_gpioc_bsrr_bs3,
  FieldId::field_gpioc_bsrr_bs4,
  FieldId::field_gpioc_bsrr_bs5,
  FieldId::field_gpioc_bsrr_bs6,
  FieldId::field_gpioc_bsrr_bs7,
  FieldId::field_gpioc_bsrr_bs8,
  FieldId::field_gpioc_bsrr_bs9,
  FieldId::field_gpioc_bsrr_bs10,
  FieldId::field_gpioc_bsrr_bs11,
  FieldId::field_gpioc_bsrr_bs12,
  FieldId::field_gpioc_bsrr_bs13,
  FieldId::field_gpioc_bsrr_bs14,
  FieldId::field_gpioc_bsrr_bs15,
  FieldId::field_gpioc_bsrr_br0,
  FieldId::field_gpioc_bsrr_br1,
  FieldId::field_gpioc_bsrr_br2,
  FieldId::field_gpioc_bsrr_br3,
  FieldId::field_gpioc_bsrr_br4,
  FieldId::field_gpioc_bsrr_br5,
  FieldId::field_gpioc_bsrr_br6,
  FieldId::field_gpioc_bsrr_br7,
  FieldId::field_gpioc_bsrr_br8,
  FieldId::field_gpioc_bsrr_br9,
  FieldId::field_gpioc_bsrr_br10,
  FieldId::field_gpioc_bsrr_br11,
  FieldId::field_gpioc_bsrr_br12,
  FieldId::field_gpioc_bsrr_br13,
  FieldId::field_gpioc_bsrr_br14,
  FieldId::field_gpioc_bsrr_br15,
  FieldId::field_gpioc_idr_idr0,
  FieldId::field_gpioc_idr_idr1,
  FieldId::field_gpioc_idr_idr2,
  FieldId::field_gpioc_idr_idr3,
  FieldId::field_gpioc_idr_idr4,
  FieldId::field_gpioc_idr_idr5,
  FieldId::field_gpioc_idr_idr6,
  FieldId::field_gpioc_idr_idr7,
  FieldId::field_gpioc_idr_idr8,
  FieldId::field_gpioc_idr_idr9,
  FieldId::field_gpioc_idr_idr10,
  FieldId::field_gpioc_idr_idr11,
  FieldId::field_gpioc_idr_idr12,
  FieldId::field_gpioc_idr_idr13,
  FieldId::field_gpioc_idr_idr14,
  FieldId::field_gpioc_idr_idr15,
  FieldId::field_gpioc_lckr_lck0,
  FieldId::field_gpioc_lckr_lck1,
  FieldId::field_gpioc_lckr_lck2,
  FieldId::field_gpioc_lckr_lck3,
  FieldId::field_gpioc_lckr_lck4,
  FieldId::field_gpioc_lckr_lck5,
  FieldId::field_gpioc_lckr_lck6,
  FieldId::field_gpioc_lckr_lck7,
  FieldId::field_gpioc_lckr_lck8,
  FieldId::field_gpioc_lckr_lck9,
  FieldId::field_gpioc_lckr_lck10,
  FieldId::field_gpioc_lckr_lck11,
  FieldId::field_gpioc_lckr_lck12,
  FieldId::field_gpioc_lckr_lck13,
  FieldId::field_gpioc_lckr_lck14,
  FieldId::field_gpioc_lckr_lck15,
  FieldId::field_gpioc_lckr_lckk,
  FieldId::field_gpioc_moder_moder0,
  FieldId::field_gpioc_moder_moder1,
  FieldId::field_gpioc_moder_moder2,
  FieldId::field_gpioc_moder_moder3,
  FieldId::field_gpioc_moder_moder4,
  FieldId::field_gpioc_moder_moder5,
  FieldId::field_gpioc_moder_moder6,
  FieldId::field_gpioc_moder_moder7,
  FieldId::field_gpioc_moder_moder8,
  FieldId::field_gpioc_moder_moder9,
  FieldId::field_gpioc_moder_moder10,
  FieldId::field_gpioc_moder_moder11,
  FieldId::field_gpioc_moder_moder12,
  FieldId::field_gpioc_moder_moder13,
  FieldId::field_gpioc_moder_moder14,
  FieldId::field_gpioc_moder_moder15,
  FieldId::field_gpioc_odr_odr0,
  FieldId::field_gpioc_odr_odr1,
  FieldId::field_gpioc_odr_odr2,
  FieldId::field_gpioc_odr_odr3,
  FieldId::field_gpioc_odr_odr4,
  FieldId::field_gpioc_odr_odr5,
  FieldId::field_gpioc_odr_odr6,
  FieldId::field_gpioc_odr_odr7,
  FieldId::field_gpioc_odr_odr8,
  FieldId::field_gpioc_odr_odr9,
  FieldId::field_gpioc_odr_odr10,
  FieldId::field_gpioc_odr_odr11,
  FieldId::field_gpioc_odr_odr12,
  FieldId::field_gpioc_odr_odr13,
  FieldId::field_gpioc_odr_odr14,
  FieldId::field_gpioc_odr_odr15,
  FieldId::field_gpioc_ospeedr_ospeedr0,
  FieldId::field_gpioc_ospeedr_ospeedr1,
  FieldId::field_gpioc_ospeedr_ospeedr2,
  FieldId::field_gpioc_ospeedr_ospeedr3,
  FieldId::field_gpioc_ospeedr_ospeedr4,
  FieldId::field_gpioc_ospeedr_ospeedr5,
  FieldId::field_gpioc_ospeedr_ospeedr6,
  FieldId::field_gpioc_ospeedr_ospeedr7,
  FieldId::field_gpioc_ospeedr_ospeedr8,
  FieldId::field_gpioc_ospeedr_ospeedr9,
  FieldId::field_gpioc_ospeedr_ospeedr10,
  FieldId::field_gpioc_ospeedr_ospeedr11,
  FieldId::field_gpioc_ospeedr_ospeedr12,
  FieldId::field_gpioc_ospeedr_ospeedr13,
  FieldId::field_gpioc_ospeedr_ospeedr14,
  FieldId::field_gpioc_ospeedr_ospeedr15,
  FieldId::field_gpioc_otyper_ot0,
  FieldId::field_gpioc_otyper_ot1,
  FieldId::field_gpioc_otyper_ot2,
  FieldId::field_gpioc_otyper_ot3,
  FieldId::field_gpioc_otyper_ot4,
  FieldId::field_gpioc_otyper_ot5,
  FieldId::field_gpioc_otyper_ot6,
  FieldId::field_gpioc_otyper_ot7,
  FieldId::field_gpioc_otyper_ot8,
  FieldId::field_gpioc_otyper_ot9,
  FieldId::field_gpioc_otyper_ot10,
  FieldId::field_gpioc_otyper_ot11,
  FieldId::field_gpioc_otyper_ot12,
  FieldId::field_gpioc_otyper_ot13,
  FieldId::field_gpioc_otyper_ot14,
  FieldId::field_gpioc_otyper_ot15,
  FieldId::field_gpioc_pupdr_pupdr0,
  FieldId::field_gpioc_pupdr_pupdr1,
  FieldId::field_gpioc_pupdr_pupdr2,
  FieldId::field_gpioc_pupdr_pupdr3,
  FieldId::field_gpioc_pupdr_pupdr4,
  FieldId::field_gpioc_pupdr_pupdr5,
  FieldId::field_gpioc_pupdr_pupdr6,
  FieldId::field_gpioc_pupdr_pupdr7,
  FieldId::field_gpioc_pupdr_pupdr8,
  FieldId::field_gpioc_pupdr_pupdr9,
  FieldId::field_gpioc_pupdr_pupdr10,
  FieldId::field_gpioc_pupdr_pupdr11,
  FieldId::field_gpioc_pupdr_pupdr12,
  FieldId::field_gpioc_pupdr_pupdr13,
  FieldId::field_gpioc_pupdr_pupdr14,
  FieldId::field_gpioc_pupdr_pupdr15,
  FieldId::field_gpiod_afrh_afsel8,
  FieldId::field_gpiod_afrh_afsel9,
  FieldId::field_gpiod_afrh_afsel10,
  FieldId::field_gpiod_afrh_afsel11,
  FieldId::field_gpiod_afrh_afsel12,
  FieldId::field_gpiod_afrh_afsel13,
  FieldId::field_gpiod_afrh_afsel14,
  FieldId::field_gpiod_afrh_afsel15,
  FieldId::field_gpiod_afrl_afsel0,
  FieldId::field_gpiod_afrl_afsel1,
  FieldId::field_gpiod_afrl_afsel2,
  FieldId::field_gpiod_afrl_afsel3,
  FieldId::field_gpiod_afrl_afsel4,
  FieldId::field_gpiod_afrl_afsel5,
  FieldId::field_gpiod_afrl_afsel6,
  FieldId::field_gpiod_afrl_afsel7,
  FieldId::field_gpiod_brr_br0,
  FieldId::field_gpiod_brr_br1,
  FieldId::field_gpiod_brr_br2,
  FieldId::field_gpiod_brr_br3,
  FieldId::field_gpiod_brr_br4,
  FieldId::field_gpiod_brr_br5,
  FieldId::field_gpiod_brr_br6,
  FieldId::field_gpiod_brr_br7,
  FieldId::field_gpiod_brr_br8,
  FieldId::field_gpiod_brr_br9,
  FieldId::field_gpiod_brr_br10,
  FieldId::field_gpiod_brr_br11,
  FieldId::field_gpiod_brr_br12,
  FieldId::field_gpiod_brr_br13,
  FieldId::field_gpiod_brr_br14,
  FieldId::field_gpiod_brr_br15,
  FieldId::field_gpiod_bsrr_bs0,
  FieldId::field_gpiod_bsrr_bs1,
  FieldId::field_gpiod_bsrr_bs2,
  FieldId::field_gpiod_bsrr_bs3,
  FieldId::field_gpiod_bsrr_bs4,
  FieldId::field_gpiod_bsrr_bs5,
  FieldId::field_gpiod_bsrr_bs6,
  FieldId::field_gpiod_bsrr_bs7,
  FieldId::field_gpiod_bsrr_bs8,
  FieldId::field_gpiod_bsrr_bs9,
  FieldId::field_gpiod_bsrr_bs10,
  FieldId::field_gpiod_bsrr_bs11,
  FieldId::field_gpiod_bsrr_bs12,
  FieldId::field_gpiod_bsrr_bs13,
  FieldId::field_gpiod_bsrr_bs14,
  FieldId::field_gpiod_bsrr_bs15,
  FieldId::field_gpiod_bsrr_br0,
  FieldId::field_gpiod_bsrr_br1,
  FieldId::field_gpiod_bsrr_br2,
  FieldId::field_gpiod_bsrr_br3,
  FieldId::field_gpiod_bsrr_br4,
  FieldId::field_gpiod_bsrr_br5,
  FieldId::field_gpiod_bsrr_br6,
  FieldId::field_gpiod_bsrr_br7,
  FieldId::field_gpiod_bsrr_br8,
  FieldId::field_gpiod_bsrr_br9,
  FieldId::field_gpiod_bsrr_br10,
  FieldId::field_gpiod_bsrr_br11,
  FieldId::field_gpiod_bsrr_br12,
  FieldId::field_gpiod_bsrr_br13,
  FieldId::field_gpiod_bsrr_br14,
  FieldId::field_gpiod_bsrr_br15,
  FieldId::field_gpiod_idr_idr0,
  FieldId::field_gpiod_idr_idr1,
  FieldId::field_gpiod_idr_idr2,
  FieldId::field_gpiod_idr_idr3,
  FieldId::field_gpiod_idr_idr4,
  FieldId::field_gpiod_idr_idr5,
  FieldId::field_gpiod_idr_idr6,
  FieldId::field_gpiod_idr_idr7,
  FieldId::field_gpiod_idr_idr8,
  FieldId::field_gpiod_idr_idr9,
  FieldId::field_gpiod_idr_idr10,
  FieldId::field_gpiod_idr_idr11,
  FieldId::field_gpiod_idr_idr12,
  FieldId::field_gpiod_idr_idr13,
  FieldId::field_gpiod_idr_idr14,
  FieldId::field_gpiod_idr_idr15,
  FieldId::field_gpiod_lckr_lck0,
  FieldId::field_gpiod_lckr_lck1,
  FieldId::field_gpiod_lckr_lck2,
  FieldId::field_gpiod_lckr_lck3,
  FieldId::field_gpiod_lckr_lck4,
  FieldId::field_gpiod_lckr_lck5,
  FieldId::field_gpiod_lckr_lck6,
  FieldId::field_gpiod_lckr_lck7,
  FieldId::field_gpiod_lckr_lck8,
  FieldId::field_gpiod_lckr_lck9,
  FieldId::field_gpiod_lckr_lck10,
  FieldId::field_gpiod_lckr_lck11,
  FieldId::field_gpiod_lckr_lck12,
  FieldId::field_gpiod_lckr_lck13,
  FieldId::field_gpiod_lckr_lck14,
  FieldId::field_gpiod_lckr_lck15,
  FieldId::field_gpiod_lckr_lckk,
  FieldId::field_gpiod_moder_moder0,
  FieldId::field_gpiod_moder_moder1,
  FieldId::field_gpiod_moder_moder2,
  FieldId::field_gpiod_moder_moder3,
  FieldId::field_gpiod_moder_moder4,
  FieldId::field_gpiod_moder_moder5,
  FieldId::field_gpiod_moder_moder6,
  FieldId::field_gpiod_moder_moder7,
  FieldId::field_gpiod_moder_moder8,
  FieldId::field_gpiod_moder_moder9,
  FieldId::field_gpiod_moder_moder10,
  FieldId::field_gpiod_moder_moder11,
  FieldId::field_gpiod_moder_moder12,
  FieldId::field_gpiod_moder_moder13,
  FieldId::field_gpiod_moder_moder14,
  FieldId::field_gpiod_moder_moder15,
  FieldId::field_gpiod_odr_odr0,
  FieldId::field_gpiod_odr_odr1,
  FieldId::field_gpiod_odr_odr2,
  FieldId::field_gpiod_odr_odr3,
  FieldId::field_gpiod_odr_odr4,
  FieldId::field_gpiod_odr_odr5,
  FieldId::field_gpiod_odr_odr6,
  FieldId::field_gpiod_odr_odr7,
  FieldId::field_gpiod_odr_odr8,
  FieldId::field_gpiod_odr_odr9,
  FieldId::field_gpiod_odr_odr10,
  FieldId::field_gpiod_odr_odr11,
  FieldId::field_gpiod_odr_odr12,
  FieldId::field_gpiod_odr_odr13,
  FieldId::field_gpiod_odr_odr14,
  FieldId::field_gpiod_odr_odr15,
  FieldId::field_gpiod_ospeedr_ospeedr0,
  FieldId::field_gpiod_ospeedr_ospeedr1,
  FieldId::field_gpiod_ospeedr_ospeedr2,
  FieldId::field_gpiod_ospeedr_ospeedr3,
  FieldId::field_gpiod_ospeedr_ospeedr4,
  FieldId::field_gpiod_ospeedr_ospeedr5,
  FieldId::field_gpiod_ospeedr_ospeedr6,
  FieldId::field_gpiod_ospeedr_ospeedr7,
  FieldId::field_gpiod_ospeedr_ospeedr8,
  FieldId::field_gpiod_ospeedr_ospeedr9,
  FieldId::field_gpiod_ospeedr_ospeedr10,
  FieldId::field_gpiod_ospeedr_ospeedr11,
  FieldId::field_gpiod_ospeedr_ospeedr12,
  FieldId::field_gpiod_ospeedr_ospeedr13,
  FieldId::field_gpiod_ospeedr_ospeedr14,
  FieldId::field_gpiod_ospeedr_ospeedr15,
  FieldId::field_gpiod_otyper_ot0,
  FieldId::field_gpiod_otyper_ot1,
  FieldId::field_gpiod_otyper_ot2,
  FieldId::field_gpiod_otyper_ot3,
  FieldId::field_gpiod_otyper_ot4,
  FieldId::field_gpiod_otyper_ot5,
  FieldId::field_gpiod_otyper_ot6,
  FieldId::field_gpiod_otyper_ot7,
  FieldId::field_gpiod_otyper_ot8,
  FieldId::field_gpiod_otyper_ot9,
  FieldId::field_gpiod_otyper_ot10,
  FieldId::field_gpiod_otyper_ot11,
  FieldId::field_gpiod_otyper_ot12,
  FieldId::field_gpiod_otyper_ot13,
  FieldId::field_gpiod_otyper_ot14,
  FieldId::field_gpiod_otyper_ot15,
  FieldId::field_gpiod_pupdr_pupdr0,
  FieldId::field_gpiod_pupdr_pupdr1,
  FieldId::field_gpiod_pupdr_pupdr2,
  FieldId::field_gpiod_pupdr_pupdr3,
  FieldId::field_gpiod_pupdr_pupdr4,
  FieldId::field_gpiod_pupdr_pupdr5,
  FieldId::field_gpiod_pupdr_pupdr6,
  FieldId::field_gpiod_pupdr_pupdr7,
  FieldId::field_gpiod_pupdr_pupdr8,
  FieldId::field_gpiod_pupdr_pupdr9,
  FieldId::field_gpiod_pupdr_pupdr10,
  FieldId::field_gpiod_pupdr_pupdr11,
  FieldId::field_gpiod_pupdr_pupdr12,
  FieldId::field_gpiod_pupdr_pupdr13,
  FieldId::field_gpiod_pupdr_pupdr14,
  FieldId::field_gpiod_pupdr_pupdr15,
  FieldId::field_gpiof_afrh_afsel8,
  FieldId::field_gpiof_afrh_afsel9,
  FieldId::field_gpiof_afrh_afsel10,
  FieldId::field_gpiof_afrh_afsel11,
  FieldId::field_gpiof_afrh_afsel12,
  FieldId::field_gpiof_afrh_afsel13,
  FieldId::field_gpiof_afrh_afsel14,
  FieldId::field_gpiof_afrh_afsel15,
  FieldId::field_gpiof_afrl_afsel0,
  FieldId::field_gpiof_afrl_afsel1,
  FieldId::field_gpiof_afrl_afsel2,
  FieldId::field_gpiof_afrl_afsel3,
  FieldId::field_gpiof_afrl_afsel4,
  FieldId::field_gpiof_afrl_afsel5,
  FieldId::field_gpiof_afrl_afsel6,
  FieldId::field_gpiof_afrl_afsel7,
  FieldId::field_gpiof_brr_br0,
  FieldId::field_gpiof_brr_br1,
  FieldId::field_gpiof_brr_br2,
  FieldId::field_gpiof_brr_br3,
  FieldId::field_gpiof_brr_br4,
  FieldId::field_gpiof_brr_br5,
  FieldId::field_gpiof_brr_br6,
  FieldId::field_gpiof_brr_br7,
  FieldId::field_gpiof_brr_br8,
  FieldId::field_gpiof_brr_br9,
  FieldId::field_gpiof_brr_br10,
  FieldId::field_gpiof_brr_br11,
  FieldId::field_gpiof_brr_br12,
  FieldId::field_gpiof_brr_br13,
  FieldId::field_gpiof_brr_br14,
  FieldId::field_gpiof_brr_br15,
  FieldId::field_gpiof_bsrr_bs0,
  FieldId::field_gpiof_bsrr_bs1,
  FieldId::field_gpiof_bsrr_bs2,
  FieldId::field_gpiof_bsrr_bs3,
  FieldId::field_gpiof_bsrr_bs4,
  FieldId::field_gpiof_bsrr_bs5,
  FieldId::field_gpiof_bsrr_bs6,
  FieldId::field_gpiof_bsrr_bs7,
  FieldId::field_gpiof_bsrr_bs8,
  FieldId::field_gpiof_bsrr_bs9,
  FieldId::field_gpiof_bsrr_bs10,
  FieldId::field_gpiof_bsrr_bs11,
  FieldId::field_gpiof_bsrr_bs12,
  FieldId::field_gpiof_bsrr_bs13,
  FieldId::field_gpiof_bsrr_bs14,
  FieldId::field_gpiof_bsrr_bs15,
  FieldId::field_gpiof_bsrr_br0,
  FieldId::field_gpiof_bsrr_br1,
  FieldId::field_gpiof_bsrr_br2,
  FieldId::field_gpiof_bsrr_br3,
  FieldId::field_gpiof_bsrr_br4,
  FieldId::field_gpiof_bsrr_br5,
  FieldId::field_gpiof_bsrr_br6,
  FieldId::field_gpiof_bsrr_br7,
  FieldId::field_gpiof_bsrr_br8,
  FieldId::field_gpiof_bsrr_br9,
  FieldId::field_gpiof_bsrr_br10,
  FieldId::field_gpiof_bsrr_br11,
  FieldId::field_gpiof_bsrr_br12,
  FieldId::field_gpiof_bsrr_br13,
  FieldId::field_gpiof_bsrr_br14,
  FieldId::field_gpiof_bsrr_br15,
  FieldId::field_gpiof_idr_idr0,
  FieldId::field_gpiof_idr_idr1,
  FieldId::field_gpiof_idr_idr2,
  FieldId::field_gpiof_idr_idr3,
  FieldId::field_gpiof_idr_idr4,
  FieldId::field_gpiof_idr_idr5,
  FieldId::field_gpiof_idr_idr6,
  FieldId::field_gpiof_idr_idr7,
  FieldId::field_gpiof_idr_idr8,
  FieldId::field_gpiof_idr_idr9,
  FieldId::field_gpiof_idr_idr10,
  FieldId::field_gpiof_idr_idr11,
  FieldId::field_gpiof_idr_idr12,
  FieldId::field_gpiof_idr_idr13,
  FieldId::field_gpiof_idr_idr14,
  FieldId::field_gpiof_idr_idr15,
  FieldId::field_gpiof_lckr_lck0,
  FieldId::field_gpiof_lckr_lck1,
  FieldId::field_gpiof_lckr_lck2,
  FieldId::field_gpiof_lckr_lck3,
  FieldId::field_gpiof_lckr_lck4,
  FieldId::field_gpiof_lckr_lck5,
  FieldId::field_gpiof_lckr_lck6,
  FieldId::field_gpiof_lckr_lck7,
  FieldId::field_gpiof_lckr_lck8,
  FieldId::field_gpiof_lckr_lck9,
  FieldId::field_gpiof_lckr_lck10,
  FieldId::field_gpiof_lckr_lck11,
  FieldId::field_gpiof_lckr_lck12,
  FieldId::field_gpiof_lckr_lck13,
  FieldId::field_gpiof_lckr_lck14,
  FieldId::field_gpiof_lckr_lck15,
  FieldId::field_gpiof_lckr_lckk,
  FieldId::field_gpiof_moder_moder0,
  FieldId::field_gpiof_moder_moder1,
  FieldId::field_gpiof_moder_moder2,
  FieldId::field_gpiof_moder_moder3,
  FieldId::field_gpiof_moder_moder4,
  FieldId::field_gpiof_moder_moder5,
  FieldId::field_gpiof_moder_moder6,
  FieldId::field_gpiof_moder_moder7,
  FieldId::field_gpiof_moder_moder8,
  FieldId::field_gpiof_moder_moder9,
  FieldId::field_gpiof_moder_moder10,
  FieldId::field_gpiof_moder_moder11,
  FieldId::field_gpiof_moder_moder12,
  FieldId::field_gpiof_moder_moder13,
  FieldId::field_gpiof_moder_moder14,
  FieldId::field_gpiof_moder_moder15,
  FieldId::field_gpiof_odr_odr0,
  FieldId::field_gpiof_odr_odr1,
  FieldId::field_gpiof_odr_odr2,
  FieldId::field_gpiof_odr_odr3,
  FieldId::field_gpiof_odr_odr4,
  FieldId::field_gpiof_odr_odr5,
  FieldId::field_gpiof_odr_odr6,
  FieldId::field_gpiof_odr_odr7,
  FieldId::field_gpiof_odr_odr8,
  FieldId::field_gpiof_odr_odr9,
  FieldId::field_gpiof_odr_odr10,
  FieldId::field_gpiof_odr_odr11,
  FieldId::field_gpiof_odr_odr12,
  FieldId::field_gpiof_odr_odr13,
  FieldId::field_gpiof_odr_odr14,
  FieldId::field_gpiof_odr_odr15,
  FieldId::field_gpiof_ospeedr_ospeedr0,
  FieldId::field_gpiof_ospeedr_ospeedr1,
  FieldId::field_gpiof_ospeedr_ospeedr2,
  FieldId::field_gpiof_ospeedr_ospeedr3,
  FieldId::field_gpiof_ospeedr_ospeedr4,
  FieldId::field_gpiof_ospeedr_ospeedr5,
  FieldId::field_gpiof_ospeedr_ospeedr6,
  FieldId::field_gpiof_ospeedr_ospeedr7,
  FieldId::field_gpiof_ospeedr_ospeedr8,
  FieldId::field_gpiof_ospeedr_ospeedr9,
  FieldId::field_gpiof_ospeedr_ospeedr10,
  FieldId::field_gpiof_ospeedr_ospeedr11,
  FieldId::field_gpiof_ospeedr_ospeedr12,
  FieldId::field_gpiof_ospeedr_ospeedr13,
  FieldId::field_gpiof_ospeedr_ospeedr14,
  FieldId::field_gpiof_ospeedr_ospeedr15,
  FieldId::field_gpiof_otyper_ot0,
  FieldId::field_gpiof_otyper_ot1,
  FieldId::field_gpiof_otyper_ot2,
  FieldId::field_gpiof_otyper_ot3,
  FieldId::field_gpiof_otyper_ot4,
  FieldId::field_gpiof_otyper_ot5,
  FieldId::field_gpiof_otyper_ot6,
  FieldId::field_gpiof_otyper_ot7,
  FieldId::field_gpiof_otyper_ot8,
  FieldId::field_gpiof_otyper_ot9,
  FieldId::field_gpiof_otyper_ot10,
  FieldId::field_gpiof_otyper_ot11,
  FieldId::field_gpiof_otyper_ot12,
  FieldId::field_gpiof_otyper_ot13,
  FieldId::field_gpiof_otyper_ot14,
  FieldId::field_gpiof_otyper_ot15,
  FieldId::field_gpiof_pupdr_pupdr0,
  FieldId::field_gpiof_pupdr_pupdr1,
  FieldId::field_gpiof_pupdr_pupdr2,
  FieldId::field_gpiof_pupdr_pupdr3,
  FieldId::field_gpiof_pupdr_pupdr4,
  FieldId::field_gpiof_pupdr_pupdr5,
  FieldId::field_gpiof_pupdr_pupdr6,
  FieldId::field_gpiof_pupdr_pupdr7,
  FieldId::field_gpiof_pupdr_pupdr8,
  FieldId::field_gpiof_pupdr_pupdr9,
  FieldId::field_gpiof_pupdr_pupdr10,
  FieldId::field_gpiof_pupdr_pupdr11,
  FieldId::field_gpiof_pupdr_pupdr12,
  FieldId::field_gpiof_pupdr_pupdr13,
  FieldId::field_gpiof_pupdr_pupdr14,
  FieldId::field_gpiof_pupdr_pupdr15,
  FieldId::field_lpuart1_brr_brr,
  FieldId::field_lpuart1_cr1_ue,
  FieldId::field_lpuart1_cr1_uesm,
  FieldId::field_lpuart1_cr1_re,
  FieldId::field_lpuart1_cr1_te,
  FieldId::field_lpuart1_cr1_idleie,
  FieldId::field_lpuart1_cr1_rxneie,
  FieldId::field_lpuart1_cr1_tcie,
  FieldId::field_lpuart1_cr1_txeie,
  FieldId::field_lpuart1_cr1_peie,
  FieldId::field_lpuart1_cr1_ps,
  FieldId::field_lpuart1_cr1_pce,
  FieldId::field_lpuart1_cr1_wake,
  FieldId::field_lpuart1_cr1_m0,
  FieldId::field_lpuart1_cr1_mme,
  FieldId::field_lpuart1_cr1_cmie,
  FieldId::field_lpuart1_cr1_dedt0,
  FieldId::field_lpuart1_cr1_deat,
  FieldId::field_lpuart1_cr1_m1,
  FieldId::field_lpuart1_cr1_fifoen,
  FieldId::field_lpuart1_cr1_txfeie,
  FieldId::field_lpuart1_cr1_rxffie,
  FieldId::field_lpuart1_cr2_addm7,
  FieldId::field_lpuart1_cr2_stop,
  FieldId::field_lpuart1_cr2_swap,
  FieldId::field_lpuart1_cr2_rxinv,
  FieldId::field_lpuart1_cr2_txinv,
  FieldId::field_lpuart1_cr2_tainv,
  FieldId::field_lpuart1_cr2_msbfirst,
  FieldId::field_lpuart1_cr2_add0_3,
  FieldId::field_lpuart1_cr2_add4_7,
  FieldId::field_lpuart1_cr3_eie,
  FieldId::field_lpuart1_cr3_hdsel,
  FieldId::field_lpuart1_cr3_dmar,
  FieldId::field_lpuart1_cr3_dmat,
  FieldId::field_lpuart1_cr3_rtse,
  FieldId::field_lpuart1_cr3_ctse,
  FieldId::field_lpuart1_cr3_ctsie,
  FieldId::field_lpuart1_cr3_ovrdis,
  FieldId::field_lpuart1_cr3_ddre,
  FieldId::field_lpuart1_cr3_dem,
  FieldId::field_lpuart1_cr3_dep,
  FieldId::field_lpuart1_cr3_wus,
  FieldId::field_lpuart1_cr3_wufie,
  FieldId::field_lpuart1_cr3_txftie,
  FieldId::field_lpuart1_cr3_rxftcfg,
  FieldId::field_lpuart1_cr3_rxftie,
  FieldId::field_lpuart1_cr3_txftcfg,
  FieldId::field_lpuart1_hwcfgr1_cfg1,
  FieldId::field_lpuart1_hwcfgr1_cfg2,
  FieldId::field_lpuart1_hwcfgr1_cfg3,
  FieldId::field_lpuart1_hwcfgr1_cfg4,
  FieldId::field_lpuart1_hwcfgr1_cfg5,
  FieldId::field_lpuart1_hwcfgr1_cfg6,
  FieldId::field_lpuart1_hwcfgr1_cfg7,
  FieldId::field_lpuart1_hwcfgr1_cfg8,
  FieldId::field_lpuart1_hwcfgr2_cfg1,
  FieldId::field_lpuart1_hwcfgr2_cfg2,
  FieldId::field_lpuart1_icr_pecf,
  FieldId::field_lpuart1_icr_fecf,
  FieldId::field_lpuart1_icr_ncf,
  FieldId::field_lpuart1_icr_orecf,
  FieldId::field_lpuart1_icr_idlecf,
  FieldId::field_lpuart1_icr_tccf,
  FieldId::field_lpuart1_icr_ctscf,
  FieldId::field_lpuart1_icr_cmcf,
  FieldId::field_lpuart1_icr_wucf,
  FieldId::field_lpuart1_ipidr_ipid,
  FieldId::field_lpuart1_isr_pe,
  FieldId::field_lpuart1_isr_fe,
  FieldId::field_lpuart1_isr_nf,
  FieldId::field_lpuart1_isr_ore,
  FieldId::field_lpuart1_isr_idle,
  FieldId::field_lpuart1_isr_rxne,
  FieldId::field_lpuart1_isr_tc,
  FieldId::field_lpuart1_isr_txe,
  FieldId::field_lpuart1_isr_ctsif,
  FieldId::field_lpuart1_isr_cts,
  FieldId::field_lpuart1_isr_busy,
  FieldId::field_lpuart1_isr_cmf,
  FieldId::field_lpuart1_isr_sbkf,
  FieldId::field_lpuart1_isr_rwu,
  FieldId::field_lpuart1_isr_wuf,
  FieldId::field_lpuart1_isr_teack,
  FieldId::field_lpuart1_isr_reack,
  FieldId::field_lpuart1_isr_txfe,
  FieldId::field_lpuart1_isr_rxff,
  FieldId::field_lpuart1_isr_rxft,
  FieldId::field_lpuart1_isr_txft,
  FieldId::field_lpuart1_presc_prescaler,
  FieldId::field_lpuart1_rdr_rdr,
  FieldId::field_lpuart1_rqr_abrrq,
  FieldId::field_lpuart1_rqr_sbkrq,
  FieldId::field_lpuart1_rqr_mmrq,
  FieldId::field_lpuart1_rqr_rxfrq,
  FieldId::field_lpuart1_rqr_txfrq,
  FieldId::field_lpuart1_sidr_sid,
  FieldId::field_lpuart1_tdr_tdr,
  FieldId::field_lpuart1_verr_minrev,
  FieldId::field_lpuart1_verr_majrev,
  FieldId::field_rcc_ahbenr_dma1en,
  FieldId::field_rcc_ahbrstr_dma1rst,
  FieldId::field_rcc_apbenr1_spi2en,
  FieldId::field_rcc_apbenr1_usart2en,
  FieldId::field_rcc_apbenr1_usart3en,
  FieldId::field_rcc_apbenr1_usart4en,
  FieldId::field_rcc_apbenr1_lpuart1en,
  FieldId::field_rcc_apbenr2_spi1en,
  FieldId::field_rcc_apbenr2_usart1en,
  FieldId::field_rcc_apbrstr1_spi2rst,
  FieldId::field_rcc_apbrstr1_usart2rst,
  FieldId::field_rcc_apbrstr1_usart3rst,
  FieldId::field_rcc_apbrstr1_usart4rst,
  FieldId::field_rcc_apbrstr1_lpuart1rst,
  FieldId::field_rcc_apbrstr2_spi1rst,
  FieldId::field_rcc_apbrstr2_usart1rst,
  FieldId::field_rcc_ccipr_usart1sel,
  FieldId::field_rcc_ccipr_lpuart1sel,
  FieldId::field_rcc_iopenr_gpioaen,
  FieldId::field_rcc_iopenr_gpioben,
  FieldId::field_rcc_iopenr_gpiocen,
  FieldId::field_rcc_iopenr_gpioden,
  FieldId::field_rcc_iopenr_gpiofen,
  FieldId::field_rcc_ioprstr_gpioarst,
  FieldId::field_rcc_ioprstr_gpiobrst,
  FieldId::field_rcc_ioprstr_gpiocrst,
  FieldId::field_rcc_ioprstr_gpiodrst,
  FieldId::field_rcc_ioprstr_gpiofrst,
  FieldId::field_spi1_cr1_cpha,
  FieldId::field_spi1_cr1_cpol,
  FieldId::field_spi1_cr1_mstr,
  FieldId::field_spi1_cr1_br,
  FieldId::field_spi1_cr1_spe,
  FieldId::field_spi1_cr1_lsbfirst,
  FieldId::field_spi1_cr1_ssi,
  FieldId::field_spi1_cr1_ssm,
  FieldId::field_spi1_cr1_rxonly,
  FieldId::field_spi1_cr1_dff,
  FieldId::field_spi1_cr1_crcnext,
  FieldId::field_spi1_cr1_crcen,
  FieldId::field_spi1_cr1_bidioe,
  FieldId::field_spi1_cr1_bidimode,
  FieldId::field_spi1_cr2_rxdmaen,
  FieldId::field_spi1_cr2_txdmaen,
  FieldId::field_spi1_cr2_ssoe,
  FieldId::field_spi1_cr2_nssp,
  FieldId::field_spi1_cr2_frf,
  FieldId::field_spi1_cr2_errie,
  FieldId::field_spi1_cr2_rxneie,
  FieldId::field_spi1_cr2_txeie,
  FieldId::field_spi1_cr2_ds,
  FieldId::field_spi1_cr2_frxth,
  FieldId::field_spi1_cr2_ldma_rx,
  FieldId::field_spi1_cr2_ldma_tx,
  FieldId::field_spi1_crcpr_crcpoly,
  FieldId::field_spi1_dr_dr,
  FieldId::field_spi1_hwcfgr_crccfg,
  FieldId::field_spi1_hwcfgr_i2scfg,
  FieldId::field_spi1_hwcfgr_i2sckcfg,
  FieldId::field_spi1_hwcfgr_dscfg,
  FieldId::field_spi1_hwcfgr_nsscfg,
  FieldId::field_spi1_i2scfgr_chlen,
  FieldId::field_spi1_i2scfgr_datlen,
  FieldId::field_spi1_i2scfgr_ckpol,
  FieldId::field_spi1_i2scfgr_i2sstd,
  FieldId::field_spi1_i2scfgr_pcmsync,
  FieldId::field_spi1_i2scfgr_i2scfg,
  FieldId::field_spi1_i2scfgr_se2,
  FieldId::field_spi1_i2scfgr_i2smod,
  FieldId::field_spi1_i2spr_i2sdiv,
  FieldId::field_spi1_i2spr_odd,
  FieldId::field_spi1_i2spr_mckoe,
  FieldId::field_spi1_ipidr_ipid,
  FieldId::field_spi1_rxcrcr_rxcrc,
  FieldId::field_spi1_sidr_sid,
  FieldId::field_spi1_sr_rxne,
  FieldId::field_spi1_sr_txe,
  FieldId::field_spi1_sr_chside,
  FieldId::field_spi1_sr_udr,
  FieldId::field_spi1_sr_crcerr,
  FieldId::field_spi1_sr_modf,
  FieldId::field_spi1_sr_ovr,
  FieldId::field_spi1_sr_bsy,
  FieldId::field_spi1_sr_tifrfe,
  FieldId::field_spi1_sr_frlvl,
  FieldId::field_spi1_sr_ftlvl,
  FieldId::field_spi1_txcrcr_txcrc,
  FieldId::field_spi1_verr_minrev,
  FieldId::field_spi1_verr_majrev,
  FieldId::field_spi2_cr1_cpha,
  FieldId::field_spi2_cr1_cpol,
  FieldId::field_spi2_cr1_mstr,
  FieldId::field_spi2_cr1_br,
  FieldId::field_spi2_cr1_spe,
  FieldId::field_spi2_cr1_lsbfirst,
  FieldId::field_spi2_cr1_ssi,
  FieldId::field_spi2_cr1_ssm,
  FieldId::field_spi2_cr1_rxonly,
  FieldId::field_spi2_cr1_dff,
  FieldId::field_spi2_cr1_crcnext,
  FieldId::field_spi2_cr1_crcen,
  FieldId::field_spi2_cr1_bidioe,
  FieldId::field_spi2_cr1_bidimode,
  FieldId::field_spi2_cr2_rxdmaen,
  FieldId::field_spi2_cr2_txdmaen,
  FieldId::field_spi2_cr2_ssoe,
  FieldId::field_spi2_cr2_nssp,
  FieldId::field_spi2_cr2_frf,
  FieldId::field_spi2_cr2_errie,
  FieldId::field_spi2_cr2_rxneie,
  FieldId::field_spi2_cr2_txeie,
  FieldId::field_spi2_cr2_ds,
  FieldId::field_spi2_cr2_frxth,
  FieldId::field_spi2_cr2_ldma_rx,
  FieldId::field_spi2_cr2_ldma_tx,
  FieldId::field_spi2_crcpr_crcpoly,
  FieldId::field_spi2_dr_dr,
  FieldId::field_spi2_hwcfgr_crccfg,
  FieldId::field_spi2_hwcfgr_i2scfg,
  FieldId::field_spi2_hwcfgr_i2sckcfg,
  FieldId::field_spi2_hwcfgr_dscfg,
  FieldId::field_spi2_hwcfgr_nsscfg,
  FieldId::field_spi2_i2scfgr_chlen,
  FieldId::field_spi2_i2scfgr_datlen,
  FieldId::field_spi2_i2scfgr_ckpol,
  FieldId::field_spi2_i2scfgr_i2sstd,
  FieldId::field_spi2_i2scfgr_pcmsync,
  FieldId::field_spi2_i2scfgr_i2scfg,
  FieldId::field_spi2_i2scfgr_se2,
  FieldId::field_spi2_i2scfgr_i2smod,
  FieldId::field_spi2_i2spr_i2sdiv,
  FieldId::field_spi2_i2spr_odd,
  FieldId::field_spi2_i2spr_mckoe,
  FieldId::field_spi2_ipidr_ipid,
  FieldId::field_spi2_rxcrcr_rxcrc,
  FieldId::field_spi2_sidr_sid,
  FieldId::field_spi2_sr_rxne,
  FieldId::field_spi2_sr_txe,
  FieldId::field_spi2_sr_chside,
  FieldId::field_spi2_sr_udr,
  FieldId::field_spi2_sr_crcerr,
  FieldId::field_spi2_sr_modf,
  FieldId::field_spi2_sr_ovr,
  FieldId::field_spi2_sr_bsy,
  FieldId::field_spi2_sr_tifrfe,
  FieldId::field_spi2_sr_frlvl,
  FieldId::field_spi2_sr_ftlvl,
  FieldId::field_spi2_txcrcr_txcrc,
  FieldId::field_spi2_verr_minrev,
  FieldId::field_spi2_verr_majrev,
  FieldId::field_usart1_brr_brr_0_3,
  FieldId::field_usart1_brr_brr_4_15,
  FieldId::field_usart1_cr1_ue,
  FieldId::field_usart1_cr1_uesm,
  FieldId::field_usart1_cr1_re,
  FieldId::field_usart1_cr1_te,
  FieldId::field_usart1_cr1_idleie,
  FieldId::field_usart1_cr1_rxneie,
  FieldId::field_usart1_cr1_tcie,
  FieldId::field_usart1_cr1_txeie,
  FieldId::field_usart1_cr1_peie,
  FieldId::field_usart1_cr1_ps,
  FieldId::field_usart1_cr1_pce,
  FieldId::field_usart1_cr1_wake,
  FieldId::field_usart1_cr1_m0,
  FieldId::field_usart1_cr1_mme,
  FieldId::field_usart1_cr1_cmie,
  FieldId::field_usart1_cr1_over8,
  FieldId::field_usart1_cr1_dedt,
  FieldId::field_usart1_cr1_deat,
  FieldId::field_usart1_cr1_rtoie,
  FieldId::field_usart1_cr1_eobie,
  FieldId::field_usart1_cr1_m1,
  FieldId::field_usart1_cr1_fifoen,
  FieldId::field_usart1_cr1_txfeie,
  FieldId::field_usart1_cr1_rxffie,
  FieldId::field_usart1_cr2_slven,
  FieldId::field_usart1_cr2_dis_nss,
  FieldId::field_usart1_cr2_addm7,
  FieldId::field_usart1_cr2_lbdl,
  FieldId::field_usart1_cr2_lbdie,
  FieldId::field_usart1_cr2_lbcl,
  FieldId::field_usart1_cr2_cpha,
  FieldId::field_usart1_cr2_cpol,
  FieldId::field_usart1_cr2_clken,
  FieldId::field_usart1_cr2_stop,
  FieldId::field_usart1_cr2_linen,
  FieldId::field_usart1_cr2_swap,
  FieldId::field_usart1_cr2_rxinv,
  FieldId::field_usart1_cr2_txinv,
  FieldId::field_usart1_cr2_tainv,
  FieldId::field_usart1_cr2_msbfirst,
  FieldId::field_usart1_cr2_abren,
  FieldId::field_usart1_cr2_abrmod,
  FieldId::field_usart1_cr2_rtoen,
  FieldId::field_usart1_cr2_add0_3,
  FieldId::field_usart1_cr2_add4_7,
  FieldId::field_usart1_cr3_eie,
  FieldId::field_usart1_cr3_iren,
  FieldId::field_usart1_cr3_irlp,
  FieldId::field_usart1_cr3_hdsel,
  FieldId::field_usart1_cr3_nack,
  FieldId::field_usart1_cr3_scen,
  FieldId::field_usart1_cr3_dmar,
  FieldId::field_usart1_cr3_dmat,
  FieldId::field_usart1_cr3_rtse,
  FieldId::field_usart1_cr3_ctse,
  FieldId::field_usart1_cr3_ctsie,
  FieldId::field_usart1_cr3_onebit,
  FieldId::field_usart1_cr3_ovrdis,
  FieldId::field_usart1_cr3_ddre,
  FieldId::field_usart1_cr3_dem,
  FieldId::field_usart1_cr3_dep,
  FieldId::field_usart1_cr3_scarcnt,
  FieldId::field_usart1_cr3_wus,
  FieldId::field_usart1_cr3_wufie,
  FieldId::field_usart1_cr3_txftie,
  FieldId::field_usart1_cr3_tcbgtie,
  FieldId::field_usart1_cr3_rxftcfg,
  FieldId::field_usart1_cr3_rxftie,
  FieldId::field_usart1_cr3_txftcfg,
  FieldId::field_usart1_gtpr_psc,
  FieldId::field_usart1_gtpr_gt,
  FieldId::field_usart1_icr_pecf,
  FieldId::field_usart1_icr_fecf,
  FieldId::field_usart1_icr_ncf,
  FieldId::field_usart1_icr_orecf,
  FieldId::field_usart1_icr_idlecf,
  FieldId::field_usart1_icr_txfecf,
  FieldId::field_usart1_icr_tccf,
  FieldId::field_usart1_icr_tcbgtcf,
  FieldId::field_usart1_icr_lbdcf,
  FieldId::field_usart1_icr_ctscf,
  FieldId::field_usart1_icr_rtocf,
  FieldId::field_usart1_icr_eobcf,
  FieldId::field_usart1_icr_udrcf,
  FieldId::field_usart1_icr_cmcf,
  FieldId::field_usart1_icr_wucf,
  FieldId::field_usart1_isr_pe,
  FieldId::field_usart1_isr_fe,
  FieldId::field_usart1_isr_nf,
  FieldId::field_usart1_isr_ore,
  FieldId::field_usart1_isr_idle,
  FieldId::field_usart1_isr_rxne,
  FieldId::field_usart1_isr_tc,
  FieldId::field_usart1_isr_txe,
  FieldId::field_usart1_isr_lbdf,
  FieldId::field_usart1_isr_ctsif,
  FieldId::field_usart1_isr_cts,
  FieldId::field_usart1_isr_rtof,
  FieldId::field_usart1_isr_eobf,
  FieldId::field_usart1_isr_udr,
  FieldId::field_usart1_isr_abre,
  FieldId::field_usart1_isr_abrf,
  FieldId::field_usart1_isr_busy,
  FieldId::field_usart1_isr_cmf,
  FieldId::field_usart1_isr_sbkf,
  FieldId::field_usart1_isr_rwu,
  FieldId::field_usart1_isr_wuf,
  FieldId::field_usart1_isr_teack,
  FieldId::field_usart1_isr_reack,
  FieldId::field_usart1_isr_txfe,
  FieldId::field_usart1_isr_rxff,
  FieldId::field_usart1_isr_tcbgt,
  FieldId::field_usart1_isr_rxft,
  FieldId::field_usart1_isr_txft,
  FieldId::field_usart1_presc_prescaler,
  FieldId::field_usart1_rdr_rdr,
  FieldId::field_usart1_rqr_abrrq,
  FieldId::field_usart1_rqr_sbkrq,
  FieldId::field_usart1_rqr_mmrq,
  FieldId::field_usart1_rqr_rxfrq,
  FieldId::field_usart1_rqr_txfrq,
  FieldId::field_usart1_rtor_rto,
  FieldId::field_usart1_rtor_blen,
  FieldId::field_usart1_tdr_tdr,
  FieldId::field_usart2_brr_brr_0_3,
  FieldId::field_usart2_brr_brr_4_15,
  FieldId::field_usart2_cr1_ue,
  FieldId::field_usart2_cr1_uesm,
  FieldId::field_usart2_cr1_re,
  FieldId::field_usart2_cr1_te,
  FieldId::field_usart2_cr1_idleie,
  FieldId::field_usart2_cr1_rxneie,
  FieldId::field_usart2_cr1_tcie,
  FieldId::field_usart2_cr1_txeie,
  FieldId::field_usart2_cr1_peie,
  FieldId::field_usart2_cr1_ps,
  FieldId::field_usart2_cr1_pce,
  FieldId::field_usart2_cr1_wake,
  FieldId::field_usart2_cr1_m0,
  FieldId::field_usart2_cr1_mme,
  FieldId::field_usart2_cr1_cmie,
  FieldId::field_usart2_cr1_over8,
  FieldId::field_usart2_cr1_dedt,
  FieldId::field_usart2_cr1_deat,
  FieldId::field_usart2_cr1_rtoie,
  FieldId::field_usart2_cr1_eobie,
  FieldId::field_usart2_cr1_m1,
  FieldId::field_usart2_cr1_fifoen,
  FieldId::field_usart2_cr1_txfeie,
  FieldId::field_usart2_cr1_rxffie,
  FieldId::field_usart2_cr2_slven,
  FieldId::field_usart2_cr2_dis_nss,
  FieldId::field_usart2_cr2_addm7,
  FieldId::field_usart2_cr2_lbdl,
  FieldId::field_usart2_cr2_lbdie,
  FieldId::field_usart2_cr2_lbcl,
  FieldId::field_usart2_cr2_cpha,
  FieldId::field_usart2_cr2_cpol,
  FieldId::field_usart2_cr2_clken,
  FieldId::field_usart2_cr2_stop,
  FieldId::field_usart2_cr2_linen,
  FieldId::field_usart2_cr2_swap,
  FieldId::field_usart2_cr2_rxinv,
  FieldId::field_usart2_cr2_txinv,
  FieldId::field_usart2_cr2_tainv,
  FieldId::field_usart2_cr2_msbfirst,
  FieldId::field_usart2_cr2_abren,
  FieldId::field_usart2_cr2_abrmod,
  FieldId::field_usart2_cr2_rtoen,
  FieldId::field_usart2_cr2_add0_3,
  FieldId::field_usart2_cr2_add4_7,
  FieldId::field_usart2_cr3_eie,
  FieldId::field_usart2_cr3_iren,
  FieldId::field_usart2_cr3_irlp,
  FieldId::field_usart2_cr3_hdsel,
  FieldId::field_usart2_cr3_nack,
  FieldId::field_usart2_cr3_scen,
  FieldId::field_usart2_cr3_dmar,
  FieldId::field_usart2_cr3_dmat,
  FieldId::field_usart2_cr3_rtse,
  FieldId::field_usart2_cr3_ctse,
  FieldId::field_usart2_cr3_ctsie,
  FieldId::field_usart2_cr3_onebit,
  FieldId::field_usart2_cr3_ovrdis,
  FieldId::field_usart2_cr3_ddre,
  FieldId::field_usart2_cr3_dem,
  FieldId::field_usart2_cr3_dep,
  FieldId::field_usart2_cr3_scarcnt,
  FieldId::field_usart2_cr3_wus,
  FieldId::field_usart2_cr3_wufie,
  FieldId::field_usart2_cr3_txftie,
  FieldId::field_usart2_cr3_tcbgtie,
  FieldId::field_usart2_cr3_rxftcfg,
  FieldId::field_usart2_cr3_rxftie,
  FieldId::field_usart2_cr3_txftcfg,
  FieldId::field_usart2_gtpr_psc,
  FieldId::field_usart2_gtpr_gt,
  FieldId::field_usart2_icr_pecf,
  FieldId::field_usart2_icr_fecf,
  FieldId::field_usart2_icr_ncf,
  FieldId::field_usart2_icr_orecf,
  FieldId::field_usart2_icr_idlecf,
  FieldId::field_usart2_icr_txfecf,
  FieldId::field_usart2_icr_tccf,
  FieldId::field_usart2_icr_tcbgtcf,
  FieldId::field_usart2_icr_lbdcf,
  FieldId::field_usart2_icr_ctscf,
  FieldId::field_usart2_icr_rtocf,
  FieldId::field_usart2_icr_eobcf,
  FieldId::field_usart2_icr_udrcf,
  FieldId::field_usart2_icr_cmcf,
  FieldId::field_usart2_icr_wucf,
  FieldId::field_usart2_isr_pe,
  FieldId::field_usart2_isr_fe,
  FieldId::field_usart2_isr_nf,
  FieldId::field_usart2_isr_ore,
  FieldId::field_usart2_isr_idle,
  FieldId::field_usart2_isr_rxne,
  FieldId::field_usart2_isr_tc,
  FieldId::field_usart2_isr_txe,
  FieldId::field_usart2_isr_lbdf,
  FieldId::field_usart2_isr_ctsif,
  FieldId::field_usart2_isr_cts,
  FieldId::field_usart2_isr_rtof,
  FieldId::field_usart2_isr_eobf,
  FieldId::field_usart2_isr_udr,
  FieldId::field_usart2_isr_abre,
  FieldId::field_usart2_isr_abrf,
  FieldId::field_usart2_isr_busy,
  FieldId::field_usart2_isr_cmf,
  FieldId::field_usart2_isr_sbkf,
  FieldId::field_usart2_isr_rwu,
  FieldId::field_usart2_isr_wuf,
  FieldId::field_usart2_isr_teack,
  FieldId::field_usart2_isr_reack,
  FieldId::field_usart2_isr_txfe,
  FieldId::field_usart2_isr_rxff,
  FieldId::field_usart2_isr_tcbgt,
  FieldId::field_usart2_isr_rxft,
  FieldId::field_usart2_isr_txft,
  FieldId::field_usart2_presc_prescaler,
  FieldId::field_usart2_rdr_rdr,
  FieldId::field_usart2_rqr_abrrq,
  FieldId::field_usart2_rqr_sbkrq,
  FieldId::field_usart2_rqr_mmrq,
  FieldId::field_usart2_rqr_rxfrq,
  FieldId::field_usart2_rqr_txfrq,
  FieldId::field_usart2_rtor_rto,
  FieldId::field_usart2_rtor_blen,
  FieldId::field_usart2_tdr_tdr,
  FieldId::field_usart3_brr_brr_0_3,
  FieldId::field_usart3_brr_brr_4_15,
  FieldId::field_usart3_cr1_ue,
  FieldId::field_usart3_cr1_uesm,
  FieldId::field_usart3_cr1_re,
  FieldId::field_usart3_cr1_te,
  FieldId::field_usart3_cr1_idleie,
  FieldId::field_usart3_cr1_rxneie,
  FieldId::field_usart3_cr1_tcie,
  FieldId::field_usart3_cr1_txeie,
  FieldId::field_usart3_cr1_peie,
  FieldId::field_usart3_cr1_ps,
  FieldId::field_usart3_cr1_pce,
  FieldId::field_usart3_cr1_wake,
  FieldId::field_usart3_cr1_m0,
  FieldId::field_usart3_cr1_mme,
  FieldId::field_usart3_cr1_cmie,
  FieldId::field_usart3_cr1_over8,
  FieldId::field_usart3_cr1_dedt,
  FieldId::field_usart3_cr1_deat,
  FieldId::field_usart3_cr1_rtoie,
  FieldId::field_usart3_cr1_eobie,
  FieldId::field_usart3_cr1_m1,
  FieldId::field_usart3_cr1_fifoen,
  FieldId::field_usart3_cr1_txfeie,
  FieldId::field_usart3_cr1_rxffie,
  FieldId::field_usart3_cr2_slven,
  FieldId::field_usart3_cr2_dis_nss,
  FieldId::field_usart3_cr2_addm7,
  FieldId::field_usart3_cr2_lbdl,
  FieldId::field_usart3_cr2_lbdie,
  FieldId::field_usart3_cr2_lbcl,
  FieldId::field_usart3_cr2_cpha,
  FieldId::field_usart3_cr2_cpol,
  FieldId::field_usart3_cr2_clken,
  FieldId::field_usart3_cr2_stop,
  FieldId::field_usart3_cr2_linen,
  FieldId::field_usart3_cr2_swap,
  FieldId::field_usart3_cr2_rxinv,
  FieldId::field_usart3_cr2_txinv,
  FieldId::field_usart3_cr2_tainv,
  FieldId::field_usart3_cr2_msbfirst,
  FieldId::field_usart3_cr2_abren,
  FieldId::field_usart3_cr2_abrmod,
  FieldId::field_usart3_cr2_rtoen,
  FieldId::field_usart3_cr2_add0_3,
  FieldId::field_usart3_cr2_add4_7,
  FieldId::field_usart3_cr3_eie,
  FieldId::field_usart3_cr3_iren,
  FieldId::field_usart3_cr3_irlp,
  FieldId::field_usart3_cr3_hdsel,
  FieldId::field_usart3_cr3_nack,
  FieldId::field_usart3_cr3_scen,
  FieldId::field_usart3_cr3_dmar,
  FieldId::field_usart3_cr3_dmat,
  FieldId::field_usart3_cr3_rtse,
  FieldId::field_usart3_cr3_ctse,
  FieldId::field_usart3_cr3_ctsie,
  FieldId::field_usart3_cr3_onebit,
  FieldId::field_usart3_cr3_ovrdis,
  FieldId::field_usart3_cr3_ddre,
  FieldId::field_usart3_cr3_dem,
  FieldId::field_usart3_cr3_dep,
  FieldId::field_usart3_cr3_scarcnt,
  FieldId::field_usart3_cr3_wus,
  FieldId::field_usart3_cr3_wufie,
  FieldId::field_usart3_cr3_txftie,
  FieldId::field_usart3_cr3_tcbgtie,
  FieldId::field_usart3_cr3_rxftcfg,
  FieldId::field_usart3_cr3_rxftie,
  FieldId::field_usart3_cr3_txftcfg,
  FieldId::field_usart3_gtpr_psc,
  FieldId::field_usart3_gtpr_gt,
  FieldId::field_usart3_icr_pecf,
  FieldId::field_usart3_icr_fecf,
  FieldId::field_usart3_icr_ncf,
  FieldId::field_usart3_icr_orecf,
  FieldId::field_usart3_icr_idlecf,
  FieldId::field_usart3_icr_txfecf,
  FieldId::field_usart3_icr_tccf,
  FieldId::field_usart3_icr_tcbgtcf,
  FieldId::field_usart3_icr_lbdcf,
  FieldId::field_usart3_icr_ctscf,
  FieldId::field_usart3_icr_rtocf,
  FieldId::field_usart3_icr_eobcf,
  FieldId::field_usart3_icr_udrcf,
  FieldId::field_usart3_icr_cmcf,
  FieldId::field_usart3_icr_wucf,
  FieldId::field_usart3_isr_pe,
  FieldId::field_usart3_isr_fe,
  FieldId::field_usart3_isr_nf,
  FieldId::field_usart3_isr_ore,
  FieldId::field_usart3_isr_idle,
  FieldId::field_usart3_isr_rxne,
  FieldId::field_usart3_isr_tc,
  FieldId::field_usart3_isr_txe,
  FieldId::field_usart3_isr_lbdf,
  FieldId::field_usart3_isr_ctsif,
  FieldId::field_usart3_isr_cts,
  FieldId::field_usart3_isr_rtof,
  FieldId::field_usart3_isr_eobf,
  FieldId::field_usart3_isr_udr,
  FieldId::field_usart3_isr_abre,
  FieldId::field_usart3_isr_abrf,
  FieldId::field_usart3_isr_busy,
  FieldId::field_usart3_isr_cmf,
  FieldId::field_usart3_isr_sbkf,
  FieldId::field_usart3_isr_rwu,
  FieldId::field_usart3_isr_wuf,
  FieldId::field_usart3_isr_teack,
  FieldId::field_usart3_isr_reack,
  FieldId::field_usart3_isr_txfe,
  FieldId::field_usart3_isr_rxff,
  FieldId::field_usart3_isr_tcbgt,
  FieldId::field_usart3_isr_rxft,
  FieldId::field_usart3_isr_txft,
  FieldId::field_usart3_presc_prescaler,
  FieldId::field_usart3_rdr_rdr,
  FieldId::field_usart3_rqr_abrrq,
  FieldId::field_usart3_rqr_sbkrq,
  FieldId::field_usart3_rqr_mmrq,
  FieldId::field_usart3_rqr_rxfrq,
  FieldId::field_usart3_rqr_txfrq,
  FieldId::field_usart3_rtor_rto,
  FieldId::field_usart3_rtor_blen,
  FieldId::field_usart3_tdr_tdr,
  FieldId::field_usart4_brr_brr_0_3,
  FieldId::field_usart4_brr_brr_4_15,
  FieldId::field_usart4_cr1_ue,
  FieldId::field_usart4_cr1_uesm,
  FieldId::field_usart4_cr1_re,
  FieldId::field_usart4_cr1_te,
  FieldId::field_usart4_cr1_idleie,
  FieldId::field_usart4_cr1_rxneie,
  FieldId::field_usart4_cr1_tcie,
  FieldId::field_usart4_cr1_txeie,
  FieldId::field_usart4_cr1_peie,
  FieldId::field_usart4_cr1_ps,
  FieldId::field_usart4_cr1_pce,
  FieldId::field_usart4_cr1_wake,
  FieldId::field_usart4_cr1_m0,
  FieldId::field_usart4_cr1_mme,
  FieldId::field_usart4_cr1_cmie,
  FieldId::field_usart4_cr1_over8,
  FieldId::field_usart4_cr1_dedt,
  FieldId::field_usart4_cr1_deat,
  FieldId::field_usart4_cr1_rtoie,
  FieldId::field_usart4_cr1_eobie,
  FieldId::field_usart4_cr1_m1,
  FieldId::field_usart4_cr1_fifoen,
  FieldId::field_usart4_cr1_txfeie,
  FieldId::field_usart4_cr1_rxffie,
  FieldId::field_usart4_cr2_slven,
  FieldId::field_usart4_cr2_dis_nss,
  FieldId::field_usart4_cr2_addm7,
  FieldId::field_usart4_cr2_lbdl,
  FieldId::field_usart4_cr2_lbdie,
  FieldId::field_usart4_cr2_lbcl,
  FieldId::field_usart4_cr2_cpha,
  FieldId::field_usart4_cr2_cpol,
  FieldId::field_usart4_cr2_clken,
  FieldId::field_usart4_cr2_stop,
  FieldId::field_usart4_cr2_linen,
  FieldId::field_usart4_cr2_swap,
  FieldId::field_usart4_cr2_rxinv,
  FieldId::field_usart4_cr2_txinv,
  FieldId::field_usart4_cr2_tainv,
  FieldId::field_usart4_cr2_msbfirst,
  FieldId::field_usart4_cr2_abren,
  FieldId::field_usart4_cr2_abrmod,
  FieldId::field_usart4_cr2_rtoen,
  FieldId::field_usart4_cr2_add0_3,
  FieldId::field_usart4_cr2_add4_7,
  FieldId::field_usart4_cr3_eie,
  FieldId::field_usart4_cr3_iren,
  FieldId::field_usart4_cr3_irlp,
  FieldId::field_usart4_cr3_hdsel,
  FieldId::field_usart4_cr3_nack,
  FieldId::field_usart4_cr3_scen,
  FieldId::field_usart4_cr3_dmar,
  FieldId::field_usart4_cr3_dmat,
  FieldId::field_usart4_cr3_rtse,
  FieldId::field_usart4_cr3_ctse,
  FieldId::field_usart4_cr3_ctsie,
  FieldId::field_usart4_cr3_onebit,
  FieldId::field_usart4_cr3_ovrdis,
  FieldId::field_usart4_cr3_ddre,
  FieldId::field_usart4_cr3_dem,
  FieldId::field_usart4_cr3_dep,
  FieldId::field_usart4_cr3_scarcnt,
  FieldId::field_usart4_cr3_wus,
  FieldId::field_usart4_cr3_wufie,
  FieldId::field_usart4_cr3_txftie,
  FieldId::field_usart4_cr3_tcbgtie,
  FieldId::field_usart4_cr3_rxftcfg,
  FieldId::field_usart4_cr3_rxftie,
  FieldId::field_usart4_cr3_txftcfg,
  FieldId::field_usart4_gtpr_psc,
  FieldId::field_usart4_gtpr_gt,
  FieldId::field_usart4_icr_pecf,
  FieldId::field_usart4_icr_fecf,
  FieldId::field_usart4_icr_ncf,
  FieldId::field_usart4_icr_orecf,
  FieldId::field_usart4_icr_idlecf,
  FieldId::field_usart4_icr_txfecf,
  FieldId::field_usart4_icr_tccf,
  FieldId::field_usart4_icr_tcbgtcf,
  FieldId::field_usart4_icr_lbdcf,
  FieldId::field_usart4_icr_ctscf,
  FieldId::field_usart4_icr_rtocf,
  FieldId::field_usart4_icr_eobcf,
  FieldId::field_usart4_icr_udrcf,
  FieldId::field_usart4_icr_cmcf,
  FieldId::field_usart4_icr_wucf,
  FieldId::field_usart4_isr_pe,
  FieldId::field_usart4_isr_fe,
  FieldId::field_usart4_isr_nf,
  FieldId::field_usart4_isr_ore,
  FieldId::field_usart4_isr_idle,
  FieldId::field_usart4_isr_rxne,
  FieldId::field_usart4_isr_tc,
  FieldId::field_usart4_isr_txe,
  FieldId::field_usart4_isr_lbdf,
  FieldId::field_usart4_isr_ctsif,
  FieldId::field_usart4_isr_cts,
  FieldId::field_usart4_isr_rtof,
  FieldId::field_usart4_isr_eobf,
  FieldId::field_usart4_isr_udr,
  FieldId::field_usart4_isr_abre,
  FieldId::field_usart4_isr_abrf,
  FieldId::field_usart4_isr_busy,
  FieldId::field_usart4_isr_cmf,
  FieldId::field_usart4_isr_sbkf,
  FieldId::field_usart4_isr_rwu,
  FieldId::field_usart4_isr_wuf,
  FieldId::field_usart4_isr_teack,
  FieldId::field_usart4_isr_reack,
  FieldId::field_usart4_isr_txfe,
  FieldId::field_usart4_isr_rxff,
  FieldId::field_usart4_isr_tcbgt,
  FieldId::field_usart4_isr_rxft,
  FieldId::field_usart4_isr_txft,
  FieldId::field_usart4_presc_prescaler,
  FieldId::field_usart4_rdr_rdr,
  FieldId::field_usart4_rqr_abrrq,
  FieldId::field_usart4_rqr_sbkrq,
  FieldId::field_usart4_rqr_mmrq,
  FieldId::field_usart4_rqr_rxfrq,
  FieldId::field_usart4_rqr_txfrq,
  FieldId::field_usart4_rtor_rto,
  FieldId::field_usart4_rtor_blen,
  FieldId::field_usart4_tdr_tdr,
}};
}
}
}
}
}
}
