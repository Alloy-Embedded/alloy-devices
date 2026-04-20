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
  register_adc1_adc_isr,
  register_adc1_adc_ier,
  register_adc1_adc_cr,
  register_adc1_adc_cfgr1,
  register_adc1_adc_cfgr2,
  register_adc1_adc_smpr,
  register_adc1_adc_awd1tr,
  register_adc1_adc_awd2tr,
  register_adc1_adc_chselr,
  register_adc1_adc_awd3tr,
  register_adc1_adc_dr,
  register_adc1_adc_awd2cr,
  register_adc1_adc_awd3cr,
  register_adc1_adc_calfact,
  register_adc1_adc_ccr,
  register_dac_dac_cr,
  register_dac_dac_swtrgr,
  register_dac_dac_dhr12r1,
  register_dac_dac_dhr12l1,
  register_dac_dac_dhr8r1,
  register_dac_dac_dhr12r2,
  register_dac_dac_dhr12l2,
  register_dac_dac_dhr8r2,
  register_dac_dac_dhr12rd,
  register_dac_dac_dhr12ld,
  register_dac_dac_dhr8rd,
  register_dac_dac_dor1,
  register_dac_dac_dor2,
  register_dac_dac_sr,
  register_dac_dac_ccr,
  register_dac_dac_mcr,
  register_dac_dac_shsr1,
  register_dac_dac_shsr2,
  register_dac_dac_shhr,
  register_dac_dac_shrr,
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
  register_fdcan1_fdcan_crel,
  register_fdcan1_fdcan_endn,
  register_fdcan1_fdcan_dbtp,
  register_fdcan1_fdcan_test,
  register_fdcan1_fdcan_rwd,
  register_fdcan1_fdcan_cccr,
  register_fdcan1_fdcan_nbtp,
  register_fdcan1_fdcan_tscc,
  register_fdcan1_fdcan_tscv,
  register_fdcan1_fdcan_tocc,
  register_fdcan1_fdcan_tocv,
  register_fdcan1_fdcan_ecr,
  register_fdcan1_fdcan_psr,
  register_fdcan1_fdcan_tdcr,
  register_fdcan1_fdcan_ir,
  register_fdcan1_fdcan_ie,
  register_fdcan1_fdcan_ils,
  register_fdcan1_fdcan_ile,
  register_fdcan1_fdcan_rxgfc,
  register_fdcan1_fdcan_xidam,
  register_fdcan1_fdcan_hpms,
  register_fdcan1_fdcan_rxf0s,
  register_fdcan1_fdcan_rxf0a,
  register_fdcan1_fdcan_rxf1s,
  register_fdcan1_fdcan_rxf1a,
  register_fdcan1_fdcan_txbc,
  register_fdcan1_fdcan_txfqs,
  register_fdcan1_fdcan_txbrp,
  register_fdcan1_fdcan_txbar,
  register_fdcan1_fdcan_txbcr,
  register_fdcan1_fdcan_txbto,
  register_fdcan1_fdcan_txbcf,
  register_fdcan1_fdcan_txbtie,
  register_fdcan1_fdcan_txbcie,
  register_fdcan1_fdcan_txefs,
  register_fdcan1_fdcan_txefa,
  register_fdcan1_fdcan_ckdiv,
  register_fdcan2_fdcan_crel,
  register_fdcan2_fdcan_endn,
  register_fdcan2_fdcan_dbtp,
  register_fdcan2_fdcan_test,
  register_fdcan2_fdcan_rwd,
  register_fdcan2_fdcan_cccr,
  register_fdcan2_fdcan_nbtp,
  register_fdcan2_fdcan_tscc,
  register_fdcan2_fdcan_tscv,
  register_fdcan2_fdcan_tocc,
  register_fdcan2_fdcan_tocv,
  register_fdcan2_fdcan_ecr,
  register_fdcan2_fdcan_psr,
  register_fdcan2_fdcan_tdcr,
  register_fdcan2_fdcan_ir,
  register_fdcan2_fdcan_ie,
  register_fdcan2_fdcan_ils,
  register_fdcan2_fdcan_ile,
  register_fdcan2_fdcan_rxgfc,
  register_fdcan2_fdcan_xidam,
  register_fdcan2_fdcan_hpms,
  register_fdcan2_fdcan_rxf0s,
  register_fdcan2_fdcan_rxf0a,
  register_fdcan2_fdcan_rxf1s,
  register_fdcan2_fdcan_rxf1a,
  register_fdcan2_fdcan_txbc,
  register_fdcan2_fdcan_txfqs,
  register_fdcan2_fdcan_txbrp,
  register_fdcan2_fdcan_txbar,
  register_fdcan2_fdcan_txbcr,
  register_fdcan2_fdcan_txbto,
  register_fdcan2_fdcan_txbcf,
  register_fdcan2_fdcan_txbtie,
  register_fdcan2_fdcan_txbcie,
  register_fdcan2_fdcan_txefs,
  register_fdcan2_fdcan_txefa,
  register_fdcan2_fdcan_ckdiv,
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
  register_iwdg_iwdg_kr,
  register_iwdg_iwdg_pr,
  register_iwdg_iwdg_rlr,
  register_iwdg_iwdg_sr,
  register_iwdg_iwdg_winr,
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
  register_rcc_cr,
  register_rcc_cfgr,
  register_rcc_pllcfgr,
  register_rcc_ioprstr,
  register_rcc_ahbrstr,
  register_rcc_apbrstr1,
  register_rcc_apbrstr2,
  register_rcc_iopenr,
  register_rcc_ahbenr,
  register_rcc_apbenr1,
  register_rcc_apbenr2,
  register_rcc_ccipr,
  register_rtc_rtc_tr,
  register_rtc_rtc_dr,
  register_rtc_rtc_ssr,
  register_rtc_rtc_icsr,
  register_rtc_rtc_prer,
  register_rtc_rtc_wutr,
  register_rtc_rtc_cr,
  register_rtc_rtc_wpr,
  register_rtc_rtc_calr,
  register_rtc_rtc_shiftr,
  register_rtc_rtc_tstr,
  register_rtc_rtc_tsdr,
  register_rtc_rtc_tsssr,
  register_rtc_rtc_alrmar,
  register_rtc_rtc_alrmassr,
  register_rtc_rtc_alrmbr,
  register_rtc_rtc_alrmbssr,
  register_rtc_rtc_sr,
  register_rtc_rtc_misr,
  register_rtc_rtc_scr,
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
  register_tim1_tim1_cr1,
  register_tim1_tim1_cr2,
  register_tim1_tim1_smcr,
  register_tim1_tim1_dier,
  register_tim1_tim1_sr,
  register_tim1_tim1_egr,
  register_tim1_ccmr1_input,
  register_tim1_ccmr2_input,
  register_tim1_tim1_ccer,
  register_tim1_tim1_cnt,
  register_tim1_tim1_psc,
  register_tim1_tim1_arr,
  register_tim1_tim1_rcr,
  register_tim1_tim1_ccr1,
  register_tim1_tim1_ccr2,
  register_tim1_tim1_ccr3,
  register_tim1_tim1_ccr4,
  register_tim1_tim1_bdtr,
  register_tim1_tim1_dcr,
  register_tim1_tim1_dmar,
  register_tim1_tim1_or1,
  register_tim1_ccmr3_output,
  register_tim1_tim1_ccr5,
  register_tim1_tim1_ccr6,
  register_tim1_tim1_af1,
  register_tim1_tim1_af2,
  register_tim1_tim1_tisel,
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
  register_tim14_tisel,
  register_tim15_cr1,
  register_tim15_cr2,
  register_tim15_smcr,
  register_tim15_dier,
  register_tim15_sr,
  register_tim15_egr,
  register_tim15_ccmr1_input,
  register_tim15_ccer,
  register_tim15_cnt,
  register_tim15_psc,
  register_tim15_arr,
  register_tim15_rcr,
  register_tim15_ccr1,
  register_tim15_ccr2,
  register_tim15_bdtr,
  register_tim15_dcr,
  register_tim15_dmar,
  register_tim15_af1,
  register_tim15_tisel,
  register_tim16_cr1,
  register_tim16_cr2,
  register_tim16_dier,
  register_tim16_sr,
  register_tim16_egr,
  register_tim16_ccmr1_input,
  register_tim16_ccer,
  register_tim16_cnt,
  register_tim16_psc,
  register_tim16_arr,
  register_tim16_rcr,
  register_tim16_ccr1,
  register_tim16_bdtr,
  register_tim16_dcr,
  register_tim16_dmar,
  register_tim16_af1,
  register_tim16_tisel,
  register_tim17_cr1,
  register_tim17_cr2,
  register_tim17_dier,
  register_tim17_sr,
  register_tim17_egr,
  register_tim17_ccmr1_input,
  register_tim17_ccer,
  register_tim17_cnt,
  register_tim17_psc,
  register_tim17_arr,
  register_tim17_rcr,
  register_tim17_ccr1,
  register_tim17_bdtr,
  register_tim17_dcr,
  register_tim17_dmar,
  register_tim17_af1,
  register_tim17_tisel,
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
  register_tim2_or1,
  register_tim2_af1,
  register_tim2_tisel,
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
  register_tim3_or1,
  register_tim3_af1,
  register_tim3_tisel,
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
  register_tim4_or1,
  register_tim4_af1,
  register_tim4_tisel,
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
  register_usb_usb_chep0r,
  register_usb_usb_chep1r,
  register_usb_usb_chep2r,
  register_usb_usb_chep3r,
  register_usb_usb_chep4r,
  register_usb_usb_chep5r,
  register_usb_usb_chep6r,
  register_usb_usb_chep7r,
  register_usb_usb_cntr,
  register_usb_usb_istr,
  register_usb_usb_fnr,
  register_usb_usb_daddr,
  register_usb_usb_lpmcsr,
  register_usb_usb_bcdr,
  register_wwdg_wwdg_cr,
  register_wwdg_wwdg_cfr,
  register_wwdg_wwdg_sr,
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
struct RegisterTraits<RegisterId::register_adc1_adc_isr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_ier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_cfgr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_cfgr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_smpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_awd1tr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_awd2tr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_chselr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_awd3tr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_awd2cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 160u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_awd3cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 164u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_calfact> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 180u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_adc1_adc_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012400u;
  static constexpr std::uint32_t kOffsetBytes = 776u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_swtrgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dhr12r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dhr12l1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dhr8r1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dhr12r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dhr12l2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dhr8r2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dhr12rd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dhr12ld> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dhr8rd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dor1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_dor2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_ccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_mcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_shsr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_shsr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_shhr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_dac_dac_shrr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40007400u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
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
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_crel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_endn> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_dbtp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_test> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_rwd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_cccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_nbtp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_tscc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_tscv> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_tocc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_tocv> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_ecr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_tdcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_ir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_ie> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_ils> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_ile> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_rxgfc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_xidam> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_hpms> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_rxf0s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_rxf0a> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_rxf1s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_rxf1a> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 156u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txbc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 192u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txfqs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txbrp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 200u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txbar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 204u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txbcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 208u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txbto> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 212u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txbcf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 216u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txbtie> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 220u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txbcie> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 224u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txefs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_txefa> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan1_fdcan_ckdiv> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006400u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_crel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_endn> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_dbtp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_test> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_rwd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_cccr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_nbtp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_tscc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_tscv> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_tocc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_tocv> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_ecr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_psr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_tdcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_ir> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_ie> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_ils> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_ile> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_rxgfc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_xidam> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_hpms> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_rxf0s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_rxf0a> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_rxf1s> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_rxf1a> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 156u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txbc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 192u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txfqs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txbrp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 200u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txbar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 204u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txbcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 208u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txbto> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 212u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txbcf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 216u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txbtie> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 220u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txbcie> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 224u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txefs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_txefa> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_fdcan2_fdcan_ckdiv> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40006800u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_flash_acr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40022000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
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
struct RegisterTraits<RegisterId::register_iwdg_iwdg_kr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_iwdg_iwdg_pr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_iwdg_iwdg_rlr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_iwdg_iwdg_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_iwdg_iwdg_winr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40003000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
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
struct RegisterTraits<RegisterId::register_rcc_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_cfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rcc_pllcfgr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40021000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
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
struct RegisterTraits<RegisterId::register_rtc_rtc_tr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_dr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_ssr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_icsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_prer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_wutr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_wpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_calr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_shiftr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_tstr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_tsdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_tsssr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_alrmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_alrmassr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_alrmbr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_alrmbssr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_misr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_scr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002800u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
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
struct RegisterTraits<RegisterId::register_tim1_tim1_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_rcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_bdtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_or1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_ccmr3_output> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_ccr5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_ccr6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_af1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_af2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim1_tim1_tisel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40012C00u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim14_tisel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_rcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_bdtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_af1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim15_tisel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_rcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_bdtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_af1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim16_tisel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014400u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_rcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_bdtr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_af1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim17_tisel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40014800u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_or1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_af1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim2_tisel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_or1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_af1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim3_tisel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000400u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_smcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccmr1_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccmr2_input> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccer> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccr3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_ccr4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_dcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_dmar> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_or1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_af1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim4_tisel> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40000800u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim6_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_cr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_cr2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_dier> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_egr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_cnt> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_psc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_tim7_arr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40001400u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
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

template<>
struct RegisterTraits<RegisterId::register_usb_usb_chep0r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_chep1r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_chep2r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_chep3r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_chep4r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_chep5r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_chep6r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_chep7r> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_cntr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_istr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_fnr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_daddr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_lpmcsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_bcdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40005C00u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_wwdg_wwdg_cr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002C00u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_wwdg_wwdg_cfr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002C00u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

template<>
struct RegisterTraits<RegisterId::register_wwdg_wwdg_sr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40002C00u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
  static constexpr int kSizeBits = 32;
};

inline constexpr std::array<RegisterId, 594> kRegisters = {{
  RegisterId::register_adc1_adc_isr,
  RegisterId::register_adc1_adc_ier,
  RegisterId::register_adc1_adc_cr,
  RegisterId::register_adc1_adc_cfgr1,
  RegisterId::register_adc1_adc_cfgr2,
  RegisterId::register_adc1_adc_smpr,
  RegisterId::register_adc1_adc_awd1tr,
  RegisterId::register_adc1_adc_awd2tr,
  RegisterId::register_adc1_adc_chselr,
  RegisterId::register_adc1_adc_awd3tr,
  RegisterId::register_adc1_adc_dr,
  RegisterId::register_adc1_adc_awd2cr,
  RegisterId::register_adc1_adc_awd3cr,
  RegisterId::register_adc1_adc_calfact,
  RegisterId::register_adc1_adc_ccr,
  RegisterId::register_dac_dac_cr,
  RegisterId::register_dac_dac_swtrgr,
  RegisterId::register_dac_dac_dhr12r1,
  RegisterId::register_dac_dac_dhr12l1,
  RegisterId::register_dac_dac_dhr8r1,
  RegisterId::register_dac_dac_dhr12r2,
  RegisterId::register_dac_dac_dhr12l2,
  RegisterId::register_dac_dac_dhr8r2,
  RegisterId::register_dac_dac_dhr12rd,
  RegisterId::register_dac_dac_dhr12ld,
  RegisterId::register_dac_dac_dhr8rd,
  RegisterId::register_dac_dac_dor1,
  RegisterId::register_dac_dac_dor2,
  RegisterId::register_dac_dac_sr,
  RegisterId::register_dac_dac_ccr,
  RegisterId::register_dac_dac_mcr,
  RegisterId::register_dac_dac_shsr1,
  RegisterId::register_dac_dac_shsr2,
  RegisterId::register_dac_dac_shhr,
  RegisterId::register_dac_dac_shrr,
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
  RegisterId::register_fdcan1_fdcan_crel,
  RegisterId::register_fdcan1_fdcan_endn,
  RegisterId::register_fdcan1_fdcan_dbtp,
  RegisterId::register_fdcan1_fdcan_test,
  RegisterId::register_fdcan1_fdcan_rwd,
  RegisterId::register_fdcan1_fdcan_cccr,
  RegisterId::register_fdcan1_fdcan_nbtp,
  RegisterId::register_fdcan1_fdcan_tscc,
  RegisterId::register_fdcan1_fdcan_tscv,
  RegisterId::register_fdcan1_fdcan_tocc,
  RegisterId::register_fdcan1_fdcan_tocv,
  RegisterId::register_fdcan1_fdcan_ecr,
  RegisterId::register_fdcan1_fdcan_psr,
  RegisterId::register_fdcan1_fdcan_tdcr,
  RegisterId::register_fdcan1_fdcan_ir,
  RegisterId::register_fdcan1_fdcan_ie,
  RegisterId::register_fdcan1_fdcan_ils,
  RegisterId::register_fdcan1_fdcan_ile,
  RegisterId::register_fdcan1_fdcan_rxgfc,
  RegisterId::register_fdcan1_fdcan_xidam,
  RegisterId::register_fdcan1_fdcan_hpms,
  RegisterId::register_fdcan1_fdcan_rxf0s,
  RegisterId::register_fdcan1_fdcan_rxf0a,
  RegisterId::register_fdcan1_fdcan_rxf1s,
  RegisterId::register_fdcan1_fdcan_rxf1a,
  RegisterId::register_fdcan1_fdcan_txbc,
  RegisterId::register_fdcan1_fdcan_txfqs,
  RegisterId::register_fdcan1_fdcan_txbrp,
  RegisterId::register_fdcan1_fdcan_txbar,
  RegisterId::register_fdcan1_fdcan_txbcr,
  RegisterId::register_fdcan1_fdcan_txbto,
  RegisterId::register_fdcan1_fdcan_txbcf,
  RegisterId::register_fdcan1_fdcan_txbtie,
  RegisterId::register_fdcan1_fdcan_txbcie,
  RegisterId::register_fdcan1_fdcan_txefs,
  RegisterId::register_fdcan1_fdcan_txefa,
  RegisterId::register_fdcan1_fdcan_ckdiv,
  RegisterId::register_fdcan2_fdcan_crel,
  RegisterId::register_fdcan2_fdcan_endn,
  RegisterId::register_fdcan2_fdcan_dbtp,
  RegisterId::register_fdcan2_fdcan_test,
  RegisterId::register_fdcan2_fdcan_rwd,
  RegisterId::register_fdcan2_fdcan_cccr,
  RegisterId::register_fdcan2_fdcan_nbtp,
  RegisterId::register_fdcan2_fdcan_tscc,
  RegisterId::register_fdcan2_fdcan_tscv,
  RegisterId::register_fdcan2_fdcan_tocc,
  RegisterId::register_fdcan2_fdcan_tocv,
  RegisterId::register_fdcan2_fdcan_ecr,
  RegisterId::register_fdcan2_fdcan_psr,
  RegisterId::register_fdcan2_fdcan_tdcr,
  RegisterId::register_fdcan2_fdcan_ir,
  RegisterId::register_fdcan2_fdcan_ie,
  RegisterId::register_fdcan2_fdcan_ils,
  RegisterId::register_fdcan2_fdcan_ile,
  RegisterId::register_fdcan2_fdcan_rxgfc,
  RegisterId::register_fdcan2_fdcan_xidam,
  RegisterId::register_fdcan2_fdcan_hpms,
  RegisterId::register_fdcan2_fdcan_rxf0s,
  RegisterId::register_fdcan2_fdcan_rxf0a,
  RegisterId::register_fdcan2_fdcan_rxf1s,
  RegisterId::register_fdcan2_fdcan_rxf1a,
  RegisterId::register_fdcan2_fdcan_txbc,
  RegisterId::register_fdcan2_fdcan_txfqs,
  RegisterId::register_fdcan2_fdcan_txbrp,
  RegisterId::register_fdcan2_fdcan_txbar,
  RegisterId::register_fdcan2_fdcan_txbcr,
  RegisterId::register_fdcan2_fdcan_txbto,
  RegisterId::register_fdcan2_fdcan_txbcf,
  RegisterId::register_fdcan2_fdcan_txbtie,
  RegisterId::register_fdcan2_fdcan_txbcie,
  RegisterId::register_fdcan2_fdcan_txefs,
  RegisterId::register_fdcan2_fdcan_txefa,
  RegisterId::register_fdcan2_fdcan_ckdiv,
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
  RegisterId::register_iwdg_iwdg_kr,
  RegisterId::register_iwdg_iwdg_pr,
  RegisterId::register_iwdg_iwdg_rlr,
  RegisterId::register_iwdg_iwdg_sr,
  RegisterId::register_iwdg_iwdg_winr,
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
  RegisterId::register_rcc_cr,
  RegisterId::register_rcc_cfgr,
  RegisterId::register_rcc_pllcfgr,
  RegisterId::register_rcc_ioprstr,
  RegisterId::register_rcc_ahbrstr,
  RegisterId::register_rcc_apbrstr1,
  RegisterId::register_rcc_apbrstr2,
  RegisterId::register_rcc_iopenr,
  RegisterId::register_rcc_ahbenr,
  RegisterId::register_rcc_apbenr1,
  RegisterId::register_rcc_apbenr2,
  RegisterId::register_rcc_ccipr,
  RegisterId::register_rtc_rtc_tr,
  RegisterId::register_rtc_rtc_dr,
  RegisterId::register_rtc_rtc_ssr,
  RegisterId::register_rtc_rtc_icsr,
  RegisterId::register_rtc_rtc_prer,
  RegisterId::register_rtc_rtc_wutr,
  RegisterId::register_rtc_rtc_cr,
  RegisterId::register_rtc_rtc_wpr,
  RegisterId::register_rtc_rtc_calr,
  RegisterId::register_rtc_rtc_shiftr,
  RegisterId::register_rtc_rtc_tstr,
  RegisterId::register_rtc_rtc_tsdr,
  RegisterId::register_rtc_rtc_tsssr,
  RegisterId::register_rtc_rtc_alrmar,
  RegisterId::register_rtc_rtc_alrmassr,
  RegisterId::register_rtc_rtc_alrmbr,
  RegisterId::register_rtc_rtc_alrmbssr,
  RegisterId::register_rtc_rtc_sr,
  RegisterId::register_rtc_rtc_misr,
  RegisterId::register_rtc_rtc_scr,
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
  RegisterId::register_tim1_tim1_cr1,
  RegisterId::register_tim1_tim1_cr2,
  RegisterId::register_tim1_tim1_smcr,
  RegisterId::register_tim1_tim1_dier,
  RegisterId::register_tim1_tim1_sr,
  RegisterId::register_tim1_tim1_egr,
  RegisterId::register_tim1_ccmr1_input,
  RegisterId::register_tim1_ccmr2_input,
  RegisterId::register_tim1_tim1_ccer,
  RegisterId::register_tim1_tim1_cnt,
  RegisterId::register_tim1_tim1_psc,
  RegisterId::register_tim1_tim1_arr,
  RegisterId::register_tim1_tim1_rcr,
  RegisterId::register_tim1_tim1_ccr1,
  RegisterId::register_tim1_tim1_ccr2,
  RegisterId::register_tim1_tim1_ccr3,
  RegisterId::register_tim1_tim1_ccr4,
  RegisterId::register_tim1_tim1_bdtr,
  RegisterId::register_tim1_tim1_dcr,
  RegisterId::register_tim1_tim1_dmar,
  RegisterId::register_tim1_tim1_or1,
  RegisterId::register_tim1_ccmr3_output,
  RegisterId::register_tim1_tim1_ccr5,
  RegisterId::register_tim1_tim1_ccr6,
  RegisterId::register_tim1_tim1_af1,
  RegisterId::register_tim1_tim1_af2,
  RegisterId::register_tim1_tim1_tisel,
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
  RegisterId::register_tim14_tisel,
  RegisterId::register_tim15_cr1,
  RegisterId::register_tim15_cr2,
  RegisterId::register_tim15_smcr,
  RegisterId::register_tim15_dier,
  RegisterId::register_tim15_sr,
  RegisterId::register_tim15_egr,
  RegisterId::register_tim15_ccmr1_input,
  RegisterId::register_tim15_ccer,
  RegisterId::register_tim15_cnt,
  RegisterId::register_tim15_psc,
  RegisterId::register_tim15_arr,
  RegisterId::register_tim15_rcr,
  RegisterId::register_tim15_ccr1,
  RegisterId::register_tim15_ccr2,
  RegisterId::register_tim15_bdtr,
  RegisterId::register_tim15_dcr,
  RegisterId::register_tim15_dmar,
  RegisterId::register_tim15_af1,
  RegisterId::register_tim15_tisel,
  RegisterId::register_tim16_cr1,
  RegisterId::register_tim16_cr2,
  RegisterId::register_tim16_dier,
  RegisterId::register_tim16_sr,
  RegisterId::register_tim16_egr,
  RegisterId::register_tim16_ccmr1_input,
  RegisterId::register_tim16_ccer,
  RegisterId::register_tim16_cnt,
  RegisterId::register_tim16_psc,
  RegisterId::register_tim16_arr,
  RegisterId::register_tim16_rcr,
  RegisterId::register_tim16_ccr1,
  RegisterId::register_tim16_bdtr,
  RegisterId::register_tim16_dcr,
  RegisterId::register_tim16_dmar,
  RegisterId::register_tim16_af1,
  RegisterId::register_tim16_tisel,
  RegisterId::register_tim17_cr1,
  RegisterId::register_tim17_cr2,
  RegisterId::register_tim17_dier,
  RegisterId::register_tim17_sr,
  RegisterId::register_tim17_egr,
  RegisterId::register_tim17_ccmr1_input,
  RegisterId::register_tim17_ccer,
  RegisterId::register_tim17_cnt,
  RegisterId::register_tim17_psc,
  RegisterId::register_tim17_arr,
  RegisterId::register_tim17_rcr,
  RegisterId::register_tim17_ccr1,
  RegisterId::register_tim17_bdtr,
  RegisterId::register_tim17_dcr,
  RegisterId::register_tim17_dmar,
  RegisterId::register_tim17_af1,
  RegisterId::register_tim17_tisel,
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
  RegisterId::register_tim2_or1,
  RegisterId::register_tim2_af1,
  RegisterId::register_tim2_tisel,
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
  RegisterId::register_tim3_or1,
  RegisterId::register_tim3_af1,
  RegisterId::register_tim3_tisel,
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
  RegisterId::register_tim4_or1,
  RegisterId::register_tim4_af1,
  RegisterId::register_tim4_tisel,
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
  RegisterId::register_usb_usb_chep0r,
  RegisterId::register_usb_usb_chep1r,
  RegisterId::register_usb_usb_chep2r,
  RegisterId::register_usb_usb_chep3r,
  RegisterId::register_usb_usb_chep4r,
  RegisterId::register_usb_usb_chep5r,
  RegisterId::register_usb_usb_chep6r,
  RegisterId::register_usb_usb_chep7r,
  RegisterId::register_usb_usb_cntr,
  RegisterId::register_usb_usb_istr,
  RegisterId::register_usb_usb_fnr,
  RegisterId::register_usb_usb_daddr,
  RegisterId::register_usb_usb_lpmcsr,
  RegisterId::register_usb_usb_bcdr,
  RegisterId::register_wwdg_wwdg_cr,
  RegisterId::register_wwdg_wwdg_cfr,
  RegisterId::register_wwdg_wwdg_sr,
}};
}
}
}
}
}
}
