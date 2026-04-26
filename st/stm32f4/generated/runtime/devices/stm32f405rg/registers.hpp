#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f405rg {
enum class RegisterId : std::uint16_t {
  none,
  register_adc1_sr,
  register_adc1_cr1,
  register_adc1_cr2,
  register_adc1_smpr1,
  register_adc1_smpr2,
  register_adc1_jofr1,
  register_adc1_jofr2,
  register_adc1_jofr3,
  register_adc1_jofr4,
  register_adc1_htr,
  register_adc1_ltr,
  register_adc1_sqr1,
  register_adc1_sqr2,
  register_adc1_sqr3,
  register_adc1_jsqr,
  register_adc1_jdr1,
  register_adc1_jdr2,
  register_adc1_jdr3,
  register_adc1_jdr4,
  register_adc1_dr,
  register_adc2_sr,
  register_adc2_cr1,
  register_adc2_cr2,
  register_adc2_smpr1,
  register_adc2_smpr2,
  register_adc2_jofr1,
  register_adc2_jofr2,
  register_adc2_jofr3,
  register_adc2_jofr4,
  register_adc2_htr,
  register_adc2_ltr,
  register_adc2_sqr1,
  register_adc2_sqr2,
  register_adc2_sqr3,
  register_adc2_jsqr,
  register_adc2_jdr1,
  register_adc2_jdr2,
  register_adc2_jdr3,
  register_adc2_jdr4,
  register_adc2_dr,
  register_adc3_sr,
  register_adc3_cr1,
  register_adc3_cr2,
  register_adc3_smpr1,
  register_adc3_smpr2,
  register_adc3_jofr1,
  register_adc3_jofr2,
  register_adc3_jofr3,
  register_adc3_jofr4,
  register_adc3_htr,
  register_adc3_ltr,
  register_adc3_sqr1,
  register_adc3_sqr2,
  register_adc3_sqr3,
  register_adc3_jsqr,
  register_adc3_jdr1,
  register_adc3_jdr2,
  register_adc3_jdr3,
  register_adc3_jdr4,
  register_adc3_dr,
  register_can1_mcr,
  register_can1_msr,
  register_can1_tsr,
  register_can1_rf0r,
  register_can1_rf1r,
  register_can1_ier,
  register_can1_esr,
  register_can1_btr,
  register_can1_ti0r,
  register_can1_tdt0r,
  register_can1_tdl0r,
  register_can1_tdh0r,
  register_can1_ti1r,
  register_can1_tdt1r,
  register_can1_tdl1r,
  register_can1_tdh1r,
  register_can1_ti2r,
  register_can1_tdt2r,
  register_can1_tdl2r,
  register_can1_tdh2r,
  register_can1_ri0r,
  register_can1_rdt0r,
  register_can1_rdl0r,
  register_can1_rdh0r,
  register_can1_ri1r,
  register_can1_rdt1r,
  register_can1_rdl1r,
  register_can1_rdh1r,
  register_can1_fmr,
  register_can1_fm1r,
  register_can1_fs1r,
  register_can1_ffa1r,
  register_can1_fa1r,
  register_can1_f0r1,
  register_can1_f0r2,
  register_can1_f1r1,
  register_can1_f1r2,
  register_can1_f2r1,
  register_can1_f2r2,
  register_can1_f3r1,
  register_can1_f3r2,
  register_can1_f4r1,
  register_can1_f4r2,
  register_can1_f5r1,
  register_can1_f5r2,
  register_can1_f6r1,
  register_can1_f6r2,
  register_can1_f7r1,
  register_can1_f7r2,
  register_can1_f8r1,
  register_can1_f8r2,
  register_can1_f9r1,
  register_can1_f9r2,
  register_can1_f10r1,
  register_can1_f10r2,
  register_can1_f11r1,
  register_can1_f11r2,
  register_can1_f12r1,
  register_can1_f12r2,
  register_can1_f13r1,
  register_can1_f13r2,
  register_can1_f14r1,
  register_can1_f14r2,
  register_can1_f15r1,
  register_can1_f15r2,
  register_can1_f16r1,
  register_can1_f16r2,
  register_can1_f17r1,
  register_can1_f17r2,
  register_can1_f18r1,
  register_can1_f18r2,
  register_can1_f19r1,
  register_can1_f19r2,
  register_can1_f20r1,
  register_can1_f20r2,
  register_can1_f21r1,
  register_can1_f21r2,
  register_can1_f22r1,
  register_can1_f22r2,
  register_can1_f23r1,
  register_can1_f23r2,
  register_can1_f24r1,
  register_can1_f24r2,
  register_can1_f25r1,
  register_can1_f25r2,
  register_can1_f26r1,
  register_can1_f26r2,
  register_can1_f27r1,
  register_can1_f27r2,
  register_can2_mcr,
  register_can2_msr,
  register_can2_tsr,
  register_can2_rf0r,
  register_can2_rf1r,
  register_can2_ier,
  register_can2_esr,
  register_can2_btr,
  register_can2_ti0r,
  register_can2_tdt0r,
  register_can2_tdl0r,
  register_can2_tdh0r,
  register_can2_ti1r,
  register_can2_tdt1r,
  register_can2_tdl1r,
  register_can2_tdh1r,
  register_can2_ti2r,
  register_can2_tdt2r,
  register_can2_tdl2r,
  register_can2_tdh2r,
  register_can2_ri0r,
  register_can2_rdt0r,
  register_can2_rdl0r,
  register_can2_rdh0r,
  register_can2_ri1r,
  register_can2_rdt1r,
  register_can2_rdl1r,
  register_can2_rdh1r,
  register_can2_fmr,
  register_can2_fm1r,
  register_can2_fs1r,
  register_can2_ffa1r,
  register_can2_fa1r,
  register_can2_f0r1,
  register_can2_f0r2,
  register_can2_f1r1,
  register_can2_f1r2,
  register_can2_f2r1,
  register_can2_f2r2,
  register_can2_f3r1,
  register_can2_f3r2,
  register_can2_f4r1,
  register_can2_f4r2,
  register_can2_f5r1,
  register_can2_f5r2,
  register_can2_f6r1,
  register_can2_f6r2,
  register_can2_f7r1,
  register_can2_f7r2,
  register_can2_f8r1,
  register_can2_f8r2,
  register_can2_f9r1,
  register_can2_f9r2,
  register_can2_f10r1,
  register_can2_f10r2,
  register_can2_f11r1,
  register_can2_f11r2,
  register_can2_f12r1,
  register_can2_f12r2,
  register_can2_f13r1,
  register_can2_f13r2,
  register_can2_f14r1,
  register_can2_f14r2,
  register_can2_f15r1,
  register_can2_f15r2,
  register_can2_f16r1,
  register_can2_f16r2,
  register_can2_f17r1,
  register_can2_f17r2,
  register_can2_f18r1,
  register_can2_f18r2,
  register_can2_f19r1,
  register_can2_f19r2,
  register_can2_f20r1,
  register_can2_f20r2,
  register_can2_f21r1,
  register_can2_f21r2,
  register_can2_f22r1,
  register_can2_f22r2,
  register_can2_f23r1,
  register_can2_f23r2,
  register_can2_f24r1,
  register_can2_f24r2,
  register_can2_f25r1,
  register_can2_f25r2,
  register_can2_f26r1,
  register_can2_f26r2,
  register_can2_f27r1,
  register_can2_f27r2,
  register_dac_cr,
  register_dac_swtrigr,
  register_dac_dhr12r1,
  register_dac_dhr12l1,
  register_dac_dhr8r1,
  register_dac_dhr12r2,
  register_dac_dhr12l2,
  register_dac_dhr8r2,
  register_dac_dhr12rd,
  register_dac_dhr12ld,
  register_dac_dhr8rd,
  register_dac_dor1,
  register_dac_dor2,
  register_dac_sr,
  register_dma1_lisr,
  register_dma1_hisr,
  register_dma1_lifcr,
  register_dma1_hifcr,
  register_dma1_s0cr,
  register_dma1_s0ndtr,
  register_dma1_s0par,
  register_dma1_s0m0ar,
  register_dma1_s0m1ar,
  register_dma1_s0fcr,
  register_dma1_s1cr,
  register_dma1_s1ndtr,
  register_dma1_s1par,
  register_dma1_s1m0ar,
  register_dma1_s1m1ar,
  register_dma1_s1fcr,
  register_dma1_s2cr,
  register_dma1_s2ndtr,
  register_dma1_s2par,
  register_dma1_s2m0ar,
  register_dma1_s2m1ar,
  register_dma1_s2fcr,
  register_dma1_s3cr,
  register_dma1_s3ndtr,
  register_dma1_s3par,
  register_dma1_s3m0ar,
  register_dma1_s3m1ar,
  register_dma1_s3fcr,
  register_dma1_s4cr,
  register_dma1_s4ndtr,
  register_dma1_s4par,
  register_dma1_s4m0ar,
  register_dma1_s4m1ar,
  register_dma1_s4fcr,
  register_dma1_s5cr,
  register_dma1_s5ndtr,
  register_dma1_s5par,
  register_dma1_s5m0ar,
  register_dma1_s5m1ar,
  register_dma1_s5fcr,
  register_dma1_s6cr,
  register_dma1_s6ndtr,
  register_dma1_s6par,
  register_dma1_s6m0ar,
  register_dma1_s6m1ar,
  register_dma1_s6fcr,
  register_dma1_s7cr,
  register_dma1_s7ndtr,
  register_dma1_s7par,
  register_dma1_s7m0ar,
  register_dma1_s7m1ar,
  register_dma1_s7fcr,
  register_dma2_lisr,
  register_dma2_hisr,
  register_dma2_lifcr,
  register_dma2_hifcr,
  register_dma2_s0cr,
  register_dma2_s0ndtr,
  register_dma2_s0par,
  register_dma2_s0m0ar,
  register_dma2_s0m1ar,
  register_dma2_s0fcr,
  register_dma2_s1cr,
  register_dma2_s1ndtr,
  register_dma2_s1par,
  register_dma2_s1m0ar,
  register_dma2_s1m1ar,
  register_dma2_s1fcr,
  register_dma2_s2cr,
  register_dma2_s2ndtr,
  register_dma2_s2par,
  register_dma2_s2m0ar,
  register_dma2_s2m1ar,
  register_dma2_s2fcr,
  register_dma2_s3cr,
  register_dma2_s3ndtr,
  register_dma2_s3par,
  register_dma2_s3m0ar,
  register_dma2_s3m1ar,
  register_dma2_s3fcr,
  register_dma2_s4cr,
  register_dma2_s4ndtr,
  register_dma2_s4par,
  register_dma2_s4m0ar,
  register_dma2_s4m1ar,
  register_dma2_s4fcr,
  register_dma2_s5cr,
  register_dma2_s5ndtr,
  register_dma2_s5par,
  register_dma2_s5m0ar,
  register_dma2_s5m1ar,
  register_dma2_s5fcr,
  register_dma2_s6cr,
  register_dma2_s6ndtr,
  register_dma2_s6par,
  register_dma2_s6m0ar,
  register_dma2_s6m1ar,
  register_dma2_s6fcr,
  register_dma2_s7cr,
  register_dma2_s7ndtr,
  register_dma2_s7par,
  register_dma2_s7m0ar,
  register_dma2_s7m1ar,
  register_dma2_s7fcr,
  register_ethernet_dma_dmabmr,
  register_ethernet_dma_dmatpdr,
  register_ethernet_dma_dmarpdr,
  register_ethernet_dma_dmardlar,
  register_ethernet_dma_dmatdlar,
  register_ethernet_dma_dmasr,
  register_ethernet_dma_dmaomr,
  register_ethernet_dma_dmaier,
  register_ethernet_dma_dmamfbocr,
  register_ethernet_dma_dmarswtr,
  register_ethernet_dma_dmachtdr,
  register_ethernet_dma_dmachrdr,
  register_ethernet_dma_dmachtbar,
  register_ethernet_dma_dmachrbar,
  register_ethernet_mac_maccr,
  register_ethernet_mac_macffr,
  register_ethernet_mac_machthr,
  register_ethernet_mac_machtlr,
  register_ethernet_mac_macmiiar,
  register_ethernet_mac_macmiidr,
  register_ethernet_mac_macfcr,
  register_ethernet_mac_macvlantr,
  register_ethernet_mac_macpmtcsr,
  register_ethernet_mac_macdbgr,
  register_ethernet_mac_macsr,
  register_ethernet_mac_macimr,
  register_ethernet_mac_maca0hr,
  register_ethernet_mac_maca0lr,
  register_ethernet_mac_maca1hr,
  register_ethernet_mac_maca1lr,
  register_ethernet_mac_maca2hr,
  register_ethernet_mac_maca2lr,
  register_ethernet_mac_maca3hr,
  register_ethernet_mac_maca3lr,
  register_ethernet_mmc_mmccr,
  register_ethernet_mmc_mmcrir,
  register_ethernet_mmc_mmctir,
  register_ethernet_mmc_mmcrimr,
  register_ethernet_mmc_mmctimr,
  register_ethernet_mmc_mmctgfsccr,
  register_ethernet_mmc_mmctgfmsccr,
  register_ethernet_mmc_mmctgfcr,
  register_ethernet_mmc_mmcrfcecr,
  register_ethernet_mmc_mmcrfaecr,
  register_ethernet_mmc_mmcrgufcr,
  register_flash_acr,
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
  register_gpiog_moder,
  register_gpiog_otyper,
  register_gpiog_ospeedr,
  register_gpiog_pupdr,
  register_gpiog_idr,
  register_gpiog_odr,
  register_gpiog_bsrr,
  register_gpiog_lckr,
  register_gpiog_afrl,
  register_gpiog_afrh,
  register_gpioh_moder,
  register_gpioh_otyper,
  register_gpioh_ospeedr,
  register_gpioh_pupdr,
  register_gpioh_idr,
  register_gpioh_odr,
  register_gpioh_bsrr,
  register_gpioh_lckr,
  register_gpioh_afrl,
  register_gpioh_afrh,
  register_gpioi_moder,
  register_gpioi_otyper,
  register_gpioi_ospeedr,
  register_gpioi_pupdr,
  register_gpioi_idr,
  register_gpioi_odr,
  register_gpioi_bsrr,
  register_gpioi_lckr,
  register_gpioi_afrl,
  register_gpioi_afrh,
  register_gpioj_moder,
  register_gpioj_otyper,
  register_gpioj_ospeedr,
  register_gpioj_pupdr,
  register_gpioj_idr,
  register_gpioj_odr,
  register_gpioj_bsrr,
  register_gpioj_lckr,
  register_gpioj_afrl,
  register_gpioj_afrh,
  register_gpiok_moder,
  register_gpiok_otyper,
  register_gpiok_ospeedr,
  register_gpiok_pupdr,
  register_gpiok_idr,
  register_gpiok_odr,
  register_gpiok_bsrr,
  register_gpiok_lckr,
  register_gpiok_afrl,
  register_gpiok_afrh,
  register_i2c1_cr1,
  register_i2c1_cr2,
  register_i2c1_oar1,
  register_i2c1_oar2,
  register_i2c1_dr,
  register_i2c1_sr1,
  register_i2c1_sr2,
  register_i2c1_ccr,
  register_i2c1_trise,
  register_i2c2_cr1,
  register_i2c2_cr2,
  register_i2c2_oar1,
  register_i2c2_oar2,
  register_i2c2_dr,
  register_i2c2_sr1,
  register_i2c2_sr2,
  register_i2c2_ccr,
  register_i2c2_trise,
  register_i2c3_cr1,
  register_i2c3_cr2,
  register_i2c3_oar1,
  register_i2c3_oar2,
  register_i2c3_dr,
  register_i2c3_sr1,
  register_i2c3_sr2,
  register_i2c3_ccr,
  register_i2c3_trise,
  register_iwdg_kr,
  register_iwdg_pr,
  register_iwdg_rlr,
  register_iwdg_sr,
  register_otg_fs_device_fs_dcfg,
  register_otg_fs_device_fs_dctl,
  register_otg_fs_device_fs_dsts,
  register_otg_fs_device_fs_diepmsk,
  register_otg_fs_device_fs_doepmsk,
  register_otg_fs_device_fs_daint,
  register_otg_fs_device_fs_daintmsk,
  register_otg_fs_device_dvbusdis,
  register_otg_fs_device_dvbuspulse,
  register_otg_fs_device_diepempmsk,
  register_otg_fs_device_fs_diepctl0,
  register_otg_fs_device_diepint0,
  register_otg_fs_device_dieptsiz0,
  register_otg_fs_device_dtxfsts0,
  register_otg_fs_device_diepctl1,
  register_otg_fs_device_diepint1,
  register_otg_fs_device_dieptsiz1,
  register_otg_fs_device_dtxfsts1,
  register_otg_fs_device_diepctl2,
  register_otg_fs_device_diepint2,
  register_otg_fs_device_dieptsiz2,
  register_otg_fs_device_dtxfsts2,
  register_otg_fs_device_diepctl3,
  register_otg_fs_device_diepint3,
  register_otg_fs_device_dieptsiz3,
  register_otg_fs_device_dtxfsts3,
  register_otg_fs_device_doepctl0,
  register_otg_fs_device_doepint0,
  register_otg_fs_device_doeptsiz0,
  register_otg_fs_device_doepctl1,
  register_otg_fs_device_doepint1,
  register_otg_fs_device_doeptsiz1,
  register_otg_fs_device_doepctl2,
  register_otg_fs_device_doepint2,
  register_otg_fs_device_doeptsiz2,
  register_otg_fs_device_doepctl3,
  register_otg_fs_device_doepint3,
  register_otg_fs_device_doeptsiz3,
  register_otg_fs_global_fs_gotgctl,
  register_otg_fs_global_fs_gotgint,
  register_otg_fs_global_fs_gahbcfg,
  register_otg_fs_global_fs_gusbcfg,
  register_otg_fs_global_fs_grstctl,
  register_otg_fs_global_fs_gintsts,
  register_otg_fs_global_fs_gintmsk,
  register_otg_fs_global_fs_grxstsr_device,
  register_otg_fs_global_fs_grxfsiz,
  register_otg_fs_global_fs_gnptxfsiz_device,
  register_otg_fs_global_fs_gnptxsts,
  register_otg_fs_global_fs_gccfg,
  register_otg_fs_global_fs_cid,
  register_otg_fs_global_fs_hptxfsiz,
  register_otg_fs_global_fs_dieptxf1,
  register_otg_fs_global_fs_dieptxf2,
  register_otg_fs_global_fs_dieptxf3,
  register_otg_fs_host_fs_hcfg,
  register_otg_fs_host_hfir,
  register_otg_fs_host_fs_hfnum,
  register_otg_fs_host_fs_hptxsts,
  register_otg_fs_host_haint,
  register_otg_fs_host_haintmsk,
  register_otg_fs_host_fs_hprt,
  register_otg_fs_host_fs_hcchar0,
  register_otg_fs_host_fs_hcint0,
  register_otg_fs_host_fs_hcintmsk0,
  register_otg_fs_host_fs_hctsiz0,
  register_otg_fs_host_fs_hcchar1,
  register_otg_fs_host_fs_hcint1,
  register_otg_fs_host_fs_hcintmsk1,
  register_otg_fs_host_fs_hctsiz1,
  register_otg_fs_host_fs_hcchar2,
  register_otg_fs_host_fs_hcint2,
  register_otg_fs_host_fs_hcintmsk2,
  register_otg_fs_host_fs_hctsiz2,
  register_otg_fs_host_fs_hcchar3,
  register_otg_fs_host_fs_hcint3,
  register_otg_fs_host_fs_hcintmsk3,
  register_otg_fs_host_fs_hctsiz3,
  register_otg_fs_host_fs_hcchar4,
  register_otg_fs_host_fs_hcint4,
  register_otg_fs_host_fs_hcintmsk4,
  register_otg_fs_host_fs_hctsiz4,
  register_otg_fs_host_fs_hcchar5,
  register_otg_fs_host_fs_hcint5,
  register_otg_fs_host_fs_hcintmsk5,
  register_otg_fs_host_fs_hctsiz5,
  register_otg_fs_host_fs_hcchar6,
  register_otg_fs_host_fs_hcint6,
  register_otg_fs_host_fs_hcintmsk6,
  register_otg_fs_host_fs_hctsiz6,
  register_otg_fs_host_fs_hcchar7,
  register_otg_fs_host_fs_hcint7,
  register_otg_fs_host_fs_hcintmsk7,
  register_otg_fs_host_fs_hctsiz7,
  register_otg_fs_pwrclk_fs_pcgcctl,
  register_otg_hs_device_otg_hs_dcfg,
  register_otg_hs_device_otg_hs_dctl,
  register_otg_hs_device_otg_hs_dsts,
  register_otg_hs_device_otg_hs_diepmsk,
  register_otg_hs_device_otg_hs_doepmsk,
  register_otg_hs_device_otg_hs_daint,
  register_otg_hs_device_otg_hs_daintmsk,
  register_otg_hs_device_otg_hs_dvbusdis,
  register_otg_hs_device_otg_hs_dvbuspulse,
  register_otg_hs_device_otg_hs_dthrctl,
  register_otg_hs_device_otg_hs_diepempmsk,
  register_otg_hs_device_otg_hs_deachint,
  register_otg_hs_device_otg_hs_deachintmsk,
  register_otg_hs_device_otg_hs_diepeachmsk1,
  register_otg_hs_device_otg_hs_doepeachmsk1,
  register_otg_hs_device_otg_hs_diepctl0,
  register_otg_hs_device_otg_hs_diepint0,
  register_otg_hs_device_otg_hs_dieptsiz0,
  register_otg_hs_device_otg_hs_diepdma1,
  register_otg_hs_device_otg_hs_dtxfsts0,
  register_otg_hs_device_otg_hs_diepctl1,
  register_otg_hs_device_otg_hs_diepint1,
  register_otg_hs_device_otg_hs_dieptsiz1,
  register_otg_hs_device_otg_hs_diepdma2,
  register_otg_hs_device_otg_hs_dtxfsts1,
  register_otg_hs_device_otg_hs_diepctl2,
  register_otg_hs_device_otg_hs_diepint2,
  register_otg_hs_device_otg_hs_dieptsiz2,
  register_otg_hs_device_otg_hs_diepdma3,
  register_otg_hs_device_otg_hs_dtxfsts2,
  register_otg_hs_device_otg_hs_diepctl3,
  register_otg_hs_device_otg_hs_diepint3,
  register_otg_hs_device_otg_hs_dieptsiz3,
  register_otg_hs_device_otg_hs_diepdma4,
  register_otg_hs_device_otg_hs_dtxfsts3,
  register_otg_hs_device_otg_hs_diepctl4,
  register_otg_hs_device_otg_hs_diepint4,
  register_otg_hs_device_otg_hs_dieptsiz4,
  register_otg_hs_device_otg_hs_diepdma5,
  register_otg_hs_device_otg_hs_dtxfsts4,
  register_otg_hs_device_otg_hs_diepctl5,
  register_otg_hs_device_otg_hs_diepint5,
  register_otg_hs_device_otg_hs_dieptsiz5,
  register_otg_hs_device_otg_hs_dtxfsts5,
  register_otg_hs_device_otg_hs_diepctl6,
  register_otg_hs_device_otg_hs_diepint6,
  register_otg_hs_device_otg_hs_diepctl7,
  register_otg_hs_device_otg_hs_diepint7,
  register_otg_hs_device_otg_hs_doepctl0,
  register_otg_hs_device_otg_hs_doepint0,
  register_otg_hs_device_otg_hs_doeptsiz0,
  register_otg_hs_device_otg_hs_doepctl1,
  register_otg_hs_device_otg_hs_doepint1,
  register_otg_hs_device_otg_hs_doeptsiz1,
  register_otg_hs_device_otg_hs_doepctl2,
  register_otg_hs_device_otg_hs_doepint2,
  register_otg_hs_device_otg_hs_doeptsiz2,
  register_otg_hs_device_otg_hs_doepctl3,
  register_otg_hs_device_otg_hs_doepint3,
  register_otg_hs_device_otg_hs_doeptsiz3,
  register_otg_hs_device_otg_hs_doepint4,
  register_otg_hs_device_otg_hs_doeptsiz4,
  register_otg_hs_device_otg_hs_doepint5,
  register_otg_hs_device_otg_hs_doepint6,
  register_otg_hs_device_otg_hs_doepint7,
  register_otg_hs_global_otg_hs_gotgctl,
  register_otg_hs_global_otg_hs_gotgint,
  register_otg_hs_global_otg_hs_gahbcfg,
  register_otg_hs_global_otg_hs_gusbcfg,
  register_otg_hs_global_otg_hs_grstctl,
  register_otg_hs_global_otg_hs_gintsts,
  register_otg_hs_global_otg_hs_gintmsk,
  register_otg_hs_global_otg_hs_grxstsr_host,
  register_otg_hs_global_otg_hs_grxstsp_host,
  register_otg_hs_global_otg_hs_grxfsiz,
  register_otg_hs_global_otg_hs_gnptxfsiz_host,
  register_otg_hs_global_otg_hs_gnptxsts,
  register_otg_hs_global_otg_hs_gccfg,
  register_otg_hs_global_otg_hs_cid,
  register_otg_hs_global_otg_hs_hptxfsiz,
  register_otg_hs_global_otg_hs_dieptxf1,
  register_otg_hs_global_otg_hs_dieptxf2,
  register_otg_hs_global_otg_hs_dieptxf3,
  register_otg_hs_global_otg_hs_dieptxf4,
  register_otg_hs_global_otg_hs_dieptxf5,
  register_otg_hs_global_otg_hs_dieptxf6,
  register_otg_hs_global_otg_hs_dieptxf7,
  register_otg_hs_host_otg_hs_hcfg,
  register_otg_hs_host_otg_hs_hfir,
  register_otg_hs_host_otg_hs_hfnum,
  register_otg_hs_host_otg_hs_hptxsts,
  register_otg_hs_host_otg_hs_haint,
  register_otg_hs_host_otg_hs_haintmsk,
  register_otg_hs_host_otg_hs_hprt,
  register_otg_hs_host_otg_hs_hcchar0,
  register_otg_hs_host_otg_hs_hcsplt0,
  register_otg_hs_host_otg_hs_hcint0,
  register_otg_hs_host_otg_hs_hcintmsk0,
  register_otg_hs_host_otg_hs_hctsiz0,
  register_otg_hs_host_otg_hs_hcdma0,
  register_otg_hs_host_otg_hs_hcchar1,
  register_otg_hs_host_otg_hs_hcsplt1,
  register_otg_hs_host_otg_hs_hcint1,
  register_otg_hs_host_otg_hs_hcintmsk1,
  register_otg_hs_host_otg_hs_hctsiz1,
  register_otg_hs_host_otg_hs_hcdma1,
  register_otg_hs_host_otg_hs_hcchar2,
  register_otg_hs_host_otg_hs_hcsplt2,
  register_otg_hs_host_otg_hs_hcint2,
  register_otg_hs_host_otg_hs_hcintmsk2,
  register_otg_hs_host_otg_hs_hctsiz2,
  register_otg_hs_host_otg_hs_hcdma2,
  register_otg_hs_host_otg_hs_hcchar3,
  register_otg_hs_host_otg_hs_hcsplt3,
  register_otg_hs_host_otg_hs_hcint3,
  register_otg_hs_host_otg_hs_hcintmsk3,
  register_otg_hs_host_otg_hs_hctsiz3,
  register_otg_hs_host_otg_hs_hcdma3,
  register_otg_hs_host_otg_hs_hcchar4,
  register_otg_hs_host_otg_hs_hcsplt4,
  register_otg_hs_host_otg_hs_hcint4,
  register_otg_hs_host_otg_hs_hcintmsk4,
  register_otg_hs_host_otg_hs_hctsiz4,
  register_otg_hs_host_otg_hs_hcdma4,
  register_otg_hs_host_otg_hs_hcchar5,
  register_otg_hs_host_otg_hs_hcsplt5,
  register_otg_hs_host_otg_hs_hcint5,
  register_otg_hs_host_otg_hs_hcintmsk5,
  register_otg_hs_host_otg_hs_hctsiz5,
  register_otg_hs_host_otg_hs_hcdma5,
  register_otg_hs_host_otg_hs_hcchar6,
  register_otg_hs_host_otg_hs_hcsplt6,
  register_otg_hs_host_otg_hs_hcint6,
  register_otg_hs_host_otg_hs_hcintmsk6,
  register_otg_hs_host_otg_hs_hctsiz6,
  register_otg_hs_host_otg_hs_hcdma6,
  register_otg_hs_host_otg_hs_hcchar7,
  register_otg_hs_host_otg_hs_hcsplt7,
  register_otg_hs_host_otg_hs_hcint7,
  register_otg_hs_host_otg_hs_hcintmsk7,
  register_otg_hs_host_otg_hs_hctsiz7,
  register_otg_hs_host_otg_hs_hcdma7,
  register_otg_hs_host_otg_hs_hcchar8,
  register_otg_hs_host_otg_hs_hcsplt8,
  register_otg_hs_host_otg_hs_hcint8,
  register_otg_hs_host_otg_hs_hcintmsk8,
  register_otg_hs_host_otg_hs_hctsiz8,
  register_otg_hs_host_otg_hs_hcdma8,
  register_otg_hs_host_otg_hs_hcchar9,
  register_otg_hs_host_otg_hs_hcsplt9,
  register_otg_hs_host_otg_hs_hcint9,
  register_otg_hs_host_otg_hs_hcintmsk9,
  register_otg_hs_host_otg_hs_hctsiz9,
  register_otg_hs_host_otg_hs_hcdma9,
  register_otg_hs_host_otg_hs_hcchar10,
  register_otg_hs_host_otg_hs_hcsplt10,
  register_otg_hs_host_otg_hs_hcint10,
  register_otg_hs_host_otg_hs_hcintmsk10,
  register_otg_hs_host_otg_hs_hctsiz10,
  register_otg_hs_host_otg_hs_hcdma10,
  register_otg_hs_host_otg_hs_hcchar11,
  register_otg_hs_host_otg_hs_hcsplt11,
  register_otg_hs_host_otg_hs_hcint11,
  register_otg_hs_host_otg_hs_hcintmsk11,
  register_otg_hs_host_otg_hs_hctsiz11,
  register_otg_hs_host_otg_hs_hcdma11,
  register_otg_hs_pwrclk_otg_hs_pcgcr,
  register_rcc_cr,
  register_rcc_pllcfgr,
  register_rcc_cfgr,
  register_rcc_ahb1rstr,
  register_rcc_apb1rstr,
  register_rcc_apb2rstr,
  register_rcc_ahb1enr,
  register_rcc_apb1enr,
  register_rcc_apb2enr,
  register_rtc_tr,
  register_rtc_dr,
  register_rtc_cr,
  register_rtc_isr,
  register_rtc_prer,
  register_rtc_wutr,
  register_rtc_calibr,
  register_rtc_alrmar,
  register_rtc_alrmbr,
  register_rtc_wpr,
  register_rtc_ssr,
  register_rtc_shiftr,
  register_rtc_tstr,
  register_rtc_tsdr,
  register_rtc_tsssr,
  register_rtc_calr,
  register_rtc_tafcr,
  register_rtc_alrmassr,
  register_rtc_alrmbssr,
  register_rtc_bkp0r,
  register_rtc_bkp1r,
  register_rtc_bkp2r,
  register_rtc_bkp3r,
  register_rtc_bkp4r,
  register_rtc_bkp5r,
  register_rtc_bkp6r,
  register_rtc_bkp7r,
  register_rtc_bkp8r,
  register_rtc_bkp9r,
  register_rtc_bkp10r,
  register_rtc_bkp11r,
  register_rtc_bkp12r,
  register_rtc_bkp13r,
  register_rtc_bkp14r,
  register_rtc_bkp15r,
  register_rtc_bkp16r,
  register_rtc_bkp17r,
  register_rtc_bkp18r,
  register_rtc_bkp19r,
  register_spi1_cr1,
  register_spi1_cr2,
  register_spi1_sr,
  register_spi1_dr,
  register_spi1_crcpr,
  register_spi1_rxcrcr,
  register_spi1_txcrcr,
  register_spi1_i2scfgr,
  register_spi1_i2spr,
  register_spi2_cr1,
  register_spi2_cr2,
  register_spi2_sr,
  register_spi2_dr,
  register_spi2_crcpr,
  register_spi2_rxcrcr,
  register_spi2_txcrcr,
  register_spi2_i2scfgr,
  register_spi2_i2spr,
  register_spi3_cr1,
  register_spi3_cr2,
  register_spi3_sr,
  register_spi3_dr,
  register_spi3_crcpr,
  register_spi3_rxcrcr,
  register_spi3_txcrcr,
  register_spi3_i2scfgr,
  register_spi3_i2spr,
  register_spi4_cr1,
  register_spi4_cr2,
  register_spi4_sr,
  register_spi4_dr,
  register_spi4_crcpr,
  register_spi4_rxcrcr,
  register_spi4_txcrcr,
  register_spi4_i2scfgr,
  register_spi4_i2spr,
  register_spi5_cr1,
  register_spi5_cr2,
  register_spi5_sr,
  register_spi5_dr,
  register_spi5_crcpr,
  register_spi5_rxcrcr,
  register_spi5_txcrcr,
  register_spi5_i2scfgr,
  register_spi5_i2spr,
  register_spi6_cr1,
  register_spi6_cr2,
  register_spi6_sr,
  register_spi6_dr,
  register_spi6_crcpr,
  register_spi6_rxcrcr,
  register_spi6_txcrcr,
  register_spi6_i2scfgr,
  register_spi6_i2spr,
  register_tim1_cr1,
  register_tim1_cr2,
  register_tim1_smcr,
  register_tim1_dier,
  register_tim1_sr,
  register_tim1_egr,
  register_tim1_ccmr1_input,
  register_tim1_ccmr2_input,
  register_tim1_ccer,
  register_tim1_cnt,
  register_tim1_psc,
  register_tim1_arr,
  register_tim1_rcr,
  register_tim1_ccr1,
  register_tim1_ccr2,
  register_tim1_ccr3,
  register_tim1_ccr4,
  register_tim1_bdtr,
  register_tim1_dcr,
  register_tim1_dmar,
  register_tim10_cr1,
  register_tim10_dier,
  register_tim10_sr,
  register_tim10_egr,
  register_tim10_ccmr1_input,
  register_tim10_ccer,
  register_tim10_cnt,
  register_tim10_psc,
  register_tim10_arr,
  register_tim10_ccr1,
  register_tim11_cr1,
  register_tim11_dier,
  register_tim11_sr,
  register_tim11_egr,
  register_tim11_ccmr1_input,
  register_tim11_ccer,
  register_tim11_cnt,
  register_tim11_psc,
  register_tim11_arr,
  register_tim11_ccr1,
  register_tim11_or,
  register_tim12_cr1,
  register_tim12_cr2,
  register_tim12_smcr,
  register_tim12_dier,
  register_tim12_sr,
  register_tim12_egr,
  register_tim12_ccmr1_input,
  register_tim12_ccer,
  register_tim12_cnt,
  register_tim12_psc,
  register_tim12_arr,
  register_tim12_ccr1,
  register_tim12_ccr2,
  register_tim13_cr1,
  register_tim13_dier,
  register_tim13_sr,
  register_tim13_egr,
  register_tim13_ccmr1_input,
  register_tim13_ccer,
  register_tim13_cnt,
  register_tim13_psc,
  register_tim13_arr,
  register_tim13_ccr1,
  register_tim14_cr1,
  register_tim14_dier,
  register_tim14_sr,
  register_tim14_egr,
  register_tim14_ccmr1_input,
  register_tim14_ccer,
  register_tim14_cnt,
  register_tim14_psc,
  register_tim14_arr,
  register_tim14_ccr1,
  register_tim2_cr1,
  register_tim2_cr2,
  register_tim2_smcr,
  register_tim2_dier,
  register_tim2_sr,
  register_tim2_egr,
  register_tim2_ccmr1_input,
  register_tim2_ccmr2_input,
  register_tim2_ccer,
  register_tim2_cnt,
  register_tim2_psc,
  register_tim2_arr,
  register_tim2_ccr1,
  register_tim2_ccr2,
  register_tim2_ccr3,
  register_tim2_ccr4,
  register_tim2_dcr,
  register_tim2_dmar,
  register_tim2_or,
  register_tim3_cr1,
  register_tim3_cr2,
  register_tim3_smcr,
  register_tim3_dier,
  register_tim3_sr,
  register_tim3_egr,
  register_tim3_ccmr1_input,
  register_tim3_ccmr2_input,
  register_tim3_ccer,
  register_tim3_cnt,
  register_tim3_psc,
  register_tim3_arr,
  register_tim3_ccr1,
  register_tim3_ccr2,
  register_tim3_ccr3,
  register_tim3_ccr4,
  register_tim3_dcr,
  register_tim3_dmar,
  register_tim4_cr1,
  register_tim4_cr2,
  register_tim4_smcr,
  register_tim4_dier,
  register_tim4_sr,
  register_tim4_egr,
  register_tim4_ccmr1_input,
  register_tim4_ccmr2_input,
  register_tim4_ccer,
  register_tim4_cnt,
  register_tim4_psc,
  register_tim4_arr,
  register_tim4_ccr1,
  register_tim4_ccr2,
  register_tim4_ccr3,
  register_tim4_ccr4,
  register_tim4_dcr,
  register_tim4_dmar,
  register_tim5_cr1,
  register_tim5_cr2,
  register_tim5_smcr,
  register_tim5_dier,
  register_tim5_sr,
  register_tim5_egr,
  register_tim5_ccmr1_input,
  register_tim5_ccmr2_input,
  register_tim5_ccer,
  register_tim5_cnt,
  register_tim5_psc,
  register_tim5_arr,
  register_tim5_ccr1,
  register_tim5_ccr2,
  register_tim5_ccr3,
  register_tim5_ccr4,
  register_tim5_dcr,
  register_tim5_dmar,
  register_tim5_or,
  register_tim6_cr1,
  register_tim6_cr2,
  register_tim6_dier,
  register_tim6_sr,
  register_tim6_egr,
  register_tim6_cnt,
  register_tim6_psc,
  register_tim6_arr,
  register_tim7_cr1,
  register_tim7_cr2,
  register_tim7_dier,
  register_tim7_sr,
  register_tim7_egr,
  register_tim7_cnt,
  register_tim7_psc,
  register_tim7_arr,
  register_tim8_cr1,
  register_tim8_cr2,
  register_tim8_smcr,
  register_tim8_dier,
  register_tim8_sr,
  register_tim8_egr,
  register_tim8_ccmr1_input,
  register_tim8_ccmr2_input,
  register_tim8_ccer,
  register_tim8_cnt,
  register_tim8_psc,
  register_tim8_arr,
  register_tim8_rcr,
  register_tim8_ccr1,
  register_tim8_ccr2,
  register_tim8_ccr3,
  register_tim8_ccr4,
  register_tim8_bdtr,
  register_tim8_dcr,
  register_tim8_dmar,
  register_tim9_cr1,
  register_tim9_cr2,
  register_tim9_smcr,
  register_tim9_dier,
  register_tim9_sr,
  register_tim9_egr,
  register_tim9_ccmr1_input,
  register_tim9_ccer,
  register_tim9_cnt,
  register_tim9_psc,
  register_tim9_arr,
  register_tim9_ccr1,
  register_tim9_ccr2,
  register_uart4_sr,
  register_uart4_dr,
  register_uart4_brr,
  register_uart4_cr1,
  register_uart4_cr2,
  register_uart4_cr3,
  register_uart5_sr,
  register_uart5_dr,
  register_uart5_brr,
  register_uart5_cr1,
  register_uart5_cr2,
  register_uart5_cr3,
  register_uart7_sr,
  register_uart7_dr,
  register_uart7_brr,
  register_uart7_cr1,
  register_uart7_cr2,
  register_uart7_cr3,
  register_uart8_sr,
  register_uart8_dr,
  register_uart8_brr,
  register_uart8_cr1,
  register_uart8_cr2,
  register_uart8_cr3,
  register_usart1_sr,
  register_usart1_dr,
  register_usart1_brr,
  register_usart1_cr1,
  register_usart1_cr2,
  register_usart1_cr3,
  register_usart1_gtpr,
  register_usart2_sr,
  register_usart2_dr,
  register_usart2_brr,
  register_usart2_cr1,
  register_usart2_cr2,
  register_usart2_cr3,
  register_usart2_gtpr,
  register_usart3_sr,
  register_usart3_dr,
  register_usart3_brr,
  register_usart3_cr1,
  register_usart3_cr2,
  register_usart3_cr3,
  register_usart3_gtpr,
  register_usart6_sr,
  register_usart6_dr,
  register_usart6_brr,
  register_usart6_cr1,
  register_usart6_cr2,
  register_usart6_cr3,
  register_usart6_gtpr,
  register_wwdg_cr,
  register_wwdg_cfr,
  register_wwdg_sr,
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
struct RegisterTraits<RegisterId::register_adc1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_smpr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_smpr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_jofr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_jofr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_jofr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_jofr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_htr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_ltr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_sqr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_sqr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_sqr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_jsqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_jdr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_jdr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_jdr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_jdr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_smpr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_smpr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_jofr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_jofr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_jofr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_jofr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_htr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_ltr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_sqr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_sqr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_sqr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_jsqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_jdr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_jdr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_jdr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_jdr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc2_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012100u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_smpr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_smpr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_jofr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_jofr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_jofr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_jofr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_htr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_ltr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_sqr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_sqr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_sqr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_jsqr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_jdr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_jdr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_jdr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_jdr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_adc3_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012200u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_mcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_msr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rf0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rf1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_esr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_btr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ti0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tdt0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tdl0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tdh0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ti1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tdt1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tdl1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 408u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tdh1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 412u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ti2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 416u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tdt2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 420u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tdl2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_tdh2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ri0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rdt0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 436u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rdl0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 440u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rdh0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 444u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ri1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rdt1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 452u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rdl1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 456u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_rdh1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 460u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_fmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 512u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_fm1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 516u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_fs1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 524u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_ffa1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 532u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_fa1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 540u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f0r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 576u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f0r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 580u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f1r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 584u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f1r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 588u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f2r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 592u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f2r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 596u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f3r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 600u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f3r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 604u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f4r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 608u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f4r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 612u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f5r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 616u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f5r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 620u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f6r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 624u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f6r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 628u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f7r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 632u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f7r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 636u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f8r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 640u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f8r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 644u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f9r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 648u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f9r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 652u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f10r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 656u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f10r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 660u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f11r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 664u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f11r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 668u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f12r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 672u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f12r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 676u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f13r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 680u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f13r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 684u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f14r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 688u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f14r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 692u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f15r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 696u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f15r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 700u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f16r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 704u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f16r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 708u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f17r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 712u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f17r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 716u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f18r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 720u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f18r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 724u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f19r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 728u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f19r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 732u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f20r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 736u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f20r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 740u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f21r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 744u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f21r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 748u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f22r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 752u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f22r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 756u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f23r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 760u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f23r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 764u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f24r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 768u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f24r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 772u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f25r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 776u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f25r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 780u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f26r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 784u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f26r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 788u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f27r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 792u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can1_f27r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 796u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_mcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_msr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rf0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rf1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_esr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_btr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ti0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tdt0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tdl0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tdh0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ti1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tdt1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tdl1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 408u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tdh1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 412u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ti2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 416u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tdt2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 420u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tdl2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_tdh2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ri0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rdt0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 436u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rdl0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 440u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rdh0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 444u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ri1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rdt1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 452u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rdl1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 456u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_rdh1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 460u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_fmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 512u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_fm1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 516u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_fs1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 524u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_ffa1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 532u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_fa1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 540u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f0r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 576u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f0r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 580u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f1r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 584u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f1r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 588u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f2r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 592u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f2r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 596u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f3r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 600u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f3r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 604u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f4r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 608u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f4r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 612u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f5r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 616u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f5r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 620u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f6r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 624u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f6r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 628u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f7r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 632u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f7r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 636u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f8r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 640u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f8r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 644u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f9r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 648u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f9r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 652u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f10r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 656u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f10r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 660u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f11r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 664u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f11r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 668u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f12r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 672u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f12r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 676u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f13r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 680u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f13r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 684u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f14r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 688u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f14r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 692u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f15r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 696u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f15r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 700u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f16r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 704u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f16r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 708u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f17r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 712u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f17r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 716u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f18r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 720u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f18r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 724u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f19r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 728u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f19r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 732u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f20r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 736u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f20r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 740u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f21r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 744u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f21r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 748u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f22r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 752u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f22r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 756u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f23r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 760u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f23r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 764u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f24r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 768u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f24r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 772u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f25r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 776u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f25r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 780u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f26r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 784u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f26r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 788u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f27r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 792u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_can2_f27r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 796u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_swtrigr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dhr12r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dhr12l1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dhr8r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dhr12r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dhr12l2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dhr8r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dhr12rd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dhr12ld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dhr8rd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dor1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dor2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dac_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_lisr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_hisr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_lifcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_hifcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s0cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s0ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s0par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s0m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s0m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s0fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s1cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s1ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s1par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s1m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s1m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s1fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s2cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s2ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s2par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s2m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s2m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s2fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s3cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s3ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s3par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s3m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s3m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s3fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s4cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s4ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s4par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s4m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s4m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s4fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s5cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s5ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s5par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s5m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s5m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s5fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 156u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s6cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 160u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s6ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 164u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s6par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 168u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s6m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 172u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s6m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s6fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 180u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s7cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 184u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s7ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 188u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s7par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 192u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s7m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s7m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 200u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma1_s7fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026000u;
  static constexpr std::uint32_t kOffsetBytes = 204u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_lisr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_hisr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_lifcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_hifcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s0cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s0ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s0par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s0m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s0m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s0fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s1cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s1ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s1par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s1m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s1m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s1fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s2cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s2ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s2par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s2m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s2m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s2fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s3cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s3ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s3par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s3m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s3m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s3fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s4cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s4ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s4par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s4m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s4m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s4fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s5cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s5ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s5par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s5m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s5m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s5fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 156u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s6cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 160u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s6ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 164u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s6par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 168u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s6m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 172u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s6m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 176u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s6fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 180u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s7cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 184u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s7ndtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 188u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s7par> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 192u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s7m0ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s7m1ar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 200u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_dma2_s7fcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40026400u;
  static constexpr std::uint32_t kOffsetBytes = 204u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmabmr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmatpdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmarpdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmardlar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmatdlar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmasr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmaomr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmaier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmamfbocr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmarswtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmachtdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmachrdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmachtbar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_dma_dmachrbar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40029000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_maccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_macffr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_machthr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_machtlr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_macmiiar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_macmiidr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_macfcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_macvlantr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_macpmtcsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_macdbgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_macsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_macimr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_maca0hr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_maca0lr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_maca1hr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_maca1lr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_maca2hr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_maca2lr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_maca3hr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mac_maca3lr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmcrir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmctir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmcrimr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmctimr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmctgfsccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmctgfmsccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmctgfcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmcrfcecr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmcrfaecr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_ethernet_mmc_mmcrgufcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40028100u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_flash_acr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioa_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiob_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioc_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiod_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40020C00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioe_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiof_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiog_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioh_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021C00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioi_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpioj_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_moder> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_otyper> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_ospeedr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_pupdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_idr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_odr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_bsrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_lckr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_afrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_gpiok_afrh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c1_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c1_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c1_oar1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c1_oar2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c1_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c1_sr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c1_sr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c1_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c1_trise> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c2_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c2_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c2_oar1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c2_oar2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c2_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c2_sr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c2_sr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c2_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c2_trise> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c3_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c3_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c3_oar1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c3_oar2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c3_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c3_sr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c3_sr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c3_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_i2c3_trise> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_iwdg_kr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_iwdg_pr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_iwdg_rlr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_iwdg_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_fs_dcfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_fs_dctl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_fs_dsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_fs_diepmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_fs_doepmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_fs_daint> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_fs_daintmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dvbusdis> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dvbuspulse> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_diepempmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_fs_diepctl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_diepint0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dieptsiz0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 272u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dtxfsts0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_diepctl1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_diepint1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 296u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dieptsiz1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 304u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dtxfsts1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 312u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_diepctl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 320u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_diepint2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 328u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dieptsiz2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 336u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dtxfsts2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 344u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_diepctl3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_diepint3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 360u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dieptsiz3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 368u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_dtxfsts3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 376u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doepctl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 768u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doepint0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 776u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doeptsiz0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 784u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doepctl1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 800u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doepint1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 808u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doeptsiz1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 816u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doepctl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 832u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doepint2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 840u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doeptsiz2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 848u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doepctl3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 864u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doepint3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 872u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_device_doeptsiz3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000800u;
  static constexpr std::uint32_t kOffsetBytes = 880u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_gotgctl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_gotgint> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_gahbcfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_gusbcfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_grstctl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_gintsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_gintmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_grxstsr_device> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_grxfsiz> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_gnptxfsiz_device> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_gnptxsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_gccfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_cid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_hptxfsiz> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_dieptxf1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 260u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_dieptxf2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_global_fs_dieptxf3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 268u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_hfir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hfnum> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hptxsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_haint> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_haintmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hprt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcchar0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcint0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcintmsk0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 268u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hctsiz0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 272u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcchar1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcint1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 296u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcintmsk1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 300u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hctsiz1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 304u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcchar2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 320u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcint2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 328u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcintmsk2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 332u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hctsiz2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 336u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcchar3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcint3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 360u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcintmsk3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 364u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hctsiz3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 368u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcchar4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcint4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcintmsk4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hctsiz4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcchar5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 416u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcint5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcintmsk5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hctsiz5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcchar6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcint6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 456u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcintmsk6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 460u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hctsiz6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 464u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcchar7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 480u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcint7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 488u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hcintmsk7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 492u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_host_fs_hctsiz7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000400u;
  static constexpr std::uint32_t kOffsetBytes = 496u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_fs_pwrclk_fs_pcgcctl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000E00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dcfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dctl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_daint> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_daintmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dvbusdis> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dvbuspulse> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dthrctl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepempmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_deachint> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_deachintmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepeachmsk1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepeachmsk1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepctl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepint0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dieptsiz0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 272u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepdma1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 276u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dtxfsts0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepctl1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepint1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 296u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dieptsiz1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 304u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepdma2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 308u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dtxfsts1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 312u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepctl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 320u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepint2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 328u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dieptsiz2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 336u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepdma3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 340u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dtxfsts2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 344u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepctl3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepint3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 360u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dieptsiz3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 368u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepdma4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 372u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dtxfsts3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 376u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepctl4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepint4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dieptsiz4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepdma5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dtxfsts4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 408u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepctl5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 416u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepint5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dieptsiz5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_dtxfsts5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 440u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepctl6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepint6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 456u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepctl7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 480u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_diepint7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 488u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepctl0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 768u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepint0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 776u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doeptsiz0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 784u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepctl1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 800u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepint1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 808u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doeptsiz1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 816u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepctl2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 832u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepint2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 840u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doeptsiz2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 848u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepctl3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 864u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepint3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 872u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doeptsiz3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 880u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepint4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 904u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doeptsiz4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 912u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepint5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 936u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepint6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 968u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_device_otg_hs_doepint7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040800u;
  static constexpr std::uint32_t kOffsetBytes = 1000u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_gotgctl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_gotgint> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_gahbcfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_gusbcfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_grstctl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_gintsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_gintmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_grxstsr_host> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_grxstsp_host> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_grxfsiz> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_gnptxfsiz_host> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_gnptxsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_gccfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_cid> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_hptxfsiz> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_dieptxf1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 260u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_dieptxf2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_dieptxf3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 284u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_dieptxf4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_dieptxf5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 292u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_dieptxf6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 296u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_global_otg_hs_dieptxf7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 300u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcfg> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hfir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hfnum> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hptxsts> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_haint> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_haintmsk> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hprt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 260u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 268u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 272u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 276u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 292u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 296u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 300u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 304u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 308u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 320u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 324u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 328u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 332u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 336u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 340u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 356u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 360u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 364u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 368u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 372u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 416u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 420u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 436u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 452u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 456u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 460u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 464u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 468u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 480u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 484u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 488u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 492u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 496u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 500u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 512u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 516u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 520u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 524u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 528u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 532u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 544u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 548u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 552u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 556u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 560u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 564u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 576u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 580u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 584u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 588u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 592u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 596u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcchar11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 608u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcsplt11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 612u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcint11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 616u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcintmsk11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 620u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hctsiz11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 624u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_host_otg_hs_hcdma11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040400u;
  static constexpr std::uint32_t kOffsetBytes = 628u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_otg_hs_pwrclk_otg_hs_pcgcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040E00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_pllcfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_cfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_ahb1rstr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_apb1rstr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_apb2rstr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_ahb1enr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023800u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_apb1enr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023800u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_apb2enr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40023800u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_tr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_prer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_wutr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_calibr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_alrmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_alrmbr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_wpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_ssr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_shiftr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_tstr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_tsdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_tsssr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_calr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_tafcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_alrmassr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_alrmbssr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp3r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp4r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp5r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp6r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp7r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp8r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp9r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp10r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp11r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp12r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp13r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp14r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp15r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp16r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp17r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp18r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_bkp19r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 156u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_crcpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_rxcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_txcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_i2scfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_i2spr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_crcpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_rxcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_txcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_i2scfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi2_i2spr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_crcpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_rxcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_txcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_i2scfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi3_i2spr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi4_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi4_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi4_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi4_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi4_crcpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi4_rxcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi4_txcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi4_i2scfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi4_i2spr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40013400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi5_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi5_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi5_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi5_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi5_crcpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi5_rxcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi5_txcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi5_i2scfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi5_i2spr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi6_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi6_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi6_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi6_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi6_crcpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi6_rxcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi6_txcrcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi6_i2scfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_spi6_i2spr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40015400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_rcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_bdtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim10_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim11_or> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim12_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001800u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim13_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001C00u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_or> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim5_or> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000C00u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_rcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_bdtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim8_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40010400u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_tim9_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart4_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart5_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart5_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart5_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart5_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart5_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart5_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart7_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart7_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart7_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart7_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart7_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart7_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart8_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart8_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart8_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart8_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart8_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_uart8_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart1_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart2_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart3_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40004800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_brr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_cr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_usart6_gtpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40011400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wwdg_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wwdg_cfr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

template<>
struct RegisterTraits<RegisterId::register_wwdg_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
  static constexpr RegisterRole kRole = RegisterRole::general;
};

inline constexpr std::array<RegisterId, 1159> kRegisters = {{
  RegisterId::register_adc1_sr,
  RegisterId::register_adc1_cr1,
  RegisterId::register_adc1_cr2,
  RegisterId::register_adc1_smpr1,
  RegisterId::register_adc1_smpr2,
  RegisterId::register_adc1_jofr1,
  RegisterId::register_adc1_jofr2,
  RegisterId::register_adc1_jofr3,
  RegisterId::register_adc1_jofr4,
  RegisterId::register_adc1_htr,
  RegisterId::register_adc1_ltr,
  RegisterId::register_adc1_sqr1,
  RegisterId::register_adc1_sqr2,
  RegisterId::register_adc1_sqr3,
  RegisterId::register_adc1_jsqr,
  RegisterId::register_adc1_jdr1,
  RegisterId::register_adc1_jdr2,
  RegisterId::register_adc1_jdr3,
  RegisterId::register_adc1_jdr4,
  RegisterId::register_adc1_dr,
  RegisterId::register_adc2_sr,
  RegisterId::register_adc2_cr1,
  RegisterId::register_adc2_cr2,
  RegisterId::register_adc2_smpr1,
  RegisterId::register_adc2_smpr2,
  RegisterId::register_adc2_jofr1,
  RegisterId::register_adc2_jofr2,
  RegisterId::register_adc2_jofr3,
  RegisterId::register_adc2_jofr4,
  RegisterId::register_adc2_htr,
  RegisterId::register_adc2_ltr,
  RegisterId::register_adc2_sqr1,
  RegisterId::register_adc2_sqr2,
  RegisterId::register_adc2_sqr3,
  RegisterId::register_adc2_jsqr,
  RegisterId::register_adc2_jdr1,
  RegisterId::register_adc2_jdr2,
  RegisterId::register_adc2_jdr3,
  RegisterId::register_adc2_jdr4,
  RegisterId::register_adc2_dr,
  RegisterId::register_adc3_sr,
  RegisterId::register_adc3_cr1,
  RegisterId::register_adc3_cr2,
  RegisterId::register_adc3_smpr1,
  RegisterId::register_adc3_smpr2,
  RegisterId::register_adc3_jofr1,
  RegisterId::register_adc3_jofr2,
  RegisterId::register_adc3_jofr3,
  RegisterId::register_adc3_jofr4,
  RegisterId::register_adc3_htr,
  RegisterId::register_adc3_ltr,
  RegisterId::register_adc3_sqr1,
  RegisterId::register_adc3_sqr2,
  RegisterId::register_adc3_sqr3,
  RegisterId::register_adc3_jsqr,
  RegisterId::register_adc3_jdr1,
  RegisterId::register_adc3_jdr2,
  RegisterId::register_adc3_jdr3,
  RegisterId::register_adc3_jdr4,
  RegisterId::register_adc3_dr,
  RegisterId::register_can1_mcr,
  RegisterId::register_can1_msr,
  RegisterId::register_can1_tsr,
  RegisterId::register_can1_rf0r,
  RegisterId::register_can1_rf1r,
  RegisterId::register_can1_ier,
  RegisterId::register_can1_esr,
  RegisterId::register_can1_btr,
  RegisterId::register_can1_ti0r,
  RegisterId::register_can1_tdt0r,
  RegisterId::register_can1_tdl0r,
  RegisterId::register_can1_tdh0r,
  RegisterId::register_can1_ti1r,
  RegisterId::register_can1_tdt1r,
  RegisterId::register_can1_tdl1r,
  RegisterId::register_can1_tdh1r,
  RegisterId::register_can1_ti2r,
  RegisterId::register_can1_tdt2r,
  RegisterId::register_can1_tdl2r,
  RegisterId::register_can1_tdh2r,
  RegisterId::register_can1_ri0r,
  RegisterId::register_can1_rdt0r,
  RegisterId::register_can1_rdl0r,
  RegisterId::register_can1_rdh0r,
  RegisterId::register_can1_ri1r,
  RegisterId::register_can1_rdt1r,
  RegisterId::register_can1_rdl1r,
  RegisterId::register_can1_rdh1r,
  RegisterId::register_can1_fmr,
  RegisterId::register_can1_fm1r,
  RegisterId::register_can1_fs1r,
  RegisterId::register_can1_ffa1r,
  RegisterId::register_can1_fa1r,
  RegisterId::register_can1_f0r1,
  RegisterId::register_can1_f0r2,
  RegisterId::register_can1_f1r1,
  RegisterId::register_can1_f1r2,
  RegisterId::register_can1_f2r1,
  RegisterId::register_can1_f2r2,
  RegisterId::register_can1_f3r1,
  RegisterId::register_can1_f3r2,
  RegisterId::register_can1_f4r1,
  RegisterId::register_can1_f4r2,
  RegisterId::register_can1_f5r1,
  RegisterId::register_can1_f5r2,
  RegisterId::register_can1_f6r1,
  RegisterId::register_can1_f6r2,
  RegisterId::register_can1_f7r1,
  RegisterId::register_can1_f7r2,
  RegisterId::register_can1_f8r1,
  RegisterId::register_can1_f8r2,
  RegisterId::register_can1_f9r1,
  RegisterId::register_can1_f9r2,
  RegisterId::register_can1_f10r1,
  RegisterId::register_can1_f10r2,
  RegisterId::register_can1_f11r1,
  RegisterId::register_can1_f11r2,
  RegisterId::register_can1_f12r1,
  RegisterId::register_can1_f12r2,
  RegisterId::register_can1_f13r1,
  RegisterId::register_can1_f13r2,
  RegisterId::register_can1_f14r1,
  RegisterId::register_can1_f14r2,
  RegisterId::register_can1_f15r1,
  RegisterId::register_can1_f15r2,
  RegisterId::register_can1_f16r1,
  RegisterId::register_can1_f16r2,
  RegisterId::register_can1_f17r1,
  RegisterId::register_can1_f17r2,
  RegisterId::register_can1_f18r1,
  RegisterId::register_can1_f18r2,
  RegisterId::register_can1_f19r1,
  RegisterId::register_can1_f19r2,
  RegisterId::register_can1_f20r1,
  RegisterId::register_can1_f20r2,
  RegisterId::register_can1_f21r1,
  RegisterId::register_can1_f21r2,
  RegisterId::register_can1_f22r1,
  RegisterId::register_can1_f22r2,
  RegisterId::register_can1_f23r1,
  RegisterId::register_can1_f23r2,
  RegisterId::register_can1_f24r1,
  RegisterId::register_can1_f24r2,
  RegisterId::register_can1_f25r1,
  RegisterId::register_can1_f25r2,
  RegisterId::register_can1_f26r1,
  RegisterId::register_can1_f26r2,
  RegisterId::register_can1_f27r1,
  RegisterId::register_can1_f27r2,
  RegisterId::register_can2_mcr,
  RegisterId::register_can2_msr,
  RegisterId::register_can2_tsr,
  RegisterId::register_can2_rf0r,
  RegisterId::register_can2_rf1r,
  RegisterId::register_can2_ier,
  RegisterId::register_can2_esr,
  RegisterId::register_can2_btr,
  RegisterId::register_can2_ti0r,
  RegisterId::register_can2_tdt0r,
  RegisterId::register_can2_tdl0r,
  RegisterId::register_can2_tdh0r,
  RegisterId::register_can2_ti1r,
  RegisterId::register_can2_tdt1r,
  RegisterId::register_can2_tdl1r,
  RegisterId::register_can2_tdh1r,
  RegisterId::register_can2_ti2r,
  RegisterId::register_can2_tdt2r,
  RegisterId::register_can2_tdl2r,
  RegisterId::register_can2_tdh2r,
  RegisterId::register_can2_ri0r,
  RegisterId::register_can2_rdt0r,
  RegisterId::register_can2_rdl0r,
  RegisterId::register_can2_rdh0r,
  RegisterId::register_can2_ri1r,
  RegisterId::register_can2_rdt1r,
  RegisterId::register_can2_rdl1r,
  RegisterId::register_can2_rdh1r,
  RegisterId::register_can2_fmr,
  RegisterId::register_can2_fm1r,
  RegisterId::register_can2_fs1r,
  RegisterId::register_can2_ffa1r,
  RegisterId::register_can2_fa1r,
  RegisterId::register_can2_f0r1,
  RegisterId::register_can2_f0r2,
  RegisterId::register_can2_f1r1,
  RegisterId::register_can2_f1r2,
  RegisterId::register_can2_f2r1,
  RegisterId::register_can2_f2r2,
  RegisterId::register_can2_f3r1,
  RegisterId::register_can2_f3r2,
  RegisterId::register_can2_f4r1,
  RegisterId::register_can2_f4r2,
  RegisterId::register_can2_f5r1,
  RegisterId::register_can2_f5r2,
  RegisterId::register_can2_f6r1,
  RegisterId::register_can2_f6r2,
  RegisterId::register_can2_f7r1,
  RegisterId::register_can2_f7r2,
  RegisterId::register_can2_f8r1,
  RegisterId::register_can2_f8r2,
  RegisterId::register_can2_f9r1,
  RegisterId::register_can2_f9r2,
  RegisterId::register_can2_f10r1,
  RegisterId::register_can2_f10r2,
  RegisterId::register_can2_f11r1,
  RegisterId::register_can2_f11r2,
  RegisterId::register_can2_f12r1,
  RegisterId::register_can2_f12r2,
  RegisterId::register_can2_f13r1,
  RegisterId::register_can2_f13r2,
  RegisterId::register_can2_f14r1,
  RegisterId::register_can2_f14r2,
  RegisterId::register_can2_f15r1,
  RegisterId::register_can2_f15r2,
  RegisterId::register_can2_f16r1,
  RegisterId::register_can2_f16r2,
  RegisterId::register_can2_f17r1,
  RegisterId::register_can2_f17r2,
  RegisterId::register_can2_f18r1,
  RegisterId::register_can2_f18r2,
  RegisterId::register_can2_f19r1,
  RegisterId::register_can2_f19r2,
  RegisterId::register_can2_f20r1,
  RegisterId::register_can2_f20r2,
  RegisterId::register_can2_f21r1,
  RegisterId::register_can2_f21r2,
  RegisterId::register_can2_f22r1,
  RegisterId::register_can2_f22r2,
  RegisterId::register_can2_f23r1,
  RegisterId::register_can2_f23r2,
  RegisterId::register_can2_f24r1,
  RegisterId::register_can2_f24r2,
  RegisterId::register_can2_f25r1,
  RegisterId::register_can2_f25r2,
  RegisterId::register_can2_f26r1,
  RegisterId::register_can2_f26r2,
  RegisterId::register_can2_f27r1,
  RegisterId::register_can2_f27r2,
  RegisterId::register_dac_cr,
  RegisterId::register_dac_swtrigr,
  RegisterId::register_dac_dhr12r1,
  RegisterId::register_dac_dhr12l1,
  RegisterId::register_dac_dhr8r1,
  RegisterId::register_dac_dhr12r2,
  RegisterId::register_dac_dhr12l2,
  RegisterId::register_dac_dhr8r2,
  RegisterId::register_dac_dhr12rd,
  RegisterId::register_dac_dhr12ld,
  RegisterId::register_dac_dhr8rd,
  RegisterId::register_dac_dor1,
  RegisterId::register_dac_dor2,
  RegisterId::register_dac_sr,
  RegisterId::register_dma1_lisr,
  RegisterId::register_dma1_hisr,
  RegisterId::register_dma1_lifcr,
  RegisterId::register_dma1_hifcr,
  RegisterId::register_dma1_s0cr,
  RegisterId::register_dma1_s0ndtr,
  RegisterId::register_dma1_s0par,
  RegisterId::register_dma1_s0m0ar,
  RegisterId::register_dma1_s0m1ar,
  RegisterId::register_dma1_s0fcr,
  RegisterId::register_dma1_s1cr,
  RegisterId::register_dma1_s1ndtr,
  RegisterId::register_dma1_s1par,
  RegisterId::register_dma1_s1m0ar,
  RegisterId::register_dma1_s1m1ar,
  RegisterId::register_dma1_s1fcr,
  RegisterId::register_dma1_s2cr,
  RegisterId::register_dma1_s2ndtr,
  RegisterId::register_dma1_s2par,
  RegisterId::register_dma1_s2m0ar,
  RegisterId::register_dma1_s2m1ar,
  RegisterId::register_dma1_s2fcr,
  RegisterId::register_dma1_s3cr,
  RegisterId::register_dma1_s3ndtr,
  RegisterId::register_dma1_s3par,
  RegisterId::register_dma1_s3m0ar,
  RegisterId::register_dma1_s3m1ar,
  RegisterId::register_dma1_s3fcr,
  RegisterId::register_dma1_s4cr,
  RegisterId::register_dma1_s4ndtr,
  RegisterId::register_dma1_s4par,
  RegisterId::register_dma1_s4m0ar,
  RegisterId::register_dma1_s4m1ar,
  RegisterId::register_dma1_s4fcr,
  RegisterId::register_dma1_s5cr,
  RegisterId::register_dma1_s5ndtr,
  RegisterId::register_dma1_s5par,
  RegisterId::register_dma1_s5m0ar,
  RegisterId::register_dma1_s5m1ar,
  RegisterId::register_dma1_s5fcr,
  RegisterId::register_dma1_s6cr,
  RegisterId::register_dma1_s6ndtr,
  RegisterId::register_dma1_s6par,
  RegisterId::register_dma1_s6m0ar,
  RegisterId::register_dma1_s6m1ar,
  RegisterId::register_dma1_s6fcr,
  RegisterId::register_dma1_s7cr,
  RegisterId::register_dma1_s7ndtr,
  RegisterId::register_dma1_s7par,
  RegisterId::register_dma1_s7m0ar,
  RegisterId::register_dma1_s7m1ar,
  RegisterId::register_dma1_s7fcr,
  RegisterId::register_dma2_lisr,
  RegisterId::register_dma2_hisr,
  RegisterId::register_dma2_lifcr,
  RegisterId::register_dma2_hifcr,
  RegisterId::register_dma2_s0cr,
  RegisterId::register_dma2_s0ndtr,
  RegisterId::register_dma2_s0par,
  RegisterId::register_dma2_s0m0ar,
  RegisterId::register_dma2_s0m1ar,
  RegisterId::register_dma2_s0fcr,
  RegisterId::register_dma2_s1cr,
  RegisterId::register_dma2_s1ndtr,
  RegisterId::register_dma2_s1par,
  RegisterId::register_dma2_s1m0ar,
  RegisterId::register_dma2_s1m1ar,
  RegisterId::register_dma2_s1fcr,
  RegisterId::register_dma2_s2cr,
  RegisterId::register_dma2_s2ndtr,
  RegisterId::register_dma2_s2par,
  RegisterId::register_dma2_s2m0ar,
  RegisterId::register_dma2_s2m1ar,
  RegisterId::register_dma2_s2fcr,
  RegisterId::register_dma2_s3cr,
  RegisterId::register_dma2_s3ndtr,
  RegisterId::register_dma2_s3par,
  RegisterId::register_dma2_s3m0ar,
  RegisterId::register_dma2_s3m1ar,
  RegisterId::register_dma2_s3fcr,
  RegisterId::register_dma2_s4cr,
  RegisterId::register_dma2_s4ndtr,
  RegisterId::register_dma2_s4par,
  RegisterId::register_dma2_s4m0ar,
  RegisterId::register_dma2_s4m1ar,
  RegisterId::register_dma2_s4fcr,
  RegisterId::register_dma2_s5cr,
  RegisterId::register_dma2_s5ndtr,
  RegisterId::register_dma2_s5par,
  RegisterId::register_dma2_s5m0ar,
  RegisterId::register_dma2_s5m1ar,
  RegisterId::register_dma2_s5fcr,
  RegisterId::register_dma2_s6cr,
  RegisterId::register_dma2_s6ndtr,
  RegisterId::register_dma2_s6par,
  RegisterId::register_dma2_s6m0ar,
  RegisterId::register_dma2_s6m1ar,
  RegisterId::register_dma2_s6fcr,
  RegisterId::register_dma2_s7cr,
  RegisterId::register_dma2_s7ndtr,
  RegisterId::register_dma2_s7par,
  RegisterId::register_dma2_s7m0ar,
  RegisterId::register_dma2_s7m1ar,
  RegisterId::register_dma2_s7fcr,
  RegisterId::register_ethernet_dma_dmabmr,
  RegisterId::register_ethernet_dma_dmatpdr,
  RegisterId::register_ethernet_dma_dmarpdr,
  RegisterId::register_ethernet_dma_dmardlar,
  RegisterId::register_ethernet_dma_dmatdlar,
  RegisterId::register_ethernet_dma_dmasr,
  RegisterId::register_ethernet_dma_dmaomr,
  RegisterId::register_ethernet_dma_dmaier,
  RegisterId::register_ethernet_dma_dmamfbocr,
  RegisterId::register_ethernet_dma_dmarswtr,
  RegisterId::register_ethernet_dma_dmachtdr,
  RegisterId::register_ethernet_dma_dmachrdr,
  RegisterId::register_ethernet_dma_dmachtbar,
  RegisterId::register_ethernet_dma_dmachrbar,
  RegisterId::register_ethernet_mac_maccr,
  RegisterId::register_ethernet_mac_macffr,
  RegisterId::register_ethernet_mac_machthr,
  RegisterId::register_ethernet_mac_machtlr,
  RegisterId::register_ethernet_mac_macmiiar,
  RegisterId::register_ethernet_mac_macmiidr,
  RegisterId::register_ethernet_mac_macfcr,
  RegisterId::register_ethernet_mac_macvlantr,
  RegisterId::register_ethernet_mac_macpmtcsr,
  RegisterId::register_ethernet_mac_macdbgr,
  RegisterId::register_ethernet_mac_macsr,
  RegisterId::register_ethernet_mac_macimr,
  RegisterId::register_ethernet_mac_maca0hr,
  RegisterId::register_ethernet_mac_maca0lr,
  RegisterId::register_ethernet_mac_maca1hr,
  RegisterId::register_ethernet_mac_maca1lr,
  RegisterId::register_ethernet_mac_maca2hr,
  RegisterId::register_ethernet_mac_maca2lr,
  RegisterId::register_ethernet_mac_maca3hr,
  RegisterId::register_ethernet_mac_maca3lr,
  RegisterId::register_ethernet_mmc_mmccr,
  RegisterId::register_ethernet_mmc_mmcrir,
  RegisterId::register_ethernet_mmc_mmctir,
  RegisterId::register_ethernet_mmc_mmcrimr,
  RegisterId::register_ethernet_mmc_mmctimr,
  RegisterId::register_ethernet_mmc_mmctgfsccr,
  RegisterId::register_ethernet_mmc_mmctgfmsccr,
  RegisterId::register_ethernet_mmc_mmctgfcr,
  RegisterId::register_ethernet_mmc_mmcrfcecr,
  RegisterId::register_ethernet_mmc_mmcrfaecr,
  RegisterId::register_ethernet_mmc_mmcrgufcr,
  RegisterId::register_flash_acr,
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
  RegisterId::register_gpiog_moder,
  RegisterId::register_gpiog_otyper,
  RegisterId::register_gpiog_ospeedr,
  RegisterId::register_gpiog_pupdr,
  RegisterId::register_gpiog_idr,
  RegisterId::register_gpiog_odr,
  RegisterId::register_gpiog_bsrr,
  RegisterId::register_gpiog_lckr,
  RegisterId::register_gpiog_afrl,
  RegisterId::register_gpiog_afrh,
  RegisterId::register_gpioh_moder,
  RegisterId::register_gpioh_otyper,
  RegisterId::register_gpioh_ospeedr,
  RegisterId::register_gpioh_pupdr,
  RegisterId::register_gpioh_idr,
  RegisterId::register_gpioh_odr,
  RegisterId::register_gpioh_bsrr,
  RegisterId::register_gpioh_lckr,
  RegisterId::register_gpioh_afrl,
  RegisterId::register_gpioh_afrh,
  RegisterId::register_gpioi_moder,
  RegisterId::register_gpioi_otyper,
  RegisterId::register_gpioi_ospeedr,
  RegisterId::register_gpioi_pupdr,
  RegisterId::register_gpioi_idr,
  RegisterId::register_gpioi_odr,
  RegisterId::register_gpioi_bsrr,
  RegisterId::register_gpioi_lckr,
  RegisterId::register_gpioi_afrl,
  RegisterId::register_gpioi_afrh,
  RegisterId::register_gpioj_moder,
  RegisterId::register_gpioj_otyper,
  RegisterId::register_gpioj_ospeedr,
  RegisterId::register_gpioj_pupdr,
  RegisterId::register_gpioj_idr,
  RegisterId::register_gpioj_odr,
  RegisterId::register_gpioj_bsrr,
  RegisterId::register_gpioj_lckr,
  RegisterId::register_gpioj_afrl,
  RegisterId::register_gpioj_afrh,
  RegisterId::register_gpiok_moder,
  RegisterId::register_gpiok_otyper,
  RegisterId::register_gpiok_ospeedr,
  RegisterId::register_gpiok_pupdr,
  RegisterId::register_gpiok_idr,
  RegisterId::register_gpiok_odr,
  RegisterId::register_gpiok_bsrr,
  RegisterId::register_gpiok_lckr,
  RegisterId::register_gpiok_afrl,
  RegisterId::register_gpiok_afrh,
  RegisterId::register_i2c1_cr1,
  RegisterId::register_i2c1_cr2,
  RegisterId::register_i2c1_oar1,
  RegisterId::register_i2c1_oar2,
  RegisterId::register_i2c1_dr,
  RegisterId::register_i2c1_sr1,
  RegisterId::register_i2c1_sr2,
  RegisterId::register_i2c1_ccr,
  RegisterId::register_i2c1_trise,
  RegisterId::register_i2c2_cr1,
  RegisterId::register_i2c2_cr2,
  RegisterId::register_i2c2_oar1,
  RegisterId::register_i2c2_oar2,
  RegisterId::register_i2c2_dr,
  RegisterId::register_i2c2_sr1,
  RegisterId::register_i2c2_sr2,
  RegisterId::register_i2c2_ccr,
  RegisterId::register_i2c2_trise,
  RegisterId::register_i2c3_cr1,
  RegisterId::register_i2c3_cr2,
  RegisterId::register_i2c3_oar1,
  RegisterId::register_i2c3_oar2,
  RegisterId::register_i2c3_dr,
  RegisterId::register_i2c3_sr1,
  RegisterId::register_i2c3_sr2,
  RegisterId::register_i2c3_ccr,
  RegisterId::register_i2c3_trise,
  RegisterId::register_iwdg_kr,
  RegisterId::register_iwdg_pr,
  RegisterId::register_iwdg_rlr,
  RegisterId::register_iwdg_sr,
  RegisterId::register_otg_fs_device_fs_dcfg,
  RegisterId::register_otg_fs_device_fs_dctl,
  RegisterId::register_otg_fs_device_fs_dsts,
  RegisterId::register_otg_fs_device_fs_diepmsk,
  RegisterId::register_otg_fs_device_fs_doepmsk,
  RegisterId::register_otg_fs_device_fs_daint,
  RegisterId::register_otg_fs_device_fs_daintmsk,
  RegisterId::register_otg_fs_device_dvbusdis,
  RegisterId::register_otg_fs_device_dvbuspulse,
  RegisterId::register_otg_fs_device_diepempmsk,
  RegisterId::register_otg_fs_device_fs_diepctl0,
  RegisterId::register_otg_fs_device_diepint0,
  RegisterId::register_otg_fs_device_dieptsiz0,
  RegisterId::register_otg_fs_device_dtxfsts0,
  RegisterId::register_otg_fs_device_diepctl1,
  RegisterId::register_otg_fs_device_diepint1,
  RegisterId::register_otg_fs_device_dieptsiz1,
  RegisterId::register_otg_fs_device_dtxfsts1,
  RegisterId::register_otg_fs_device_diepctl2,
  RegisterId::register_otg_fs_device_diepint2,
  RegisterId::register_otg_fs_device_dieptsiz2,
  RegisterId::register_otg_fs_device_dtxfsts2,
  RegisterId::register_otg_fs_device_diepctl3,
  RegisterId::register_otg_fs_device_diepint3,
  RegisterId::register_otg_fs_device_dieptsiz3,
  RegisterId::register_otg_fs_device_dtxfsts3,
  RegisterId::register_otg_fs_device_doepctl0,
  RegisterId::register_otg_fs_device_doepint0,
  RegisterId::register_otg_fs_device_doeptsiz0,
  RegisterId::register_otg_fs_device_doepctl1,
  RegisterId::register_otg_fs_device_doepint1,
  RegisterId::register_otg_fs_device_doeptsiz1,
  RegisterId::register_otg_fs_device_doepctl2,
  RegisterId::register_otg_fs_device_doepint2,
  RegisterId::register_otg_fs_device_doeptsiz2,
  RegisterId::register_otg_fs_device_doepctl3,
  RegisterId::register_otg_fs_device_doepint3,
  RegisterId::register_otg_fs_device_doeptsiz3,
  RegisterId::register_otg_fs_global_fs_gotgctl,
  RegisterId::register_otg_fs_global_fs_gotgint,
  RegisterId::register_otg_fs_global_fs_gahbcfg,
  RegisterId::register_otg_fs_global_fs_gusbcfg,
  RegisterId::register_otg_fs_global_fs_grstctl,
  RegisterId::register_otg_fs_global_fs_gintsts,
  RegisterId::register_otg_fs_global_fs_gintmsk,
  RegisterId::register_otg_fs_global_fs_grxstsr_device,
  RegisterId::register_otg_fs_global_fs_grxfsiz,
  RegisterId::register_otg_fs_global_fs_gnptxfsiz_device,
  RegisterId::register_otg_fs_global_fs_gnptxsts,
  RegisterId::register_otg_fs_global_fs_gccfg,
  RegisterId::register_otg_fs_global_fs_cid,
  RegisterId::register_otg_fs_global_fs_hptxfsiz,
  RegisterId::register_otg_fs_global_fs_dieptxf1,
  RegisterId::register_otg_fs_global_fs_dieptxf2,
  RegisterId::register_otg_fs_global_fs_dieptxf3,
  RegisterId::register_otg_fs_host_fs_hcfg,
  RegisterId::register_otg_fs_host_hfir,
  RegisterId::register_otg_fs_host_fs_hfnum,
  RegisterId::register_otg_fs_host_fs_hptxsts,
  RegisterId::register_otg_fs_host_haint,
  RegisterId::register_otg_fs_host_haintmsk,
  RegisterId::register_otg_fs_host_fs_hprt,
  RegisterId::register_otg_fs_host_fs_hcchar0,
  RegisterId::register_otg_fs_host_fs_hcint0,
  RegisterId::register_otg_fs_host_fs_hcintmsk0,
  RegisterId::register_otg_fs_host_fs_hctsiz0,
  RegisterId::register_otg_fs_host_fs_hcchar1,
  RegisterId::register_otg_fs_host_fs_hcint1,
  RegisterId::register_otg_fs_host_fs_hcintmsk1,
  RegisterId::register_otg_fs_host_fs_hctsiz1,
  RegisterId::register_otg_fs_host_fs_hcchar2,
  RegisterId::register_otg_fs_host_fs_hcint2,
  RegisterId::register_otg_fs_host_fs_hcintmsk2,
  RegisterId::register_otg_fs_host_fs_hctsiz2,
  RegisterId::register_otg_fs_host_fs_hcchar3,
  RegisterId::register_otg_fs_host_fs_hcint3,
  RegisterId::register_otg_fs_host_fs_hcintmsk3,
  RegisterId::register_otg_fs_host_fs_hctsiz3,
  RegisterId::register_otg_fs_host_fs_hcchar4,
  RegisterId::register_otg_fs_host_fs_hcint4,
  RegisterId::register_otg_fs_host_fs_hcintmsk4,
  RegisterId::register_otg_fs_host_fs_hctsiz4,
  RegisterId::register_otg_fs_host_fs_hcchar5,
  RegisterId::register_otg_fs_host_fs_hcint5,
  RegisterId::register_otg_fs_host_fs_hcintmsk5,
  RegisterId::register_otg_fs_host_fs_hctsiz5,
  RegisterId::register_otg_fs_host_fs_hcchar6,
  RegisterId::register_otg_fs_host_fs_hcint6,
  RegisterId::register_otg_fs_host_fs_hcintmsk6,
  RegisterId::register_otg_fs_host_fs_hctsiz6,
  RegisterId::register_otg_fs_host_fs_hcchar7,
  RegisterId::register_otg_fs_host_fs_hcint7,
  RegisterId::register_otg_fs_host_fs_hcintmsk7,
  RegisterId::register_otg_fs_host_fs_hctsiz7,
  RegisterId::register_otg_fs_pwrclk_fs_pcgcctl,
  RegisterId::register_otg_hs_device_otg_hs_dcfg,
  RegisterId::register_otg_hs_device_otg_hs_dctl,
  RegisterId::register_otg_hs_device_otg_hs_dsts,
  RegisterId::register_otg_hs_device_otg_hs_diepmsk,
  RegisterId::register_otg_hs_device_otg_hs_doepmsk,
  RegisterId::register_otg_hs_device_otg_hs_daint,
  RegisterId::register_otg_hs_device_otg_hs_daintmsk,
  RegisterId::register_otg_hs_device_otg_hs_dvbusdis,
  RegisterId::register_otg_hs_device_otg_hs_dvbuspulse,
  RegisterId::register_otg_hs_device_otg_hs_dthrctl,
  RegisterId::register_otg_hs_device_otg_hs_diepempmsk,
  RegisterId::register_otg_hs_device_otg_hs_deachint,
  RegisterId::register_otg_hs_device_otg_hs_deachintmsk,
  RegisterId::register_otg_hs_device_otg_hs_diepeachmsk1,
  RegisterId::register_otg_hs_device_otg_hs_doepeachmsk1,
  RegisterId::register_otg_hs_device_otg_hs_diepctl0,
  RegisterId::register_otg_hs_device_otg_hs_diepint0,
  RegisterId::register_otg_hs_device_otg_hs_dieptsiz0,
  RegisterId::register_otg_hs_device_otg_hs_diepdma1,
  RegisterId::register_otg_hs_device_otg_hs_dtxfsts0,
  RegisterId::register_otg_hs_device_otg_hs_diepctl1,
  RegisterId::register_otg_hs_device_otg_hs_diepint1,
  RegisterId::register_otg_hs_device_otg_hs_dieptsiz1,
  RegisterId::register_otg_hs_device_otg_hs_diepdma2,
  RegisterId::register_otg_hs_device_otg_hs_dtxfsts1,
  RegisterId::register_otg_hs_device_otg_hs_diepctl2,
  RegisterId::register_otg_hs_device_otg_hs_diepint2,
  RegisterId::register_otg_hs_device_otg_hs_dieptsiz2,
  RegisterId::register_otg_hs_device_otg_hs_diepdma3,
  RegisterId::register_otg_hs_device_otg_hs_dtxfsts2,
  RegisterId::register_otg_hs_device_otg_hs_diepctl3,
  RegisterId::register_otg_hs_device_otg_hs_diepint3,
  RegisterId::register_otg_hs_device_otg_hs_dieptsiz3,
  RegisterId::register_otg_hs_device_otg_hs_diepdma4,
  RegisterId::register_otg_hs_device_otg_hs_dtxfsts3,
  RegisterId::register_otg_hs_device_otg_hs_diepctl4,
  RegisterId::register_otg_hs_device_otg_hs_diepint4,
  RegisterId::register_otg_hs_device_otg_hs_dieptsiz4,
  RegisterId::register_otg_hs_device_otg_hs_diepdma5,
  RegisterId::register_otg_hs_device_otg_hs_dtxfsts4,
  RegisterId::register_otg_hs_device_otg_hs_diepctl5,
  RegisterId::register_otg_hs_device_otg_hs_diepint5,
  RegisterId::register_otg_hs_device_otg_hs_dieptsiz5,
  RegisterId::register_otg_hs_device_otg_hs_dtxfsts5,
  RegisterId::register_otg_hs_device_otg_hs_diepctl6,
  RegisterId::register_otg_hs_device_otg_hs_diepint6,
  RegisterId::register_otg_hs_device_otg_hs_diepctl7,
  RegisterId::register_otg_hs_device_otg_hs_diepint7,
  RegisterId::register_otg_hs_device_otg_hs_doepctl0,
  RegisterId::register_otg_hs_device_otg_hs_doepint0,
  RegisterId::register_otg_hs_device_otg_hs_doeptsiz0,
  RegisterId::register_otg_hs_device_otg_hs_doepctl1,
  RegisterId::register_otg_hs_device_otg_hs_doepint1,
  RegisterId::register_otg_hs_device_otg_hs_doeptsiz1,
  RegisterId::register_otg_hs_device_otg_hs_doepctl2,
  RegisterId::register_otg_hs_device_otg_hs_doepint2,
  RegisterId::register_otg_hs_device_otg_hs_doeptsiz2,
  RegisterId::register_otg_hs_device_otg_hs_doepctl3,
  RegisterId::register_otg_hs_device_otg_hs_doepint3,
  RegisterId::register_otg_hs_device_otg_hs_doeptsiz3,
  RegisterId::register_otg_hs_device_otg_hs_doepint4,
  RegisterId::register_otg_hs_device_otg_hs_doeptsiz4,
  RegisterId::register_otg_hs_device_otg_hs_doepint5,
  RegisterId::register_otg_hs_device_otg_hs_doepint6,
  RegisterId::register_otg_hs_device_otg_hs_doepint7,
  RegisterId::register_otg_hs_global_otg_hs_gotgctl,
  RegisterId::register_otg_hs_global_otg_hs_gotgint,
  RegisterId::register_otg_hs_global_otg_hs_gahbcfg,
  RegisterId::register_otg_hs_global_otg_hs_gusbcfg,
  RegisterId::register_otg_hs_global_otg_hs_grstctl,
  RegisterId::register_otg_hs_global_otg_hs_gintsts,
  RegisterId::register_otg_hs_global_otg_hs_gintmsk,
  RegisterId::register_otg_hs_global_otg_hs_grxstsr_host,
  RegisterId::register_otg_hs_global_otg_hs_grxstsp_host,
  RegisterId::register_otg_hs_global_otg_hs_grxfsiz,
  RegisterId::register_otg_hs_global_otg_hs_gnptxfsiz_host,
  RegisterId::register_otg_hs_global_otg_hs_gnptxsts,
  RegisterId::register_otg_hs_global_otg_hs_gccfg,
  RegisterId::register_otg_hs_global_otg_hs_cid,
  RegisterId::register_otg_hs_global_otg_hs_hptxfsiz,
  RegisterId::register_otg_hs_global_otg_hs_dieptxf1,
  RegisterId::register_otg_hs_global_otg_hs_dieptxf2,
  RegisterId::register_otg_hs_global_otg_hs_dieptxf3,
  RegisterId::register_otg_hs_global_otg_hs_dieptxf4,
  RegisterId::register_otg_hs_global_otg_hs_dieptxf5,
  RegisterId::register_otg_hs_global_otg_hs_dieptxf6,
  RegisterId::register_otg_hs_global_otg_hs_dieptxf7,
  RegisterId::register_otg_hs_host_otg_hs_hcfg,
  RegisterId::register_otg_hs_host_otg_hs_hfir,
  RegisterId::register_otg_hs_host_otg_hs_hfnum,
  RegisterId::register_otg_hs_host_otg_hs_hptxsts,
  RegisterId::register_otg_hs_host_otg_hs_haint,
  RegisterId::register_otg_hs_host_otg_hs_haintmsk,
  RegisterId::register_otg_hs_host_otg_hs_hprt,
  RegisterId::register_otg_hs_host_otg_hs_hcchar0,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt0,
  RegisterId::register_otg_hs_host_otg_hs_hcint0,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk0,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz0,
  RegisterId::register_otg_hs_host_otg_hs_hcdma0,
  RegisterId::register_otg_hs_host_otg_hs_hcchar1,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt1,
  RegisterId::register_otg_hs_host_otg_hs_hcint1,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk1,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz1,
  RegisterId::register_otg_hs_host_otg_hs_hcdma1,
  RegisterId::register_otg_hs_host_otg_hs_hcchar2,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt2,
  RegisterId::register_otg_hs_host_otg_hs_hcint2,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk2,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz2,
  RegisterId::register_otg_hs_host_otg_hs_hcdma2,
  RegisterId::register_otg_hs_host_otg_hs_hcchar3,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt3,
  RegisterId::register_otg_hs_host_otg_hs_hcint3,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk3,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz3,
  RegisterId::register_otg_hs_host_otg_hs_hcdma3,
  RegisterId::register_otg_hs_host_otg_hs_hcchar4,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt4,
  RegisterId::register_otg_hs_host_otg_hs_hcint4,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk4,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz4,
  RegisterId::register_otg_hs_host_otg_hs_hcdma4,
  RegisterId::register_otg_hs_host_otg_hs_hcchar5,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt5,
  RegisterId::register_otg_hs_host_otg_hs_hcint5,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk5,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz5,
  RegisterId::register_otg_hs_host_otg_hs_hcdma5,
  RegisterId::register_otg_hs_host_otg_hs_hcchar6,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt6,
  RegisterId::register_otg_hs_host_otg_hs_hcint6,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk6,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz6,
  RegisterId::register_otg_hs_host_otg_hs_hcdma6,
  RegisterId::register_otg_hs_host_otg_hs_hcchar7,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt7,
  RegisterId::register_otg_hs_host_otg_hs_hcint7,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk7,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz7,
  RegisterId::register_otg_hs_host_otg_hs_hcdma7,
  RegisterId::register_otg_hs_host_otg_hs_hcchar8,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt8,
  RegisterId::register_otg_hs_host_otg_hs_hcint8,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk8,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz8,
  RegisterId::register_otg_hs_host_otg_hs_hcdma8,
  RegisterId::register_otg_hs_host_otg_hs_hcchar9,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt9,
  RegisterId::register_otg_hs_host_otg_hs_hcint9,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk9,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz9,
  RegisterId::register_otg_hs_host_otg_hs_hcdma9,
  RegisterId::register_otg_hs_host_otg_hs_hcchar10,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt10,
  RegisterId::register_otg_hs_host_otg_hs_hcint10,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk10,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz10,
  RegisterId::register_otg_hs_host_otg_hs_hcdma10,
  RegisterId::register_otg_hs_host_otg_hs_hcchar11,
  RegisterId::register_otg_hs_host_otg_hs_hcsplt11,
  RegisterId::register_otg_hs_host_otg_hs_hcint11,
  RegisterId::register_otg_hs_host_otg_hs_hcintmsk11,
  RegisterId::register_otg_hs_host_otg_hs_hctsiz11,
  RegisterId::register_otg_hs_host_otg_hs_hcdma11,
  RegisterId::register_otg_hs_pwrclk_otg_hs_pcgcr,
  RegisterId::register_rcc_cr,
  RegisterId::register_rcc_pllcfgr,
  RegisterId::register_rcc_cfgr,
  RegisterId::register_rcc_ahb1rstr,
  RegisterId::register_rcc_apb1rstr,
  RegisterId::register_rcc_apb2rstr,
  RegisterId::register_rcc_ahb1enr,
  RegisterId::register_rcc_apb1enr,
  RegisterId::register_rcc_apb2enr,
  RegisterId::register_rtc_tr,
  RegisterId::register_rtc_dr,
  RegisterId::register_rtc_cr,
  RegisterId::register_rtc_isr,
  RegisterId::register_rtc_prer,
  RegisterId::register_rtc_wutr,
  RegisterId::register_rtc_calibr,
  RegisterId::register_rtc_alrmar,
  RegisterId::register_rtc_alrmbr,
  RegisterId::register_rtc_wpr,
  RegisterId::register_rtc_ssr,
  RegisterId::register_rtc_shiftr,
  RegisterId::register_rtc_tstr,
  RegisterId::register_rtc_tsdr,
  RegisterId::register_rtc_tsssr,
  RegisterId::register_rtc_calr,
  RegisterId::register_rtc_tafcr,
  RegisterId::register_rtc_alrmassr,
  RegisterId::register_rtc_alrmbssr,
  RegisterId::register_rtc_bkp0r,
  RegisterId::register_rtc_bkp1r,
  RegisterId::register_rtc_bkp2r,
  RegisterId::register_rtc_bkp3r,
  RegisterId::register_rtc_bkp4r,
  RegisterId::register_rtc_bkp5r,
  RegisterId::register_rtc_bkp6r,
  RegisterId::register_rtc_bkp7r,
  RegisterId::register_rtc_bkp8r,
  RegisterId::register_rtc_bkp9r,
  RegisterId::register_rtc_bkp10r,
  RegisterId::register_rtc_bkp11r,
  RegisterId::register_rtc_bkp12r,
  RegisterId::register_rtc_bkp13r,
  RegisterId::register_rtc_bkp14r,
  RegisterId::register_rtc_bkp15r,
  RegisterId::register_rtc_bkp16r,
  RegisterId::register_rtc_bkp17r,
  RegisterId::register_rtc_bkp18r,
  RegisterId::register_rtc_bkp19r,
  RegisterId::register_spi1_cr1,
  RegisterId::register_spi1_cr2,
  RegisterId::register_spi1_sr,
  RegisterId::register_spi1_dr,
  RegisterId::register_spi1_crcpr,
  RegisterId::register_spi1_rxcrcr,
  RegisterId::register_spi1_txcrcr,
  RegisterId::register_spi1_i2scfgr,
  RegisterId::register_spi1_i2spr,
  RegisterId::register_spi2_cr1,
  RegisterId::register_spi2_cr2,
  RegisterId::register_spi2_sr,
  RegisterId::register_spi2_dr,
  RegisterId::register_spi2_crcpr,
  RegisterId::register_spi2_rxcrcr,
  RegisterId::register_spi2_txcrcr,
  RegisterId::register_spi2_i2scfgr,
  RegisterId::register_spi2_i2spr,
  RegisterId::register_spi3_cr1,
  RegisterId::register_spi3_cr2,
  RegisterId::register_spi3_sr,
  RegisterId::register_spi3_dr,
  RegisterId::register_spi3_crcpr,
  RegisterId::register_spi3_rxcrcr,
  RegisterId::register_spi3_txcrcr,
  RegisterId::register_spi3_i2scfgr,
  RegisterId::register_spi3_i2spr,
  RegisterId::register_spi4_cr1,
  RegisterId::register_spi4_cr2,
  RegisterId::register_spi4_sr,
  RegisterId::register_spi4_dr,
  RegisterId::register_spi4_crcpr,
  RegisterId::register_spi4_rxcrcr,
  RegisterId::register_spi4_txcrcr,
  RegisterId::register_spi4_i2scfgr,
  RegisterId::register_spi4_i2spr,
  RegisterId::register_spi5_cr1,
  RegisterId::register_spi5_cr2,
  RegisterId::register_spi5_sr,
  RegisterId::register_spi5_dr,
  RegisterId::register_spi5_crcpr,
  RegisterId::register_spi5_rxcrcr,
  RegisterId::register_spi5_txcrcr,
  RegisterId::register_spi5_i2scfgr,
  RegisterId::register_spi5_i2spr,
  RegisterId::register_spi6_cr1,
  RegisterId::register_spi6_cr2,
  RegisterId::register_spi6_sr,
  RegisterId::register_spi6_dr,
  RegisterId::register_spi6_crcpr,
  RegisterId::register_spi6_rxcrcr,
  RegisterId::register_spi6_txcrcr,
  RegisterId::register_spi6_i2scfgr,
  RegisterId::register_spi6_i2spr,
  RegisterId::register_tim1_cr1,
  RegisterId::register_tim1_cr2,
  RegisterId::register_tim1_smcr,
  RegisterId::register_tim1_dier,
  RegisterId::register_tim1_sr,
  RegisterId::register_tim1_egr,
  RegisterId::register_tim1_ccmr1_input,
  RegisterId::register_tim1_ccmr2_input,
  RegisterId::register_tim1_ccer,
  RegisterId::register_tim1_cnt,
  RegisterId::register_tim1_psc,
  RegisterId::register_tim1_arr,
  RegisterId::register_tim1_rcr,
  RegisterId::register_tim1_ccr1,
  RegisterId::register_tim1_ccr2,
  RegisterId::register_tim1_ccr3,
  RegisterId::register_tim1_ccr4,
  RegisterId::register_tim1_bdtr,
  RegisterId::register_tim1_dcr,
  RegisterId::register_tim1_dmar,
  RegisterId::register_tim10_cr1,
  RegisterId::register_tim10_dier,
  RegisterId::register_tim10_sr,
  RegisterId::register_tim10_egr,
  RegisterId::register_tim10_ccmr1_input,
  RegisterId::register_tim10_ccer,
  RegisterId::register_tim10_cnt,
  RegisterId::register_tim10_psc,
  RegisterId::register_tim10_arr,
  RegisterId::register_tim10_ccr1,
  RegisterId::register_tim11_cr1,
  RegisterId::register_tim11_dier,
  RegisterId::register_tim11_sr,
  RegisterId::register_tim11_egr,
  RegisterId::register_tim11_ccmr1_input,
  RegisterId::register_tim11_ccer,
  RegisterId::register_tim11_cnt,
  RegisterId::register_tim11_psc,
  RegisterId::register_tim11_arr,
  RegisterId::register_tim11_ccr1,
  RegisterId::register_tim11_or,
  RegisterId::register_tim12_cr1,
  RegisterId::register_tim12_cr2,
  RegisterId::register_tim12_smcr,
  RegisterId::register_tim12_dier,
  RegisterId::register_tim12_sr,
  RegisterId::register_tim12_egr,
  RegisterId::register_tim12_ccmr1_input,
  RegisterId::register_tim12_ccer,
  RegisterId::register_tim12_cnt,
  RegisterId::register_tim12_psc,
  RegisterId::register_tim12_arr,
  RegisterId::register_tim12_ccr1,
  RegisterId::register_tim12_ccr2,
  RegisterId::register_tim13_cr1,
  RegisterId::register_tim13_dier,
  RegisterId::register_tim13_sr,
  RegisterId::register_tim13_egr,
  RegisterId::register_tim13_ccmr1_input,
  RegisterId::register_tim13_ccer,
  RegisterId::register_tim13_cnt,
  RegisterId::register_tim13_psc,
  RegisterId::register_tim13_arr,
  RegisterId::register_tim13_ccr1,
  RegisterId::register_tim14_cr1,
  RegisterId::register_tim14_dier,
  RegisterId::register_tim14_sr,
  RegisterId::register_tim14_egr,
  RegisterId::register_tim14_ccmr1_input,
  RegisterId::register_tim14_ccer,
  RegisterId::register_tim14_cnt,
  RegisterId::register_tim14_psc,
  RegisterId::register_tim14_arr,
  RegisterId::register_tim14_ccr1,
  RegisterId::register_tim2_cr1,
  RegisterId::register_tim2_cr2,
  RegisterId::register_tim2_smcr,
  RegisterId::register_tim2_dier,
  RegisterId::register_tim2_sr,
  RegisterId::register_tim2_egr,
  RegisterId::register_tim2_ccmr1_input,
  RegisterId::register_tim2_ccmr2_input,
  RegisterId::register_tim2_ccer,
  RegisterId::register_tim2_cnt,
  RegisterId::register_tim2_psc,
  RegisterId::register_tim2_arr,
  RegisterId::register_tim2_ccr1,
  RegisterId::register_tim2_ccr2,
  RegisterId::register_tim2_ccr3,
  RegisterId::register_tim2_ccr4,
  RegisterId::register_tim2_dcr,
  RegisterId::register_tim2_dmar,
  RegisterId::register_tim2_or,
  RegisterId::register_tim3_cr1,
  RegisterId::register_tim3_cr2,
  RegisterId::register_tim3_smcr,
  RegisterId::register_tim3_dier,
  RegisterId::register_tim3_sr,
  RegisterId::register_tim3_egr,
  RegisterId::register_tim3_ccmr1_input,
  RegisterId::register_tim3_ccmr2_input,
  RegisterId::register_tim3_ccer,
  RegisterId::register_tim3_cnt,
  RegisterId::register_tim3_psc,
  RegisterId::register_tim3_arr,
  RegisterId::register_tim3_ccr1,
  RegisterId::register_tim3_ccr2,
  RegisterId::register_tim3_ccr3,
  RegisterId::register_tim3_ccr4,
  RegisterId::register_tim3_dcr,
  RegisterId::register_tim3_dmar,
  RegisterId::register_tim4_cr1,
  RegisterId::register_tim4_cr2,
  RegisterId::register_tim4_smcr,
  RegisterId::register_tim4_dier,
  RegisterId::register_tim4_sr,
  RegisterId::register_tim4_egr,
  RegisterId::register_tim4_ccmr1_input,
  RegisterId::register_tim4_ccmr2_input,
  RegisterId::register_tim4_ccer,
  RegisterId::register_tim4_cnt,
  RegisterId::register_tim4_psc,
  RegisterId::register_tim4_arr,
  RegisterId::register_tim4_ccr1,
  RegisterId::register_tim4_ccr2,
  RegisterId::register_tim4_ccr3,
  RegisterId::register_tim4_ccr4,
  RegisterId::register_tim4_dcr,
  RegisterId::register_tim4_dmar,
  RegisterId::register_tim5_cr1,
  RegisterId::register_tim5_cr2,
  RegisterId::register_tim5_smcr,
  RegisterId::register_tim5_dier,
  RegisterId::register_tim5_sr,
  RegisterId::register_tim5_egr,
  RegisterId::register_tim5_ccmr1_input,
  RegisterId::register_tim5_ccmr2_input,
  RegisterId::register_tim5_ccer,
  RegisterId::register_tim5_cnt,
  RegisterId::register_tim5_psc,
  RegisterId::register_tim5_arr,
  RegisterId::register_tim5_ccr1,
  RegisterId::register_tim5_ccr2,
  RegisterId::register_tim5_ccr3,
  RegisterId::register_tim5_ccr4,
  RegisterId::register_tim5_dcr,
  RegisterId::register_tim5_dmar,
  RegisterId::register_tim5_or,
  RegisterId::register_tim6_cr1,
  RegisterId::register_tim6_cr2,
  RegisterId::register_tim6_dier,
  RegisterId::register_tim6_sr,
  RegisterId::register_tim6_egr,
  RegisterId::register_tim6_cnt,
  RegisterId::register_tim6_psc,
  RegisterId::register_tim6_arr,
  RegisterId::register_tim7_cr1,
  RegisterId::register_tim7_cr2,
  RegisterId::register_tim7_dier,
  RegisterId::register_tim7_sr,
  RegisterId::register_tim7_egr,
  RegisterId::register_tim7_cnt,
  RegisterId::register_tim7_psc,
  RegisterId::register_tim7_arr,
  RegisterId::register_tim8_cr1,
  RegisterId::register_tim8_cr2,
  RegisterId::register_tim8_smcr,
  RegisterId::register_tim8_dier,
  RegisterId::register_tim8_sr,
  RegisterId::register_tim8_egr,
  RegisterId::register_tim8_ccmr1_input,
  RegisterId::register_tim8_ccmr2_input,
  RegisterId::register_tim8_ccer,
  RegisterId::register_tim8_cnt,
  RegisterId::register_tim8_psc,
  RegisterId::register_tim8_arr,
  RegisterId::register_tim8_rcr,
  RegisterId::register_tim8_ccr1,
  RegisterId::register_tim8_ccr2,
  RegisterId::register_tim8_ccr3,
  RegisterId::register_tim8_ccr4,
  RegisterId::register_tim8_bdtr,
  RegisterId::register_tim8_dcr,
  RegisterId::register_tim8_dmar,
  RegisterId::register_tim9_cr1,
  RegisterId::register_tim9_cr2,
  RegisterId::register_tim9_smcr,
  RegisterId::register_tim9_dier,
  RegisterId::register_tim9_sr,
  RegisterId::register_tim9_egr,
  RegisterId::register_tim9_ccmr1_input,
  RegisterId::register_tim9_ccer,
  RegisterId::register_tim9_cnt,
  RegisterId::register_tim9_psc,
  RegisterId::register_tim9_arr,
  RegisterId::register_tim9_ccr1,
  RegisterId::register_tim9_ccr2,
  RegisterId::register_uart4_sr,
  RegisterId::register_uart4_dr,
  RegisterId::register_uart4_brr,
  RegisterId::register_uart4_cr1,
  RegisterId::register_uart4_cr2,
  RegisterId::register_uart4_cr3,
  RegisterId::register_uart5_sr,
  RegisterId::register_uart5_dr,
  RegisterId::register_uart5_brr,
  RegisterId::register_uart5_cr1,
  RegisterId::register_uart5_cr2,
  RegisterId::register_uart5_cr3,
  RegisterId::register_uart7_sr,
  RegisterId::register_uart7_dr,
  RegisterId::register_uart7_brr,
  RegisterId::register_uart7_cr1,
  RegisterId::register_uart7_cr2,
  RegisterId::register_uart7_cr3,
  RegisterId::register_uart8_sr,
  RegisterId::register_uart8_dr,
  RegisterId::register_uart8_brr,
  RegisterId::register_uart8_cr1,
  RegisterId::register_uart8_cr2,
  RegisterId::register_uart8_cr3,
  RegisterId::register_usart1_sr,
  RegisterId::register_usart1_dr,
  RegisterId::register_usart1_brr,
  RegisterId::register_usart1_cr1,
  RegisterId::register_usart1_cr2,
  RegisterId::register_usart1_cr3,
  RegisterId::register_usart1_gtpr,
  RegisterId::register_usart2_sr,
  RegisterId::register_usart2_dr,
  RegisterId::register_usart2_brr,
  RegisterId::register_usart2_cr1,
  RegisterId::register_usart2_cr2,
  RegisterId::register_usart2_cr3,
  RegisterId::register_usart2_gtpr,
  RegisterId::register_usart3_sr,
  RegisterId::register_usart3_dr,
  RegisterId::register_usart3_brr,
  RegisterId::register_usart3_cr1,
  RegisterId::register_usart3_cr2,
  RegisterId::register_usart3_cr3,
  RegisterId::register_usart3_gtpr,
  RegisterId::register_usart6_sr,
  RegisterId::register_usart6_dr,
  RegisterId::register_usart6_brr,
  RegisterId::register_usart6_cr1,
  RegisterId::register_usart6_cr2,
  RegisterId::register_usart6_cr3,
  RegisterId::register_usart6_gtpr,
  RegisterId::register_wwdg_cr,
  RegisterId::register_wwdg_cfr,
  RegisterId::register_wwdg_sr,
}};
}
}
}
}
}
}
